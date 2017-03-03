<?php
/**
 * @file
 * rest_services_api.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rest_services_api_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}
