<?php
/**
 * @file
 * orca_feature_roles_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function orca_feature_roles_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Blog Content Manager.
  $roles['Blog Content Manager'] = array(
    'name' => 'Blog Content Manager',
    'weight' => 10,
  );

  // Exported role: Cron Administrator.
  $roles['Cron Administrator'] = array(
    'name' => 'Cron Administrator',
    'weight' => 5,
  );

  // Exported role: DCC Page AppHaus Section Manager.
  $roles['DCC Page AppHaus Section Manager'] = array(
    'name' => 'DCC Page AppHaus Section Manager',
    'weight' => 11,
  );

  // Exported role: DCC Page Customer Section Manager.
  $roles['DCC Page Customer Section Manager'] = array(
    'name' => 'DCC Page Customer Section Manager',
    'weight' => 12,
  );

  // Exported role: DCC Page Header Section Manager.
  $roles['DCC Page Header Section Manager'] = array(
    'name' => 'DCC Page Header Section Manager',
    'weight' => 5,
  );

  // Exported role: DCC Page Marketing Section Manager.
  $roles['DCC Page Marketing Section Manager'] = array(
    'name' => 'DCC Page Marketing Section Manager',
    'weight' => 6,
  );

  // Exported role: DCC Page Overview Section Manager.
  $roles['DCC Page Overview Section Manager'] = array(
    'name' => 'DCC Page Overview Section Manager',
    'weight' => 4,
  );

  // Exported role: DCC section author.
  $roles['DCC section author'] = array(
    'name' => 'DCC section author',
    'weight' => 3,
  );

  // Exported role: Forums Admin.
  $roles['Forums Admin'] = array(
    'name' => 'Forums Admin',
    'weight' => 7,
  );

  // Exported role: Gallery Content Manager.
  $roles['Gallery Content Manager'] = array(
    'name' => 'Gallery Content Manager',
    'weight' => 4,
  );

  // Exported role: Learning Card Author.
  $roles['Learning Card Author'] = array(
    'name' => 'Learning Card Author',
    'weight' => 3,
  );

  // Exported role: Legal Content Manager.
  $roles['Legal Content Manager'] = array(
    'name' => 'Legal Content Manager',
    'weight' => 6,
  );

  // Exported role: Splash Content Manager.
  $roles['Splash Content Manager'] = array(
    'name' => 'Splash Content Manager',
    'weight' => 8,
  );

  // Exported role: Tool Card Admin.
  $roles['Tool Card Admin'] = array(
    'name' => 'Tool Card Admin',
    'weight' => 9,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
