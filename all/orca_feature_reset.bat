REM disable the core feature which will auto disable any dependent features
REM also disable non-dependent features
CALL drush dis orca_feature_base -y

REM enable the features, order is only important in case of dependencies
REM so leave feature_base at the start
CALL drush dis orca_feature_base orca_feature_help_service -y

CALL drush pm-disable orca_features_solr_live_results -y
CALL drush pm-disable search_api_splash -y
CALL drush en search_api_splash -y

REM features dependent on orca_feature_base (or no dependency)
REM removed orca_feature_method_card orca_feature_service_card orca_feature_course_card
CALL drush en method_cards -y
CALL drush en orca_feature_buid_gallery orca_feature_cards_content_types orca_features_cards_views orca_features_import_html_settings -y
CALL drush en search_api_attachments -y
CALL drush en orca_features_solr_live_results -y
CALL drush en orca_feature_learning_center orca_feature_helpfiles -y
CALL drush en orca_feature_help_service _experimental_orca_rest_api orca_feature_help_hotspot_view -y
CALL drush en orca_feature_csrf_service -y
CALL drush en orca_feature_vote_like -y
CALL drush en orca_feature_user_service -y
CALL drush en orca_feature_prjcomments_service -y
CALL drush en orca_feature_forums_service -y
CALL drush en orca_feature_prjstats_service -y
CALL drush en orca_features_tools_view -y
CALL drush en orca_feature_blogs -y
CALL drush en projectgallery_sync -y
CALL drush en orca_feature_recent_searches -y
REM CALL drush en build_gallery_ -y

CALL drush fr orca_features_solr_live_results -y
CALL drush fr orca_feature_help_hotspot_view -y

CALL drush en orca_feature_date_formats -y

REM run composer command for extauth
CALL drush en orcaauth -y

CALL drush en orcavote -y
CALL drush en automateimport -y
CALL drush en cloneresource -y
CALL drush en statisticsresource -y
CALL drush en recentsearches -y

REM force revert of feature to fix import error
REM drush fr orca_feature_method_card orca_feature_service_card orca_feature_course_card orca_feature_home_links orca_feature_helpfiles -y
REM enable Orca theme and set to default
REM CALL drush en orca -y
CALL drush vset theme_default bartik

REM CALL drush en orca_feature_forum_index -y
CALL drush role-add-perm "authenticated user" "create forum content"
CALL drush role-add-perm "authenticated user" "edit own forum content"
CALL drush role-add-perm "authenticated user" "delete own forum content"
CALL drush role-add-perm "authenticated user" "edit any mapped content"
CALL drush role-add-perm "authenticated user" "automateimport"
CALL drush role-add-perm "authenticated user" "edit own comments"


REM enable legal document feature
CALL drush dis legal_documents -y
CALL drush dis legal_documents_service -y
CALL drush en legal_documents_service -y
CALL drush en legal_documents -y

CALL drush en orca_feature_dcc_ux_view_section -y
CALL drush en orca_feature_dcc_page_overview_section -y
CALL drush en orca_feature_dcc_page_header_section -y
CALL drush en orca_feature_dcc_page_marketing_section -y
CALL drush en orca_feature_dcc_page_apphaus_section -y
CALL drush en orca_feature_dcc_page_customer_section -y

CALL drush en orca_feature_roles_permissions -y


CALL drush en learning_sections -y
CALL drush en learning_section_cards -y

CALL drush en service_cards -y

REM enable rewrite module for public file path URLs, disable by default for dev.
CALL drush en splash_file_rewrite -y
CALL drush vset splash_file_rewrite_enable 0

CALL drush vset pathauto_file_pattern 'content/file/[file:name]'
CALL drush vget pathauto_file_pattern

CALL drush eval "$resource = db_query('select fid from {file_managed}'); foreach($resource as $rec){$nodes[] = $rec->fid;}; pathauto_file_update_alias_multiple($nodes, 'bulkupdate'); print count($nodes).'\n';"

REM drush vset pathauto_node_pattern 'content/[node:title]'
REM drush vget pathauto_node_pattern
REM drush eval '$resource = db_query("select fid from {file_managed}"); foreach($resource as $rec){$files[] = $rec->fid;}; pathauto_file_update_alias_multiple($files, "bulkupdate"); print count($files)."\n"; $resource2 = db_query("select nid from {node}"); foreach($resource2 as $rec2){$nodes[] = $rec2->nid;}; pathauto_node_update_alias_multiple($nodes, "bulkupdate"); print count($nodes)."\n";'

REM Can be removed after GA is deployed but it won't hurt anything if not taken out.
CALL drush field-delete field_fiori_url --bundle=method_card -y
CALL drush field-delete field_activity_description --bundle=course_card -y
CALL drush field-delete field_consumption_time --bundle=course_card -y
CALL drush field-delete field_participants --bundle=course_card -y
CALL drush field-delete field_steps --bundle=course_card -y