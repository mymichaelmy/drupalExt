<?php
/**
 * @file
 * orca_feature_roles_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function orca_feature_roles_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'Forums Admin' => 'Forums Admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access import_html'.
  $permissions['access import_html'] = array(
    'name' => 'access import_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'import_html',
  );

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'access overlay'.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'overlay',
  );
  
   // Exported permission: 'access search search_api_page'.
  $permissions['access search search_api_page'] = array(
    'name' => 'access search search_api_page',
    'roles' => array(),
    'module' => 'search_api_page',
  );

  // Exported permission: 'access search_api_page'.
  $permissions['access search_api_page'] = array(
    'name' => 'access search_api_page',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_api_page',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access statistics'.
  $permissions['access statistics'] = array(
    'name' => 'access statistics',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'statistics',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'administer JW Player presets'.
  /*$permissions['administer JW Player presets'] = array(
    'name' => 'administer JW Player presets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'jw_player',
  );*/

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer cloneresource'.
  $permissions['administer cloneresource'] = array(
    'name' => 'administer cloneresource',
    'roles' => array(),
    'module' => 'cloneresource',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Forums Admin' => 'Forums Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer cronmonitor'.
  $permissions['administer cronmonitor'] = array(
    'name' => 'administer cronmonitor',
    'roles' => array(
      'Cron Administrator' => 'Cron Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'cronmonitor',
  );

  // Exported permission: 'administer date tools'.
  $permissions['administer date tools'] = array(
    'name' => 'administer date tools',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'date_tools',
  );

  // Exported permission: 'administer encrypt'.
  $permissions['administer encrypt'] = array(
    'name' => 'administer encrypt',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'encrypt',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer forums'.
  $permissions['administer forums'] = array(
    'name' => 'administer forums',
    'roles' => array(
      'Forums Admin' => 'Forums Admin',
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'forum',
  );

  // Exported permission: 'administer http proxy'.
  $permissions['administer http proxy'] = array(
    'name' => 'administer http proxy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'http_proxy',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer orcaauth authentication'.
  $permissions['administer orcaauth authentication'] = array(
    'name' => 'administer orcaauth authentication',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'orcaauth',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer propjectgallery_sync'.
  $permissions['administer propjectgallery_sync'] = array(
    'name' => 'administer propjectgallery_sync',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'projectgallery_sync',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_api',
  );

  // Exported permission: 'administer services'.
  $permissions['administer services'] = array(
    'name' => 'administer services',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'services',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer statistics'.
  $permissions['administer statistics'] = array(
    'name' => 'administer statistics',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'statistics',
  );

  // Exported permission: 'administer statistics_ajax'.
  $permissions['administer statistics_ajax'] = array(
    'name' => 'administer statistics_ajax',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'statistics_ajax',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer voting api'.
  $permissions['administer voting api'] = array(
    'name' => 'administer voting api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'votingapi',
  );

  // Exported permission: 'automateimport'.
  $permissions['automateimport'] = array(
    'name' => 'automateimport',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'automateimport',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clear final_build_rss_feed_importer feeds'.
  $permissions['clear final_build_rss_feed_importer feeds'] = array(
    'name' => 'clear final_build_rss_feed_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create blog_post content'.
  $permissions['create blog_post content'] = array(
    'name' => 'create blog_post content',
    'roles' => array(
      'Blog Content Manager' => 'Blog Content Manager',
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create course_card content'.
  $permissions['create course_card content'] = array(
    'name' => 'create course_card content',
    'roles' => array(
      'Learning Card Author' => 'Learning Card Author',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dcc_page_apphaus_section content'.
  $permissions['create dcc_page_apphaus_section content'] = array(
    'name' => 'create dcc_page_apphaus_section content',
    'roles' => array(
      'DCC Page AppHaus Section Manager' => 'DCC Page AppHaus Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dcc_page_customer_cards content'.
  $permissions['create dcc_page_customer_cards content'] = array(
    'name' => 'create dcc_page_customer_cards content',
    'roles' => array(
      'DCC Page Customer Section Manager' => 'DCC Page Customer Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dcc_page_customer_section content'.
  $permissions['create dcc_page_customer_section content'] = array(
    'name' => 'create dcc_page_customer_section content',
    'roles' => array(
      'DCC Page Customer Section Manager' => 'DCC Page Customer Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dcc_page_header_section content'.
  $permissions['create dcc_page_header_section content'] = array(
    'name' => 'create dcc_page_header_section content',
    'roles' => array(
      'DCC Page Header Section Manager' => 'DCC Page Header Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dcc_page_marketing_section content'.
  $permissions['create dcc_page_marketing_section content'] = array(
    'name' => 'create dcc_page_marketing_section content',
    'roles' => array(
      'DCC Page Marketing Section Manager' => 'DCC Page Marketing Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dcc_page_overview_cards content'.
  $permissions['create dcc_page_overview_cards content'] = array(
    'name' => 'create dcc_page_overview_cards content',
    'roles' => array(
      'DCC Page Overview Section Manager' => 'DCC Page Overview Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dcc_page_overview_section content'.
  $permissions['create dcc_page_overview_section content'] = array(
    'name' => 'create dcc_page_overview_section content',
    'roles' => array(
      'DCC Page Overview Section Manager' => 'DCC Page Overview Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dcc_ux_value content'.
  $permissions['create dcc_ux_value content'] = array(
    'name' => 'create dcc_ux_value content',
    'roles' => array(
      'DCC section author' => 'DCC section author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create help_snippet_content content'.
  $permissions['create help_snippet_content content'] = array(
    'name' => 'create help_snippet_content content',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create legal_documents content'.
  $permissions['create legal_documents content'] = array(
    'name' => 'create legal_documents content',
    'roles' => array(
      'Legal Content Manager' => 'Legal Content Manager',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create mapped content'.
  $permissions['create mapped content'] = array(
    'name' => 'create mapped content',
    'roles' => array(
      'Gallery Content Manager' => 'Gallery Content Manager',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create method_card content'.
  $permissions['create method_card content'] = array(
    'name' => 'create method_card content',
    'roles' => array(
      'Learning Card Author' => 'Learning Card Author',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create service_card content'.
  $permissions['create service_card content'] = array(
    'name' => 'create service_card content',
    'roles' => array(
      'Learning Card Author' => 'Learning Card Author',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tools_section content'.
  $permissions['create tools_section content'] = array(
    'name' => 'create tools_section content',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'Tool Card Admin' => 'Tool Card Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any blog_post content'.
  $permissions['delete any blog_post content'] = array(
    'name' => 'delete any blog_post content',
    'roles' => array(
      'Blog Content Manager' => 'Blog Content Manager',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any course_card content'.
  $permissions['delete any course_card content'] = array(
    'name' => 'delete any course_card content',
    'roles' => array(
      'Learning Card Author' => 'Learning Card Author',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dcc_page_apphaus_section content'.
  $permissions['delete any dcc_page_apphaus_section content'] = array(
    'name' => 'delete any dcc_page_apphaus_section content',
    'roles' => array(
      'DCC Page AppHaus Section Manager' => 'DCC Page AppHaus Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dcc_page_customer_cards content'.
  $permissions['delete any dcc_page_customer_cards content'] = array(
    'name' => 'delete any dcc_page_customer_cards content',
    'roles' => array(
      'DCC Page Customer Section Manager' => 'DCC Page Customer Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dcc_page_customer_section content'.
  $permissions['delete any dcc_page_customer_section content'] = array(
    'name' => 'delete any dcc_page_customer_section content',
    'roles' => array(
      'DCC Page Customer Section Manager' => 'DCC Page Customer Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dcc_page_header_section content'.
  $permissions['delete any dcc_page_header_section content'] = array(
    'name' => 'delete any dcc_page_header_section content',
    'roles' => array(
      'DCC Page Header Section Manager' => 'DCC Page Header Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dcc_page_marketing_section content'.
  $permissions['delete any dcc_page_marketing_section content'] = array(
    'name' => 'delete any dcc_page_marketing_section content',
    'roles' => array(
      'DCC Page Marketing Section Manager' => 'DCC Page Marketing Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dcc_page_overview_cards content'.
  $permissions['delete any dcc_page_overview_cards content'] = array(
    'name' => 'delete any dcc_page_overview_cards content',
    'roles' => array(
      'DCC Page Overview Section Manager' => 'DCC Page Overview Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dcc_page_overview_section content'.
  $permissions['delete any dcc_page_overview_section content'] = array(
    'name' => 'delete any dcc_page_overview_section content',
    'roles' => array(
      'DCC Page Overview Section Manager' => 'DCC Page Overview Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dcc_ux_value content'.
  $permissions['delete any dcc_ux_value content'] = array(
    'name' => 'delete any dcc_ux_value content',
    'roles' => array(
      'DCC section author' => 'DCC section author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any forum content'.
  $permissions['delete any forum content'] = array(
    'name' => 'delete any forum content',
    'roles' => array(
      'Forums Admin' => 'Forums Admin',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any help_snippet_content content'.
  $permissions['delete any help_snippet_content content'] = array(
    'name' => 'delete any help_snippet_content content',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any legal_documents content'.
  $permissions['delete any legal_documents content'] = array(
    'name' => 'delete any legal_documents content',
    'roles' => array(
      'Legal Content Manager' => 'Legal Content Manager',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any mapped content'.
  $permissions['delete any mapped content'] = array(
    'name' => 'delete any mapped content',
    'roles' => array(
      'Gallery Content Manager' => 'Gallery Content Manager',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any method_card content'.
  $permissions['delete any method_card content'] = array(
    'name' => 'delete any method_card content',
    'roles' => array(
      'Learning Card Author' => 'Learning Card Author',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any service_card content'.
  $permissions['delete any service_card content'] = array(
    'name' => 'delete any service_card content',
    'roles' => array(
      'Learning Card Author' => 'Learning Card Author',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tools_section content'.
  $permissions['delete any tools_section content'] = array(
    'name' => 'delete any tools_section content',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'Tool Card Admin' => 'Tool Card Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own blog_post content'.
  $permissions['delete own blog_post content'] = array(
    'name' => 'delete own blog_post content',
    'roles' => array(
      'Blog Content Manager' => 'Blog Content Manager',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own course_card content'.
  $permissions['delete own course_card content'] = array(
    'name' => 'delete own course_card content',
    'roles' => array(
      'Learning Card Author' => 'Learning Card Author',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dcc_page_apphaus_section content'.
  $permissions['delete own dcc_page_apphaus_section content'] = array(
    'name' => 'delete own dcc_page_apphaus_section content',
    'roles' => array(
      'DCC Page AppHaus Section Manager' => 'DCC Page AppHaus Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dcc_page_customer_cards content'.
  $permissions['delete own dcc_page_customer_cards content'] = array(
    'name' => 'delete own dcc_page_customer_cards content',
    'roles' => array(
      'DCC Page Customer Section Manager' => 'DCC Page Customer Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dcc_page_customer_section content'.
  $permissions['delete own dcc_page_customer_section content'] = array(
    'name' => 'delete own dcc_page_customer_section content',
    'roles' => array(
      'DCC Page Customer Section Manager' => 'DCC Page Customer Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dcc_page_header_section content'.
  $permissions['delete own dcc_page_header_section content'] = array(
    'name' => 'delete own dcc_page_header_section content',
    'roles' => array(
      'DCC Page Header Section Manager' => 'DCC Page Header Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dcc_page_marketing_section content'.
  $permissions['delete own dcc_page_marketing_section content'] = array(
    'name' => 'delete own dcc_page_marketing_section content',
    'roles' => array(
      'DCC Page Marketing Section Manager' => 'DCC Page Marketing Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dcc_page_overview_cards content'.
  $permissions['delete own dcc_page_overview_cards content'] = array(
    'name' => 'delete own dcc_page_overview_cards content',
    'roles' => array(
      'DCC Page Overview Section Manager' => 'DCC Page Overview Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dcc_page_overview_section content'.
  $permissions['delete own dcc_page_overview_section content'] = array(
    'name' => 'delete own dcc_page_overview_section content',
    'roles' => array(
      'DCC Page Overview Section Manager' => 'DCC Page Overview Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dcc_ux_value content'.
  $permissions['delete own dcc_ux_value content'] = array(
    'name' => 'delete own dcc_ux_value content',
    'roles' => array(
      'DCC section author' => 'DCC section author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own forum content'.
  $permissions['delete own forum content'] = array(
    'name' => 'delete own forum content',
    'roles' => array(
      'Forums Admin' => 'Forums Admin',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own help_snippet_content content'.
  $permissions['delete own help_snippet_content content'] = array(
    'name' => 'delete own help_snippet_content content',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own legal_documents content'.
  $permissions['delete own legal_documents content'] = array(
    'name' => 'delete own legal_documents content',
    'roles' => array(
      'Legal Content Manager' => 'Legal Content Manager',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own mapped content'.
  $permissions['delete own mapped content'] = array(
    'name' => 'delete own mapped content',
    'roles' => array(
      'Gallery Content Manager' => 'Gallery Content Manager',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own method_card content'.
  $permissions['delete own method_card content'] = array(
    'name' => 'delete own method_card content',
    'roles' => array(
      'Learning Card Author' => 'Learning Card Author',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own service_card content'.
  $permissions['delete own service_card content'] = array(
    'name' => 'delete own service_card content',
    'roles' => array(
      'Learning Card Author' => 'Learning Card Author',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tools_section content'.
  $permissions['delete own tools_section content'] = array(
    'name' => 'delete own tools_section content',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'Tool Card Admin' => 'Tool Card Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in forums'.
  $permissions['delete terms in forums'] = array(
    'name' => 'delete terms in forums',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in help_type'.
  $permissions['delete terms in help_type'] = array(
    'name' => 'delete terms in help_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any blog_post content'.
  $permissions['edit any blog_post content'] = array(
    'name' => 'edit any blog_post content',
    'roles' => array(
      'Blog Content Manager' => 'Blog Content Manager',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any course_card content'.
  $permissions['edit any course_card content'] = array(
    'name' => 'edit any course_card content',
    'roles' => array(
      'Learning Card Author' => 'Learning Card Author',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dcc_page_apphaus_section content'.
  $permissions['edit any dcc_page_apphaus_section content'] = array(
    'name' => 'edit any dcc_page_apphaus_section content',
    'roles' => array(
      'DCC Page AppHaus Section Manager' => 'DCC Page AppHaus Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dcc_page_customer_cards content'.
  $permissions['edit any dcc_page_customer_cards content'] = array(
    'name' => 'edit any dcc_page_customer_cards content',
    'roles' => array(
      'DCC Page Customer Section Manager' => 'DCC Page Customer Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dcc_page_customer_section content'.
  $permissions['edit any dcc_page_customer_section content'] = array(
    'name' => 'edit any dcc_page_customer_section content',
    'roles' => array(
      'DCC Page Customer Section Manager' => 'DCC Page Customer Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dcc_page_header_section content'.
  $permissions['edit any dcc_page_header_section content'] = array(
    'name' => 'edit any dcc_page_header_section content',
    'roles' => array(
      'DCC Page Header Section Manager' => 'DCC Page Header Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dcc_page_marketing_section content'.
  $permissions['edit any dcc_page_marketing_section content'] = array(
    'name' => 'edit any dcc_page_marketing_section content',
    'roles' => array(
      'DCC Page Marketing Section Manager' => 'DCC Page Marketing Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dcc_page_overview_cards content'.
  $permissions['edit any dcc_page_overview_cards content'] = array(
    'name' => 'edit any dcc_page_overview_cards content',
    'roles' => array(
      'DCC Page Overview Section Manager' => 'DCC Page Overview Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dcc_page_overview_section content'.
  $permissions['edit any dcc_page_overview_section content'] = array(
    'name' => 'edit any dcc_page_overview_section content',
    'roles' => array(
      'DCC Page Overview Section Manager' => 'DCC Page Overview Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dcc_ux_value content'.
  $permissions['edit any dcc_ux_value content'] = array(
    'name' => 'edit any dcc_ux_value content',
    'roles' => array(
      'DCC section author' => 'DCC section author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any forum content'.
  $permissions['edit any forum content'] = array(
    'name' => 'edit any forum content',
    'roles' => array(
      'Forums Admin' => 'Forums Admin',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any help_snippet_content content'.
  $permissions['edit any help_snippet_content content'] = array(
    'name' => 'edit any help_snippet_content content',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any legal_documents content'.
  $permissions['edit any legal_documents content'] = array(
    'name' => 'edit any legal_documents content',
    'roles' => array(
      'Legal Content Manager' => 'Legal Content Manager',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any mapped content'.
  $permissions['edit any mapped content'] = array(
    'name' => 'edit any mapped content',
    'roles' => array(
      'Gallery Content Manager' => 'Gallery Content Manager',
      'Splash Content Manager' => 'Splash Content Manager',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any method_card content'.
  $permissions['edit any method_card content'] = array(
    'name' => 'edit any method_card content',
    'roles' => array(
      'Learning Card Author' => 'Learning Card Author',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any service_card content'.
  $permissions['edit any service_card content'] = array(
    'name' => 'edit any service_card content',
    'roles' => array(
      'Learning Card Author' => 'Learning Card Author',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tools_section content'.
  $permissions['edit any tools_section content'] = array(
    'name' => 'edit any tools_section content',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'Tool Card Admin' => 'Tool Card Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own blog_post content'.
  $permissions['edit own blog_post content'] = array(
    'name' => 'edit own blog_post content',
    'roles' => array(
      'Blog Content Manager' => 'Blog Content Manager',
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'Forums Admin' => 'Forums Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own course_card content'.
  $permissions['edit own course_card content'] = array(
    'name' => 'edit own course_card content',
    'roles' => array(
      'Learning Card Author' => 'Learning Card Author',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dcc_page_apphaus_section content'.
  $permissions['edit own dcc_page_apphaus_section content'] = array(
    'name' => 'edit own dcc_page_apphaus_section content',
    'roles' => array(
      'DCC Page AppHaus Section Manager' => 'DCC Page AppHaus Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dcc_page_customer_cards content'.
  $permissions['edit own dcc_page_customer_cards content'] = array(
    'name' => 'edit own dcc_page_customer_cards content',
    'roles' => array(
      'DCC Page Customer Section Manager' => 'DCC Page Customer Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dcc_page_customer_section content'.
  $permissions['edit own dcc_page_customer_section content'] = array(
    'name' => 'edit own dcc_page_customer_section content',
    'roles' => array(
      'DCC Page Customer Section Manager' => 'DCC Page Customer Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dcc_page_header_section content'.
  $permissions['edit own dcc_page_header_section content'] = array(
    'name' => 'edit own dcc_page_header_section content',
    'roles' => array(
      'DCC Page Header Section Manager' => 'DCC Page Header Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dcc_page_marketing_section content'.
  $permissions['edit own dcc_page_marketing_section content'] = array(
    'name' => 'edit own dcc_page_marketing_section content',
    'roles' => array(
      'DCC Page Marketing Section Manager' => 'DCC Page Marketing Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dcc_page_overview_cards content'.
  $permissions['edit own dcc_page_overview_cards content'] = array(
    'name' => 'edit own dcc_page_overview_cards content',
    'roles' => array(
      'DCC Page Overview Section Manager' => 'DCC Page Overview Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dcc_page_overview_section content'.
  $permissions['edit own dcc_page_overview_section content'] = array(
    'name' => 'edit own dcc_page_overview_section content',
    'roles' => array(
      'DCC Page Overview Section Manager' => 'DCC Page Overview Section Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dcc_ux_value content'.
  $permissions['edit own dcc_ux_value content'] = array(
    'name' => 'edit own dcc_ux_value content',
    'roles' => array(
      'DCC section author' => 'DCC section author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own help_snippet_content content'.
  $permissions['edit own help_snippet_content content'] = array(
    'name' => 'edit own help_snippet_content content',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own legal_documents content'.
  $permissions['edit own legal_documents content'] = array(
    'name' => 'edit own legal_documents content',
    'roles' => array(
      'Legal Content Manager' => 'Legal Content Manager',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own mapped content'.
  $permissions['edit own mapped content'] = array(
    'name' => 'edit own mapped content',
    'roles' => array(
      'Gallery Content Manager' => 'Gallery Content Manager',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own method_card content'.
  $permissions['edit own method_card content'] = array(
    'name' => 'edit own method_card content',
    'roles' => array(
      'Learning Card Author' => 'Learning Card Author',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own service_card content'.
  $permissions['edit own service_card content'] = array(
    'name' => 'edit own service_card content',
    'roles' => array(
      'Learning Card Author' => 'Learning Card Author',
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tools_section content'.
  $permissions['edit own tools_section content'] = array(
    'name' => 'edit own tools_section content',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'Tool Card Admin' => 'Tool Card Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit terms in forums'.
  $permissions['edit terms in forums'] = array(
    'name' => 'edit terms in forums',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in help_type'.
  $permissions['edit terms in help_type'] = array(
    'name' => 'edit terms in help_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'export nodes'.
  $permissions['export nodes'] = array(
    'name' => 'export nodes',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'export own nodes'.
  $permissions['export own nodes'] = array(
    'name' => 'export own nodes',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'get a system variable'.
  $permissions['get a system variable'] = array(
    'name' => 'get a system variable',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'services',
  );

  // Exported permission: 'get any binary files'.
  $permissions['get any binary files'] = array(
    'name' => 'get any binary files',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'services',
  );

  // Exported permission: 'get own binary files'.
  $permissions['get own binary files'] = array(
    'name' => 'get own binary files',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'services',
  );

  // Exported permission: 'import final_build_rss_feed_importer feeds'.
  $permissions['import final_build_rss_feed_importer feeds'] = array(
    'name' => 'import final_build_rss_feed_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'perform unlimited index queries'.
  $permissions['perform unlimited index queries'] = array(
    'name' => 'perform unlimited index queries',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'services',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'Forums Admin' => 'Forums Admin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'save file information'.
  $permissions['save file information'] = array(
    'name' => 'save file information',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'services',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'set a system variable'.
  $permissions['set a system variable'] = array(
    'name' => 'set a system variable',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'services',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'Forums Admin' => 'Forums Admin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'unlock final_build_rss_feed_importer feeds'.
  $permissions['unlock final_build_rss_feed_importer feeds'] = array(
    'name' => 'unlock final_build_rss_feed_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'use PHP to import nodes'.
  $permissions['use PHP to import nodes'] = array(
    'name' => 'use PHP to import nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use statistics_ajax'.
  $permissions['use statistics_ajax'] = array(
    'name' => 'use statistics_ajax',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'statistics_ajax',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format unfiltered_html'.
  $permissions['use text format unfiltered_html'] = array(
    'name' => 'use text format unfiltered_html',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'use_search_api_live_results'.
  $permissions['use_search_api_live_results'] = array(
    'name' => 'use_search_api_live_results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_api_live_results',
  );

  // Exported permission: 'view date repeats'.
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'date_repeat_field',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view post access counter'.
  $permissions['view post access counter'] = array(
    'name' => 'view post access counter',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'statistics',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Splash Content Manager' => 'Splash Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
