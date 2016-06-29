<?php
/**
 * @file
 * ringsted_footer_mini_panel.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ringsted_footer_mini_panel_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-external-links.
  $menus['menu-footer-external-links'] = array(
    'menu_name' => 'menu-footer-external-links',
    'title' => 'Footer external links',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-footer-internal-links.
  $menus['menu-footer-internal-links'] = array(
    'menu_name' => 'menu-footer-internal-links',
    'title' => 'Footer internal links',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer external links');
  t('Footer internal links');


  return $menus;
}
