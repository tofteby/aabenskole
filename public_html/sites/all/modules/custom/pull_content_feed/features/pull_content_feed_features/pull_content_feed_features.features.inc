<?php
/**
 * @file
 * pull_content_feed_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pull_content_feed_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "services_client_connection" && $api == "default_services_client_connection") {
    return array("version" => "1");
  }
}
