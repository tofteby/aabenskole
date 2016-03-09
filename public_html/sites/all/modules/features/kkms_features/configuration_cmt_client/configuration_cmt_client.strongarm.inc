<?php
/**
 * @file
 * configuration_cmt_client.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function configuration_cmt_client_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kk_client_request_connection_name';
  $strongarm->value = 'cmt_client';
  $export['kk_client_request_connection_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kk_client_request_cron';
  $strongarm->value = 1;
  $export['kk_client_request_cron'] = $strongarm;

  return $export;
}
