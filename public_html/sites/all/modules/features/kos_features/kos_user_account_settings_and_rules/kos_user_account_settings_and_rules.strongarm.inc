<?php
/**
 * @file
 * kos_user_account_settings_and_rules.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function kos_user_account_settings_and_rules_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_profile2__main';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_profile2__main'] = $strongarm;

  return $export;
}
