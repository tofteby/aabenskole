<?php
/**
 * @file
 * configuration_apachesolr.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function configuration_apachesolr_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['current_search-search_results'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'search_results',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'current_search',
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
        'region' => '',
        'status' => 0,
        'theme' => 'kos_theme',
        'weight' => -26,
      ),
      'ringstedtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ringstedtheme',
        'weight' => -30,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['current_search-your_filter'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'your_filter',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'current_search',
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
        'region' => '',
        'status' => 0,
        'theme' => 'kos_theme',
        'weight' => -24,
      ),
      'ringstedtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ringstedtheme',
        'weight' => -28,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['facetapi-6SRgjUNBb5zMJQ6kHoJyj6lYfQR3TW0A'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '6SRgjUNBb5zMJQ6kHoJyj6lYfQR3TW0A',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
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
        'region' => '',
        'status' => 0,
        'theme' => 'kos_theme',
        'weight' => 0,
      ),
      'ringstedtheme' => array(
        'region' => 'events_topbar_search',
        'status' => 1,
        'theme' => 'ringstedtheme',
        'weight' => -29,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['facetapi-Up4vqKgOst0r0X3V9rBalJ1fkEJlO6qW'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'Up4vqKgOst0r0X3V9rBalJ1fkEJlO6qW',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
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
        'region' => '',
        'status' => 0,
        'theme' => 'kos_theme',
        'weight' => -19,
      ),
      'ringstedtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ringstedtheme',
        'weight' => -21,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['facetapi-ceoqKLyatTxSOKgDw4IAm8uGVPE8Ell4'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'ceoqKLyatTxSOKgDw4IAm8uGVPE8Ell4',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
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
        'region' => '',
        'status' => 0,
        'theme' => 'kos_theme',
        'weight' => -20,
      ),
      'ringstedtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ringstedtheme',
        'weight' => -22,
      ),
    ),
    'title' => 'Filter by category',
    'visibility' => 0,
  );

  $export['facetapi-iCCIaUB02Oj0l0TYy9TaYkBdnF51o3M1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'iCCIaUB02Oj0l0TYy9TaYkBdnF51o3M1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
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
        'region' => '',
        'status' => 0,
        'theme' => 'kos_theme',
        'weight' => -18,
      ),
      'ringstedtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ringstedtheme',
        'weight' => -20,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['facetapi-n18E4x0qRRaIP7nV6I0SDYiCJsq77HCB'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'n18E4x0qRRaIP7nV6I0SDYiCJsq77HCB',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
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
        'region' => '',
        'status' => 0,
        'theme' => 'kos_theme',
        'weight' => -21,
      ),
      'ringstedtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ringstedtheme',
        'weight' => -23,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['facetapi-sVoveCQJDMXfc2XoES6J1YA7LYXPmZ2Y'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'sVoveCQJDMXfc2XoES6J1YA7LYXPmZ2Y',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
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
        'region' => '',
        'status' => 0,
        'theme' => 'kos_theme',
        'weight' => 0,
      ),
      'ringstedtheme' => array(
        'region' => 'events_topbar_search',
        'status' => 1,
        'theme' => 'ringstedtheme',
        'weight' => -28,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['facetapi-wYo1RIg8Ez6D1PgH1anr4yBkbGACy8vd'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'wYo1RIg8Ez6D1PgH1anr4yBkbGACy8vd',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
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
        'region' => '',
        'status' => 0,
        'theme' => 'kos_theme',
        'weight' => 0,
      ),
      'ringstedtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ringstedtheme',
        'weight' => -24,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
