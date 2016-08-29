<?php
/**
 * @file
 * orca_features_import_html_settings.features.import_html_profile.inc
 */

/**
 * Implements hook_import_html_profile_defaults().
 */
function orca_features_import_html_settings_import_html_profile_defaults() {
  $import_html_profiles = array();

  // Exported setting (only the non-default values): default
  $import_html_profiles['default'] = array(
    'translation_template' => FALSE,
    'content_tag_id' => 'wrapper',
    'content_type' => 'help_page',
    'preferred_filter' => 'full_html',
    'file_exclusions' => '^_
/_
CVS
^\\.
/\\.',
    'force_tidy' => 0,
    'legacy_aliases' => 0,
    'relink_files' => TRUE,
    'allow_bad_urls' => TRUE,
    'create_menus' => 0,
    'manual_field_mappings' => array(
      'body' => array(
        'predicates' => array(
          0 => 'wrapper',
        ),
      ),
      'field_related_links' => array(
        'predicates' => array(
          0 => 'related-links',
        ),
      ),
      'field_page_key' => array(
        'predicates' => array(
          0 => 'page-key',
        ),
      ),
    ),
  );

  return $import_html_profiles;
}
