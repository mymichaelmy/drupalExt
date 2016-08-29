<?php
/**
 * @file
 * learning_section_cards.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function learning_section_cards_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Design Services',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'learning_sections',
  'language' => 'und',
  'created' => 1447942001,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1c7d74dd-82b3-4154-8976-0f8eb134b78c',
  'field_section_summary' => array(
    'und' => array(
      0 => array(
        'value' => 'Humanize business software with SAP User Experience Design Services!',
        'format' => NULL,
      ),
    ),
  ),
  'field_type' => array(
    'und' => array(
      0 => array(
        'value' => 'Service Card',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-11-19 09:06:41 -0500',
  'user_uuid' => '5f3358a2-269d-4c2c-b38e-28ad21b29cde',
);
  $nodes[] = array(
  'title' => 'Methods',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'learning_sections',
  'language' => 'und',
  'created' => 1447942001,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '41d18d45-5a67-4638-82d0-5a485c90c16a',
  'field_section_summary' => array(
    'und' => array(
      0 => array(
        'value' => 'Our method cards walk you through a typical product development lifecycle where the design and feature decisions are focused on the end user. While most methods can be applied on their own, we do provide a suggested sequence.',
        'format' => NULL,
      ),
    ),
  ),
  'field_type' => array(
    'und' => array(
      0 => array(
        'value' => 'Method Card',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-11-19 09:06:41 -0500',
  'user_uuid' => '5f3358a2-269d-4c2c-b38e-28ad21b29cde',
);
  $nodes[] = array(
  'title' => 'Guides and Courses',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'learning_sections',
  'language' => 'und',
  'created' => 1447942001,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '425aed70-7954-4b0c-82e5-7d68c10e1eb3',
  'field_section_summary' => array(
    'und' => array(
      0 => array(
        'value' => 'Learn about the Fiori guidelines and how to apply them, or take a course to get a feel for design thinking and related topics such as User Research and Design',
        'format' => NULL,
      ),
    ),
  ),
  'field_type' => array(
    'und' => array(
      0 => array(
        'value' => 'Course Card',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-11-19 09:06:41 -0500',
  'user_uuid' => '5f3358a2-269d-4c2c-b38e-28ad21b29cde',
);
  return $nodes;
}
