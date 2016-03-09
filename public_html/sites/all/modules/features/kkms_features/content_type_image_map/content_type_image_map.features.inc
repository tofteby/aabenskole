<?php
/**
 * @file
 * content_type_image_map.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_image_map_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_image_map_node_info() {
  $items = array(
    'image_map' => array(
      'name' => t('Image map'),
      'base' => 'node_content',
      'description' => t('A single annotated image.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
