<?php

/**
 * @file
 * Holds the administration forms of the module.
 */

/**
 * Returns the KK Client Request administration form.
 *
 * @param array $form
 *   The form array.
 * @param array $form_state
 *   The form state array.
 */
function kk_client_request_admin_form($form, &$form_state) {
  $form_state['step'] = (!isset($form_state['step'])) ? 'pick_connection' : $form_state['step'];
  $form = array();

  switch ($form_state['step']) {
    case 'pick_connection':
      return kk_client_request_admin_form_pick_connection($form, $form_state);

    break;

    case 'new_vocabularies':
      return kk_client_request_admin_form_new_vocabularies($form, $form_state);

    break;

    case 'existing_vocabularies':
      return kk_client_request_admin_form_existing_vocabularies($form, $form_state);

    break;

    default:
      return kk_client_request_admin_form_pick_connection($form, $form_state);

    break;
  }

  return $form;
}

/**
 * Step 1 - Pick connection from the administraion multi-step form.
 *
 * @param array $form
 *   The form array.
 * @param array $form_state
 *   The form state array.
 */
function kk_client_request_admin_form_pick_connection($form, &$form_state) {
  $values = isset($form_state['multistep_values']['pick_connection']) ? $form_state['multistep_values']['pick_connection'] : array();
  $connection_names = kk_client_request_get_client_connections();

  if (isset($connection_names) && !empty($connection_names)) {
    $form['step_1_title'] = array(
      '#type' => 'item',
      '#title' => t('1. Pick connection'),
    );

    $form['select_connection'] = array(
      '#type' => 'select',
      '#title' => t('Select client connection.'),
      '#options' => $connection_names,
      '#default_value' => isset($values['select_connection']) ? $values['select_connection'] : NULL,
    );

    $form['next'] = array(
      '#type' => 'submit',
      '#name' => 'Next',
      '#value' => t('Next'),
    );
  }
  else {
    drupal_set_message(t('Please go to !services_client and configure at least one client.', array('!services_client' => l(t('Service Client'), 'admin/structure/services_client'))), 'error', FALSE);
  }

  return $form;
}

/**
 * Step 2 - Select new vocabularies to be created .
 *
 * @param array $form
 *   The form array.
 * @param array $form_state
 *   The form state array.
 */
function kk_client_request_admin_form_new_vocabularies($form, &$form_state) {
  $values = isset($form_state['multistep_values']['new_vocabularies']) ? $form_state['multistep_values']['new_vocabularies'] : array();
  $client_obj = kk_client_request_get_client_object($form_state['multistep_values']['pick_connection']['select_connection']);

  if (!empty($client_obj)) {
    $server_vocabularies = kk_client_request_get_all_vocabularies($client_obj);
    if ($server_vocabularies !== FALSE) {
      $vocabulary_name_list = kk_client_request_get_list_vocabularies($client_obj);
      if ($vocabulary_name_list === FALSE) {
        drupal_set_message(t('There was a problem with the connection to the server. Please, check the reports for more details.'), 'error', FALSE);
      }
      else {
        $form['step_2_title'] = array(
          '#type' => 'item',
          '#title' => t('2. Create new vocabularies.'),
        );

        $form['client_obj'] = array(
          '#type' => 'value',
          '#value' => array($client_obj),
        );

        if (!empty($vocabulary_name_list)) {
          $form['vocabularies_fieldset'] = array(
            '#type' => 'fieldset',
            '#tree' => TRUE,
          );

          foreach ($vocabulary_name_list as $voc_id => $name) {
            $form['vocabularies_fieldset']['voc_' . $voc_id]['enable'] = array(
              '#type' => 'checkbox',
              '#title' => t('Create vocabulary @name.', array('@name' => $name)),
              '#default_value' => isset($values['voc_' . $voc_id]['enable']) ? $values['voc_' . $voc_id]['enable'] : 0,
            );

            $terms_per_voc = kk_client_request_retrieve_vocabulary_term_names($client_obj, $voc_id);
            if (!empty($terms_per_voc)) {
              $form['vocabularies_fieldset']['voc_' . $voc_id]['terms'] = array(
                '#type' => 'select',
                '#title' => t('Select specific terms.'),
                '#options' => $terms_per_voc,
                '#default_value' => isset($values['voc_' . $voc_id]['terms']) ? $values['voc_' . $voc_id]['terms'] : array(),
                '#multiple' => TRUE,
                '#dependency' => array('edit-vocabularies-fieldset-voc-' . $voc_id . '-enable' => array(1)),
              );
            }

            $form['vocabularies_fieldset']['voc_' . $voc_id]['voc_id'] = array(
              '#type' => 'value',
              '#value' => $voc_id,
            );
          }

          $form['get_all'] = array(
            '#type' => 'checkbox',
            '#title' => t('Get all vocabularies and their terms.'),
            '#default_value' => 0,
          );

          $form['complete_voc_list'] = array(
            '#type' => 'value',
            '#value' => $vocabulary_name_list,
          );

        }
        else {
          drupal_set_message(t('There are no new vocabularies.'), 'status', FALSE);
        }
      }
      $form['complete_server_voc_list'] = array(
        '#type' => 'value',
        '#value' => $server_vocabularies,
      );
    }
    else {
      drupal_set_message(t('There was a problem with the connection to the server. Please, check the reports for more details.'), 'error', FALSE);
    }
  }
  else {
    drupal_set_message(t('Cannot connect to the server through the @connection connection. Please, check the reports for more details.', array('@connection' => $form_state['multistep_values']['pick_connection']['select_connection'])), 'error', FALSE);
  }

  $form['back'] = array(
    '#type' => 'submit',
    '#name' => 'Back',
    '#value' => t('Back'),
  );

  $form['next'] = array(
    '#type' => 'submit',
    '#name' => 'Next',
    '#value' => t('Next'),
  );

  return $form;
}

