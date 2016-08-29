<?php
/**
 * @file
 * orca_feature_blogs.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function orca_feature_blogs_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'tag1',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3b7657d3-c707-404f-9771-8cb6f719b20e',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'category2',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '649794d7-3501-4c24-9d41-29bac7772822',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'category1',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd75bb2a2-2da7-4c20-b02b-56fd9545a437',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'tag2',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f91e6b33-7f4a-4a03-bbf1-1b3c6d486855',
    'vocabulary_machine_name' => 'tags',
  );
  return $terms;
}
