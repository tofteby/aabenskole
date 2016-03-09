<?php

/**
 * @file
 * Administration pages for configuring services client module.
 */

/**
 * Settings page callback
 */
function services_client_settings() {
  $form = array();

  $form['services_client_id'] = array(
    '#type' => 'textfield',
    '#title' => t('ID'),
    '#description' => t('Services client id of current site'),
    '#default_value' => variable_get('services_client_id', drupal_get_token('services_client')),
    '#size' => "70",
  );

  $form['services_client_use_queue'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use Queue'),
    '#default_value' => variable_get('services_client_use_queue', FALSE),
    '#description' => t('Use queue for processing new objects coming from remote sites.'),
  );

  $form['services_client_process_queue_cron'] = array(
    '#type' => 'checkbox',
    '#title' => t('Process Queue items in cron'),
    '#default_value' => variable_get('services_client_process_queue_cron', FALSE),
    '#description' => t('Process queue items in cron'),
    '#states' => array(
      'visible' => array(
        ':input[name="services_client_use_queue"]' => array('checked' => TRUE),
      )
    ),
  );

  $form['services_client_exclude_users'] = array(
    '#type' => 'textarea',
    '#title' => t('Exclude users'),
    '#default_value' => variable_get('services_client_exclude_users', '1'),
    '#description' => t('Enter which users should not be synced, comma separated i.e. 1,3,475,9949')
  );

  $form['additional_settings'] = array(
    '#type' => 'vertical_tabs',
    '#weight' => 98,
  );

  $form['#pre_render'][] = 'vertical_tabs_form_pre_render';

  return system_settings_form($form);
}

/**
 * List the all connections and hooks
 */
function services_client_admin_list() {
  // Load all hooks
  $hooks = services_client_get_client_hooks_list(array('num' => 'all'));
  $groupped = array();
  foreach ($hooks as $hook) {
    $groupped[$hook->conn_name][] = $hook;
  }

  // Load all connections
  $connections = services_client_connection_load_all();

  return array(
    '#theme' => 'services_client_admin_list',
    '#connections' => $connections,
    '#groupped_hooks' => $groupped,
  );
}
