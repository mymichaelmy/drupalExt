<?php
/**
 * @file
 * orca_feature_csrf_service.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function orca_feature_csrf_service_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}