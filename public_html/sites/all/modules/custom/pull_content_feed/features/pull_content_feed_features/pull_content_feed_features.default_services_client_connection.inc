<?php
/**
 * @file
 * pull_content_feed_features.default_services_client_connection.inc
 */

/**
 * Implements hook_services_client_connection_default_connections().
 */
function pull_content_feed_features_services_client_connection_default_connections() {
  $export = array();

  $connection = new stdClass();
  $connection->disabled = FALSE; /* Edit this to true to make a default connection disabled initially */
  $connection->api_version = 1;
  $connection->name = 'pull_content_feed';
  $connection->admin_title = 'Pull content feed';
  $connection->admin_description = '';
  $connection->version = 3;
  $connection->endpoint = 'http://ctax/shared-content';
  $connection->config = array(
    'auth' => array(
      'plugin' => '',
      'config' => array(),
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
        'request_timeout' => '60',
        'ssl_verifypeer_skip' => 0,
      ),
    ),
  );
  $connection->debug = 0;
  $export['pull_content_feed'] = $connection;

  return $export;
}
