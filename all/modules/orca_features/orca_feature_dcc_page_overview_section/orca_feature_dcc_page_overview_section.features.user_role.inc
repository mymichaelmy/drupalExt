<?php
/**
 * @file
 * orca_feature_dcc_page_overview_section.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function orca_feature_dcc_page_overview_section_user_default_roles() {
  $roles = array();

  // Exported role: DCC Page Overview Section Manager.
  $roles['DCC Page Overview Section Manager'] = array(
    'name' => 'DCC Page Overview Section Manager',
    'weight' => 4,
  );

  return $roles;
}
