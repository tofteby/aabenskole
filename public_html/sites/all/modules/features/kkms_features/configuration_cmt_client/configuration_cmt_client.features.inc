<?php
/**
 * @file
 * configuration_cmt_client.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function configuration_cmt_client_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "services_client_connection" && $api == "default_services_client_connection") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
