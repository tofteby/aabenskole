<?php

/**
 * Facetapi hooks
 */

/**
 * Implementation of hook_facetapi_facet_info().
 */
function apachesolr_channels_facetapi_facet_info($searcher_info) {
  $facets = array();
  $vocabularies = taxonomy_get_vocabularies();
  $shared_local_vocabularies = kk_client_request_get_local_sync_vocabularies();
  $shared_local_vocabularies = array_keys($shared_local_vocabularies);

  foreach ($vocabularies as $vocabulary) {
    if(in_array($vocabulary->vid, $shared_local_vocabularies)) {
      $facets['im_shared_tax_' . $vocabulary->machine_name] = array(
        'label' => t('Shared !vocabulary_name', array('!vocabulary_name' => $vocabulary->name)),
        'dependency plugins' => array(
          'bundle',
          'role',
        ),
        'description' => t('Filter by shared taxonomy !vocabulary_name.', array('!vocabulary_name' => $vocabulary->name)),
        'map callback' => 'apachesolr_channel_map_shared_taxonomy_terms',
        'hierarchy callback' => 'apachesolr_channel_get_taxonomy_hierarchy',
        'facet mincount allowed' => TRUE,
        'query types' => array(
          'term'
        ),
        'query type' => 'term',
      );
    }
    else {
      $facets['im_local_tax_'  . $vocabulary->machine_name] = array(
        'label' => t('Local !vocabulary_name', array('!vocabulary_name' => $vocabulary->name)),
        'dependency plugins' => array(
          'bundle',
          'role',
        ),
        'field' => 'im_local_tax_' . apachesolr_site_hash()  . '_' . $vocabulary->machine_name,
        'field alias' => 'im_local_tax_' . apachesolr_site_hash()  . '_' . $vocabulary->machine_name,
        'description' => t('Filter by local taxonomy !vocabulary_name.', array('!vocabulary_name' => $vocabulary->name)),
        'map callback' => 'facetapi_map_taxonomy_terms',
        'hierarchy callback' => 'facetapi_get_taxonomy_hierarchy',
        'facet mincount allowed' => TRUE,
        'query types' => array(
          'term'
        ),
        'query type' => 'term',
      );
    }
  }
  
  $facets['sm_search_terms'] = array(
    'label' => t('Search page facet'),
    'field' => 'sm_search_terms',
    'description' => t('Merge shared and local terms used on the free text search page'),
    'map callback' => 'apachesolr_channel_map_search_terms',
    'facet mincount allowed' => TRUE,
  );
  
  return $facets;
}
