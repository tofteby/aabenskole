<?php

/**
 * @file
 * Menu callbacks, etc for Apachesolr channels
 */

/**
 * Menu callback for the autocomplete results.
 * Used for field autocomplete.
 *
 * @see apachesolr_channels_menu()
 * @see apachesolr_channels_field_widget_info()
 */
function shared_sites_autocomplete($field_name = '', $tags_typed = '') {
  // Make sure the field exists and is a taxonomy field.
  if (!($field = field_info_field($field_name)) || $field['type'] !== 'shared_site') {
    // Error string. The JavaScript handler will realize this is not JSON and
    // will display it as debugging information.
    echo t('Site field @field_name not found.', array('@field_name' => $field_name));
    return;
  }

  $args = func_get_args();
  // Shift off the $field_name argument.
  array_shift($args);
  $tags_typed = implode('/', $args);
  $matches = sites_hash_autocomplete_matches($tags_typed, TRUE);
  drupal_json_output($matches);
}

/**
 * Shared sites autocomplete for views filter by hash
 */
function multiple_hash_autocomplete() {
  // If the request has a '/' in the search text, then the menu system will have
  // split it into multiple arguments, recover the intended $tags_typed.
  $args = func_get_args();
  $tags_typed = implode('/', $args);
  $matches = sites_hash_autocomplete_matches($tags_typed, FALSE);
  drupal_json_output($matches);
}

/**
 * Returns matches for the typed 
 */
function sites_hash_autocomplete_matches($tags_typed, $filter_allowed = FALSE) {
  // The user enters a comma-separated list of tags. We only autocomplete the last tag.
  $tags_typed = drupal_explode_tags($tags_typed);
  $tag_last = drupal_strtolower(array_pop($tags_typed));

  $matches = array();
  if ($tag_last != '') {
    $prefix = count($tags_typed) ? drupal_implode_tags($tags_typed) . ', ' : '';
    $sites = $filter_allowed? apachesolr_channels_get_allowed_sites(): apachesolr_multisitesearch_map_hash();
    $matches = array();
    foreach ($sites as $hash => $name) {
      if (stripos($name, $tag_last) !== FALSE) {
        $matches[$prefix . $name . " [sid: $hash]"] = '<div class="sites-autocomplete">' . $name . '</div>';
      }
    }
  }

  return $matches;
}