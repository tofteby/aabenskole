<?php
/**
 * @file
 * configuration_pull_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function configuration_pull_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
  if ($module == "services_client_connection" && $api == "default_services_client_connection") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function configuration_pull_content_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
