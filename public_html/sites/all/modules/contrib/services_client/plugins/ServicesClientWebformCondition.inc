<?php

/**
 * @file
 *
 * Defines the form configs for the Webform conditons in Services Client.
 *
 */

class ServicesClientWebformCondition extends ServicesClientCondition {

  /**
   * Implements configForm().
   */
  public function configForm(&$form, &$form_state) {
    $config = $this->config;
    $hook = $this->hook;
    $type = $form_state['build_info']['args'][0];

    foreach(node_type_get_types() as $type => $info) {
      $types[$type] = $info->name;
    }

    if (in_array($hook->hook, array('webform_submission_save'))) {
      $form['node_type'] = array(
        '#type' => 'select',
        '#title' => t('Content type'),
        '#description' => 'Select the content type on which this hook is conditional. Because each hook has its own mapping, only one content type per hook is allowed.',
        '#options' => $types,
        '#default_value' => isset($config['node_type']) ? $config['node_type'] : "",
        '#required' => TRUE,
      );
      $form['webform_nid'] = array(
        '#type' => 'textfield',
        '#title' => t('Node ID of the webform'),
        '#description' => 'Since site can contain more that one webform, let\'s stick to the Node id.',
        '#default_value' => isset($config['webform_nid']) ? $config['webform_nid'] : "",
        '#size' => 5,
        '#states' => array(
          'visible' => array(
            ':input[name="node_type"]' => array('value' => 'webform'),
          ),
        ),
      );
      $form['published'] = array(
        '#type' => 'select',
        '#title' => t('Published'),
        '#description' => 'Send only nodes that are published, unpublished, or both.',
        '#options' => array(
          'e' => 'Either',
          '1' => 'Published',
          '0' => 'Unpublished'
        ),
        '#default_value' => isset($config['published']) ? $config['published'] : "",
        '#required' => TRUE,
      );

    }
  }

  /**
   * Implements configFormSubmit().
   */
  public function configFormSubmit(&$form, &$form_state) {
    parent::configFormSubmit($form, $form_state);

    $form_state['config']['node_type'] = $form_state['values']['node_type'];
    $form_state['config']['published'] = $form_state['values']['published'];
    $form_state['config']['webform_nid'] = $form_state['values']['webform_nid'];
  }
}
