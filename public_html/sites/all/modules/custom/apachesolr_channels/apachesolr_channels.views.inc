<?php

/**
 * Allow for select/autocomplete filters for solr fields
 */

/**
 * Implementation of hook_views_data_alter().
 */
function apachesolr_channels_views_data_alter(&$data) {
  foreach (apachesolr_load_all_environments() as $env_id => $environment) {
    $name = $environment['name'];
    $apachesolr_base_table = 'apachesolr__' . $env_id;
    $fields = field_info_fields();

    // Get the list of the fields in index directly from Solr.
    try {
      $solr = apachesolr_get_solr($env_id);
      $solr_fields = $solr->getFields(0);
    }
    catch (Exception $e) {
      $solr_fields = array();
      watchdog('Apache Solr Channels', nl2br(check_plain($e->getMessage())), NULL, WATCHDOG_WARNING);
    }

    foreach ($solr_fields as $solr_field_name => $solr_field) {
      $data_field = &$data[$apachesolr_base_table][$solr_field_name];

      switch (TRUE) {
        case 'ss_language' === $solr_field_name:
          $data_field['field']['handler'] = 'apachesolr_channels_views_handler_field_language';
          break;
        case 'site' === $solr_field_name:
          $data_field['field']['handler'] = 'apachesolr_channels_views_handler_field_site';
          break;
        case 0 === strpos($solr_field_name, 'sm_thumb_'):
          $data_field['field']['handler'] = 'apachesolr_channels_html_field';
          break;
        case 0 === strpos($solr_field_name, 'im_shared_tax_'):
          $data_field['field']['handler'] = 'shared_term_views_handler_field';
          $data_field['filter']['handler'] = 'shared_term_views_handler_filter';
          break;
        case 0 === strpos($solr_field_name, 'sm_share_site_'):
          $data_field['filter']['handler'] = 'this_site_views_handler_filter';
          break;
        case 0 === strpos($solr_field_name, 'ds_') || 0 === strpos($solr_field_name, 'dm_'):
          $data_field['field']['handler'] = 'apachesolr_channels_views_handler_field_date';
          break;
        case 0 === strpos($solr_field_name, 'im_field_'):
          $field_name = substr($solr_field_name, 3);
          if (isset($fields[$field_name]) && 'taxonomy_term_reference' === $fields[$field_name]['type']
                  && isset($fields[$field_name]['settings']['allowed_values'][0]['vocabulary'])) {
            $data[$apachesolr_base_table][$solr_field_name . '_alt'] = array(
              'title' => "Local term in $field_name",
              'help' => "Show local term IDs in $field_name. Don't use this for multi-site sarch.",
              'real field' => $solr_field_name,
              'filter' => array(
                'handler' => 'local_term_views_handler_filter',
                'vocabulary' => $fields[$field_name]['settings']['allowed_values'][0]['vocabulary'],
              ),
            );
          }
          break;
      }
    }
    // Created from site - override of hash filter
    if (isset($data[$apachesolr_base_table]['hash']['filter']['handler'])) {
      $filter_handler = 'owner_site_views_handler_filter';
      $data[$apachesolr_base_table]['hash']['filter']['handler'] = $filter_handler;
    }
    // Add another bundle filter to handle multiple bundles filtration
    $data[$apachesolr_base_table]['bundle_multiple'] = array(
      'title' => 'Multiple bundles filter',
      'help' => 'Select bundles from configurable entity type.',
      'real field' => 'bundle',
      'filter' => array(
        'handler' => 'apachesolr_channels_bundle_filter',
      ),
    );
    $data[$apachesolr_base_table]['local_content'] = array(
      'title' => 'Local content',
      'help' => 'Show only local results.',
      'real field' => 'hash',
      'filter' => array(
        'handler' => 'this_site_views_handler_filter',
      ),
    );
    // Rewrite URLs - to link to local context page
    if (isset($data[$apachesolr_base_table]['url']['field']['handler'])) {
      $field_handler = 'apachesolr_channels_url_field';
      $data[$apachesolr_base_table]['url']['field']['handler'] = $field_handler;
    }
  }
}

/**
 * Implementation of hook_views_plugins_alter().
 */
function apachesolr_channels_views_plugins_alter(&$plugins) {
  // Override the panel_pane display handler
  $plugins['display']['panel_pane']['handler'] = 'apachesolr_channels_plugin_display_panel_pane';
  $plugins['display']['panel_pane']['path'] = drupal_get_path('module', 'apachesolr_channels') . '/plugins';
  $plugins['display']['panel_pane']['module'] = 'apachesolr_channels';
  $plugins['display']['panel_pane']['file'] = 'apachesolr_channels_plugin_display_panel_pane.inc';
}