/**
 * Step 3 - Select existing local vocabularies to be synced.
 *
 * @param array $form
 *   The form array.
 * @param array $form_state
 *   The form state array.
 */
function kk_client_request_admin_form_existing_vocabularies($form, &$form_state) {
  $values = isset($form_state['multistep_values']['existing_vocabularies']) ? $form_state['multistep_values']['existing_vocabularies'] : array();
  $server_vocabularies = isset($form_state['multistep_values']['new_vocabularies']['complete_server_voc_list']) ? $form_state['multistep_values']['new_vocabularies']['complete_server_voc_list'] : array();
  $client_obj = kk_client_request_get_client_object($form_state['multistep_values']['pick_connection']['select_connection']);

  $form['step_3_title'] = array(
    '#type' => 'item',
    '#title' => t('3. Update existing vocabularies.'),
  );

  // Get list with all the locally synched vocabularies.
  $local_vocabularies = kk_client_request_get_local_sync_vocabularies();
  if ($local_vocabularies !== FALSE) {
    if (!empty($local_vocabularies)) {
      // Determine which vocabularies does not exist anymore on the server
      // and should be deleted.
      $vocs_to_del = kk_client_request_get_vocabularies_to_delete($local_vocabularies, $server_vocabularies);
      if (!empty($vocs_to_del)) {
        $form['vocs_to_del_title'] = array(
          '#type' => 'item',
          '#title' => t('The following vocabularies does not exist on the server any more and will be removed from the site upon synchronisation.'),
          '#markup' => theme('item_list', array('items' => $vocs_to_del)),
        );
        $form['vocs_to_del'] = array(
          '#type' => 'value',
          '#value' => $vocs_to_del,
        );
      }

      // List the remaining vocabularies that could be synched.
      if ($local_vocabularies) {
        $form['local_vocabularies_fieldset'] = array(
          '#type' => 'fieldset',
          '#tree' => TRUE,
        );

        foreach ($local_vocabularies as $voc_id => $name) {
          $form['local_vocabularies_fieldset']['local_voc_' . $voc_id]['enable'] = array(
            '#type' => 'checkbox',
            '#title' => t('Update vocabulary @name.', array('@name' => $name)),
            '#default_value' => isset($values['local_voc_' . $voc_id]['enable']) ? $values['local_voc_' . $voc_id]['enable'] : 0,
          );

          $server_vid = kk_client_request_get_server_vid($voc_id);
          $terms_per_voc = kk_client_request_retrieve_vocabulary_term_names($client_obj, $server_vid);
          if (!empty($terms_per_voc)) {
            $form['local_vocabularies_fieldset']['local_voc_' . $voc_id]['terms'] = array(
              '#type' => 'select',
              '#title' => t('Select specific terms.'),
              '#options' => $terms_per_voc,
              '#default_value' => isset($values['local_voc_' . $voc_id]['terms']) ? $values['local_voc_' . $voc_id]['terms'] : array(),
              '#multiple' => TRUE,
              '#dependency' => array('edit-local-vocabularies-fieldset-local-voc-' . $voc_id . '-enable' => array(1)),
            );
          }

          $form['local_vocabularies_fieldset']['local_voc_' . $voc_id]['voc_id'] = array(
            '#type' => 'value',
            '#value' => $voc_id,
          );
        }

        $form['update_all'] = array(
          '#type' => 'checkbox',
          '#title' => t('Update all vocabularies at once.'),
          '#default_value' => 0,
        );

        $form['complete_update_voc_list'] = array(
          '#type' => 'value',
          '#value' => $local_vocabularies,
        );
      }
      else {
        drupal_set_message(t('No local vocabularies to be synced with the server.'), 'status', FALSE);
      }
    }
    else {
      drupal_set_message(t('No local vocabularies to be synced with the server.'), 'status', FALSE);
    }

    $form['back'] = array(
      '#type' => 'submit',
      '#name' => 'Back',
      '#value' => t('Back'),
    );

    $form['next'] = array(
      '#type' => 'submit',
      '#name' => 'Next',
      '#value' => t('Next'),
    );
  }

  return $form;
}

