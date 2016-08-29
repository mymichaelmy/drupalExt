<?php
/**
 * @file
 * learning_sections.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function learning_sections_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function learning_sections_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function learning_sections_node_info() {
  $items = array(
    'learning_sections' => array(
      'name' => t('Learning Sections'),
      'base' => 'node_content',
      'description' => t('The section titles and summaries on learning page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
