<?php

class services_client_ui extends ctools_export_ui {
  /**
   * Page callback for the auth page.
   */
  function mapping_page($js, $input, $item) {
    drupal_set_title($this->get_page_title('edit', $item));
    return drupal_get_form('services_client_plugin_config', 'mapping', $item);
  }

  /**
   * Page callback for the server page.
   */
  function condition_page($js, $input, $item) {
    drupal_set_title($this->get_page_title('edit', $item));
    return drupal_get_form('services_client_plugin_config', 'condition', $item);
  }

  /**
   * Provide a list of sort options.
   *
   * Override this if you wish to provide more or change how these work.
   * The actual handling of the sorting will happen in build_row().
   */
  function list_sort_options() {
    if (!empty($this->plugin['export']['title'])) {
      $options = array(
        'disabled' => t('Enabled, title'),
        $this->plugin['export']['title'] => t('Title'),
      );
    }
    else {
      $options = array(
        'disabled' => t('Enabled, name'),
      );
    }

    $options += array(
      'name' => t('Name'),
      'storage' => t('Storage'),
      'connection' => t('Connection'),
    );

    return $options;
  }

  /**
   * Build a row based on the item.
   *
   * By default all of the rows are placed into a table by the render
   * method, so this is building up a row suitable for theme('table').
   * This doesn't have to be true if you override both.
   */
  function list_build_row($item, &$form_state, $operations) {
    // Set up sorting
    $name = $item->{$this->plugin['export']['key']};
    $schema = ctools_export_get_schema($this->plugin['schema']);

    // Note: $item->{$schema['export']['export type string']} should have already been set up by export.inc so
    // we can use it safely.
    switch ($form_state['values']['order']) {
      case 'disabled':
        $this->sorts[$name] = empty($item->disabled) . $name;
        break;
      case 'title':
        $this->sorts[$name] = $item->{$this->plugin['export']['title']};
        break;
      case 'name':
        $this->sorts[$name] = $name;
        break;
      case 'connection':
        $this->sorts[$name] = $item->conn_name;
        break;
      case 'storage':
        $this->sorts[$name] = $item->{$schema['export']['export type string']} . $name;
        break;
    }

    $this->rows[$name]['data'] = array();
    $this->rows[$name]['class'] = !empty($item->disabled) ? array('ctools-export-ui-disabled') : array('ctools-export-ui-enabled');

    // If we have an admin title, make it the first row.
    if (!empty($this->plugin['export']['title'])) {
      $this->rows[$name]['data'][] = array('data' => check_plain($item->{$this->plugin['export']['title']}), 'class' => array('ctools-export-ui-title'));
    }
    // Add a row for the connection name
    $this->rows[$name]['data'][] = array('data' => check_plain($item->conn_name), 'class' => array('ctools-export-ui-connection'));
    $this->rows[$name]['data'][] = array('data' => check_plain($name), 'class' => array('ctools-export-ui-name'));
    $this->rows[$name]['data'][] = array('data' => check_plain($item->{$schema['export']['export type string']}), 'class' => array('ctools-export-ui-storage'));

    $ops = theme('links', array('links' => $operations, 'attributes' => array('class' => array('links', 'inline'))));

    $this->rows[$name]['data'][] = array('data' => $ops, 'class' => array('ctools-export-ui-operations'));

    // Add an automatic mouseover of the description if one exists.
    if (!empty($this->plugin['export']['admin_description'])) {
      $this->rows[$name]['title'] = $item->{$this->plugin['export']['admin_description']};
    }
  }

  /**
   * Provide the table header.
   *
   * If you've added columns via list_build_row() but are still using a
   * table, override this method to set up the table header.
   */
  function list_table_header() {
    $header = array();
    if (!empty($this->plugin['export']['title'])) {
      $header[] = array('data' => t('Name'), 'class' => array('ctools-export-ui-name'));
    }

    $header[] = array('data' => t('Connection'), 'class' => array('ctools-export-ui-connection'));
    $header[] = array('data' => t('Title'), 'class' => array('ctools-export-ui-title'));
    $header[] = array('data' => t('Storage'), 'class' => array('ctools-export-ui-storage'));
    $header[] = array('data' => t('Operations'), 'class' => array('ctools-export-ui-operations'));

    return $header;
  }

}

/**
 * Plugin configuration form
 */
function services_client_plugin_config($form, &$form_state, $type, $item) {
  // Get plugin name and configuration
  $name = $item->config[$type]['plugin'];
  $config = $item->config[$type]['config'];

  // Get new plugin
  $plugin = services_client_get_plugin($type, $name, $item, $config);

  // Run config form function
  $plugin->configForm($form, $form_state);

  $form_state += array(
    'type' => $type,
    'item' => $item,
    'plugin' => $plugin,
    'config' => $config
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save')
  );

  return $form;
}

/**
 * Submit handler for the plugin config form
 *
 * @param array $form
 * @param array $form_state
 */
function services_client_plugin_config_submit($form, &$form_state) {
  $plugin = $form_state['plugin'];

  $plugin->configFormSubmit($form, $form_state);

  $item = $form_state['item'];
  $item->config[$form_state['type']]['config'] = $form_state['config'];

  $result = ctools_export_crud_save('services_client_connection_hook', $item);

  if ($result) {
    drupal_set_message(t('Configuration has been saved.'));
  }
}
