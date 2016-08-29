<?php
/**
 * @file
 * orca_feature_dcc_page_header_section.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function orca_feature_dcc_page_header_section_user_default_roles() {
  $roles = array();

  // Exported role: DCC Page Header Section Manager.
  $roles['DCC Page Header Section Manager'] = array(
    'name' => 'DCC Page Header Section Manager',
    'weight' => 5,
  );

  return $roles;
}