/**
 * Next button selection.
 *
 * @param array $form
 *   The form array.
 * @param array $form_state
 *   The form state array.
 */
function kk_client_request_admin_form_next_page($form, &$form_state) {
  switch ($form_state['step']) {
    case 'pick_connection':
      return 'new_vocabularies';

    break;

    case 'new_vocabularies':
      return 'existing_vocabularies';

    break;
  }
}

/**
 * Back button selection.
 *
 * @param array $form
 *   The form array.
 * @param array $form_state
 *   The form state array.
 */
function kk_client_request_admin_form_previous_page($form, &$form_state) {
  switch ($form_state['step']) {
    case 'existing_vocabularies':
      return 'new_vocabularies';

    break;

    case 'new_vocabularies':
      return 'pick_connection';

    break;
  }
}

/**
 * Submit handler.
 *
 * @param array $form
 *   The form array.
 * @param array $form_state
 *   The form state array.
 */
function kk_client_request_admin_form_submit($form, &$form_state) {
  $form_state['multistep_values'][$form_state['step']] = $form_state['values'];
  switch ($form_state['step']) {
    case 'existing_vocabularies':
      if ($form_state['triggering_element']['#name'] != 'Back') {
        $values = array();
        $client_obj = new stdClass();

        foreach ($form_state['multistep_values'] as $ms_key => $ms_value) {
          $values[$ms_key] = $ms_value;
        }

        // Remove deleted vocabularies.
        if (!empty($values['existing_vocabularies']['vocs_to_del'])) {
          kk_client_request_delete_vocabularies($values['existing_vocabularies']['vocs_to_del']);
        }

        // Create new vocabularies.
        $client_obj = kk_client_request_get_client_object($values['pick_connection']['select_connection']);
        $vocs_to_create = array();
        $vocs_spec_terms_to_create = array();
        $vocs_all_terms_to_create = FALSE;
        if (isset($values['new_vocabularies']['vocabularies_fieldset']) && !empty($values['new_vocabularies']['vocabularies_fieldset'])) {
          foreach ($values['new_vocabularies']['vocabularies_fieldset'] as $voc_form_id => $voc_form_values) {
            if ($voc_form_values['enable'] == 1) {
              $vocs_to_create[$voc_form_values['voc_id']] = $voc_form_values['voc_id'];
              if (!empty($voc_form_values['terms'])) {
                foreach ($voc_form_values['terms'] as $terms_key => $terms_value) {
                  if ($terms_key == '-all-') {
                    $vocs_all_terms_to_create = TRUE;
                    break;
                  }
                  $vocs_spec_terms_to_create[$terms_key] = $terms_key;
                }
              }
            }
          }
        }

        if (isset($values['new_vocabularies']['get_all']) && $values['new_vocabularies']['get_all'] == 1) {
          // Create all vocabularies.
          kk_client_request_process_create_vocabularies($client_obj, $values['new_vocabularies']['complete_voc_list'], FALSE);
        }
        else {
          if (isset($vocs_to_create) && !empty($vocs_to_create) && $vocs_all_terms_to_create == TRUE) {
            // Create all vocabularies and terms.
            kk_client_request_process_create_vocabularies($client_obj, $vocs_to_create, FALSE);
          }
          if (isset($vocs_to_create) && !empty($vocs_to_create) && $vocs_all_terms_to_create == FALSE) {
            if (!empty($vocs_spec_terms_to_create)) {
              // Create all vocabularies and selected terms.
              kk_client_request_process_create_vocabularies_and_selected_terms($client_obj, $vocs_to_create, $vocs_spec_terms_to_create);
            }
            else {
              // Create all vocabularies and no terms.
              kk_client_request_process_create_vocabularies_and_no_terms($client_obj, $vocs_to_create);
            }
          }
        }

        $vocs_to_update = array();
        $vocs_spec_terms_to_update = array();
        $vocs_all_terms_to_update = FALSE;
        if (isset($values['existing_vocabularies']['local_vocabularies_fieldset']) && !empty($values['existing_vocabularies']['local_vocabularies_fieldset'])) {
          foreach ($values['existing_vocabularies']['local_vocabularies_fieldset'] as $voc_form_id => $voc_form_values) {
            if ($voc_form_values['enable'] == 1) {
              $vocs_to_update[$voc_form_values['voc_id']] = $voc_form_values['voc_id'];
              if (!empty($voc_form_values['terms'])) {
                foreach ($voc_form_values['terms'] as $terms_key => $terms_value) {
                  if ($terms_key == '-all-') {
                    $vocs_all_terms_to_update = TRUE;
                    break;
                  }
                  $vocs_spec_terms_to_update[$terms_key] = $terms_key;
                }
              }
            }
          }
        }

        // Update vocabularies.
        if (isset($values['existing_vocabularies']['update_all']) && $values['existing_vocabularies']['update_all'] == 1) {
          // UPDATE all vocabularies.
          kk_client_request_process_update_vocabularies($client_obj, $values['existing_vocabularies']['complete_update_voc_list'], FALSE);
        }
        else {
          if (isset($vocs_to_update) && !empty($vocs_to_update) && $vocs_all_terms_to_update == TRUE) {
            // UPDATE all vocabularies.
            kk_client_request_process_update_vocabularies($client_obj, $vocs_to_update, FALSE);
          }

          if (isset($vocs_to_update) && !empty($vocs_to_update) && $vocs_all_terms_to_update == FALSE) {
            if (!empty($vocs_spec_terms_to_update)) {
              // Update all vocabularies and selected terms.
              kk_client_request_process_update_vocabularies_and_selected_terms($client_obj, $vocs_to_update, $vocs_spec_terms_to_update);
            }
            else {
              // Update all vocabularies and no terms.
              kk_client_request_process_update_vocabularies_and_no_terms($client_obj, $vocs_to_update);
            }
          }
        }
        $form_state['complete'] = TRUE;
        $form_state['rebuild'] = TRUE;
        drupal_goto('admin/config/kk/client_request_resources');
      }
      else {
        $form_state['step'] = kk_client_request_admin_form_previous_page($form, $form_state);
        $form_state['rebuild'] = TRUE;
      }

      break;

    default:
      // Go to next step.
      if ($form_state['triggering_element']['#name'] == 'Next') {
        $form_state['new_step'] = kk_client_request_admin_form_next_page($form, $form_state);
      }
      // Go to previous step.
      elseif ($form_state['triggering_element']['#name'] == 'Back') {
        $form_state['new_step'] = kk_client_request_admin_form_previous_page($form, $form_state);
      }
      $form_state['step'] = $form_state['new_step'];
      $form_state['rebuild'] = TRUE;

      break;
  }
}

