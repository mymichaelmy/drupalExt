<?php
/**
 * @file
 * method_card_ext.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function method_card_ext_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function method_card_ext_node_info() {
  $items = array(
    'method_card' => array(
      'name' => t('Method Card'),
      'base' => 'node_content',
      'description' => t('Playbook method card'),
      'has_title' => '1',
      'title_label' => t('Method Card Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
