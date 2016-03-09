<?php

/**
 * @file
 * Administration part of Apachesolr channels module
 */

/**
 * Form callback for sites and channels filters.
 */
function site_content_sharing_filters($form, $form_state) {
  $form = array();

  // Global sharing filters - Channels
  $voc = taxonomy_vocabulary_machine_name_load('channels');
  if (!empty($voc->vid)) {
    // Found channels vocabulary
    $channels = taxonomy_get_tree($voc->vid);
    $options = _shared_terms_build_options($channels, TRUE);
    $form['site_content_sharing_channels'] = array(
      '#type' => 'select',
      '#multiple' => TRUE,
      '#title' => t('Site sharing filter - Channels'),
      '#description' => t('Select the channels that the site can choose to share content to.'),
      '#options' => $options,
      '#default_value' => variable_get('site_content_sharing_channels', array()),
    );
  }

  // Global sharing filters - Sites
  $options = apachesolr_multisitesearch_map_hash();
  $form['site_content_sharing_sites'] = array(
    '#type' => 'select',
    '#multiple' => TRUE,
    '#title' => t('Site sharing filter - Sites'),
    '#description' => t('Select the sites that the site can choose to share content to.'),
    '#options' => $options,
    '#default_value' => variable_get('site_content_sharing_sites', array()),
  );

  return system_settings_form($form);
}

/**
 * Form callback for sites and channels filters.
 */
function site_content_sharing_image_styles($form, $form_state) {
  $form = array();

  // Image styles to index.
  $options = array();
  foreach (image_styles() as $style) {
    $options[$style['name']] = $style['label'];
  }
  $form['apachesolr_channels_index_image_styles'] = array(
    '#type' => 'checkboxes',
    '#multiple' => TRUE,
    '#title' => t('Index image styles'),
    '#description' => t('Select the image styles to be indexed in Solr.'),
    '#options' => $options,
    '#default_value' => variable_get('apachesolr_channels_index_image_styles', array()),
  );

  return system_settings_form($form);
}

/**
 * Form callback for Channels registry report page.
 */
function site_registered_channels_report() {
  $query = db_select('channels_registry', 'cr');
  $query->innerJoin('kk_client_request_term', 'xt', 'xt.server_tid = cr.cid');
  $query->innerJoin('taxonomy_term_data', 't', 't.tid = xt.client_tid');
  $query->fields('cr', array('cid'));
  $query->fields('t', array('tid'));
  $query->range(0, 50);
  $result = $query->execute();

  $tids = array();
  $rows = array();
  foreach ($result as $row) {
    $tids[$row->cid] = $row->tid;
  }

  $terms = taxonomy_term_load_multiple($tids);
  foreach ($terms as $term) {
    $display = array();
    $display['term'] = $term->name;
    $rows[] = $display;
  }

  $headers = array(t('Channels'));
  return theme('table', array('header' => $headers, 'rows' => $rows, 'empty' => t('No Channels available.')));
}
