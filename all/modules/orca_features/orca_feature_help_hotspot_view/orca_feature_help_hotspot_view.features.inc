<?php
/**
 * @file
 * orca_feature_help_hotspot_view.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function orca_feature_help_hotspot_view_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function orca_feature_help_hotspot_view_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function orca_feature_help_hotspot_view_node_info() {
  $items = array(
    'help_snippet_content' => array(
      'name' => t('Help Snippet Content'),
      'base' => 'node_content',
      'description' => t('Help Snippet Content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
