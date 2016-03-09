<?php
/**
 * @file
 * content_type_event.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function content_type_event_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-events-submenu.
  $menus['menu-events-submenu'] = array(
    'menu_name' => 'menu-events-submenu',
    'title' => 'Events submenu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Events submenu');


  return $menus;
}
