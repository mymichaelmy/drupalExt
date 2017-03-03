<?php
/**
 * @file
 * cookbook_new_content_type_monsoon.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cookbook_new_content_type_monsoon_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function cookbook_new_content_type_monsoon_node_info() {
  $items = array(
    'class_tip' => array(
      'name' => t('Classroom Management'),
      'base' => 'node_content',
      'description' => t('Classroom management tips for professors'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('<img class="copy-image" alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by-nc-sa/4.0/88x31.png"> <br />
The cookbook is a collaboration between SAP and the Design Lab at UC San Diego. This work is licensed under a Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License. The recipes you submitted automatically conform to this license. '),
    ),
    'course_example' => array(
      'name' => t('Course Example'),
      'base' => 'node_content',
      'description' => t('course example from professors'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('<img class="copy-image" alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by-nc-sa/4.0/88x31.png"> <br />
The cookbook is a collaboration between SAP and the Design Lab at UC San Diego. This work is licensed under a Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License. The recipes you submitted automatically conform to this license. '),
    ),
    'stoke' => array(
      'name' => t('Stoke'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('<img class="copy-image" alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by-nc-sa/4.0/88x31.png"> <br />
The cookbook is a collaboration between SAP and the Design Lab at UC San Diego. This work is licensed under a Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License. The recipes you submitted automatically conform to this license. '),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
