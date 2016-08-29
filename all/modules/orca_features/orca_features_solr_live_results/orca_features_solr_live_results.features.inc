<?php
/**
 * @file
 * orca_features_solr_live_results.features.inc
 */

/**
 * Implements hook_default_search_api_index().
 */
function orca_features_solr_live_results_default_search_api_index() {
  $items = array();
  $items['node_index'] = entity_import('search_api_index', '{
    "name" : "node index",
    "machine_name" : "node_index",
    "description" : null,
    "server" : "solr",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "attachments_field_arsenal_files" : { "type" : "text" },
        "attachments_field_video" : { "type" : "text" },
        "author" : { "type" : "integer", "entity_type" : "user" },
        "author:name" : { "type" : "text" },
        "body:summary" : { "type" : "text" },
        "body:value" : { "type" : "text" },
        "category" : { "type" : "text" },
        "comments" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "comment" },
        "comments:author" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "user" },
        "comments:comment_body:value" : { "type" : "list\\u003Ctext\\u003E" },
        "comments:name" : { "type" : "list\\u003Ctext\\u003E" },
        "comments:subject" : { "type" : "list\\u003Ctext\\u003E" },
        "description" : { "type" : "text" },
        "field__from_published_date" : { "type" : "date" },
        "field_activity_description" : { "type" : "text" },
        "field_arsenal_files:description" : { "type" : "list\\u003Ctext\\u003E" },
        "field_arsenal_files:file:fid" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_arsenal_files:file:mime" : { "type" : "list\\u003Ctext\\u003E" },
        "field_arsenal_files:file:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_arsenal_files:file:type" : { "type" : "list\\u003Cstring\\u003E" },
        "field_arsenal_files:file:url" : { "type" : "list\\u003Cstring\\u003E" },
        "field_arsenal_files:file:uuid" : { "type" : "list\\u003Ctext\\u003E" },
        "field_assets_link:title" : { "type" : "list\\u003Ctext\\u003E" },
        "field_consumption_time" : { "type" : "text" },
        "field_fiori_url" : { "type" : "text" },
        "field_from_number_of_clones" : { "type" : "integer" },
        "field_from_summary:value" : { "type" : "text" },
        "field_from_tags" : { "type" : "list\\u003Ctext\\u003E" },
        "field_from_thumbnail_image:file" : { "type" : "integer", "entity_type" : "file" },
        "field_from_thumbnail_image:file:url" : { "type" : "string" },
        "field_is_latest" : { "type" : "boolean" },
        "field_launch_url" : { "type" : "text" },
        "field_needs" : { "type" : "text" },
        "field_number_of_likes" : { "type" : "integer" },
        "field_number_of_views" : { "type" : "integer" },
        "field_orca_tags" : { "type" : "text" },
        "field_participants" : { "type" : "text" },
        "field_ranking" : { "type" : "integer" },
        "field_teaser" : { "type" : "text" },
        "nid" : { "type" : "integer" },
        "provider" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "sub_title" : { "type" : "string" },
        "taxonomy_forums:description" : { "type" : "text" },
        "taxonomy_forums:name" : { "type" : "text" },
        "title" : { "type" : "text" },
        "type" : { "type" : "string" },
        "uri" : { "type" : "string" },
        "uuid" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "0",
            "bundles" : {
              "blog_post" : "blog_post",
              "course_card" : "course_card",
              "forum" : "forum",
              "learning_sections" : "learning_sections",
              "mapped" : "mapped",
              "method_card" : "method_card"
            }
          }
        },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_attachments_alter_settings" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 1
          }
        },
        "search_api_splash_alter_settings" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } }
      },
      "processors" : {
        "search_api_denormalized_entity_grouping" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "fields" : { "type" : true },
            "group_sort" : "type",
            "group_sort_direction" : "asc",
            "truncate" : 0,
            "group_limit" : "8"
          }
        },
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true },
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
  $items['search_index'] = entity_import('search_api_index', '{
    "name" : "search index",
    "machine_name" : "search_index",
    "description" : "Search pill index.",
    "server" : "solrsearch",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "body:summary" : { "type" : "text" },
        "body:value" : { "type" : "text" },
        "category" : { "type" : "text" },
        "comments" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "comment" },
        "comments:comment_body:value" : { "type" : "list\\u003Ctext\\u003E" },
        "comments:subject" : { "type" : "list\\u003Ctext\\u003E" },
        "content_type_s" : { "type" : "string" },
        "description" : { "type" : "text" },
        "extension_s" : { "type" : "string" },
        "field_from_summary:value" : { "type" : "text" },
        "field_from_tags" : { "type" : "list\\u003Ctext\\u003E" },
        "field_is_latest" : { "type" : "boolean" },
        "field_ranking" : { "type" : "integer" },
        "hasThumb_b" : { "type" : "boolean" },
        "provider" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "sub_category" : { "type" : "text" },
        "sub_title" : { "type" : "string" },
        "sub_title_name" : { "type" : "string" },
        "sub_uri" : { "type" : "string" },
        "taxonomy_forums:description" : { "type" : "text" },
        "taxonomy_forums:name" : { "type" : "text" },
        "title" : { "type" : "text" },
        "type" : { "type" : "string" },
        "uri" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_attachments_alter_settings" : {
          "status" : 0,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 1
          }
        },
        "search_api_splash_alter_settings" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } }
      },
      "processors" : {
        "search_api_denormalized_entity_grouping" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "fields" : { "type" : true },
            "group_sort" : "",
            "group_sort_direction" : "asc",
            "truncate" : 1,
            "group_limit" : "12"
          }
        },
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_from_tags" : true,
              "field_from_summary:value" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_from_tags" : true,
              "field_from_summary:value" : true
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
              "title" : true,
              "field_from_tags" : true,
              "field_from_summary:value" : true
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
              "title" : true,
              "field_from_tags" : true,
              "field_from_summary:value" : true
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
  $items['splash_file_index'] = entity_import('search_api_index', '{
    "name" : "splash file index",
    "machine_name" : "splash_file_index",
    "description" : null,
    "server" : "solr",
    "item_type" : "file",
    "options" : {
      "datasource" : { "bundles" : [] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "attachments_content" : { "type" : "text" },
        "category" : { "type" : "text" },
        "content_type_s" : { "type" : "string" },
        "description" : { "type" : "text" },
        "extension_s" : { "type" : "string" },
        "fid" : { "type" : "integer" },
        "hasThumb_b" : { "type" : "boolean" },
        "mime" : { "type" : "text" },
        "name" : { "type" : "text" },
        "provider" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "size" : { "type" : "integer" },
        "sub_category" : { "type" : "text" },
        "sub_title" : { "type" : "string" },
        "sub_title_name" : { "type" : "string" },
        "sub_uri" : { "type" : "string" },
        "title" : { "type" : "text" },
        "type" : { "type" : "string" },
        "uri" : { "type" : "string" },
        "uuid" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : { "image" : "image" } }
        },
        "search_api_splash_alter_settings" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_attachments_alter_settings" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 1
          }
        },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "teaser" } }
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
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "name" : true, "mime" : true, "url" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "name" : true, "mime" : true, "url" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "name" : true, "mime" : true, "url" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "name" : true, "mime" : true, "url" : true },
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
function orca_features_solr_live_results_default_search_api_live_results_search() {
  $items = array();
  $items['search_api_page_1'] = entity_import('search_api_live_results_search', '{
    "machine_name" : "search_api_page_1",
    "name" : "search",
    "index_id" : "node_index",
    "type" : "search_api_page",
    "enabled" : "1",
    "options" : {
      "custom" : { "page_id" : "1" },
      "result count" : true,
      "num_results" : "20",
      "display" : "view_mode",
      "caching" : 0
    },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_page().
 */
function orca_features_solr_live_results_default_search_api_page() {
  $items = array();
  $items['search'] = entity_import('search_api_page', '{
    "index_id" : "node_index",
    "path" : "search1",
    "name" : "search",
    "machine_name" : "search",
    "description" : "",
    "options" : {
      "mode" : "terms",
      "fields" : [],
      "per_page" : "10",
      "result_page_search_form" : 1,
      "get_per_page" : 1,
      "view_mode" : "search_api_page_result",
      "empty_behavior" : "results"
    },
    "enabled" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function orca_features_solr_live_results_default_search_api_server() {
  $items = array();
  $items['solr'] = entity_import('search_api_server', '{
    "name" : "solr",
    "machine_name" : "solr",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "localhost",
      "port" : "8983",
      "path" : "\\/solr\\/drupal",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO",
      "log_query" : 0,
      "log_response" : 0
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  $items['solrsearch'] = entity_import('search_api_server', '{
    "name" : "solrsearch",
    "machine_name" : "solrsearch",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "localhost",
      "port" : "8982",
      "path" : "\\/solr\\/search",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO",
      "log_query" : 0,
      "log_response" : 0
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
