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
        'weight' => -29,
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
        'weight' => -27,
      ),
    ),
    'title' => '<none>',
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
        'weight' => -19,
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
        'weight' => -20,
      ),
    ),
    'title' => 'Filter by category',
    'visibility' => 0,
  );

  $export['facetapi-hmbYcCHh5Jux4en8BrbqB2CuJHFi1KDO'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'hmbYcCHh5Jux4en8BrbqB2CuJHFi1KDO',
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
        'weight' => -17,
      ),
      'ringstedtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ringstedtheme',
        'weight' => -17,
      ),
    ),
    'title' => '',
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
        'weight' => -18,
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
        'weight' => -22,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
