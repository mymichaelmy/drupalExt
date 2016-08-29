<?php
/**
 * @file
 * method_cards.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function method_cards_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_dld_step'.
  $field_bases['field_dld_step'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_dld_step',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Scoping' => 'Scoping',
        '360 Research' => '360 Research',
        'Synthesize' => 'Synthesize',
        'Ideate' => 'Ideate',
        'Prototype' => 'Prototype',
        'Validate' => 'Validate',
        'Implement' => 'Implement',
        'Test' => 'Test',
        'Deploy' => 'Deploy',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
