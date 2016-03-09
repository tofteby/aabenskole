<?php

/**
 * @file
 * Plugin definition
 */

/**
 * List of auth plugins provided by module
 */
function _services_client_mapping() {
  $path = drupal_get_path('module', 'services_client') . '/plugins';

  $info = array();

  $info['ServicesClientNodeMapping'] = array(
    'name' => t('Node Mappings'),
    'description' => '',
    'handler' => array(
      'parent' => 'ServicesClientMapping',
      'class' => 'ServicesClientNodeMapping',
      'file' => 'ServicesClientNodeMapping.inc',
      'path' => $path,
    ),
    'supports' => array(
      'node_save',
      'node_delete',
    ),
  );

  $info['ServicesClientUserMapping'] = array(
    'name' => t('User Mappings'),
    'description' => '',
    'handler' => array(
      'parent' => 'ServicesClientMapping',
      'class' => 'ServicesClientUserMapping',
      'file' => 'ServicesClientUserMapping.inc',
      'path' => $path,
    ),
    'supports' => array(
      'user_save',
    ),
  );

  // Not inheriting from the Nodemapping to keep it isolated
  $info['ServicesClientWebformMapping'] = array(
    'name' => t('Webform Mappings'),
    'description' => '',
    'handler' => array(
      'parent' => 'ServicesClientMapping',
      'class' => 'ServicesClientWebformMapping',
      'file' => 'ServicesClientWebformMapping.inc',
      'path' => $path,
    ),
    'supports' => array(
      'webform_submission_save',
    ),
  );

  return $info;
}

/**
 * List of server plugins provided by module
 */
function _services_client_condition() {
  $path = drupal_get_path('module', 'services_client') . '/plugins';

  $info = array();
  $info['ServicesClientNodeCondition'] = array(
    'name' => t('Node Conditions'),
    'description' => '',
    'handler' => array(
      'parent' => 'ServicesClientCondition',
      'class' => 'ServicesClientNodeCondition',
      'file' => 'ServicesClientNodeCondition.inc',
      'path' => $path,
    ),
    'supports' => array(
      'node_save',
      'node_delete',
    ),
  );

  $info['ServicesClientUserCondition'] = array(
    'name' => t('User Conditions'),
    'description' => '',
    'handler' => array(
      'parent' => 'ServicesClientCondition',
      'class' => 'ServicesClientUserCondition',
      'file' => 'ServicesClientUserCondition.inc',
      'path' => $path,
    ),
    'supports' => array(
      'user_save',
    ),
  );
  $info['ServicesClientWebformCondition'] = array(
    'name' => t('Webform Conditions'),
    'description' => '',
    'handler' => array(
      'parent' => 'ServicesClientCondition',
      'class' => 'ServicesClientWebformCondition',
      'file' => 'ServicesClientWebformCondition.inc',
      'path' => $path,
    ),
    'supports' => array(
      'webform_submission_save',
    ),
  );

  return $info;
}
