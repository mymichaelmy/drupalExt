<?php
/**
 * @file
 * cookbook_content_type.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cookbook_content_type_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'class_tips_homepage';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Class-Tips-Homepage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Class Tips';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['top_child_object'] = '';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = 'summary';
  /* Field: Content: Card image */
  $handler->display->display_options['fields']['field_card_image']['id'] = 'field_card_image';
  $handler->display->display_options['fields']['field_card_image']['table'] = 'field_data_field_card_image';
  $handler->display->display_options['fields']['field_card_image']['field'] = 'field_card_image';
  $handler->display->display_options['fields']['field_card_image']['label'] = 'card_image';
  $handler->display->display_options['fields']['field_card_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_card_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Order Number */
  $handler->display->display_options['fields']['field_order_number']['id'] = 'field_order_number';
  $handler->display->display_options['fields']['field_order_number']['table'] = 'field_data_field_order_number';
  $handler->display->display_options['fields']['field_order_number']['field'] = 'field_order_number';
  $handler->display->display_options['fields']['field_order_number']['label'] = '';
  $handler->display->display_options['fields']['field_order_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_order_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Needs */
  $handler->display->display_options['fields']['field_needs']['id'] = 'field_needs';
  $handler->display->display_options['fields']['field_needs']['table'] = 'field_data_field_needs';
  $handler->display->display_options['fields']['field_needs']['field'] = 'field_needs';
  $handler->display->display_options['fields']['field_needs']['label'] = '';
  $handler->display->display_options['fields']['field_needs']['element_label_colon'] = FALSE;
  /* Field: Content: Consumption time */
  $handler->display->display_options['fields']['field_consumption_time']['id'] = 'field_consumption_time';
  $handler->display->display_options['fields']['field_consumption_time']['table'] = 'field_data_field_consumption_time';
  $handler->display->display_options['fields']['field_consumption_time']['field'] = 'field_consumption_time';
  $handler->display->display_options['fields']['field_consumption_time']['label'] = '';
  $handler->display->display_options['fields']['field_consumption_time']['element_label_colon'] = FALSE;
  /* Field: Content: Participants */
  $handler->display->display_options['fields']['field_participants']['id'] = 'field_participants';
  $handler->display->display_options['fields']['field_participants']['table'] = 'field_data_field_participants';
  $handler->display->display_options['fields']['field_participants']['field'] = 'field_participants';
  $handler->display->display_options['fields']['field_participants']['label'] = '';
  $handler->display->display_options['fields']['field_participants']['element_label_colon'] = FALSE;
  /* Field: Content: author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  /* Field: Content: author_title */
  $handler->display->display_options['fields']['field_author_title']['id'] = 'field_author_title';
  $handler->display->display_options['fields']['field_author_title']['table'] = 'field_data_field_author_title';
  $handler->display->display_options['fields']['field_author_title']['field'] = 'field_author_title';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'build';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'build';
  /* Field: Content: author */
  $handler->display->display_options['fields']['field_author_1']['id'] = 'field_author_1';
  $handler->display->display_options['fields']['field_author_1']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author_1']['field'] = 'field_author';
  /* Field: Content: endorse */
  $handler->display->display_options['fields']['field_endorse']['id'] = 'field_endorse';
  $handler->display->display_options['fields']['field_endorse']['table'] = 'field_data_field_endorse';
  $handler->display->display_options['fields']['field_endorse']['field'] = 'field_endorse';
  $handler->display->display_options['fields']['field_endorse']['delta_offset'] = '0';
  /* Field: Content: recommended */
  $handler->display->display_options['fields']['field_recommended']['id'] = 'field_recommended';
  $handler->display->display_options['fields']['field_recommended']['table'] = 'field_data_field_recommended';
  $handler->display->display_options['fields']['field_recommended']['field'] = 'field_recommended';
  $handler->display->display_options['fields']['field_recommended']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'class_tip' => 'class_tip',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'content/class-tips-homepage';
  $export['class_tips_homepage'] = $view;

  $view = new view();
  $view->name = 'course_examples_homepage';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Course-Examples-Homepage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Class Tips';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['top_child_object'] = '';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = 'summary';
  /* Field: Content: Card image */
  $handler->display->display_options['fields']['field_card_image']['id'] = 'field_card_image';
  $handler->display->display_options['fields']['field_card_image']['table'] = 'field_data_field_card_image';
  $handler->display->display_options['fields']['field_card_image']['field'] = 'field_card_image';
  $handler->display->display_options['fields']['field_card_image']['label'] = 'card_image';
  $handler->display->display_options['fields']['field_card_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_card_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Order Number */
  $handler->display->display_options['fields']['field_order_number']['id'] = 'field_order_number';
  $handler->display->display_options['fields']['field_order_number']['table'] = 'field_data_field_order_number';
  $handler->display->display_options['fields']['field_order_number']['field'] = 'field_order_number';
  $handler->display->display_options['fields']['field_order_number']['label'] = '';
  $handler->display->display_options['fields']['field_order_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_order_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Needs */
  $handler->display->display_options['fields']['field_needs']['id'] = 'field_needs';
  $handler->display->display_options['fields']['field_needs']['table'] = 'field_data_field_needs';
  $handler->display->display_options['fields']['field_needs']['field'] = 'field_needs';
  $handler->display->display_options['fields']['field_needs']['label'] = '';
  $handler->display->display_options['fields']['field_needs']['element_label_colon'] = FALSE;
  /* Field: Content: Consumption time */
  $handler->display->display_options['fields']['field_consumption_time']['id'] = 'field_consumption_time';
  $handler->display->display_options['fields']['field_consumption_time']['table'] = 'field_data_field_consumption_time';
  $handler->display->display_options['fields']['field_consumption_time']['field'] = 'field_consumption_time';
  $handler->display->display_options['fields']['field_consumption_time']['label'] = '';
  $handler->display->display_options['fields']['field_consumption_time']['element_label_colon'] = FALSE;
  /* Field: Content: Participants */
  $handler->display->display_options['fields']['field_participants']['id'] = 'field_participants';
  $handler->display->display_options['fields']['field_participants']['table'] = 'field_data_field_participants';
  $handler->display->display_options['fields']['field_participants']['field'] = 'field_participants';
  $handler->display->display_options['fields']['field_participants']['label'] = '';
  $handler->display->display_options['fields']['field_participants']['element_label_colon'] = FALSE;
  /* Field: Content: author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  /* Field: Content: author_title */
  $handler->display->display_options['fields']['field_author_title']['id'] = 'field_author_title';
  $handler->display->display_options['fields']['field_author_title']['table'] = 'field_data_field_author_title';
  $handler->display->display_options['fields']['field_author_title']['field'] = 'field_author_title';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'build';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'build';
  /* Field: Content: author */
  $handler->display->display_options['fields']['field_author_1']['id'] = 'field_author_1';
  $handler->display->display_options['fields']['field_author_1']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author_1']['field'] = 'field_author';
  /* Field: Content: endorse */
  $handler->display->display_options['fields']['field_endorse']['id'] = 'field_endorse';
  $handler->display->display_options['fields']['field_endorse']['table'] = 'field_data_field_endorse';
  $handler->display->display_options['fields']['field_endorse']['field'] = 'field_endorse';
  $handler->display->display_options['fields']['field_endorse']['delta_offset'] = '0';
  /* Field: Content: recommended */
  $handler->display->display_options['fields']['field_recommended']['id'] = 'field_recommended';
  $handler->display->display_options['fields']['field_recommended']['table'] = 'field_data_field_recommended';
  $handler->display->display_options['fields']['field_recommended']['field'] = 'field_recommended';
  $handler->display->display_options['fields']['field_recommended']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course_example' => 'course_example',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'content/course-examples-homepage';
  $export['course_examples_homepage'] = $view;

  $view = new view();
  $view->name = 'method_cards_homepage';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Method-Cards-Homepage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Methods';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['top_child_object'] = '';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = 'summary';
  /* Field: Content: Card image */
  $handler->display->display_options['fields']['field_card_image']['id'] = 'field_card_image';
  $handler->display->display_options['fields']['field_card_image']['table'] = 'field_data_field_card_image';
  $handler->display->display_options['fields']['field_card_image']['field'] = 'field_card_image';
  $handler->display->display_options['fields']['field_card_image']['label'] = 'card_image';
  $handler->display->display_options['fields']['field_card_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_card_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Video thumbnail */
  $handler->display->display_options['fields']['field_video_thumbnail']['id'] = 'field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['table'] = 'field_data_field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['field'] = 'field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['label'] = 'video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = 'video';
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'fid';
  /* Field: Content: Order Number */
  $handler->display->display_options['fields']['field_order_number']['id'] = 'field_order_number';
  $handler->display->display_options['fields']['field_order_number']['table'] = 'field_data_field_order_number';
  $handler->display->display_options['fields']['field_order_number']['field'] = 'field_order_number';
  $handler->display->display_options['fields']['field_order_number']['label'] = '';
  $handler->display->display_options['fields']['field_order_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_order_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Needs */
  $handler->display->display_options['fields']['field_needs']['id'] = 'field_needs';
  $handler->display->display_options['fields']['field_needs']['table'] = 'field_data_field_needs';
  $handler->display->display_options['fields']['field_needs']['field'] = 'field_needs';
  $handler->display->display_options['fields']['field_needs']['label'] = '';
  $handler->display->display_options['fields']['field_needs']['element_label_colon'] = FALSE;
  /* Field: Content: Consumption time */
  $handler->display->display_options['fields']['field_consumption_time']['id'] = 'field_consumption_time';
  $handler->display->display_options['fields']['field_consumption_time']['table'] = 'field_data_field_consumption_time';
  $handler->display->display_options['fields']['field_consumption_time']['field'] = 'field_consumption_time';
  $handler->display->display_options['fields']['field_consumption_time']['label'] = '';
  $handler->display->display_options['fields']['field_consumption_time']['element_label_colon'] = FALSE;
  /* Field: Content: Participants */
  $handler->display->display_options['fields']['field_participants']['id'] = 'field_participants';
  $handler->display->display_options['fields']['field_participants']['table'] = 'field_data_field_participants';
  $handler->display->display_options['fields']['field_participants']['field'] = 'field_participants';
  $handler->display->display_options['fields']['field_participants']['label'] = '';
  $handler->display->display_options['fields']['field_participants']['element_label_colon'] = FALSE;
  /* Field: Content: DLD Step */
  $handler->display->display_options['fields']['field_dld_step']['id'] = 'field_dld_step';
  $handler->display->display_options['fields']['field_dld_step']['table'] = 'field_data_field_dld_step';
  $handler->display->display_options['fields']['field_dld_step']['field'] = 'field_dld_step';
  $handler->display->display_options['fields']['field_dld_step']['label'] = 'DLD_Step';
  /* Field: Content: author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  /* Field: Content: endorse */
  $handler->display->display_options['fields']['field_endorse']['id'] = 'field_endorse';
  $handler->display->display_options['fields']['field_endorse']['table'] = 'field_data_field_endorse';
  $handler->display->display_options['fields']['field_endorse']['field'] = 'field_endorse';
  $handler->display->display_options['fields']['field_endorse']['delta_offset'] = '0';
  /* Field: Content: recommended */
  $handler->display->display_options['fields']['field_recommended']['id'] = 'field_recommended';
  $handler->display->display_options['fields']['field_recommended']['table'] = 'field_data_field_recommended';
  $handler->display->display_options['fields']['field_recommended']['field'] = 'field_recommended';
  $handler->display->display_options['fields']['field_recommended']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'method_card' => 'method_card',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'content/method-cards-homepage';
  $export['method_cards_homepage'] = $view;

  return $export;
}
