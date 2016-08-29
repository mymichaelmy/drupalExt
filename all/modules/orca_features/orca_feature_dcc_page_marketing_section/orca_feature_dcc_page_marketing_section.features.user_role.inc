<?php
/**
 * @file
 * orca_feature_dcc_page_marketing_section.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function orca_feature_dcc_page_marketing_section_user_default_roles() {
  $roles = array();

  // Exported role: DCC Page Marketing Section Manager.
  $roles['DCC Page Marketing Section Manager'] = array(
    'name' => 'DCC Page Marketing Section Manager',
    'weight' => 6,
  );

  return $roles;
}
