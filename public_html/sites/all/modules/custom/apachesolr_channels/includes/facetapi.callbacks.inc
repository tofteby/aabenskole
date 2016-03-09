<?php

/**
 * Facetapi callbacks
 * @see apachesolr_channels.facetapi.inc
 */

function apachesolr_channel_map_search_terms($values) {
  $map = array();
  $site_hash = apachesolr_site_hash();
  foreach ($values as $value) {
    $prefix = strtok($value, '_');
    if($prefix == 'shared') {
      $tid = strtok('_');
      $local_tid = kk_client_request_get_client_tid($tid);
      $local_term = taxonomy_term_load($local_tid);
      if($local_term) {
        $map[$value] = $local_term->name;
      }
    }
    elseif ($prefix == 'local') {
      $hash = strtok('_');
      if($hash == $site_hash) {
        $tid = strtok('_');
        $local_term = taxonomy_term_load($tid);
        if($local_term) {
          $map[$value] = $local_term->name;
        }
      }
    }
  }
  return $map;
}

function apachesolr_channel_map_shared_taxonomy_terms($values) {
  $map = array();
  foreach ($values as $value) {
    $local_tid = kk_client_request_get_client_tid($value);
    $local_term = taxonomy_term_load($local_tid);
    if($local_term) {
      $map[$value] = $local_term->name;
    }
  }
  return $map;
}

function apachesolr_channel_get_taxonomy_hierarchy(array $values) {
  $map = array();
  $local_values = array();
  foreach ($values as $value) {
    $local_tid = kk_client_request_get_client_tid($value);
    if(empty($local_tid)) {
      continue;
    }
    $map[$local_tid] = $value;
    $local_values[] = $local_tid;
  }

  $result = db_select('taxonomy_term_hierarchy', 'th')
    ->fields('th', array('tid', 'parent'))
    ->condition('th.parent', '0', '>')
    ->condition(db_or()
      ->condition('th.tid', $local_values, 'IN')
      ->condition('th.parent', $local_values, 'IN')
    )
    ->execute();

  $parents = array();
  foreach ($result as $record) {
    if(isset($map[$record->tid]) && isset($map[$record->parent])) {
      $parents[$map[$record->tid]][] = $map[$record->parent];
    }
  }
  return $parents;
}
