<?php
/**
 * @file
 * kos_configuration_field_panes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kos_configuration_field_panes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
