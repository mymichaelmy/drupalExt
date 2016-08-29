<?php
/**
 * @file
 * orca_feature_dcc_page_marketing_section.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function orca_feature_dcc_page_marketing_section_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'dcc_page_marketing_section';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'DCC Page Marketing Section';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'DCC Page Marketing Section';
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
  /* Field: Content: Email address */
  $handler->display->display_options['fields']['field_email_address']['id'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['table'] = 'field_data_field_email_address';
  $handler->display->display_options['fields']['field_email_address']['field'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['label'] = 'email_address';
  /* Field: Content: Email subject */
  $handler->display->display_options['fields']['field_email_subject']['id'] = 'field_email_subject';
  $handler->display->display_options['fields']['field_email_subject']['table'] = 'field_data_field_email_subject';
  $handler->display->display_options['fields']['field_email_subject']['field'] = 'field_email_subject';
  $handler->display->display_options['fields']['field_email_subject']['label'] = 'email_subject';
  /* Field: Content: Twitter URL */
  $handler->display->display_options['fields']['field_twitter_url']['id'] = 'field_twitter_url';
  $handler->display->display_options['fields']['field_twitter_url']['table'] = 'field_data_field_twitter_url';
  $handler->display->display_options['fields']['field_twitter_url']['field'] = 'field_twitter_url';
  $handler->display->display_options['fields']['field_twitter_url']['label'] = 'twitter_url';
  $handler->display->display_options['fields']['field_twitter_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_twitter_url']['type'] = 'link_title_plain';
  /* Field: Content: Linkedin URL */
  $handler->display->display_options['fields']['field_linkedin_url']['id'] = 'field_linkedin_url';
  $handler->display->display_options['fields']['field_linkedin_url']['table'] = 'field_data_field_linkedin_url';
  $handler->display->display_options['fields']['field_linkedin_url']['field'] = 'field_linkedin_url';
  $handler->display->display_options['fields']['field_linkedin_url']['label'] = 'linkedin_url';
  $handler->display->display_options['fields']['field_linkedin_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linkedin_url']['type'] = 'link_title_plain';
  /* Field: Content: YouTube URL */
  $handler->display->display_options['fields']['field_youtube_url']['id'] = 'field_youtube_url';
  $handler->display->display_options['fields']['field_youtube_url']['table'] = 'field_data_field_youtube_url';
  $handler->display->display_options['fields']['field_youtube_url']['field'] = 'field_youtube_url';
  $handler->display->display_options['fields']['field_youtube_url']['label'] = 'youtube_url';
  $handler->display->display_options['fields']['field_youtube_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_youtube_url']['type'] = 'link_title_plain';
  /* Field: Content: Vimeo URL */
  $handler->display->display_options['fields']['field_vimeo_url']['id'] = 'field_vimeo_url';
  $handler->display->display_options['fields']['field_vimeo_url']['table'] = 'field_data_field_vimeo_url';
  $handler->display->display_options['fields']['field_vimeo_url']['field'] = 'field_vimeo_url';
  $handler->display->display_options['fields']['field_vimeo_url']['label'] = 'vimeo_url';
  $handler->display->display_options['fields']['field_vimeo_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_vimeo_url']['type'] = 'link_title_plain';
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
    'dcc_page_marketing_section' => 'dcc_page_marketing_section',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'content/dcc-page-marketing-section';
  $translatables['dcc_page_marketing_section'] = array(
    t('Master'),
    t('DCC Page Marketing Section'),
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
    t('link_title'),
    t('link_url'),
    t('email_address'),
    t('email_subject'),
    t('twitter_url'),
    t('linkedin_url'),
    t('youtube_url'),
    t('vimeo_url'),
    t('Page'),
  );
  $export['dcc_page_marketing_section'] = $view;

  return $export;
}