/**
 * Returns the settings form.
 *
 * @param array $form
 *   The form array.
 * @param array $form_state
 *   The form state array.
 */
function kk_client_request_settings_admin_form($form, &$form_state) {
  $form = array();
  $connection_names = kk_client_request_get_client_connections();
  if (isset($connection_names) && !empty($connection_names)) {
    $form['kk_client_request_cron'] = array(
      '#type' => 'checkbox',
      '#title' => t('Enable automatic synchronisation of terms on cron.'),
      '#default_value' => variable_get('kk_client_request_cron', 1),
    );

    $form['kk_client_request_connection_name'] = array(
      '#type' => 'select',
      '#title' => t('Select client connection.'),
      '#options' => $connection_names,
      '#default_value' => variable_get('kk_client_request_connection_name', 0),
      '#dependency' => array('edit-kk-client-request-cron' => array(1)),
    );
  }
  else {
    drupal_set_message(t('Please go to !services_client and configure at least one client.', array('!services_client' => l(t('Service Client'), 'admin/structure/services_client'))), 'error', FALSE);
  }

  $form['kk_client_request_debug'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable taxonomy synchronisation debug mode'),
    '#default_value' => variable_get('kk_client_request_debug', 0),
  );
  
    $vocabularies = taxonomy_get_vocabularies();
    $vocabularies_list = array();
    foreach ($vocabularies as $vocabulary) {
      $vocabularies_list[$vocabulary->machine_name] = $vocabulary->name;
    }
    
    $form['vocabularies_to_skip'] = array(
    '#type' => 'checkboxes',
    '#options' => $vocabularies_list,
    '#title' => t('Skipped vocabularies'),
    '#description' => t('Selected vocabularies will be marked explicitly for synchronization.'),
    '#default_value' => variable_get('vocabularies_to_skip', array('kle', 'kkorg', 'sites_for_important_news', 'common_categories', 'theme_categories')),
  );

  return system_settings_form($form);
}
