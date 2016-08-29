REM download and enable any modules needed by our features or tools.
CALL drush dl feeds-7.x-2.0-alpha9 -y
CALL drush dl node_export-7.x-3.0 -y
CALL drush en cors -y
CALL drush dis cors -y
CALL drush en features admin_menu ctools import_html node_export uuid views -y
CALL drush en views_content admin_menu_toolbar node_export_features views_ui -y
CALL drush en libraries services globalredirect pathauto link feeds feeds_ui job_scheduler feeds_imagegrabber smart_trim -y
CALL drush en rest_server -y
CALL drush en media file_entity date feeds_mediarss feeds_url_fetcher feeds_xpathparser media_feeds mediafield -y
CALL drush en media_internet -y
CALL drush en strongarm -y
CALL drush dl views_datasource -y
CALL drush en views_json -y
CALL drush en statistics -y
CALL drush en statistics_ajax -y
CALL drush en votingapi -y

CALL drush role-add-perm "anonymous user" "administer statistics"
CALL drush role-add-perm "authenticated user" "administer statistics"
CALL drush role-add-perm "anonymous user" "access statistics"
CALL drush role-add-perm "authenticated user" "access statistics"
CALL drush role-add-perm "anonymous user" "view post access counter"
CALL drush role-add-perm "authenticated user" "view post access counter"
CALL drush role-add-perm "anonymous user" "use statistics_ajax"
CALL drush role-add-perm "authenticated user" "use statistics_ajax"
CALL drush role-add-perm "anonymous user" "administer statistics_ajax"
CALL drush role-add-perm "authenticated user" "administer statistics_ajax"

CALL drush en search_api search_api_grouping search_api_live_results search_api_page search_api_solr search_api_attachments -y


CALL drush dis toolbar -y

REM seperate DL and enablement for certain features
CALL drush dl features_extra -y
CALL drush en fe_block -y

REM Orca created module for administering cronmonitor.
CALL drush en cronmonitor -y

REM set node_export variable for import to recreate not duplicate
REM can be new, revision, or skip
CALL drush vset node_export_existing skip
CALL drush vset node_export_file_mode inline
CALL php -r "print json_encode(array('article' => 'article','page' => 'page','blog_post' => 'blog_post','course_card' => 'course_card','forum' => 'forum','help_snippet_content' => 'help_snippet_content','learning_sections' => 'learning_sections','legal_documents' => 'legal_documents','mapped' => 'mapped','method_card' => 'method_card','service_card' => 'service_card','tools_section' => 'tools_section'));" | drush vset --format=json node_export_file_types -

CALL drush dl delete_all-7.x-1.1 -y
CALL drush en delete_all

REM set cors configuration
REM CALL php -r "print json_encode(array('*'=>'|*|Content-Type, X-CSRF-Token|'));"  | drush vset --format=json cors_domains -

REM set statistics configuration defaults
CALL drush vset statistics_count_content_views 1
CALL drush vset statistics_count_content_views_ajax 1
CALL drush vset statistics_flush_accesslog_timer '0'

REM set statistics_ajax configuration defaults
CALL drush vset statistics_ajax_limit_requests_xmlhttprequest 0
CALL drush vset statistics_ajax_limit_requests_get 0
CALL drush vset statistics_ajax_limit_requests_post 1

REM feeds not to use cUrl so bypasses proxy issues
REM drush vset feeds_never_use_curl false
REM feeds_imagegrabber enable and set required values
CALL php -r "print json_encode(array('enabled'=>'1','id_class'=>'0', 'id_class_desc'=>'','feeling_lucky'=>'1','exec_time'=>'75'));"  | drush vset --format=json feeds_imagegrabber -
CALL drush en forum -y

REM SPLASHFORUM Module
CALL drush en splashforum -y

REM HTTP_PROXY
CALL drush dl http_proxy-7.x-1.0 -y
CALL drush en http_proxy -y
CALL drush vset splashforum_buildtimeout '1200'
CALL drush vset proxy_server 'proxy'
CALL drush vset proxy_port '8080'

REM Extra Domains for URL Check
CALL php -r "print json_encode(array('corp'));" | drush vset --format=json link_extra_domains -

REM ClamAv Module
CALL drush dl clamav-7.x-1.x-dev -y
CALL drush en clamav -y
CALL drush vset clamav_enabled 0
CALL drush vset clamav_mode 0

REM UUID_FEATURES Module
CALL drush dl uuid_features-7.x-1.x-dev -y
CALL drush en uuid_features -y
CALL drush vset uuid_features_vocabulary_terms '1'
CALL drush vset uuid_features_entity_node_forum 'forum'
CALL drush vset uuid_features_file_node_forum 'forum'
CALL drush vset uuid_features_entity_node_method_card 'method_card'
CALL drush vset uuid_features_file_node_method_card 'method_card'
CALL drush vset uuid_features_entity_node_mapped 'mapped'
CALL drush vset uuid_features_file_node_mapped 'mapped'
CALL drush vset uuid_features_entity_node_course_card 'course_card'
CALL drush vset uuid_features_file_node_course_card 'course_card'
CALL drush vset uuid_features_entity_node_learning_sections 'learning_sections'
CALL drush vset uuid_features_file_node_learning_sections 'learning_sections'
CALL drush vset uuid_features_entity_node_service_card 'service_card'
CALL drush vset uuid_features_file_node_service_card 'service_card'
CALL drush vset uuid_features_entity_node_tools_section 'tools_section'
CALL drush vset uuid_features_file_node_tools_section 'tools_section'
CALL drush vset uuid_features_entity_taxonomy_term_forums 'forums'
CALL drush vset uuid_features_file_taxonomy_term_forums 'forums'
CALL drush vset uuid_features_file_file_image 'image'
CALL drush vset uuid_features_file_file_video 'video'
CALL drush vset uuid_features_file_file_audio 'audio'
CALL drush vset uuid_features_file_file_document 'document'
CALL drush vset uuid_features_entity_file_image 'image'
CALL drush vset uuid_features_entity_file_video 'video'
CALL drush vset uuid_features_entity_file_audio 'audio'
CALL drush vset uuid_features_entity_file_document 'document'
CALL drush vset uuid_features_file_mode 'local'
CALL drush vset uuid_features_file_assets_path 'sites/default/files/export'

REM Install Drupal Patches
REM node_export patch
cd modules/node_export
curl https://www.drupal.org/files/node_export-1911638_2.patch | git apply -v

cd ../services
curl https://www.drupal.org/files/issues/services-clamav-12345-3-D7_0.patch | git apply -v

cd ../../../..
curl https://www.drupal.org/files/issues/drupal-add_basic_svg_support-2539478-3-D7.patch | git apply -v
cd sites/all/
