<?php
/**
 * @file
 * orca_feature_dcc_page_customer_section.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function orca_feature_dcc_page_customer_section_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function orca_feature_dcc_page_customer_section_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function orca_feature_dcc_page_customer_section_node_info() {
  $items = array(
    'dcc_page_customer_cards' => array(
      'name' => t('DCC Page Customer Cards'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('DCC Page Customer Card Name'),
      'help' => '',
    ),
    'dcc_page_customer_section' => array(
      'name' => t('DCC Page Customer Section'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('DCC Page Customer Section Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
