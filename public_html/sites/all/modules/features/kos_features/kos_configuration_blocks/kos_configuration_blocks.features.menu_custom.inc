<?php
/**
 * @file
 * kos_configuration_blocks.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function kos_configuration_blocks_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-left.
  $menus['menu-footer-left'] = array(
    'menu_name' => 'menu-footer-left',
    'title' => 'Shortcuts',
    'description' => 'Quick navigation links placed in the left part of the footer.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-footer-right.
  $menus['menu-footer-right'] = array(
    'menu_name' => 'menu-footer-right',
    'title' => 'Shortcuts',
    'description' => 'Quick navigation links placed in the right part of the footer.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Quick navigation links placed in the left part of the footer.');
  t('Quick navigation links placed in the right part of the footer.');
  t('Shortcuts');


  return $menus;
}
