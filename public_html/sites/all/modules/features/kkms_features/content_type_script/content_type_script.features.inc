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
      'description' => t('iframe bruges til at sætte indhold fra andre hjemmesider ind i en ramme på din hjemmeside. Det kan eksempelvis være kursusoversigter hos eksterne samarbejdspartnere.iframes er dog som udgangspunkt ikke tilgængelige, og bør derfor så vidt muligt undgås.
'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
