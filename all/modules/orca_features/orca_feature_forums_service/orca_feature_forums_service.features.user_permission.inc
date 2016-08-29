<?php
/**
 * @file
 * orca_feature_forums_service.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function orca_feature_forums_service_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer splashforum'.
  $permissions['administer splashforum'] = array(
    'name' => 'administer splashforum',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'splashforum',
  );

  // Exported permission: 'create forum content'.
  $permissions['create forum content'] = array(
    'name' => 'create forum content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own forum content'.
  $permissions['edit own forum content'] = array(
    'name' => 'edit own forum content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
