<?php
/**
 * @file
 * service_cards.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function service_cards_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Our Services',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'service_card',
  'language' => 'und',
  'created' => 1447941370,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '10c98f13-a023-467d-836e-73c5fb8870e2',
  'field_button_text' => array(),
  'field_launch_url' => array(
    'und' => array(
      0 => array(
        'value' => 'https://experience.sap.com/designservices/services',
        'format' => NULL,
      ),
    ),
  ),
  'field_summary' => array(
    'und' => array(
      0 => array(
        'value' => 'Find out which UX Design Services SAP offers',
        'format' => 'unfiltered_html',
      ),
    ),
  ),
  'field_video' => array(),
  'field_card_image' => array(
    'und' => array(
      0 => array(
        'uid' => 1,
        'filename' => 'Our service.png',
        'uri' => 'public://Our service.png',
        'filemime' => 'image/png',
        'filesize' => 8110,
        'status' => 1,
        'type' => 'image',
        'uuid' => '11f189e6-04ca-4ca5-8cc3-a84d9794b428',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 255,
          'width' => 176,
        ),
        'alt' => '',
        'title' => '',
        'height' => 255,
        'width' => 176,
        'uuid_features_file_path' => 'sites/default/files/export/Our service.png',
      ),
    ),
  ),
  'field_video_thumbnail' => array(),
  'field_feature_on_the_home_page' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'field_order_number' => array(
    'und' => array(
      0 => array(
        'value' => 1,
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
  'date' => '2015-11-19 08:56:10 -0500',
  'user_uuid' => '829e5734-822e-4b10-9f96-f8a7dd57e904',
);
  $nodes[] = array(
  'title' => 'HOW DOES IT WORK?',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'service_card',
  'language' => 'und',
  'created' => 1447941370,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1a5c8a15-ae98-4866-b64c-105f68a6a8e7',
  'field_button_text' => array(
    'und' => array(
      0 => array(
        'value' => 'CONTACT US',
        'format' => NULL,
      ),
    ),
  ),
  'field_launch_url' => array(),
  'field_summary' => array(
    'und' => array(
      0 => array(
        'value' => 'Humanize business software with SAP User Experience Design Services! SAP offers a new and broad portfolio of UX design services that guide organizations and companies into a user centric design perspective.',
        'format' => 'unfiltered_html',
      ),
    ),
  ),
  'field_video' => array(
    'und' => array(
      0 => array(
        'uid' => 1,
        'filename' => '359090568.mp4',
        'uri' => 'public://359090568.mp4',
        'filemime' => 'video/mp4',
        'filesize' => 7721666,
        'status' => 1,
        'type' => 'video',
        'uuid' => '8bc0fd00-e502-4452-b994-b91de898aecb',
        'rdf_mapping' => array(),
        'metadata' => array(),
        'alt' => '',
        'title' => '',
        'display' => 1,
        'description' => '',
        'uuid_features_file_path' => 'sites/default/files/export/359090568.mp4',
      ),
    ),
  ),
  'field_card_image' => array(),
  'field_video_thumbnail' => array(
    'und' => array(
      0 => array(
        'uid' => 1,
        'filename' => '515845632.jpg',
        'uri' => 'public://515845632.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 7709,
        'status' => 1,
        'type' => 'image',
        'uuid' => '088b3361-5d4a-4b33-89f4-7e412e3e26c1',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 229,
          'width' => 407,
        ),
        'alt' => '',
        'title' => '',
        'height' => 229,
        'width' => 407,
        'uuid_features_file_path' => 'sites/default/files/export/515845632.jpg',
      ),
    ),
  ),
  'field_feature_on_the_home_page' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_order_number' => array(
    'und' => array(
      0 => array(
        'value' => 0,
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
  'date' => '2015-11-19 08:56:10 -0500',
  'user_uuid' => '829e5734-822e-4b10-9f96-f8a7dd57e904',
);
  $nodes[] = array(
  'title' => 'Our Approach',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'service_card',
  'language' => 'und',
  'created' => 1447941370,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '263cdf24-0705-46a2-afe1-af97a4b5e1dc',
  'field_button_text' => array(),
  'field_launch_url' => array(
    'und' => array(
      0 => array(
        'value' => 'https://experience.sap.com/designservices/approach',
        'format' => NULL,
      ),
    ),
  ),
  'field_summary' => array(
    'und' => array(
      0 => array(
        'value' => 'Learn how we approach User Centered Design Projects 
',
        'format' => 'unfiltered_html',
      ),
    ),
  ),
  'field_video' => array(),
  'field_card_image' => array(
    'und' => array(
      0 => array(
        'uid' => 1,
        'filename' => 'Our Approach.png',
        'uri' => 'public://Our Approach.png',
        'filemime' => 'image/png',
        'filesize' => 9635,
        'status' => 1,
        'type' => 'image',
        'uuid' => '8bb1f4e9-c96f-4306-bc3e-77b3179e121f',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 255,
          'width' => 176,
        ),
        'alt' => '',
        'title' => '',
        'height' => 255,
        'width' => 176,
        'uuid_features_file_path' => 'sites/default/files/export/Our Approach.png',
      ),
    ),
  ),
  'field_video_thumbnail' => array(),
  'field_feature_on_the_home_page' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_order_number' => array(
    'und' => array(
      0 => array(
        'value' => 3,
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
  'date' => '2015-11-19 08:56:10 -0500',
  'user_uuid' => '829e5734-822e-4b10-9f96-f8a7dd57e904',
);
  $nodes[] = array(
  'title' => 'Calculate the value of UX',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'service_card',
  'language' => 'und',
  'created' => 1447941370,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '284a9a19-fa78-4c10-9b16-77939bc0cf63',
  'field_button_text' => array(),
  'field_launch_url' => array(
    'und' => array(
      0 => array(
        'value' => 'http://www.sapcampaigns.de/us/UX_Calculator/',
        'format' => NULL,
      ),
    ),
  ),
  'field_summary' => array(
    'und' => array(
      0 => array(
        'value' => 'Calculate your potential savings when investing in UX with our UX Value Calculator',
        'format' => 'unfiltered_html',
      ),
    ),
  ),
  'field_video' => array(),
  'field_card_image' => array(
    'und' => array(
      0 => array(
        'uid' => 1,
        'filename' => 'Over Value.png',
        'uri' => 'public://Over Value.png',
        'filemime' => 'image/png',
        'filesize' => 7959,
        'status' => 1,
        'type' => 'image',
        'uuid' => '57bd91c7-5efb-40be-b1a4-9198650c92fd',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 255,
          'width' => 176,
        ),
        'alt' => '',
        'title' => '',
        'height' => 255,
        'width' => 176,
        'uuid_features_file_path' => 'sites/default/files/export/Over Value.png',
      ),
    ),
  ),
  'field_video_thumbnail' => array(),
  'field_feature_on_the_home_page' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_order_number' => array(
    'und' => array(
      0 => array(
        'value' => 5,
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
  'date' => '2015-11-19 08:56:10 -0500',
  'user_uuid' => '829e5734-822e-4b10-9f96-f8a7dd57e904',
);
  $nodes[] = array(
  'title' => 'Our Work',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'service_card',
  'language' => 'und',
  'created' => 1447941370,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e1118568-d2ae-4bd2-8c98-424002d67dde',
  'field_button_text' => array(),
  'field_launch_url' => array(
    'und' => array(
      0 => array(
        'value' => 'https://experience.sap.com/designservices/work',
        'format' => NULL,
      ),
    ),
  ),
  'field_summary' => array(
    'und' => array(
      0 => array(
        'value' => 'Check out our customer projects , the results, artifacts and how we got there 
',
        'format' => 'unfiltered_html',
      ),
    ),
  ),
  'field_video' => array(),
  'field_card_image' => array(
    'und' => array(
      0 => array(
        'uid' => 1,
        'filename' => 'Our Works.png',
        'uri' => 'public://Our Works.png',
        'filemime' => 'image/png',
        'filesize' => 5748,
        'status' => 1,
        'type' => 'image',
        'uuid' => '5f70b5ef-42bc-4931-8b4a-974924749fe8',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 255,
          'width' => 176,
        ),
        'alt' => '',
        'title' => '',
        'height' => 255,
        'width' => 176,
        'uuid_features_file_path' => 'sites/default/files/export/Our Works.png',
      ),
    ),
  ),
  'field_video_thumbnail' => array(),
  'field_feature_on_the_home_page' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_order_number' => array(
    'und' => array(
      0 => array(
        'value' => 3,
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
  'date' => '2015-11-19 08:56:10 -0500',
  'user_uuid' => '829e5734-822e-4b10-9f96-f8a7dd57e904',
);
  return $nodes;
}
