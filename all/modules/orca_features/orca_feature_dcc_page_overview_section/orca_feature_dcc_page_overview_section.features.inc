<?php
/**
 * @file
 * orca_feature_dcc_page_overview_section.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function orca_feature_dcc_page_overview_section_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function orca_feature_dcc_page_overview_section_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function orca_feature_dcc_page_overview_section_node_info() {
  $items = array(
    'dcc_page_overview_cards' => array(
      'name' => t('DCC Page Overview Cards'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('DCC Page Overview Cards Name'),
      'help' => '',
    ),
    'dcc_page_overview_section' => array(
      'name' => t('DCC Page Overview Section'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('DCC Page Overview Section Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
