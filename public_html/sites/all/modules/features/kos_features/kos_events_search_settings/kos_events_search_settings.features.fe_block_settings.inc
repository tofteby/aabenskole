<?php
/**
 * @file
 * kos_events_search_settings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function kos_events_search_settings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['facetapi-1yhQPK91uDdjb49O5d7EWhQyS1vM0vBG'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '1yhQPK91uDdjb49O5d7EWhQyS1vM0vBG',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'kkms_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'kkms_admin',
        'weight' => 0,
      ),
      'kos_theme' => array(
        'region' => 'events_topbar_search',
        'status' => 1,
        'theme' => 'kos_theme',
        'weight' => 0,
      ),
    ),
    'title' => 'Filter by Subjects',
    'visibility' => 0,
  );

  $export['facetapi-60gfS3pSApo8mwP2gA4txULpOQdbHnvx'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '60gfS3pSApo8mwP2gA4txULpOQdbHnvx',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'kkms_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'kkms_admin',
        'weight' => 0,
      ),
      'kos_theme' => array(
        'region' => 'events_topbar_search',
        'status' => 1,
        'theme' => 'kos_theme',
        'weight' => 0,
      ),
    ),
    'title' => 'Filter by School event price',
    'visibility' => 0,
  );

  $export['facetapi-p3fUbRiE0J3kxS8J2AEwWxKS2gqTkMiH'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'p3fUbRiE0J3kxS8J2AEwWxKS2gqTkMiH',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'kkms_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'kkms_admin',
        'weight' => 0,
      ),
      'kos_theme' => array(
        'region' => 'events_topbar_search',
        'status' => 1,
        'theme' => 'kos_theme',
        'weight' => 0,
      ),
    ),
    'title' => 'Filter by Topic',
    'visibility' => 0,
  );

  $export['facetapi-qY5YJNH4fCb6ZtmY0Hkot3VeuVU33IgB'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'qY5YJNH4fCb6ZtmY0Hkot3VeuVU33IgB',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'kkms_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'kkms_admin',
        'weight' => 0,
      ),
      'kos_theme' => array(
        'region' => 'events_topbar_search',
        'status' => 1,
        'theme' => 'kos_theme',
        'weight' => 0,
      ),
    ),
    'title' => 'Filter by Audiences',
    'visibility' => 0,
  );

  return $export;
}
