<?php
/**
 * @file
 * orca_feature_user_service.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function orca_feature_user_service_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'orcauser';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'api/orcauser';
  $endpoint->authentication = array(
    'services' => 'services',
  );
  $endpoint->server_settings = array();
  $endpoint->resources = array(
    'system' => array(
      'actions' => array(
        'connect' => array(
          'enabled' => '1',
        ),
      ),
    ),
  );
  $endpoint->debug = 1;
  $export['orcauser'] = $endpoint;

  return $export;
}
