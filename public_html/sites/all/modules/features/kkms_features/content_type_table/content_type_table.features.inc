<?php
/**
 * @file
 * content_type_table.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_table_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_table_node_info() {
  $items = array(
    'table' => array(
      'name' => t('Table'),
      'base' => 'node_content',
      'description' => t('Table that is related to a piece of content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
