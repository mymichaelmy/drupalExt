<?php
/**
 * @file
 * cookbook_new_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cookbook_new_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cookbook_new_content_type_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function cookbook_new_content_type_node_info() {
  $items = array(
    'class_tip' => array(
      'name' => t('Classroom Management'),
      'base' => 'node_content',
      'description' => t('Classroom management tips for professors'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'course_example' => array(
      'name' => t('Course Example'),
      'base' => 'node_content',
      'description' => t('course example from professors'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'stoke' => array(
      'name' => t('Stoke'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
