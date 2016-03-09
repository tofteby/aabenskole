<?php
/**
 * @file
 * configuration_apachesolr.current_search.inc
 */

/**
 * Implements hook_current_search_default_items().
 */
function configuration_apachesolr_current_search_default_items() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->name = 'search_results';
  $item->label = 'Search results';
  $item->settings = array(
    'items' => array(
      'results' => array(
        'id' => 'text',
        'label' => 'Results',
        'text' => 'Your search gave <em>[facetapi_results:result-count]</em> results. Displayed <em>[facetapi_results:start-count]-[facetapi_results:end-count]</em>',
        'plural' => 0,
        'text_plural' => '',
        'plural_condition' => 'facetapi_results:result-count',
        'wrapper' => 1,
        'element' => 'h2',
        'css' => 0,
        'classes' => '',
        'weight' => '0',
      ),
    ),
    'advanced' => array(
      'empty_searches' => '3',
    ),
  );
  $export['search_results'] = $item;

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->name = 'your_filter';
  $item->label = 'Your filter';
  $item->settings = array(
    'items' => array(
      'search_page_group' => array(
        'id' => 'group',
        'label' => 'Search page group',
        'field_pattern' => 'Your filter:',
        'nofollow' => 1,
        'weight' => '0',
      ),
    ),
    'advanced' => array(
      'empty_searches' => '3',
    ),
  );
  $export['your_filter'] = $item;

  return $export;
}
