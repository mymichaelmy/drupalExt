<?php
/**
 * @file
 * orca_feature_dcc_page_customer_section.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function orca_feature_dcc_page_customer_section_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'dcc_page_customer_section';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'DCC Page Customer Section';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'DCC Page Customer Section';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Section title */
  $handler->display->display_options['fields']['field_section_title']['id'] = 'field_section_title';
  $handler->display->display_options['fields']['field_section_title']['table'] = 'field_data_field_section_title';
  $handler->display->display_options['fields']['field_section_title']['field'] = 'field_section_title';
  $handler->display->display_options['fields']['field_section_title']['label'] = 'section_title';
  /* Field: Content: Order Number */
  $handler->display->display_options['fields']['field_order_number']['id'] = 'field_order_number';
  $handler->display->display_options['fields']['field_order_number']['table'] = 'field_data_field_order_number';
  $handler->display->display_options['fields']['field_order_number']['field'] = 'field_order_number';
  $handler->display->display_options['fields']['field_order_number']['label'] = 'order_number';
  $handler->display->display_options['fields']['field_order_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Video URL */
  $handler->display->display_options['fields']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['fields']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['label'] = 'video_url';
  $handler->display->display_options['fields']['field_video_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_video_url']['type'] = 'link_title_plain';
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
  /* Field: Content: Customer Name */
  $handler->display->display_options['fields']['field_customer_name']['id'] = 'field_customer_name';
  $handler->display->display_options['fields']['field_customer_name']['table'] = 'field_data_field_customer_name';
  $handler->display->display_options['fields']['field_customer_name']['field'] = 'field_customer_name';
  $handler->display->display_options['fields']['field_customer_name']['label'] = 'customer_name';
  /* Field: Content: Customer Logo */
  $handler->display->display_options['fields']['field_customer_logo']['id'] = 'field_customer_logo';
  $handler->display->display_options['fields']['field_customer_logo']['table'] = 'field_data_field_customer_logo';
  $handler->display->display_options['fields']['field_customer_logo']['field'] = 'field_customer_logo';
  $handler->display->display_options['fields']['field_customer_logo']['label'] = 'customer_logo';
  $handler->display->display_options['fields']['field_customer_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_customer_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Source Quote */
  $handler->display->display_options['fields']['field_source_quote']['id'] = 'field_source_quote';
  $handler->display->display_options['fields']['field_source_quote']['table'] = 'field_data_field_source_quote';
  $handler->display->display_options['fields']['field_source_quote']['field'] = 'field_source_quote';
  $handler->display->display_options['fields']['field_source_quote']['label'] = 'source_quote';
  /* Field: Content: Source Name */
  $handler->display->display_options['fields']['field_source_name']['id'] = 'field_source_name';
  $handler->display->display_options['fields']['field_source_name']['table'] = 'field_data_field_source_name';
  $handler->display->display_options['fields']['field_source_name']['field'] = 'field_source_name';
  $handler->display->display_options['fields']['field_source_name']['label'] = 'source_name';
  /* Field: Content: Source Title */
  $handler->display->display_options['fields']['field_source_title']['id'] = 'field_source_title';
  $handler->display->display_options['fields']['field_source_title']['table'] = 'field_data_field_source_title';
  $handler->display->display_options['fields']['field_source_title']['field'] = 'field_source_title';
  $handler->display->display_options['fields']['field_source_title']['label'] = 'source_title';
  /* Field: Content: Source Company */
  $handler->display->display_options['fields']['field_source_company']['id'] = 'field_source_company';
  $handler->display->display_options['fields']['field_source_company']['table'] = 'field_data_field_source_company';
  $handler->display->display_options['fields']['field_source_company']['field'] = 'field_source_company';
  $handler->display->display_options['fields']['field_source_company']['label'] = 'source_company';
  /* Field: Content: Link URL */
  $handler->display->display_options['fields']['field_link_url']['id'] = 'field_link_url';
  $handler->display->display_options['fields']['field_link_url']['table'] = 'field_data_field_link_url';
  $handler->display->display_options['fields']['field_link_url']['field'] = 'field_link_url';
  $handler->display->display_options['fields']['field_link_url']['label'] = 'link_url';
  $handler->display->display_options['fields']['field_link_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_url']['type'] = 'link_title_plain';
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
    'dcc_page_customer_cards' => 'dcc_page_customer_cards',
    'dcc_page_customer_section' => 'dcc_page_customer_section',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'content/dcc-page-customer-section';
  $translatables['dcc_page_customer_section'] = array(
    t('Master'),
    t('DCC Page Customer Section'),
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
    t('section_title'),
    t('order_number'),
    t('video_url'),
    t('video_thumbnail'),
    t('card_image'),
    t('customer_name'),
    t('customer_logo'),
    t('source_quote'),
    t('source_name'),
    t('source_title'),
    t('source_company'),
    t('link_url'),
    t('Page'),
  );
  $export['dcc_page_customer_section'] = $view;

  return $export;
}
