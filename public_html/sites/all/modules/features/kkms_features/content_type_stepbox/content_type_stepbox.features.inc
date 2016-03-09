<?php
/**
 * @file
 * content_type_stepbox.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_stepbox_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_stepbox_node_info() {
  $items = array(
    'stepbox' => array(
      'name' => t('Step boxes'),
      'base' => 'node_content',
      'description' => t('Information separated in several groups/steps.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'stepbox_tabs' => array(
      'name' => t('Step boxes with tabs'),
      'base' => 'node_content',
      'description' => t('Information separated in several groups/steps, with tabular navigation.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
