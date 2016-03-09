<?php
/**
 * @file
 * kos_content_type_school_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kos_content_type_school_event_ctools_plugin_api($module = NULL, $api = NULL) {
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
 * Implements hook_views_api().
 */
function kos_content_type_school_event_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function kos_content_type_school_event_node_info() {
  $items = array(
    'school_event' => array(
      'name' => t('School event'),
      'base' => 'node_content',
      'description' => t('Promote certain events for shool participation.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
