<?php
/**
 * @file
 * ringsted_footer_mini_panel.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ringsted_footer_mini_panel_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-footer-external-links'] = array(
    'cache' => -1,
    'delta' => 'menu-footer-external-links',
    'i18n_block_language' => array(),
    'module' => 'menu',
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
      'kos_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'kos_theme',
        'weight' => 0,
      ),
      'ringstedtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ringstedtheme',
        'weight' => 0,
      ),
    ),
  );

  $export['menu-menu-footer-internal-links'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-footer-internal-links',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
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
      'kos_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'kos_theme',
        'weight' => 0,
      ),
      'ringstedtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ringstedtheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['panels_mini-footer_mini_panel'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'footer_mini_panel',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'panels_mini',
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
      'kos_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'kos_theme',
        'weight' => 0,
      ),
      'ringstedtheme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'ringstedtheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
