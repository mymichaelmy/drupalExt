<?php
/**
 * @file
 * orca_feature_home_links.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function orca_feature_home_links_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create home_link content'.
  $permissions['create home_link content'] = array(
    'name' => 'create home_link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any home_link content'.
  $permissions['delete any home_link content'] = array(
    'name' => 'delete any home_link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own home_link content'.
  $permissions['delete own home_link content'] = array(
    'name' => 'delete own home_link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any home_link content'.
  $permissions['edit any home_link content'] = array(
    'name' => 'edit any home_link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own home_link content'.
  $permissions['edit own home_link content'] = array(
    'name' => 'edit own home_link content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
