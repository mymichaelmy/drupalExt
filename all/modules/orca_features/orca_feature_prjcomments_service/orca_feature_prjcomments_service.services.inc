<?php
/**
 * @file
 * orca_feature_prjcomments_service.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function orca_feature_prjcomments_service_default_services_endpoint() {
  $export = array();

	$endpoint = new stdClass();
	$endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
	$endpoint->api_version = 3;
	$endpoint->name = 'prjcomments';
	$endpoint->server = 'rest_server';
	$endpoint->path = 'api/prjcomments';
	$endpoint->authentication = array(
	  'services' => 'services',
	);
	$endpoint->server_settings = array();
	$endpoint->resources = array(
	  'comment' => array(
	    'operations' => array(
		     'create' => array(
		       'enabled' => '1',
		     ),
		     'retrieve' => array(
		       'enabled' => '1',
		     ),
		     'update' => array(
		       'enabled' => '1',
		     ),
		     'delete' => array(
		       'enabled' => '1',
		     ),
		     'index' => array(
		       'enabled' => '1',
		     ),
		   ),
		   'actions' => array(
		     'countAll' => array(
		       'enabled' => '1',
		     ),
		     'countNew' => array(
		       'enabled' => '1',
		     ),
		   ),
		 ),
	);
	$endpoint->debug = 1;
	$export['prjcomments'] = $endpoint;

  return $export;
}
