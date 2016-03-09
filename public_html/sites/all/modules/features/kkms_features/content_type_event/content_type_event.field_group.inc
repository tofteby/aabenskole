<?php
/**
 * @file
 * content_type_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_event_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date|node|event|full';
  $field_group->group_name = 'group_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_quick_info';
  $field_group->data = array(
    'label' => 'Date',
    'weight' => '24',
    'children' => array(
      0 => 'field_date',
      1 => 'apachesolr_date_fancy_day_month',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Date',
      'instance_settings' => array(
        'classes' => 'group-date field-group-html-element',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_date|node|event|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_file_attachments|node|event|form';
  $field_group->group_name = 'group_file_attachments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'File attachments',
    'weight' => '38',
    'children' => array(
      0 => 'field_image',
      1 => 'field_video',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-file-attachments field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_file_attachments|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horizontal_tabs|node|event|form';
  $field_group->group_name = 'group_horizontal_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Horizontal tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_file_attachments',
      1 => 'group_main_content',
      2 => 'group_practical',
      3 => 'group_related_content',
      4 => 'group_taxonomy',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Horizontal tabs',
      'instance_settings' => array(
        'classes' => 'group-horizontal-tabs field-group-htabs',
      ),
    ),
  );
  $export['group_horizontal_tabs|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_content|node|event|form';
  $field_group->group_name = 'group_main_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '37',
    'children' => array(
      0 => 'body',
      1 => 'field_teaser',
      2 => 'title_field',
      3 => 'language',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-main-content field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_main_content|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_practical|node|event|form';
  $field_group->group_name = 'group_practical';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Practical information',
    'weight' => '40',
    'children' => array(
      0 => 'field_date',
      1 => 'field_link',
      2 => 'field_practical',
      3 => 'field_price',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-practical field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_practical|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_practical|node|event|full';
  $field_group->group_name = 'group_practical';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_quick_info';
  $field_group->data = array(
    'label' => 'Practical',
    'weight' => '25',
    'children' => array(
      0 => 'field_link',
      1 => 'field_practical',
      2 => 'field_price',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Practical',
      'instance_settings' => array(
        'classes' => 'group-practical field-group-html-element',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_practical|node|event|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_quick_info|node|event|full';
  $field_group->group_name = 'group_quick_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_place',
      1 => 'group_practical',
      2 => 'group_date',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Information',
      'instance_settings' => array(
        'classes' => 'group-quick-info field-group-html-element',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_quick_info|node|event|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|event|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '39',
    'children' => array(
      0 => 'field_contact',
      1 => 'field_links',
      2 => 'field_place',
      3 => 'field_related_boxes',
      4 => 'field_related_files',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-related-content field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_related_content|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_share|node|event|form';
  $field_group->group_name = 'group_share';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content sharing',
    'weight' => '5',
    'children' => array(
      0 => 'field_channels',
      1 => 'field_sites',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Content sharing',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-share field-group-tab',
        'description' => 'Specify channels and sites that will share this content.',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_share|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|event|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '36',
    'children' => array(
      0 => 'field_common',
      1 => 'field_dynamic_links',
      2 => 'field_event_type',
      3 => 'field_place_category',
      4 => 'field_tags_local',
      5 => 'field_tags_open',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-taxonomy field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_taxonomy|node|event|form'] = $field_group;

  return $export;
}
