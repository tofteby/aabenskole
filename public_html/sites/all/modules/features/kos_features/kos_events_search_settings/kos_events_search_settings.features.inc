<?php
/**
 * @file
 * kos_events_search_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kos_events_search_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "apachesolr_search" && $api == "apachesolr_search_defaults") {
    return array("version" => "3");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}
