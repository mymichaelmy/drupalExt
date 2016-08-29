<?php
/**
 * @file
 * orca_feature_csrf_service.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function orca_feature_csrf_service_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'csrf';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'api/csrf';
  $endpoint->authentication = array();
  $endpoint->server_settings = array(
    'formatters' => array(
      'json' => TRUE,
      'bencode' => FALSE,
      'jsonp' => FALSE,
      'php' => FALSE,
      'xml' => FALSE,
    ),
    'parsers' => array(
      'application/json' => TRUE,
      'application/vnd.php.serialized' => TRUE,
      'application/xml' => TRUE,
      'multipart/form-data' => TRUE,
      'text/xml' => TRUE,
      'application/x-www-form-urlencoded' => TRUE,
    ),
  );
  $endpoint->resources = array(
    'user' => array(
      'actions' => array(
        'token' => array(
          'enabled' => '1',
        ),
      ),
    ),
  );
  $endpoint->debug = 1;
  $export['csrf'] = $endpoint;

  return $export;
}
