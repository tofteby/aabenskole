<?php

/**
 * @file
 *
 * Defines the form configs for the Webform mappings in Services Client.
 *
 */

class ServicesClientWebformMapping extends ServicesClientMapping {

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
    if ($hook->hook == 'webform_submission_save') {
      $form['file_field_name'] = array(
        '#type' => 'textfield',
        '#title' => t('File field name'),
        '#description' => 'Enter file field name for master node types.',
        '#rows' => 5,
        '#size' => 30,
        '#default_value' => !empty($config['file_field_name']) ? $config['file_field_name'] : '',
      );
      $form['node_type_mapping'] = array(
        '#type' => 'textarea',
        '#title' => t('Node Type Mappings'),
        '#description' => 'Enter mappings for client/master node types. Master on left, client on right, pipe separated, one per line.',
        '#rows' => 5,
        '#size' => 30,
        '#default_value' => !empty($config['node_type_mapping']) ? $config['node_type_mapping'] : '',
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
    if (isset($form_state['values']['file_field_name'])) {
      $form_state['config']['file_field_name'] = $form_state['values']['file_field_name'];
    }
    if (isset($form_state['values']['node_type_mapping'])) {
      $form_state['config']['node_type_mapping'] = $form_state['values']['node_type_mapping'];
    }
  }
}
