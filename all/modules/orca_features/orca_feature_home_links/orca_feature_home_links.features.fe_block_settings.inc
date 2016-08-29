<?php
/**
 * @file
 * orca_feature_home_links.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function orca_feature_home_links_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-home_links-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'home_links-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
