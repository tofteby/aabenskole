<?php
/**
 * @file
 * content_type_service.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_service_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_service_node_info() {
  $items = array(
    'service' => array(
      'name' => t('Self service'),
      'base' => 'node_content',
      'description' => t('Primary content type to be used as a service that can be provided and activated for particular users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'service_situation' => array(
      'name' => t('Service situation'),
      'base' => 'node_content',
      'description' => t('A dynamic content type that displays content taken from related other related content tagged with similar terms.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'service_spot' => array(
      'name' => t('Service spot'),
      'base' => 'node_content',
      'description' => t('Single service geographical location as secondary content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
