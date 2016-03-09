<?php
/**
 * @file
 * taxonomy_kle.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function taxonomy_kle_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-kle-field_kle_id'
  $field_instances['taxonomy_term-kle-field_kle_id'] = array(
    'bundle' => 'kle',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_kle_id',
    'label' => 'kle_id',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'article_body' => 'article_body',
          'blog_body' => 'blog_body',
          'events_body' => 'events_body',
          'factbox_body' => 'factbox_body',
          'faq_qa' => 'faq_qa',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'minutes_of_meetings_body' => 'minutes_of_meetings_body',
          'news' => 'news',
          'notices_board_body' => 'notices_board_body',
          'plain_text' => 'plain_text',
          'webform_body' => 'webform_body',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'article_body' => array(
              'weight' => 0,
            ),
            'blog_body' => array(
              'weight' => 0,
            ),
            'events_body' => array(
              'weight' => 0,
            ),
            'factbox_body' => array(
              'weight' => 0,
            ),
            'faq_qa' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'minutes_of_meetings_body' => array(
              'weight' => 0,
            ),
            'news' => array(
              'weight' => 0,
            ),
            'notices_board_body' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'webform_body' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('kle_id');

  return $field_instances;
}
