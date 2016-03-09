<?php
/**
 * @file
 * content_type_section_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_section_page_ctools_plugin_api($module = NULL, $api = NULL) {
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
function content_type_section_page_node_info() {
  $items = array(
    'section_page' => array(
      'name' => t('Section page'),
      'base' => 'node_content',
      'description' => t('Section page is a Panelizer-enabled, flexible, and highly customizable content type that can be used for many different purposes.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
