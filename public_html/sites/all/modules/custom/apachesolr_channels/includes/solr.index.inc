<?php

/**
 * Implements hook_apachesolr_index_document_build().
 */
function apachesolr_channels_apachesolr_index_document_build(ApacheSolrDocument $document, $entity, $entity_type, $env_id) {
  // Add site profile to every indexed document.
  $document->setField('ss_site_profile', drupal_get_profile());
}

/**
 * Alter the site meta-data before it's sent to the Solr index.
 */
function apachesolr_channels_apachesolr_multisitesearch_metadata_alter($document) {
  // Add some fields to prevent missing filter handlers in apachesolr views
  // IMPORTANT: DO NOT add the fields: id, site, hash, entity_id, entity_type!
  $integer = array('im_field_channels', 'im_field_tags_local', 'im_field_tags_open',
    'im_shared_tax_channels', 'im_shared_tax_event', 'im_shared_tax_place', 'im_shared_tax_common', 'im_shared_tax_kle');
  foreach ($integer as $field) {
    $document->addField($field, 1000);
  }
  $string = array('label', 'bundle', 'ss_language', 'sm_field_teaser', 'sm_share_site_field_sites');
  foreach ($string as $field) {
    $document->addField($field, 'some value');
  }
  $boolean = array('bs_status', 'bs_sticky', 'bs_promote');
  foreach ($boolean as $field) {
    $document->addField($field, TRUE);
  }
  $date = array('ds_field_date', 'ds_created', 'ds_created_real');
  foreach ($date as $field) {
    $document->addField($field, apachesolr_date_iso(time()));
  }
}

/**
 * Alter the solr field map to have shared taxonomy field mappings
 */
function apachesolr_channels_apachesolr_field_name_map_alter(&$map) {
  foreach (taxonomy_get_vocabularies() as $vocab) {
    if (apachesolr_channels_is_shared_tax($vocab->vid)) {
      $value = t('CMT taxonomy term IDs from the %name vocabulary', array('%name' => $vocab->name));
      $map['im_shared_tax_' . $vocab->machine_name] = $value;
    }
  }
}

/**
 * Implement hook_apachesolr_field_mappings().
 */
function apachesolr_channels_apachesolr_field_mappings() {
  $mappings = array(
    'shared_site' => array(
      'indexing_callback' => array('apachesolr_share_to_sites_indexing_callback'),
      'facets' => TRUE,
      'facet missing allowed' => TRUE,
    ),
    'image' => array(
      'indexing_callback' => array('apachesolr_channels_image_indexing_callback'),
    ),
    'text_long' => array(
      'indexing_callback' => array('apachesolr_fields_default_indexing_callback'),
      'index_type' => 'string',
      'facets' => TRUE,
      'facet missing allowed' => TRUE,
    ),
    'text_with_summary' => array(
      'indexing_callback' => array('apachesolr_fields_default_indexing_callback'),
      'index_type' => 'string',
      'facets' => TRUE,
      'facet missing allowed' => TRUE,
    ),
  );

  return $mappings;
}

/**
 * Indexing callback for images. Index full path and thumbnails for certain
 */
function apachesolr_channels_image_indexing_callback($entity, $field_name, $index_key, array $field_info) {
  $fields = array();
  if (!empty($entity->{$field_name})) {
    $all_styles = image_styles();
    $index_styles = variable_get('apachesolr_channels_index_image_styles', array());
    $field = $entity->{$field_name};
    list($lang, $values) = each($field);
    for ($i = 0; $i < count($values); $i++) {
      $fields[] = array(
        'key' => 'sm_image_uri',
        'value' => $values[$i]['uri'],
      );
      foreach ($index_styles as $style) {
        if (array_key_exists($style, $all_styles)) {
          $fields[] = array(
            'key' => "sm_thumb_$style",
            'value' => theme('image_formatter', array('image_style' => $style, 'item' => $values[$i])),
          );
        }
      }
    }
  }
  return $fields;
}

/**
 * Indexing callback for share to sites field
 */
function apachesolr_share_to_sites_indexing_callback($entity, $field_name, $index_key, array $field_info) {
  $fields = array();
  if (!empty($entity->{$field_name})) {
    $field = $entity->{$field_name};
    list($lang, $values) = each($field);
    for ($i = 0; $i < count($values); $i++) {
      $fields[] = array(
        'key' => 'sm_share_site_' . $field_name,
        'value' => apachesolr_clean_text($values[$i]['site']),
      );
    }
  }
  return $fields;
}

/**
 * Implement hook_apachesolr_field_mappings_alter().
 */
function apachesolr_channels_apachesolr_field_mappings_alter(array &$mappings, $entity_type) {
  if ($entity_type === 'node') {
    // from "apachesolr_term_reference_indexing_callback"
    $callback = 'apachesolr_channels_term_reference_indexing_callback';
    $mappings['taxonomy_term_reference']['indexing_callback'] = $callback;
  }
}

/**
 * Apachesolr index callback for term reference fields
 */
function apachesolr_channels_term_reference_indexing_callback($node, $field_name, $index_key, array $field_info) {
  $fields = apachesolr_term_reference_indexing_callback($node, $field_name, $index_key, $field_info);
  // Get ancestors from same cache
  $ancestors = &drupal_static('apachesolr_term_reference_indexing_callback', array());

  if (!empty($node->{$field_name}) && function_exists('taxonomy_get_parents_all')) {
    $field = $node->{$field_name};
    list($lang, $items) = each($field);
    foreach ($items as $item) {
      if (!isset($ancestors[$item['tid']])) {
        $ancestors[$item['tid']] = taxonomy_get_parents_all($item['tid']);
      }
      if ($ancestors[$item['tid']]) {
        if (apachesolr_channels_is_shared_tax($ancestors[$item['tid']][0]->vid)) {
          foreach ($ancestors[$item['tid']] as $ancestor) {
            if ($server_tid = kk_client_request_get_server_tid($ancestor->tid)) {
              $fields[] = array(
                'key' => 'im_shared_tax_' . apachesolr_channels_vocab_machine_name($ancestor->vid),
                'value' => $server_tid,
              );
              if ($ancestor->vocabulary_machine_name == 'common') {
                $fields[] = array(
                  'key' => 'sm_search_terms',
                  'value' => 'shared_' . $server_tid,
                );
              }
            }
          }
        }
        else {
          foreach ($ancestors[$item['tid']] as $ancestor) {
            $fields[] = array(
              'key' => 'im_local_tax_' . apachesolr_site_hash()  . '_' . apachesolr_channels_vocab_machine_name($ancestor->vid),
              'value' => $ancestor->tid,
            );
            if ($ancestor->vocabulary_machine_name == 'tags_local') {
              $fields[] = array(
                'key' => 'sm_search_terms',
                'value' => 'local_' . apachesolr_site_hash()  . '_'. $ancestor->tid,
              );
            }
          }
        }

      }
    }
  }
  return $fields;
}

/**
 * Helper function - get vocabulary machine name
 */
function apachesolr_channels_vocab_machine_name($vid) {
  $names = &drupal_static(__FUNCTION__, array());

  if (!isset($names[$vid])) {
    $names[$vid] = taxonomy_vocabulary_load($vid)->machine_name;
  }
  return $names[$vid];
}

/**
 * Helper function - check if vocabulary is shared
 */
function apachesolr_channels_is_shared_tax($vid) {
  $shared = &drupal_static(__FUNCTION__, array());

  if (!isset($shared[$vid])) {
    $shared[$vid] = (bool) kk_client_request_get_server_vid($vid);
  }
  return $shared[$vid];
}
