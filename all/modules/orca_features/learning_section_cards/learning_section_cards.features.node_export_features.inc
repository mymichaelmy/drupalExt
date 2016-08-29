<?php
/**
 * @file
 * learning_section_cards.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function learning_section_cards_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'183\',
      \'uid\' => \'1\',
      \'title\' => \'Methods\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'89f25f97-41b8-4aee-85d8-d85cd9b80d71\',
      \'nid\' => \'79\',
      \'type\' => \'learning_sections\',
      \'language\' => \'und\',
      \'created\' => \'1446695859\',
      \'changed\' => \'1446695859\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'41d18d45-5a67-4638-82d0-5a485c90c16a\',
      \'revision_timestamp\' => \'1446695859\',
      \'revision_uid\' => \'1\',
      \'field_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Method Card\',
          ),
        ),
      ),
      \'field_section_summary\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Our method cards walk you through a typical product development lifecycle where the design and feature decisions are focused on the end user. While most methods can be applied on their own, we do provide a suggested sequence.\',
            \'format\' => NULL,
            \'safe_value\' => \'Our method cards walk you through a typical product development lifecycle where the design and feature decisions are focused on the end user. While most methods can be applied on their own, we do provide a suggested sequence.\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1446510206\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'nponna\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'88\',
        \'source\' => \'node/79\',
        \'alias\' => \'content/methods\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'184\',
      \'uid\' => \'1\',
      \'title\' => \'Design Services\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'cd3b9569-740a-4b8e-8c1d-0c3ea56c23f4\',
      \'nid\' => \'80\',
      \'type\' => \'learning_sections\',
      \'language\' => \'und\',
      \'created\' => \'1446695859\',
      \'changed\' => \'1446695859\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'1c7d74dd-82b3-4154-8976-0f8eb134b78c\',
      \'revision_timestamp\' => \'1446695859\',
      \'revision_uid\' => \'1\',
      \'field_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Service Card\',
          ),
        ),
      ),
      \'field_section_summary\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Humanize business software with SAP User Experience Design Services!\',
            \'format\' => NULL,
            \'safe_value\' => \'Humanize business software with SAP User Experience Design Services!\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1446510276\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'nponna\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'89\',
        \'source\' => \'node/80\',
        \'alias\' => \'content/design-services\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'185\',
      \'uid\' => \'1\',
      \'title\' => \'Guides and Courses\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'ff598c73-a502-445b-b5de-3782a5750b59\',
      \'nid\' => \'81\',
      \'type\' => \'learning_sections\',
      \'language\' => \'und\',
      \'created\' => \'1446695859\',
      \'changed\' => \'1446695859\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'425aed70-7954-4b0c-82e5-7d68c10e1eb3\',
      \'revision_timestamp\' => \'1446695859\',
      \'revision_uid\' => \'1\',
      \'field_type\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Course Card\',
          ),
        ),
      ),
      \'field_section_summary\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Learn about the Fiori guidelines and how to apply them, or take a course to get a feel for design thinking and related topics such as User Research and Design\',
            \'format\' => NULL,
            \'safe_value\' => \'Learn about the Fiori guidelines and how to apply them, or take a course to get a feel for design thinking and related topics such as User Research and Design\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1446510329\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'nponna\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'90\',
        \'source\' => \'node/81\',
        \'alias\' => \'content/guides-and-courses\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
