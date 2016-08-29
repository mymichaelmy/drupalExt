<?php
/**
 * @file
 * orca_feature_buid_gallery.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function orca_feature_buid_gallery_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'final_build_rss_feed_importer';
  $feeds_importer->config = array(
    'name' => 'Final BUILD RSS feed importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'URLFetcher',
      'config' => array(),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:13' => 'guid',
          'xpathparser:14' => '',
          'xpathparser:0' => 'title',
          'xpathparser:2' => 'description',
          'xpathparser:12' => 'project_thumbnail/@url',
          'xpathparser:4' => 'dc:creator',
          'xpathparser:11' => 'project_authorAvatar/@url',
          'xpathparser:1' => 'link',
          'xpathparser:15' => 'project_projectPreviewDeeplinkURL/@href',
          'xpathparser:16' => 'project_clones',
          'xpathparser:21' => 'pubDate',
          'xpathparser:22' => 'guid',
          'xpathparser:23' => 'published',
          'xpathparser:25' => 'category',
        ),
        'rawXML' => array(
          'xpathparser:13' => 0,
          'xpathparser:14' => 0,
          'xpathparser:0' => 0,
          'xpathparser:2' => 0,
          'xpathparser:12' => 0,
          'xpathparser:4' => 0,
          'xpathparser:11' => 0,
          'xpathparser:1' => 0,
          'xpathparser:15' => 0,
          'xpathparser:16' => 0,
          'xpathparser:21' => 0,
          'xpathparser:22' => 0,
          'xpathparser:23' => 0,
          'xpathparser:25' => 0,
        ),
        'context' => '/rss/channel/item',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 'context',
            'xpathparser:0' => 'xpathparser:0',
            'xpathparser:2' => 'xpathparser:2',
            'xpathparser:12' => 'xpathparser:12',
            'xpathparser:4' => 'xpathparser:4',
            'xpathparser:11' => 'xpathparser:11',
            'xpathparser:1' => 'xpathparser:1',
            'xpathparser:13' => 0,
            'xpathparser:14' => 0,
            'xpathparser:15' => 0,
            'xpathparser:16' => 0,
            'xpathparser:21' => 0,
            'xpathparser:22' => 0,
            'xpathparser:23' => 0,
            'xpathparser:25' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_from_id',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_from_version_id',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => 0,
          ),
          3 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_from_summary',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_from_thumbnail_image',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_from_author_id',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_from_author_avatar',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_from_link_project_home:url',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:15',
            'target' => 'field_from_link_project_demo:url',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:16',
            'target' => 'field_from_number_of_clones',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:21',
            'target' => 'field__from_published_date:start',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:22',
            'target' => 'guid',
            'unique' => 1,
          ),
          12 => array(
            'source' => 'xpathparser:23',
            'target' => 'field_published',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'xpathparser:25',
            'target' => 'field_from_tags',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'mapped',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '2419200',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['final_build_rss_feed_importer'] = $feeds_importer;

  return $export;
}
