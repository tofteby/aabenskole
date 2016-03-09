<?php
/**
 * @file
 * configuration_pull_content.default_services_client_connection.inc
 */

/**
 * Implements hook_services_client_connection_default_connections().
 */
function configuration_pull_content_services_client_connection_default_connections() {
  $export = array();

  $connection = new stdClass();
  $connection->disabled = FALSE; /* Edit this to true to make a default connection disabled initially */
  $connection->api_version = 1;
  $connection->name = 'pull_content';
  $connection->admin_title = 'Pull content';
  $connection->admin_description = '';
  $connection->version = 3;
  $connection->endpoint = '';
  $connection->config = array(
    'auth' => array(
      'plugin' => '',
      'config' => array(
        'username' => '',
        'password' => '',
      ),
    ),
    'server' => array(
      'plugin' => 'ServicesClientConnectionRestServer',
      'config' => array(
        'request_formatter' => 'json',
        'response_parser' => 'json',
      ),
    ),
    'request' => array(
      'plugin' => 'ServicesClientConnectionCurlRequest',
      'config' => array(
        'request_timeout' => '30',
        'ssl_verifypeer_skip' => 0,
      ),
    ),
  );
  $connection->debug = 0;
  $export['pull_content'] = $connection;

  return $export;
}
