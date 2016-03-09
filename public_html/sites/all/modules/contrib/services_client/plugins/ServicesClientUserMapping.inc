<?php

/**
 * @file
 *
 * Defines the form configs for the User mappings in Services Client.
 *
 */

class ServicesClientUserMapping extends ServicesClientMapping {

  /**
   * Implements configForm().
   */
  public function configForm(&$form, &$form_state) {
    $hook = $this->hook;
    $config = $this->config;

    $form['field_mapping'] = array(
      '#type' => 'textarea',
      '#title' => t('Field Mappings'),
      '#description' => 'Enter mappings for client/master fields. Master on left, client on right, pipe separated, one per line.',
      '#rows' => 15,
      '#size' => 30,
      '#default_value' => !empty($config['field_mapping']) ? $config['field_mapping'] : '',
    );
    $form['field_mapping_empty'] = array(
      '#type' => 'textarea',
      '#title' => t('Empty mapping'),
      '#rows' => '15',
      '#default_value' => !empty($config['field_mapping_empty']) ? $config['field_mapping_empty'] : '',
    );

    if ($hook->hook == 'user_save') {
      $form['user_sync_roles'] = array(
        '#type' => 'textarea',
        '#title' => t('Roles sync'),
        '#description' => t('Enter which roles should be synced, one role per line in format local_role|remote_role'),
        '#default_value' => !empty($config['user_sync_roles']) ? $config['user_sync_roles'] : '',
      );
    }
  }

  /**
   * Implements configFormSubmit().
   */
  public function configFormSubmit(&$form, &$form_state) {
    parent::configFormSubmit($form, $form_state);

    if (isset($form_state['values']['field_mapping'])) {
      $form_state['config']['field_mapping'] = $form_state['values']['field_mapping'];
    }
    if (isset($form_state['values']['field_mapping_empty'])) {
      $form_state['config']['field_mapping_empty'] = $form_state['values']['field_mapping_empty'];
    }
    if (isset($form_state['values']['user_sync_roles'])) {
      $form_state['config']['user_sync_roles'] = $form_state['values']['user_sync_roles'];
    }
  }
}
