<?php
/**
 * @file
 * orca_feature_forum_index.features.inc
 */

/**
 * Implements hook_default_search_api_index().
 */
function orca_feature_forum_index_default_search_api_index() {
  $items = array();
  $items['forum_node'] = entity_import('search_api_index', '{
    "name" : "Forum Node",
    "machine_name" : "forum_node",
    "description" : "Forum Community Node Index",
    "server" : "community",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "forum" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:summary" : { "type" : "text" },
        "body:value" : { "type" : "text" },
        "comments" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "comment" },
        "comments:author" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "user" },
        "comments:comment_body:value" : { "type" : "list\\u003Ctext\\u003E" },
        "comments:node" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "comments:subject" : { "type" : "list\\u003Ctext\\u003E" },
        "field_body:value" : { "type" : "text" },
        "field_from_author_id" : { "type" : "text" },
        "field_from_tags" : { "type" : "list\\u003Ctext\\u003E" },
        "field_summary:value" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "taxonomy_forums:description" : { "type" : "text" },
        "taxonomy_forums:name" : { "type" : "text" },
        "title" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_denormalized_entity_grouping" : {
          "status" : 0,
          "weight" : "0",
          "settings" : {
            "fields" : [],
            "group_sort" : "",
            "group_sort_direction" : "asc",
            "truncate" : 1,
            "group_limit" : "1"
          }
        },
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "comments" : true,
              "taxonomy_forums" : true,
              "author:name" : true,
              "comments:subject" : true,
              "body:value" : true,
              "body:summary" : true,
              "taxonomy_forums:description" : true,
              "field_body:value" : true,
              "field_summary:value" : true,
              "comments:author:uid" : true,
              "comments:author:name" : true,
              "comments:comment_body:value" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "author:name" : true,
              "comments:subject" : true,
              "body:value" : true,
              "body:summary" : true,
              "taxonomy_forums:description" : true,
              "field_body:value" : true,
              "field_summary:value" : true,
              "comments:author:name" : true,
              "comments:comment_body:value" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "author:name" : true,
              "comments:subject" : true,
              "body:value" : true,
              "body:summary" : true,
              "taxonomy_forums:description" : true,
              "field_body:value" : true,
              "field_summary:value" : true,
              "comments:author:name" : true,
              "comments:comment_body:value" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "author:name" : true,
              "comments:subject" : true,
              "body:value" : true,
              "body:summary" : true,
              "taxonomy_forums:description" : true,
              "field_body:value" : true,
              "field_summary:value" : true,
              "comments:author:name" : true,
              "comments:comment_body:value" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_live_results_search().
 */
function orca_feature_forum_index_default_search_api_live_results_search() {
  $items = array();
  $items['search_api_page_3'] = entity_import('search_api_live_results_search', '{
    "machine_name" : "search_api_page_3",
    "name" : "Forums",
    "index_id" : "forum_node",
    "type" : "search_api_page",
    "enabled" : "1",
    "options" : {
      "custom" : { "page_id" : "3" },
      "result count" : true,
      "num_results" : "20",
      "display" : "title",
      "caching" : 0
    },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_page().
 */
function orca_feature_forum_index_default_search_api_page() {
  $items = array();
  $items['forums'] = entity_import('search_api_page', '{
    "index_id" : "forum_node",
    "path" : "community",
    "name" : "Forums",
    "machine_name" : "forums",
    "description" : "Forum Community Search Page",
    "options" : {
      "mode" : "terms",
      "fields" : {
        "body:summary" : "body:summary",
        "body:value" : "body:value",
        "comments:comment_body:value" : "comments:comment_body:value",
        "comments:subject" : "comments:subject",
        "field_body:value" : "field_body:value",
        "field_summary:value" : "field_summary:value",
        "taxonomy_forums:description" : "taxonomy_forums:description",
        "taxonomy_forums:name" : "taxonomy_forums:name",
        "title" : "title"
      },
      "per_page" : "10",
      "result_page_search_form" : 1,
      "get_per_page" : 1,
      "view_mode" : "search_api_page_result",
      "empty_behavior" : ""
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function orca_feature_forum_index_default_search_api_server() {
  $items = array();
  $items['community'] = entity_import('search_api_server', '{
    "name" : "community",
    "machine_name" : "community",
    "description" : "Forum Community Index Server",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "localhost",
      "port" : "8983",
      "path" : "\\/solr\\/community",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO"
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
