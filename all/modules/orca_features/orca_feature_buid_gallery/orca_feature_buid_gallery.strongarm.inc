<?php
/**
 * @file
 * orca_feature_buid_gallery.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function orca_feature_buid_gallery_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__mapped';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '16',
        ),
        'metatags' => array(
          'weight' => '22',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__mapped'] = $strongarm;

  return $export;
}
