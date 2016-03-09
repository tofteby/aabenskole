<?php
/**
 * @file
 * configuration_sliders.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function configuration_sliders_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
}
