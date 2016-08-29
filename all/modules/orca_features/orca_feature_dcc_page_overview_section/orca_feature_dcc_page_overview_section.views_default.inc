<?php
/**
 * @file
 * orca_feature_dcc_page_overview_section.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function orca_feature_dcc_page_overview_section_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'dcc_page_overview_section';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'DCC Page Overview Section';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'DCC Page Overview Section';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 0;
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Section title */
  $handler->display->display_options['fields']['field_section_title']['id'] = 'field_section_title';
  $handler->display->display_options['fields']['field_section_title']['table'] = 'field_data_field_section_title';
  $handler->display->display_options['fields']['field_section_title']['field'] = 'field_section_title';
  $handler->display->display_options['fields']['field_section_title']['label'] = 'section_title';
  /* Field: Content: Descriptive text */
  $handler->display->display_options['fields']['field_descriptive_text']['id'] = 'field_descriptive_text';
  $handler->display->display_options['fields']['field_descriptive_text']['table'] = 'field_data_field_descriptive_text';
  $handler->display->display_options['fields']['field_descriptive_text']['field'] = 'field_descriptive_text';
  $handler->display->display_options['fields']['field_descriptive_text']['label'] = 'descriptive_text';
  /* Field: Content: Link title */
  $handler->display->display_options['fields']['field_link_title']['id'] = 'field_link_title';
  $handler->display->display_options['fields']['field_link_title']['table'] = 'field_data_field_link_title';
  $handler->display->display_options['fields']['field_link_title']['field'] = 'field_link_title';
  $handler->display->display_options['fields']['field_link_title']['label'] = 'link_title';
  /* Field: Content: Link URL */
  $handler->display->display_options['fields']['field_link_url']['id'] = 'field_link_url';
  $handler->display->display_options['fields']['field_link_url']['table'] = 'field_data_field_link_url';
  $handler->display->display_options['fields']['field_link_url']['field'] = 'field_link_url';
  $handler->display->display_options['fields']['field_link_url']['label'] = 'link_url';
  $handler->display->display_options['fields']['field_link_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_url']['type'] = 'link_title_plain';
  /* Field: Content: Video URL */
  $handler->display->display_options['fields']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['fields']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['label'] = 'video_url';
  $handler->display->display_options['fields']['field_video_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_video_url']['type'] = 'link_title_plain';
  /* Field: Content: Video Caption */
  $handler->display->display_options['fields']['field_video_caption']['id'] = 'field_video_caption';
  $handler->display->display_options['fields']['field_video_caption']['table'] = 'field_data_field_video_caption';
  $handler->display->display_options['fields']['field_video_caption']['field'] = 'field_video_caption';
  $handler->display->display_options['fields']['field_video_caption']['label'] = 'video_caption';
  /* Field: Content: Services section title */
  $handler->display->display_options['fields']['field_services_section_title']['id'] = 'field_services_section_title';
  $handler->display->display_options['fields']['field_services_section_title']['table'] = 'field_data_field_services_section_title';
  $handler->display->display_options['fields']['field_services_section_title']['field'] = 'field_services_section_title';
  $handler->display->display_options['fields']['field_services_section_title']['label'] = 'services_section_title';
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
  /* Field: Content: Bullet points */
  $handler->display->display_options['fields']['field_bullet_points']['id'] = 'field_bullet_points';
  $handler->display->display_options['fields']['field_bullet_points']['table'] = 'field_data_field_bullet_points';
  $handler->display->display_options['fields']['field_bullet_points']['field'] = 'field_bullet_points';
  $handler->display->display_options['fields']['field_bullet_points']['label'] = 'bullet_points';
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
  /* Field: Content: Order Number */
  $handler->display->display_options['fields']['field_order_number']['id'] = 'field_order_number';
  $handler->display->display_options['fields']['field_order_number']['table'] = 'field_data_field_order_number';
  $handler->display->display_options['fields']['field_order_number']['field'] = 'field_order_number';
  $handler->display->display_options['fields']['field_order_number']['label'] = 'order_number';
  $handler->display->display_options['fields']['field_order_number']['settings'] = array(
    'thousand_separator' => ' ',
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
    'dcc_page_overview_cards' => 'dcc_page_overview_cards',
    'dcc_page_overview_section' => 'dcc_page_overview_section',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'content/dcc-page-overview-section';
  $translatables['dcc_page_overview_section'] = array(
    t('Master'),
    t('DCC Page Overview Section'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('nid'),
    t('title'),
    t('section_title'),
    t('descriptive_text'),
    t('link_title'),
    t('link_url'),
    t('video_url'),
    t('video_caption'),
    t('services_section_title'),
    t('card_image'),
    t('bullet_points'),
    t('video_thumbnail'),
    t('order_number'),
    t('Page'),
  );
  $export['dcc_page_overview_section'] = $view;

  return $export;
}
