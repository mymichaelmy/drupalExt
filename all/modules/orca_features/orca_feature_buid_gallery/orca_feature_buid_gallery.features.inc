<?php
/**
 * @file
 * orca_feature_buid_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function orca_feature_buid_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function orca_feature_buid_gallery_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function orca_feature_buid_gallery_image_default_styles() {
  $styles = array();

  // Exported image style: image_size.
  $styles['image_size'] = array(
    'label' => 'Image SIZE',
    'effects' => array(
      1 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 300,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function orca_feature_buid_gallery_node_info() {
  $items = array(
    'mapped' => array(
      'name' => t('Mapped'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
