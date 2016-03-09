<?php
/**
 * @file
 * configuration_apachesolr.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function configuration_apachesolr_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_channels_index_image_styles';
  $strongarm->value = array(
    'list_content_grid' => 'list_content_grid',
    'node_view_images' => 'node_view_images',
    'blog_list' => 0,
    'person' => 0,
    'person_list_thumbnail' => 0,
    'flexslider_full' => 0,
    'flexslider_thumbnail' => 0,
    'galleria_zoom' => 0,
    'galleria_thumb' => 0,
    'thumbnail' => 0,
    'medium' => 0,
    'large' => 0,
    'linkit_thumb' => 0,
    'media_thumbnail' => 0,
  );
  $export['apachesolr_channels_index_image_styles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_active_modules';
  $strongarm->value = array(
    'apachesolr_search' => 'apachesolr_search',
    'file_entity' => 0,
    'node' => 0,
    'user' => 0,
  );
  $export['search_active_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_cron_limit';
  $strongarm->value = '100';
  $export['search_cron_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_default_module';
  $strongarm->value = 'apachesolr_search';
  $export['search_default_module'] = $strongarm;

  return $export;
}
