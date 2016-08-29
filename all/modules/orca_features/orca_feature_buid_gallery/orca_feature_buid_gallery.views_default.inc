<?php
/**
 * @file
 * orca_feature_buid_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function orca_feature_buid_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'build_gallery_final';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'BUILD Gallery Final';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Projects Gallery';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: AUTHOR ID */
  $handler->display->display_options['fields']['field_from_author_id']['id'] = 'field_from_author_id';
  $handler->display->display_options['fields']['field_from_author_id']['table'] = 'field_data_field_from_author_id';
  $handler->display->display_options['fields']['field_from_author_id']['field'] = 'field_from_author_id';
  $handler->display->display_options['fields']['field_from_author_id']['label'] = '';
  $handler->display->display_options['fields']['field_from_author_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_from_author_id']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: ID */
  $handler->display->display_options['fields']['field_from_id']['id'] = 'field_from_id';
  $handler->display->display_options['fields']['field_from_id']['table'] = 'field_data_field_from_id';
  $handler->display->display_options['fields']['field_from_id']['field'] = 'field_from_id';
  $handler->display->display_options['fields']['field_from_id']['label'] = '';
  $handler->display->display_options['fields']['field_from_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_from_id']['element_label_colon'] = FALSE;
  /* Field: Content: LINK PROJECT DEMO */
  $handler->display->display_options['fields']['field_from_link_project_demo']['id'] = 'field_from_link_project_demo';
  $handler->display->display_options['fields']['field_from_link_project_demo']['table'] = 'field_data_field_from_link_project_demo';
  $handler->display->display_options['fields']['field_from_link_project_demo']['field'] = 'field_from_link_project_demo';
  $handler->display->display_options['fields']['field_from_link_project_demo']['label'] = '';
  $handler->display->display_options['fields']['field_from_link_project_demo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_from_link_project_demo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_from_link_project_demo']['click_sort_column'] = 'url';
  /* Field: Content: LINK PROJECT HOME */
  $handler->display->display_options['fields']['field_from_link_project_home']['id'] = 'field_from_link_project_home';
  $handler->display->display_options['fields']['field_from_link_project_home']['table'] = 'field_data_field_from_link_project_home';
  $handler->display->display_options['fields']['field_from_link_project_home']['field'] = 'field_from_link_project_home';
  $handler->display->display_options['fields']['field_from_link_project_home']['label'] = '';
  $handler->display->display_options['fields']['field_from_link_project_home']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_from_link_project_home']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_from_link_project_home']['click_sort_column'] = 'url';
  /* Field: Content: NUMBER OF CLONES */
  $handler->display->display_options['fields']['field_from_number_of_clones']['id'] = 'field_from_number_of_clones';
  $handler->display->display_options['fields']['field_from_number_of_clones']['table'] = 'field_data_field_from_number_of_clones';
  $handler->display->display_options['fields']['field_from_number_of_clones']['field'] = 'field_from_number_of_clones';
  $handler->display->display_options['fields']['field_from_number_of_clones']['label'] = '';
  $handler->display->display_options['fields']['field_from_number_of_clones']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_from_number_of_clones']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_from_number_of_clones']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: SUMMARY */
  $handler->display->display_options['fields']['field_from_summary']['id'] = 'field_from_summary';
  $handler->display->display_options['fields']['field_from_summary']['table'] = 'field_data_field_from_summary';
  $handler->display->display_options['fields']['field_from_summary']['field'] = 'field_from_summary';
  $handler->display->display_options['fields']['field_from_summary']['label'] = '';
  $handler->display->display_options['fields']['field_from_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_from_summary']['element_label_colon'] = FALSE;
  /* Field: Content: THUMBNAIL IMAGE */
  $handler->display->display_options['fields']['field_from_thumbnail_image']['id'] = 'field_from_thumbnail_image';
  $handler->display->display_options['fields']['field_from_thumbnail_image']['table'] = 'field_data_field_from_thumbnail_image';
  $handler->display->display_options['fields']['field_from_thumbnail_image']['field'] = 'field_from_thumbnail_image';
  $handler->display->display_options['fields']['field_from_thumbnail_image']['label'] = '';
  $handler->display->display_options['fields']['field_from_thumbnail_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_from_thumbnail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_from_thumbnail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_from_thumbnail_image']['settings'] = array(
    'image_style' => 'image_size',
    'image_link' => 'content',
  );
  /* Field: Content: PUBLISHED DATE */
  $handler->display->display_options['fields']['field__from_published_date']['id'] = 'field__from_published_date';
  $handler->display->display_options['fields']['field__from_published_date']['table'] = 'field_data_field__from_published_date';
  $handler->display->display_options['fields']['field__from_published_date']['field'] = 'field__from_published_date';
  $handler->display->display_options['fields']['field__from_published_date']['label'] = '';
  $handler->display->display_options['fields']['field__from_published_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field__from_published_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field__from_published_date']['settings'] = array(
    'format_type' => 'build',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: TAGS */
  $handler->display->display_options['fields']['field_from_tags']['id'] = 'field_from_tags';
  $handler->display->display_options['fields']['field_from_tags']['table'] = 'field_data_field_from_tags';
  $handler->display->display_options['fields']['field_from_tags']['field'] = 'field_from_tags';
  $handler->display->display_options['fields']['field_from_tags']['label'] = '';
  $handler->display->display_options['fields']['field_from_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_from_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_from_tags']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<ul class="build-img-list">
<li>
<span class="build-image">[field_from_thumbnail_image]</span>
<span class="build-text-content">
<span>PUBLISHED [field__from_published_date]</span>
<hr>
<span><b> [title]</b></span><br><br>
<span>[field_from_summary]</span><br><br>
<span>[field_from_tags]</span><br>
</span></li></ul>';
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'http://localhost/[path]';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'gallery' => 'gallery',
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';

  /* Display:  GAllery Page */
  $handler = $view->new_display('page', ' GAllery Page', 'page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mapped' => 'mapped',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'word';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['group_info']['label'] = 'Combine fields filter';
  $handler->display->display_options['filters']['combine']['group_info']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['combine']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_from_author_id' => 'field_from_author_id',
    'title' => 'title',
    'field_from_summary' => 'field_from_summary',
    'field_from_tags' => 'field_from_tags',
  );
  $handler->display->display_options['path'] = 'buildgallery';

  /* Display: Gallery BLOCK */
  $handler = $view->new_display('block', 'Gallery BLOCK', 'block_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'VIEW FULL GALLERY';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<i>Browse through our awesome gallery of 7500 projects. Get inspired by the content that over 5000 users use. Take what is there and clone to your liking.<i>
';
  $handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'gallery' => 'gallery',
  );
  $export['build_gallery_final'] = $view;

  return $export;
}
