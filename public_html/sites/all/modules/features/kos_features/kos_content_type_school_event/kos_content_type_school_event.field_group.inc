<?php
/**
 * @file
 * kos_content_type_school_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function kos_content_type_school_event_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_file_attachments|node|school_event|form';
  $field_group->group_name = 'group_file_attachments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'school_event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'File attachments',
    'weight' => '11',
    'children' => array(
      0 => 'field_image',
      1 => 'field_files',
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
  $export['group_file_attachments|node|school_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horizontal_tabs|node|school_event|form';
  $field_group->group_name = 'group_horizontal_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'school_event';
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
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-horizontal-tabs field-group-htabs',
      ),
    ),
  );
  $export['group_horizontal_tabs|node|school_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lift|node|school_event|default';
  $field_group->group_name = 'group_lift';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'school_event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_taxonomies';
  $field_group->data = array(
    'label' => 'Side left',
    'weight' => '16',
    'children' => array(
      0 => 'field_audiences',
      1 => 'field_subjects',
      2 => 'field_topic',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Side left',
      'instance_settings' => array(
        'classes' => 'group-lift field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_lift|node|school_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_content|node|school_event|form';
  $field_group->group_name = 'group_main_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'school_event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '10',
    'children' => array(
      0 => 'field_teaser',
      1 => 'language',
      2 => 'title',
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
  $export['group_main_content|node|school_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_practical|node|school_event|form';
  $field_group->group_name = 'group_practical';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'school_event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Practical information',
    'weight' => '13',
    'children' => array(
      0 => 'field_date',
      1 => 'field_preparation',
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
  $export['group_practical|node|school_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|school_event|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'school_event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '12',
    'children' => array(
      0 => 'field_link',
      1 => 'field_school_event_place',
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
  $export['group_related_content|node|school_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right|node|school_event|default';
  $field_group->group_name = 'group_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'school_event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_taxonomies';
  $field_group->data = array(
    'label' => 'Side right',
    'weight' => '18',
    'children' => array(
      0 => 'field_date',
      1 => 'field_link',
      2 => 'field_school_event_place',
      3 => 'field_school_event_price',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Side right',
      'instance_settings' => array(
        'classes' => 'group-right field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_right|node|school_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomies|node|school_event|default';
  $field_group->group_name = 'group_taxonomies';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'school_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomies',
    'weight' => '1',
    'children' => array(
      0 => 'group_lift',
      1 => 'group_right',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Taxonomies',
      'instance_settings' => array(
        'classes' => 'group-taxonomies field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_taxonomies|node|school_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|school_event|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'school_event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '9',
    'children' => array(
      0 => 'field_audiences',
      1 => 'field_dynamic_links',
      2 => 'field_school_event_price',
      3 => 'field_subjects',
      4 => 'field_topic',
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
  $export['group_taxonomy|node|school_event|form'] = $field_group;

  return $export;
}
