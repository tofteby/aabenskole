<?php
/**
 * @file
 * content_type_person.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function content_type_person_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:person:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'person';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'default_page_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'bf82d0ec-869e-4196-9962-899653904714';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-014b838a-0872-44b7-acc4-96087e8a3994';
    $pane->panel = 'bottom';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '014b838a-0872-44b7-acc4-96087e8a3994';
    $display->content['new-014b838a-0872-44b7-acc4-96087e8a3994'] = $pane;
    $display->panels['bottom'][0] = 'new-014b838a-0872-44b7-acc4-96087e8a3994';
    $pane = new stdClass();
    $pane->pid = 'new-b9f24fc7-5b20-4b3c-8b73-2f7c0ded2e16';
    $pane->panel = 'bottom';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 0,
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b9f24fc7-5b20-4b3c-8b73-2f7c0ded2e16';
    $display->content['new-b9f24fc7-5b20-4b3c-8b73-2f7c0ded2e16'] = $pane;
    $display->panels['bottom'][1] = 'new-b9f24fc7-5b20-4b3c-8b73-2f7c0ded2e16';
    $pane = new stdClass();
    $pane->pid = 'new-4f648b6e-a067-49fe-be61-90521baa5e8c';
    $pane->panel = 'bottom';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:facebook_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4f648b6e-a067-49fe-be61-90521baa5e8c';
    $display->content['new-4f648b6e-a067-49fe-be61-90521baa5e8c'] = $pane;
    $display->panels['bottom'][2] = 'new-4f648b6e-a067-49fe-be61-90521baa5e8c';
    $pane = new stdClass();
    $pane->pid = 'new-4865c127-a7cc-4ff7-a8d4-9c6d9b5ecccb';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_teaser';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4865c127-a7cc-4ff7-a8d4-9c6d9b5ecccb';
    $display->content['new-4865c127-a7cc-4ff7-a8d4-9c6d9b5ecccb'] = $pane;
    $display->panels['content'][0] = 'new-4865c127-a7cc-4ff7-a8d4-9c6d9b5ecccb';
    $pane = new stdClass();
    $pane->pid = 'new-a26acf65-2f83-4227-8b02-f68bfd7e9227';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a26acf65-2f83-4227-8b02-f68bfd7e9227';
    $display->content['new-a26acf65-2f83-4227-8b02-f68bfd7e9227'] = $pane;
    $display->panels['content'][1] = 'new-a26acf65-2f83-4227-8b02-f68bfd7e9227';
    $pane = new stdClass();
    $pane->pid = 'new-b128e1fe-de47-4f69-871e-726efe1505aa';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_practical';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b128e1fe-de47-4f69-871e-726efe1505aa';
    $display->content['new-b128e1fe-de47-4f69-871e-726efe1505aa'] = $pane;
    $display->panels['sidebar'][0] = 'new-b128e1fe-de47-4f69-871e-726efe1505aa';
    $pane = new stdClass();
    $pane->pid = 'new-f738029c-1660-43ef-a948-46f39af8bc2f';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_boxes';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'links' => 0,
        'view_mode' => 'related_content',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f738029c-1660-43ef-a948-46f39af8bc2f';
    $display->content['new-f738029c-1660-43ef-a948-46f39af8bc2f'] = $pane;
    $display->panels['sidebar'][1] = 'new-f738029c-1660-43ef-a948-46f39af8bc2f';
    $pane = new stdClass();
    $pane->pid = 'new-f0a869ea-6627-4b5a-a64b-57dea66ca3f5';
    $pane->panel = 'top';
    $pane->type = 'token';
    $pane->subtype = 'node:content-type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f0a869ea-6627-4b5a-a64b-57dea66ca3f5';
    $display->content['new-f0a869ea-6627-4b5a-a64b-57dea66ca3f5'] = $pane;
    $display->panels['top'][0] = 'new-f0a869ea-6627-4b5a-a64b-57dea66ca3f5';
    $pane = new stdClass();
    $pane->pid = 'new-5a0fabe7-b645-4f9e-b13b-1ab5fca0d665';
    $pane->panel = 'top';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5a0fabe7-b645-4f9e-b13b-1ab5fca0d665';
    $display->content['new-5a0fabe7-b645-4f9e-b13b-1ab5fca0d665'] = $pane;
    $display->panels['top'][1] = 'new-5a0fabe7-b645-4f9e-b13b-1ab5fca0d665';
    $pane = new stdClass();
    $pane->pid = 'new-3b4cb22f-aec4-4608-a310-b598cd99e165';
    $pane->panel = 'top';
    $pane->type = 'field_group';
    $pane->subtype = 'field_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => NULL,
      'label' => NULL,
      'bundle' => 'person',
      'build_mode' => 'full',
      'field_group' => 'group_contact_box',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3b4cb22f-aec4-4608-a310-b598cd99e165';
    $display->content['new-3b4cb22f-aec4-4608-a310-b598cd99e165'] = $pane;
    $display->panels['top'][2] = 'new-3b4cb22f-aec4-4608-a310-b598cd99e165';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4865c127-a7cc-4ff7-a8d4-9c6d9b5ecccb';
  $panelizer->display = $display;
  $export['node:person:default:full'] = $panelizer;

  return $export;
}
