<?php
/**
 * @file
 * content_type_faq_qa.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_faq_qa_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_faq_qa_node_info() {
  $items = array(
    'faq_qa' => array(
      'name' => t('FAQ/QA'),
      'base' => 'node_content',
      'description' => t('Ofte stillede spørgsmål der er relateret til det primære indhold.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
