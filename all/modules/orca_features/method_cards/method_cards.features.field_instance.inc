<?php
/**
 * @file
 * method_cards.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function method_cards_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-method_card-field_dld_step'.
  $field_instances['node-method_card-field_dld_step'] = array(
    'bundle' => 'method_card',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose the DLD step to which this method card is associated with.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 25,
      ),
      'live_results_search' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dld_step',
    'label' => 'DLD Step',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 43,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Choose the DLD step to which this method card is associated with.');
  t('DLD Step');

  return $field_instances;
}
