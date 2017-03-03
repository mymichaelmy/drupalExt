<?php
/**
 * @file
 * method_card_ext_monsoom.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function method_card_ext_monsoom_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_method_card';
  $strongarm->value = 0;
  $export['comment_anonymous_method_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_method_card';
  $strongarm->value = 1;
  $export['comment_default_mode_method_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_method_card';
  $strongarm->value = '50';
  $export['comment_default_per_page_method_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_method_card';
  $strongarm->value = 1;
  $export['comment_form_location_method_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_method_card';
  $strongarm->value = '2';
  $export['comment_method_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_method_card';
  $strongarm->value = '1';
  $export['comment_preview_method_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_method_card';
  $strongarm->value = 1;
  $export['comment_subject_field_method_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_method_card';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_method_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_method_card';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_method_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_method_card';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_method_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_method_card';
  $strongarm->value = '1';
  $export['node_preview_method_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_method_card';
  $strongarm->value = 1;
  $export['node_submitted_method_card'] = $strongarm;

  return $export;
}
