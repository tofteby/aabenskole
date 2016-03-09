<?php
/**
 * @file
 * configuration_kkms_social.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function configuration_kkms_social_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['follow-site'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'site',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'follow',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'kkms_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'kkms_admin',
        'weight' => 0,
      ),
      'kkms_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'kkms_theme',
        'weight' => 22,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['kkms_social-kkms-social-share-block'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'kkms-social-share-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'kkms_social',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'kkms_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'kkms_admin',
        'weight' => 0,
      ),
      'kkms_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'kkms_theme',
        'weight' => 23,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
