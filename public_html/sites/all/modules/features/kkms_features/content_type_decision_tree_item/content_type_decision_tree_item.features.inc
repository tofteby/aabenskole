<?php
/**
 * @file
 * content_type_decision_tree_item.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_decision_tree_item_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function content_type_decision_tree_item_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function content_type_decision_tree_item_node_info() {
  $items = array(
    'decision_tree_item' => array(
      'name' => t('Decision tree item'),
      'base' => 'node_content',
      'description' => t('Decision tree item is used to define a single branch in the decision tree.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
