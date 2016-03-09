<?php
/**
 * @file
 * content_type_decision_tree_item.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_decision_tree_item_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_decision|node|decision_tree_item|full';
  $field_group->group_name = 'group_decision';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'decision_tree_item';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Decision',
    'weight' => '4',
    'children' => array(
      0 => 'field_dt_question',
      1 => 'nodehierarchy_children',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Decision',
      'instance_settings' => array(
        'classes' => 'group-decision field-group-html-element',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_decision|node|decision_tree_item|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_decision|node|decision_tree_item|panels_pane';
  $field_group->group_name = 'group_decision';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'decision_tree_item';
  $field_group->mode = 'panels_pane';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Decision',
    'weight' => '0',
    'children' => array(
      0 => 'field_dt_question',
      1 => 'nodehierarchy_children',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Decision',
      'instance_settings' => array(
        'classes' => 'group-decision field-group-html-element',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_decision|node|decision_tree_item|panels_pane'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|decision_tree_item|full';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'decision_tree_item';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'nodehierarchy_parent_node_link',
      2 => 'group_decision',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Main',
      'instance_settings' => array(
        'classes' => 'group-main field-group-html-element',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_main|node|decision_tree_item|full'] = $field_group;

  return $export;
}
