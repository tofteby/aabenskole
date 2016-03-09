<?php
/**
 * @file
 * content_type_factbox.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_factbox_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_factbox_node_info() {
  $items = array(
    'factbox' => array(
      'name' => t('Factbox'),
      'base' => 'node_content',
      'description' => t('Factbox is a simple content that shows related information to a content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'factbox_card_info' => array(
      'name' => t('Factbox - card info'),
      'base' => 'node_content',
      'description' => t('A content type for inputting multiple facts - each one with label and input texts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'factbox_figures' => array(
      'name' => t('Factbox - figures'),
      'base' => 'node_content',
      'description' => t('A single fact consisting of a number that displays large and highlighted, and description text directly below it.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
