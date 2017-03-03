<?php
/**
 * @file
 * method_card_ext_monsoom.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function method_card_ext_monsoom_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function method_card_ext_monsoom_node_info() {
  $items = array(
    'method_card' => array(
      'name' => t('Design Thinking Lessons'),
      'base' => 'node_content',
      'description' => t('Playbook method card'),
      'has_title' => '1',
      'title_label' => t('Method Card Name'),
      'help' => t('<img class="copy-image" alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by-nc-sa/4.0/88x31.png"> <br />
The cookbook is a collaboration between SAP and the Design Lab at UC San Diego. This work is licensed under a Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License. The recipes you submitted automatically conform to this license. '),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
