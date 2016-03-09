<?php
/**
 * @file
 * content_type_script.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_script_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_script_node_info() {
  $items = array(
    'script' => array(
      'name' => t('Iframe/Script'),
      'base' => 'node_content',
      'description' => t('Single textarea without wysiwyg, and with disabled text filters.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
