<?php
/**
 * @file
 * orca_feature_dcc_ux_view_section.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function orca_feature_dcc_ux_view_section_user_default_roles() {
  $roles = array();

  // Exported role: DCC section author.
  $roles['DCC section author'] = array(
    'name' => 'DCC section author',
    'weight' => 3,
  );

  return $roles;
}
