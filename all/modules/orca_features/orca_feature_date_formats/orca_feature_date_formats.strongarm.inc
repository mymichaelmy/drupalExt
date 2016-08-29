<?php
/**
 * @file
 * orca_feature_date_formats.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function orca_feature_date_formats_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_build';
  $strongarm->value = 'm/d/y';
  $export['date_format_build'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_global';
  $strongarm->value = 'D, d M Y H:i:s T';
  $export['date_format_global'] = $strongarm;

  return $export;
}
