<?php
/**
 * @file
 * kkms_roles_and_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function kkms_roles_and_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access admin theme'.
  $permissions['access admin theme'] = array(
    'name' => 'access admin theme',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'admin_theme',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access broken links report'.
  $permissions['access broken links report'] = array(
    'name' => 'access broken links report',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'System administrator' => 'System administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'System administrator' => 'System administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access embedded child view'.
  $permissions['access embedded child view'] = array(
    'name' => 'access embedded child view',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'nodehierarchy_views',
  );

  // Exported permission: 'access epostcard'.
  $permissions['access epostcard'] = array(
    'name' => 'access epostcard',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'forward',
  );

  // Exported permission: 'access forward'.
  $permissions['access forward'] = array(
    'name' => 'access forward',
    'roles' => array(
      'System administrator' => 'System administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'forward',
  );

  // Exported permission: 'access node accessibility tab'.
  $permissions['access node accessibility tab'] = array(
    'name' => 'access node accessibility tab',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'quail_api',
  );

  // Exported permission: 'access own broken links report'.
  $permissions['access own broken links report'] = array(
    'name' => 'access own broken links report',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access piwik information'.
  $permissions['access piwik information'] = array(
    'name' => 'access piwik information',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'piwik_stats',
  );

  // Exported permission: 'access security review list'.
  $permissions['access security review list'] = array(
    'name' => 'access security review list',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'security_review',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site map'.
  $permissions['access site map'] = array(
    'name' => 'access site map',
    'roles' => array(
      'System administrator' => 'System administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'site_map',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'System administrator' => 'System administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access toolbar'.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: 'access user contact forms'.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'access workbench'.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'administer CAPTCHA settings'.
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'administer EU Cookie Compliance popup'.
  $permissions['administer EU Cookie Compliance popup'] = array(
    'name' => 'administer EU Cookie Compliance popup',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'eu_cookie_compliance',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer contact forms'.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'administer content sharing'.
  $permissions['administer content sharing'] = array(
    'name' => 'administer content sharing',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'apachesolr_channels',
  );

  // Exported permission: 'administer content translations'.
  $permissions['administer content translations'] = array(
    'name' => 'administer content translations',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'i18n_node',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer elysia_cron'.
  $permissions['administer elysia_cron'] = array(
    'name' => 'administer elysia_cron',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'elysia_cron',
  );

  // Exported permission: 'administer facebook comments'.
  $permissions['administer facebook comments'] = array(
    'name' => 'administer facebook comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'facebook_comments',
  );

  // Exported permission: 'administer facets'.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'facetapi',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer feedback simple'.
  $permissions['administer feedback simple'] = array(
    'name' => 'administer feedback simple',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'feedback_simple',
  );

  // Exported permission: 'administer fieldable panels panes'.
  $permissions['administer fieldable panels panes'] = array(
    'name' => 'administer fieldable panels panes',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flexslider'.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'flexslider',
  );

  // Exported permission: 'administer follow'.
  $permissions['administer follow'] = array(
    'name' => 'administer follow',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'follow',
  );

  // Exported permission: 'administer forums'.
  $permissions['administer forums'] = array(
    'name' => 'administer forums',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'forum',
  );

  // Exported permission: 'administer forward'.
  $permissions['administer forward'] = array(
    'name' => 'administer forward',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'forward',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer hierarchy'.
  $permissions['administer hierarchy'] = array(
    'name' => 'administer hierarchy',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'nodehierarchy',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer linkchecker'.
  $permissions['administer linkchecker'] = array(
    'name' => 'administer linkchecker',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'administer linkit'.
  $permissions['administer linkit'] = array(
    'name' => 'administer linkit',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'linkit',
  );

  // Exported permission: 'administer mailsystem'.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'mailsystem',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer newsletters'.
  $permissions['administer newsletters'] = array(
    'name' => 'administer newsletters',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer nodequeue'.
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer openlayers'.
  $permissions['administer openlayers'] = array(
    'name' => 'administer openlayers',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'openlayers_ui',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panelizer'.
  $permissions['administer panelizer'] = array(
    'name' => 'administer panelizer',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article choice'.
  $permissions['administer panelizer node article choice'] = array(
    'name' => 'administer panelizer node article choice',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article content'.
  $permissions['administer panelizer node article content'] = array(
    'name' => 'administer panelizer node article content',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article context'.
  $permissions['administer panelizer node article context'] = array(
    'name' => 'administer panelizer node article context',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article defaults'.
  $permissions['administer panelizer node article defaults'] = array(
    'name' => 'administer panelizer node article defaults',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article layout'.
  $permissions['administer panelizer node article layout'] = array(
    'name' => 'administer panelizer node article layout',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article overview'.
  $permissions['administer panelizer node article overview'] = array(
    'name' => 'administer panelizer node article overview',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article settings'.
  $permissions['administer panelizer node article settings'] = array(
    'name' => 'administer panelizer node article settings',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node section_page content'.
  $permissions['administer panelizer node section_page content'] = array(
    'name' => 'administer panelizer node section_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node section_page context'.
  $permissions['administer panelizer node section_page context'] = array(
    'name' => 'administer panelizer node section_page context',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node section_page defaults'.
  $permissions['administer panelizer node section_page defaults'] = array(
    'name' => 'administer panelizer node section_page defaults',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node section_page layout'.
  $permissions['administer panelizer node section_page layout'] = array(
    'name' => 'administer panelizer node section_page layout',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node section_page overview'.
  $permissions['administer panelizer node section_page overview'] = array(
    'name' => 'administer panelizer node section_page overview',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node section_page settings'.
  $permissions['administer panelizer node section_page settings'] = array(
    'name' => 'administer panelizer node section_page settings',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer password policies'.
  $permissions['administer password policies'] = array(
    'name' => 'administer password policies',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'password_policy',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer piwik'.
  $permissions['administer piwik'] = array(
    'name' => 'administer piwik',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'piwik',
  );

  // Exported permission: 'administer recaptcha'.
  $permissions['administer recaptcha'] = array(
    'name' => 'administer recaptcha',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'recaptcha',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'administer scheduler'.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'administer scs'.
  $permissions['administer scs'] = array(
    'name' => 'administer scs',
    'roles' => array(),
    'module' => 'scs',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer services'.
  $permissions['administer services'] = array(
    'name' => 'administer services',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'services',
  );

  // Exported permission: 'administer services client'.
  $permissions['administer services client'] = array(
    'name' => 'administer services client',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'services_client',
  );

  // Exported permission: 'administer services client connection'.
  $permissions['administer services client connection'] = array(
    'name' => 'administer services client connection',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'services_client_connection',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer simplenews settings'.
  $permissions['administer simplenews settings'] = array(
    'name' => 'administer simplenews settings',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer simplenews subscriptions'.
  $permissions['administer simplenews subscriptions'] = array(
    'name' => 'administer simplenews subscriptions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer workbench'.
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'administer workbench moderation'.
  $permissions['administer workbench moderation'] = array(
    'name' => 'administer workbench moderation',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'allow access to activity'.
  $permissions['allow access to activity'] = array(
    'name' => 'allow access to activity',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'kk_client_request',
  );

  // Exported permission: 'allow access to article_type'.
  $permissions['allow access to article_type'] = array(
    'name' => 'allow access to article_type',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'kk_client_request',
  );

  // Exported permission: 'allow access to channels'.
  $permissions['allow access to channels'] = array(
    'name' => 'allow access to channels',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'kk_client_request',
  );

  // Exported permission: 'allow access to common'.
  $permissions['allow access to common'] = array(
    'name' => 'allow access to common',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'kk_client_request',
  );

  // Exported permission: 'allow access to competence'.
  $permissions['allow access to competence'] = array(
    'name' => 'allow access to competence',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'kk_client_request',
  );

  // Exported permission: 'allow access to event'.
  $permissions['allow access to event'] = array(
    'name' => 'allow access to event',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'kk_client_request',
  );

  // Exported permission: 'allow access to forums'.
  $permissions['allow access to forums'] = array(
    'name' => 'allow access to forums',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'kk_client_request',
  );

  // Exported permission: 'allow access to institution'.
  $permissions['allow access to institution'] = array(
    'name' => 'allow access to institution',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'kk_client_request',
  );

  // Exported permission: 'allow access to job_title'.
  $permissions['allow access to job_title'] = array(
    'name' => 'allow access to job_title',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'kk_client_request',
  );

  // Exported permission: 'allow access to kkorg'.
  $permissions['allow access to kkorg'] = array(
    'name' => 'allow access to kkorg',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'kk_client_request',
  );

  // Exported permission: 'allow access to kle'.
  $permissions['allow access to kle'] = array(
    'name' => 'allow access to kle',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'kk_client_request',
  );

  // Exported permission: 'allow access to news_type'.
  $permissions['allow access to news_type'] = array(
    'name' => 'allow access to news_type',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'kk_client_request',
  );

  // Exported permission: 'allow access to newsletter'.
  $permissions['allow access to newsletter'] = array(
    'name' => 'allow access to newsletter',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'kk_client_request',
  );

  // Exported permission: 'allow access to place'.
  $permissions['allow access to place'] = array(
    'name' => 'allow access to place',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'kk_client_request',
  );

  // Exported permission: 'allow access to service_type'.
  $permissions['allow access to service_type'] = array(
    'name' => 'allow access to service_type',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'kk_client_request',
  );

  // Exported permission: 'allow access to tags_local'.
  $permissions['allow access to tags_local'] = array(
    'name' => 'allow access to tags_local',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'kk_client_request',
  );

  // Exported permission: 'allow access to tags_open'.
  $permissions['allow access to tags_open'] = array(
    'name' => 'allow access to tags_open',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'kk_client_request',
  );

  // Exported permission: 'allow access to working_hours_vocabulary'.
  $permissions['allow access to working_hours_vocabulary'] = array(
    'name' => 'allow access to working_hours_vocabulary',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'kk_client_request',
  );

  // Exported permission: 'assign Administrator role'.
  $permissions['assign Administrator role'] = array(
    'name' => 'assign Administrator role',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Editor role'.
  $permissions['assign Editor role'] = array(
    'name' => 'assign Editor role',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign all roles'.
  $permissions['assign all roles'] = array(
    'name' => 'assign all roles',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass workbench moderation'.
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'cancel users with no custom roles'.
  $permissions['cancel users with no custom roles'] = array(
    'name' => 'cancel users with no custom roles',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role Administrator'.
  $permissions['cancel users with role Administrator'] = array(
    'name' => 'cancel users with role Administrator',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role Administrator and other roles'.
  $permissions['cancel users with role Administrator and other roles'] = array(
    'name' => 'cancel users with role Administrator and other roles',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role Editor'.
  $permissions['cancel users with role Editor'] = array(
    'name' => 'cancel users with role Editor',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role Editor and other roles'.
  $permissions['cancel users with role Editor and other roles'] = array(
    'name' => 'cancel users with role Editor and other roles',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role Systemadministrator'.
  $permissions['cancel users with role Systemadministrator'] = array(
    'name' => 'cancel users with role Systemadministrator',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'cancel users with role Systemadministrator and other roles'.
  $permissions['cancel users with role Systemadministrator and other roles'] = array(
    'name' => 'cancel users with role Systemadministrator and other roles',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'change follow link titles'.
  $permissions['change follow link titles'] = array(
    'name' => 'change follow link titles',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'follow',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'configure tablefield'.
  $permissions['configure tablefield'] = array(
    'name' => 'configure tablefield',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'tablefield',
  );

  // Exported permission: 'create area content'.
  $permissions['create area content'] = array(
    'name' => 'create area content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create blog content'.
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create child nodes'.
  $permissions['create child nodes'] = array(
    'name' => 'create child nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'nodehierarchy',
  );

  // Exported permission: 'create child of any parent'.
  $permissions['create child of any parent'] = array(
    'name' => 'create child of any parent',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'nodehierarchy',
  );

  // Exported permission: 'create contact_page content'.
  $permissions['create contact_page content'] = array(
    'name' => 'create contact_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create decision_tree_item content'.
  $permissions['create decision_tree_item content'] = array(
    'name' => 'create decision_tree_item content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create factbox content'.
  $permissions['create factbox content'] = array(
    'name' => 'create factbox content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create factbox_card_info content'.
  $permissions['create factbox_card_info content'] = array(
    'name' => 'create factbox_card_info content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create factbox_figures content'.
  $permissions['create factbox_figures content'] = array(
    'name' => 'create factbox_figures content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create faq_qa content'.
  $permissions['create faq_qa content'] = array(
    'name' => 'create faq_qa content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create fieldable banner_pane'.
  $permissions['create fieldable banner_pane'] = array(
    'name' => 'create fieldable banner_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable decision_tree_pane'.
  $permissions['create fieldable decision_tree_pane'] = array(
    'name' => 'create fieldable decision_tree_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable files_pane'.
  $permissions['create fieldable files_pane'] = array(
    'name' => 'create fieldable files_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable form_pane'.
  $permissions['create fieldable form_pane'] = array(
    'name' => 'create fieldable form_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable link_box_pane'.
  $permissions['create fieldable link_box_pane'] = array(
    'name' => 'create fieldable link_box_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable nodequeue_pane'.
  $permissions['create fieldable nodequeue_pane'] = array(
    'name' => 'create fieldable nodequeue_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable service_spot_pane'.
  $permissions['create fieldable service_spot_pane'] = array(
    'name' => 'create fieldable service_spot_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable slideshow_pane'.
  $permissions['create fieldable slideshow_pane'] = array(
    'name' => 'create fieldable slideshow_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable text_pane'.
  $permissions['create fieldable text_pane'] = array(
    'name' => 'create fieldable text_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create forum content'.
  $permissions['create forum content'] = array(
    'name' => 'create forum content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create image_map content'.
  $permissions['create image_map content'] = array(
    'name' => 'create image_map content',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create image_slideshow content'.
  $permissions['create image_slideshow content'] = array(
    'name' => 'create image_slideshow content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create institution content'.
  $permissions['create institution content'] = array(
    'name' => 'create institution content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create map content'.
  $permissions['create map content'] = array(
    'name' => 'create map content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create person content'.
  $permissions['create person content'] = array(
    'name' => 'create person content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create place content'.
  $permissions['create place content'] = array(
    'name' => 'create place content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create script content'.
  $permissions['create script content'] = array(
    'name' => 'create script content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create section_page content'.
  $permissions['create section_page content'] = array(
    'name' => 'create section_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create service content'.
  $permissions['create service content'] = array(
    'name' => 'create service content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create service_situation content'.
  $permissions['create service_situation content'] = array(
    'name' => 'create service_situation content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create service_spot content'.
  $permissions['create service_spot content'] = array(
    'name' => 'create service_spot content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create simplenews content'.
  $permissions['create simplenews content'] = array(
    'name' => 'create simplenews content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create stepbox content'.
  $permissions['create stepbox content'] = array(
    'name' => 'create stepbox content',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create stepbox_tabs content'.
  $permissions['create stepbox_tabs content'] = array(
    'name' => 'create stepbox_tabs content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create table content'.
  $permissions['create table content'] = array(
    'name' => 'create table content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create users'.
  $permissions['create users'] = array(
    'name' => 'create users',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'create video content'.
  $permissions['create video content'] = array(
    'name' => 'create video content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'customize nodehierarchy menus'.
  $permissions['customize nodehierarchy menus'] = array(
    'name' => 'customize nodehierarchy menus',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'nodehierarchy',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any area content'.
  $permissions['delete any area content'] = array(
    'name' => 'delete any area content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any blog content'.
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any contact_page content'.
  $permissions['delete any contact_page content'] = array(
    'name' => 'delete any contact_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any decision_tree_item content'.
  $permissions['delete any decision_tree_item content'] = array(
    'name' => 'delete any decision_tree_item content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any factbox content'.
  $permissions['delete any factbox content'] = array(
    'name' => 'delete any factbox content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any factbox_card_info content'.
  $permissions['delete any factbox_card_info content'] = array(
    'name' => 'delete any factbox_card_info content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any factbox_figures content'.
  $permissions['delete any factbox_figures content'] = array(
    'name' => 'delete any factbox_figures content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any faq_qa content'.
  $permissions['delete any faq_qa content'] = array(
    'name' => 'delete any faq_qa content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any forum content'.
  $permissions['delete any forum content'] = array(
    'name' => 'delete any forum content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any image_map content'.
  $permissions['delete any image_map content'] = array(
    'name' => 'delete any image_map content',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any image_slideshow content'.
  $permissions['delete any image_slideshow content'] = array(
    'name' => 'delete any image_slideshow content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any institution content'.
  $permissions['delete any institution content'] = array(
    'name' => 'delete any institution content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any map content'.
  $permissions['delete any map content'] = array(
    'name' => 'delete any map content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news content'.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any person content'.
  $permissions['delete any person content'] = array(
    'name' => 'delete any person content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any place content'.
  $permissions['delete any place content'] = array(
    'name' => 'delete any place content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any script content'.
  $permissions['delete any script content'] = array(
    'name' => 'delete any script content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any section_page content'.
  $permissions['delete any section_page content'] = array(
    'name' => 'delete any section_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any service content'.
  $permissions['delete any service content'] = array(
    'name' => 'delete any service content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any service_situation content'.
  $permissions['delete any service_situation content'] = array(
    'name' => 'delete any service_situation content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any service_spot content'.
  $permissions['delete any service_spot content'] = array(
    'name' => 'delete any service_spot content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any simplenews content'.
  $permissions['delete any simplenews content'] = array(
    'name' => 'delete any simplenews content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any stepbox content'.
  $permissions['delete any stepbox content'] = array(
    'name' => 'delete any stepbox content',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any stepbox_tabs content'.
  $permissions['delete any stepbox_tabs content'] = array(
    'name' => 'delete any stepbox_tabs content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any table content'.
  $permissions['delete any table content'] = array(
    'name' => 'delete any table content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video content'.
  $permissions['delete any video content'] = array(
    'name' => 'delete any video content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete fieldable banner_pane'.
  $permissions['delete fieldable banner_pane'] = array(
    'name' => 'delete fieldable banner_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable decision_tree_pane'.
  $permissions['delete fieldable decision_tree_pane'] = array(
    'name' => 'delete fieldable decision_tree_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable files_pane'.
  $permissions['delete fieldable files_pane'] = array(
    'name' => 'delete fieldable files_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable form_pane'.
  $permissions['delete fieldable form_pane'] = array(
    'name' => 'delete fieldable form_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable link_box_pane'.
  $permissions['delete fieldable link_box_pane'] = array(
    'name' => 'delete fieldable link_box_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable nodequeue_pane'.
  $permissions['delete fieldable nodequeue_pane'] = array(
    'name' => 'delete fieldable nodequeue_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable service_spot_pane'.
  $permissions['delete fieldable service_spot_pane'] = array(
    'name' => 'delete fieldable service_spot_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable slideshow_pane'.
  $permissions['delete fieldable slideshow_pane'] = array(
    'name' => 'delete fieldable slideshow_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable text_pane'.
  $permissions['delete fieldable text_pane'] = array(
    'name' => 'delete fieldable text_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete own area content'.
  $permissions['delete own area content'] = array(
    'name' => 'delete own area content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own blog content'.
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own contact_page content'.
  $permissions['delete own contact_page content'] = array(
    'name' => 'delete own contact_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own decision_tree_item content'.
  $permissions['delete own decision_tree_item content'] = array(
    'name' => 'delete own decision_tree_item content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own factbox content'.
  $permissions['delete own factbox content'] = array(
    'name' => 'delete own factbox content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own factbox_card_info content'.
  $permissions['delete own factbox_card_info content'] = array(
    'name' => 'delete own factbox_card_info content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own factbox_figures content'.
  $permissions['delete own factbox_figures content'] = array(
    'name' => 'delete own factbox_figures content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own faq_qa content'.
  $permissions['delete own faq_qa content'] = array(
    'name' => 'delete own faq_qa content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own forum content'.
  $permissions['delete own forum content'] = array(
    'name' => 'delete own forum content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own image_map content'.
  $permissions['delete own image_map content'] = array(
    'name' => 'delete own image_map content',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image_slideshow content'.
  $permissions['delete own image_slideshow content'] = array(
    'name' => 'delete own image_slideshow content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own institution content'.
  $permissions['delete own institution content'] = array(
    'name' => 'delete own institution content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own map content'.
  $permissions['delete own map content'] = array(
    'name' => 'delete own map content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own person content'.
  $permissions['delete own person content'] = array(
    'name' => 'delete own person content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own place content'.
  $permissions['delete own place content'] = array(
    'name' => 'delete own place content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own script content'.
  $permissions['delete own script content'] = array(
    'name' => 'delete own script content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own section_page content'.
  $permissions['delete own section_page content'] = array(
    'name' => 'delete own section_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own service content'.
  $permissions['delete own service content'] = array(
    'name' => 'delete own service content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own service_situation content'.
  $permissions['delete own service_situation content'] = array(
    'name' => 'delete own service_situation content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own service_spot content'.
  $permissions['delete own service_spot content'] = array(
    'name' => 'delete own service_spot content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own simplenews content'.
  $permissions['delete own simplenews content'] = array(
    'name' => 'delete own simplenews content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own stepbox content'.
  $permissions['delete own stepbox content'] = array(
    'name' => 'delete own stepbox content',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own stepbox_tabs content'.
  $permissions['delete own stepbox_tabs content'] = array(
    'name' => 'delete own stepbox_tabs content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own table content'.
  $permissions['delete own table content'] = array(
    'name' => 'delete own table content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video content'.
  $permissions['delete own video content'] = array(
    'name' => 'delete own video content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'display EU Cookie Compliance popup'.
  $permissions['display EU Cookie Compliance popup'] = array(
    'name' => 'display EU Cookie Compliance popup',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'eu_cookie_compliance',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit all node parents'.
  $permissions['edit all node parents'] = array(
    'name' => 'edit all node parents',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'nodehierarchy',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any area content'.
  $permissions['edit any area content'] = array(
    'name' => 'edit any area content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any blog content'.
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any contact_page content'.
  $permissions['edit any contact_page content'] = array(
    'name' => 'edit any contact_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any decision_tree_item content'.
  $permissions['edit any decision_tree_item content'] = array(
    'name' => 'edit any decision_tree_item content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any factbox content'.
  $permissions['edit any factbox content'] = array(
    'name' => 'edit any factbox content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any factbox_card_info content'.
  $permissions['edit any factbox_card_info content'] = array(
    'name' => 'edit any factbox_card_info content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any factbox_figures content'.
  $permissions['edit any factbox_figures content'] = array(
    'name' => 'edit any factbox_figures content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any faq_qa content'.
  $permissions['edit any faq_qa content'] = array(
    'name' => 'edit any faq_qa content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any forum content'.
  $permissions['edit any forum content'] = array(
    'name' => 'edit any forum content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any image_map content'.
  $permissions['edit any image_map content'] = array(
    'name' => 'edit any image_map content',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any image_slideshow content'.
  $permissions['edit any image_slideshow content'] = array(
    'name' => 'edit any image_slideshow content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any institution content'.
  $permissions['edit any institution content'] = array(
    'name' => 'edit any institution content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any map content'.
  $permissions['edit any map content'] = array(
    'name' => 'edit any map content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any person content'.
  $permissions['edit any person content'] = array(
    'name' => 'edit any person content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any place content'.
  $permissions['edit any place content'] = array(
    'name' => 'edit any place content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any script content'.
  $permissions['edit any script content'] = array(
    'name' => 'edit any script content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any section_page content'.
  $permissions['edit any section_page content'] = array(
    'name' => 'edit any section_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any service content'.
  $permissions['edit any service content'] = array(
    'name' => 'edit any service content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any service_situation content'.
  $permissions['edit any service_situation content'] = array(
    'name' => 'edit any service_situation content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any service_spot content'.
  $permissions['edit any service_spot content'] = array(
    'name' => 'edit any service_spot content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any simplenews content'.
  $permissions['edit any simplenews content'] = array(
    'name' => 'edit any simplenews content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any stepbox content'.
  $permissions['edit any stepbox content'] = array(
    'name' => 'edit any stepbox content',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any stepbox_tabs content'.
  $permissions['edit any stepbox_tabs content'] = array(
    'name' => 'edit any stepbox_tabs content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any table content'.
  $permissions['edit any table content'] = array(
    'name' => 'edit any table content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any user follow links'.
  $permissions['edit any user follow links'] = array(
    'name' => 'edit any user follow links',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'follow',
  );

  // Exported permission: 'edit any video content'.
  $permissions['edit any video content'] = array(
    'name' => 'edit any video content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit embedded child view'.
  $permissions['edit embedded child view'] = array(
    'name' => 'edit embedded child view',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'nodehierarchy_views',
  );

  // Exported permission: 'edit fieldable banner_pane'.
  $permissions['edit fieldable banner_pane'] = array(
    'name' => 'edit fieldable banner_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable decision_tree_pane'.
  $permissions['edit fieldable decision_tree_pane'] = array(
    'name' => 'edit fieldable decision_tree_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable files_pane'.
  $permissions['edit fieldable files_pane'] = array(
    'name' => 'edit fieldable files_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable form_pane'.
  $permissions['edit fieldable form_pane'] = array(
    'name' => 'edit fieldable form_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable link_box_pane'.
  $permissions['edit fieldable link_box_pane'] = array(
    'name' => 'edit fieldable link_box_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable nodequeue_pane'.
  $permissions['edit fieldable nodequeue_pane'] = array(
    'name' => 'edit fieldable nodequeue_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable service_spot_pane'.
  $permissions['edit fieldable service_spot_pane'] = array(
    'name' => 'edit fieldable service_spot_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable slideshow_pane'.
  $permissions['edit fieldable slideshow_pane'] = array(
    'name' => 'edit fieldable slideshow_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable text_pane'.
  $permissions['edit fieldable text_pane'] = array(
    'name' => 'edit fieldable text_pane',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit link settings'.
  $permissions['edit link settings'] = array(
    'name' => 'edit link settings',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit own area content'.
  $permissions['edit own area content'] = array(
    'name' => 'edit own area content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own blog content'.
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own contact_page content'.
  $permissions['edit own contact_page content'] = array(
    'name' => 'edit own contact_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own decision_tree_item content'.
  $permissions['edit own decision_tree_item content'] = array(
    'name' => 'edit own decision_tree_item content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own factbox content'.
  $permissions['edit own factbox content'] = array(
    'name' => 'edit own factbox content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own factbox_card_info content'.
  $permissions['edit own factbox_card_info content'] = array(
    'name' => 'edit own factbox_card_info content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own factbox_figures content'.
  $permissions['edit own factbox_figures content'] = array(
    'name' => 'edit own factbox_figures content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own faq_qa content'.
  $permissions['edit own faq_qa content'] = array(
    'name' => 'edit own faq_qa content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own follow links'.
  $permissions['edit own follow links'] = array(
    'name' => 'edit own follow links',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'follow',
  );

  // Exported permission: 'edit own forum content'.
  $permissions['edit own forum content'] = array(
    'name' => 'edit own forum content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own image_map content'.
  $permissions['edit own image_map content'] = array(
    'name' => 'edit own image_map content',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own image_slideshow content'.
  $permissions['edit own image_slideshow content'] = array(
    'name' => 'edit own image_slideshow content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own institution content'.
  $permissions['edit own institution content'] = array(
    'name' => 'edit own institution content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own map content'.
  $permissions['edit own map content'] = array(
    'name' => 'edit own map content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own node parents'.
  $permissions['edit own node parents'] = array(
    'name' => 'edit own node parents',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'nodehierarchy',
  );

  // Exported permission: 'edit own person content'.
  $permissions['edit own person content'] = array(
    'name' => 'edit own person content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own place content'.
  $permissions['edit own place content'] = array(
    'name' => 'edit own place content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own script content'.
  $permissions['edit own script content'] = array(
    'name' => 'edit own script content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own section_page content'.
  $permissions['edit own section_page content'] = array(
    'name' => 'edit own section_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own service content'.
  $permissions['edit own service content'] = array(
    'name' => 'edit own service content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own service_situation content'.
  $permissions['edit own service_situation content'] = array(
    'name' => 'edit own service_situation content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own service_spot content'.
  $permissions['edit own service_spot content'] = array(
    'name' => 'edit own service_spot content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own simplenews content'.
  $permissions['edit own simplenews content'] = array(
    'name' => 'edit own simplenews content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own stepbox content'.
  $permissions['edit own stepbox content'] = array(
    'name' => 'edit own stepbox content',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own stepbox_tabs content'.
  $permissions['edit own stepbox_tabs content'] = array(
    'name' => 'edit own stepbox_tabs content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own table content'.
  $permissions['edit own table content'] = array(
    'name' => 'edit own table content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video content'.
  $permissions['edit own video content'] = array(
    'name' => 'edit own video content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit site follow links'.
  $permissions['edit site follow links'] = array(
    'name' => 'edit site follow links',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'follow',
  );

  // Exported permission: 'edit users with no custom roles'.
  $permissions['edit users with no custom roles'] = array(
    'name' => 'edit users with no custom roles',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role Administrator'.
  $permissions['edit users with role Administrator'] = array(
    'name' => 'edit users with role Administrator',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role Administrator and other roles'.
  $permissions['edit users with role Administrator and other roles'] = array(
    'name' => 'edit users with role Administrator and other roles',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role Editor'.
  $permissions['edit users with role Editor'] = array(
    'name' => 'edit users with role Editor',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role Editor and other roles'.
  $permissions['edit users with role Editor and other roles'] = array(
    'name' => 'edit users with role Editor and other roles',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role Systemadministrator'.
  $permissions['edit users with role Systemadministrator'] = array(
    'name' => 'edit users with role Systemadministrator',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'edit users with role Systemadministrator and other roles'.
  $permissions['edit users with role Systemadministrator and other roles'] = array(
    'name' => 'edit users with role Systemadministrator and other roles',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: 'export tablefield'.
  $permissions['export tablefield'] = array(
    'name' => 'export tablefield',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'tablefield',
  );

  // Exported permission: 'force password change'.
  $permissions['force password change'] = array(
    'name' => 'force password change',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'password_policy',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'get a system variable'.
  $permissions['get a system variable'] = array(
    'name' => 'get a system variable',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'services',
  );

  // Exported permission: 'get any binary files'.
  $permissions['get any binary files'] = array(
    'name' => 'get any binary files',
    'roles' => array(
      'System administrator' => 'System administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'services',
  );

  // Exported permission: 'get own binary files'.
  $permissions['get own binary files'] = array(
    'name' => 'get own binary files',
    'roles' => array(
      'System administrator' => 'System administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'services',
  );

  // Exported permission: 'kkms_panes_permission_access_source'.
  $permissions['kkms_panes_permission_access_source'] = array(
    'name' => 'kkms_panes_permission_access_source',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'kkms_panes',
  );

  // Exported permission: 'make services client requests'.
  $permissions['make services client requests'] = array(
    'name' => 'make services client requests',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'services_client',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manipulate all queues'.
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'manipulate queues'.
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'moderate content from draft to published'.
  $permissions['moderate content from draft to published'] = array(
    'name' => 'moderate content from draft to published',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from published to draft'.
  $permissions['moderate content from published to draft'] = array(
    'name' => 'moderate content from published to draft',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate facebook comments'.
  $permissions['moderate facebook comments'] = array(
    'name' => 'moderate facebook comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'facebook_comments',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'piwik',
  );

  // Exported permission: 'override default scheduler time'.
  $permissions['override default scheduler time'] = array(
    'name' => 'override default scheduler time',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'scheduler_workbench',
  );

  // Exported permission: 'override email address'.
  $permissions['override email address'] = array(
    'name' => 'override email address',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'forward',
  );

  // Exported permission: 'override flood control'.
  $permissions['override flood control'] = array(
    'name' => 'override flood control',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'forward',
  );

  // Exported permission: 'perform node accessibility validation'.
  $permissions['perform node accessibility validation'] = array(
    'name' => 'perform node accessibility validation',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'quail_api',
  );

  // Exported permission: 'perform unlimited index queries'.
  $permissions['perform unlimited index queries'] = array(
    'name' => 'perform unlimited index queries',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'services',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'System administrator' => 'System administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'pull content from other site'.
  $permissions['pull content from other site'] = array(
    'name' => 'pull content from other site',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'pull_content',
  );

  // Exported permission: 'rebuild tablefield'.
  $permissions['rebuild tablefield'] = array(
    'name' => 'rebuild tablefield',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'tablefield',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'run security checks'.
  $permissions['run security checks'] = array(
    'name' => 'run security checks',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'security_review',
  );

  // Exported permission: 'save file information'.
  $permissions['save file information'] = array(
    'name' => 'save file information',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'services',
  );

  // Exported permission: 'schedule (un)publishing of nodes'.
  $permissions['schedule (un)publishing of nodes'] = array(
    'name' => 'schedule (un)publishing of nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'System administrator' => 'System administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'send newsletter'.
  $permissions['send newsletter'] = array(
    'name' => 'send newsletter',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'set a system variable'.
  $permissions['set a system variable'] = array(
    'name' => 'set a system variable',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'services',
  );

  // Exported permission: 'show format selection for comment'.
  $permissions['show format selection for comment'] = array(
    'name' => 'show format selection for comment',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for fieldable_panels_pane'.
  $permissions['show format selection for fieldable_panels_pane'] = array(
    'name' => 'show format selection for fieldable_panels_pane',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for file'.
  $permissions['show format selection for file'] = array(
    'name' => 'show format selection for file',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for node'.
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for taxonomy_term'.
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for user'.
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format tips'.
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show more format tips link'.
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'skip CAPTCHA'.
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'System administrator' => 'System administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'subscribe to newsletters'.
  $permissions['subscribe to newsletters'] = array(
    'name' => 'subscribe to newsletters',
    'roles' => array(
      'System administrator' => 'System administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'unblock expired accounts'.
  $permissions['unblock expired accounts'] = array(
    'name' => 'unblock expired accounts',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'password_policy',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'piwik',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format unfiltered_html'.
  $permissions['use text format unfiltered_html'] = array(
    'name' => 'use text format unfiltered_html',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use workbench_media add form'.
  $permissions['use workbench_media add form'] = array(
    'name' => 'use workbench_media add form',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'workbench_media',
  );

  // Exported permission: 'use workbench_moderation my drafts tab'.
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'use workbench_moderation needs review tab'.
  $permissions['use workbench_moderation needs review tab'] = array(
    'name' => 'use workbench_moderation needs review tab',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view all unpublished content'.
  $permissions['view all unpublished content'] = array(
    'name' => 'view all unpublished content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view channels registry'.
  $permissions['view channels registry'] = array(
    'name' => 'view channels registry',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System administrator' => 'System administrator',
    ),
    'module' => 'apachesolr_channels',
  );

  // Exported permission: 'view date repeats'.
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'date_repeat_field',
  );

  // Exported permission: 'view feedback simple'.
  $permissions['view feedback simple'] = array(
    'name' => 'view feedback simple',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'feedback_simple',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'System administrator' => 'System administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view moderation history'.
  $permissions['view moderation history'] = array(
    'name' => 'view moderation history',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view moderation messages'.
  $permissions['view moderation messages'] = array(
    'name' => 'view moderation messages',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'System administrator' => 'System administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'System administrator' => 'System administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
