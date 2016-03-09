<?php
/**
 * @file
 * content_type_event.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function content_type_event_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-events-submenu:events/grid
  $menu_links['menu-events-submenu:events/grid'] = array(
    'menu_name' => 'menu-events-submenu',
    'link_path' => 'events/grid',
    'router_path' => 'events/grid',
    'link_title' => 'Grid',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'language' => 'und',
    'customized' => 1,
  );
  // Exported menu link: menu-events-submenu:events/list
  $menu_links['menu-events-submenu:events/list'] = array(
    'menu_name' => 'menu-events-submenu',
    'link_path' => 'events/list',
    'router_path' => 'events/list',
    'link_title' => 'List',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'language' => 'und',
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Grid');
  t('List');


  return $menu_links;
}
