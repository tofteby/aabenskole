<?php
/**
 * @file
 * content_type_file_attachments.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_file_attachments_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_file_attachments_node_info() {
  $items = array(
    'image_slideshow' => array(
      'name' => t('Image slideshow'),
      'base' => 'node_content',
      'description' => t('A number of image attachments to be displayed as a slideshow.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'video' => array(
      'name' => t('Video/Slide'),
      'base' => 'node_content',
      'description' => t('Secondary content that can have both videos and images (displayed as a slide).'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
