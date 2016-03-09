<?php
/**
 * @file
 * content_type_area.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_area_ctools_plugin_api($module = NULL, $api = NULL) {
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
function content_type_area_node_info() {
  $items = array(
    'area' => array(
      'name' => t('Area'),
      'base' => 'node_content',
      'description' => t('For showing geographic areas with markers generated from the geographic location of the content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
