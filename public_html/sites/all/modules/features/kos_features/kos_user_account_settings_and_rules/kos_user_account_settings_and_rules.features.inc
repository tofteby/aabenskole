<?php
/**
 * @file
 * kos_user_account_settings_and_rules.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kos_user_account_settings_and_rules_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_profile2_type().
 */
function kos_user_account_settings_and_rules_default_profile2_type() {
  $items = array();
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "main",
    "label" : "Main profile",
    "weight" : "0",
    "data" : { "registration" : true, "use_page" : true },
    "_pull_content_metadata" : { "field_info_fields" : [] },
    "rdf_mapping" : []
  }');
  return $items;
}
