<?php
/**
 * @file
 * configuration_cmt_client.default_services_client_connection.inc
 */

/**
 * Implements hook_services_client_connection_default_connections().
 */
function configuration_cmt_client_services_client_connection_default_connections() {
  $export = array();

  $connection = new stdClass();
  $connection->disabled = FALSE; /* Edit this to true to make a default connection disabled initially */
  $connection->api_version = 1;
  $connection->name = 'cmt_client';
  $connection->admin_title = 'cmt_client';
  $connection->admin_description = '';
  $connection->version = 3;
  $connection->endpoint = 'http://ctax/cmt-server';
  $connection->config = array(
    'auth' => array(
      'plugin' => 'ServicesClientConnectionSessionAuth',
      'config' => array(
        'username' => 'admin',
        'password' => '1234',
        'token' => 1,
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
        'request_timeout' => '1000',
        'ssl_verifypeer_skip' => 0,
      ),
    ),
  );
  $connection->debug = 0;
  $export['cmt_client'] = $connection;

  return $export;
}
