<?php
/**
 * @file
 * orca_feature_cards_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function orca_feature_cards_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function orca_feature_cards_content_types_node_info() {
  $items = array(
    'course_card' => array(
      'name' => t('Course Card'),
      'base' => 'node_content',
      'description' => t('Cards for Courses that are provided'),
      'has_title' => '1',
      'title_label' => t('Course Name'),
      'help' => '',
    ),
    'method_card' => array(
      'name' => t('Method Card'),
      'base' => 'node_content',
      'description' => t('Playbook method card'),
      'has_title' => '1',
      'title_label' => t('Method Card Name'),
      'help' => '',
    ),
    'service_card' => array(
      'name' => t('Service Card'),
      'base' => 'node_content',
      'description' => t('Cards for services we provide'),
      'has_title' => '1',
      'title_label' => t('Service Card name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
