<?php
/**
 * @file
 * content_type_map.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function content_type_map_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:map:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'map';
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
  $panelizer->link_to_entity = FALSE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'default_page_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '5838630f-49de-4ec3-9df3-c4a8656f6b39';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0430b8f7-4dbd-4811-ad85-6c0d44eaee72';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'node_type_map__map_objects__view-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0430b8f7-4dbd-4811-ad85-6c0d44eaee72';
    $display->content['new-0430b8f7-4dbd-4811-ad85-6c0d44eaee72'] = $pane;
    $display->panels['content'][0] = 'new-0430b8f7-4dbd-4811-ad85-6c0d44eaee72';
    $pane = new stdClass();
    $pane->pid = 'new-7d743dac-c7c9-4fb4-8e28-f892e37c3e4a';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7d743dac-c7c9-4fb4-8e28-f892e37c3e4a';
    $display->content['new-7d743dac-c7c9-4fb4-8e28-f892e37c3e4a'] = $pane;
    $display->panels['content'][1] = 'new-7d743dac-c7c9-4fb4-8e28-f892e37c3e4a';
    $pane = new stdClass();
    $pane->pid = 'new-2d5ccef1-6b7a-4a6a-b735-95ba89bfef2d';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2d5ccef1-6b7a-4a6a-b735-95ba89bfef2d';
    $display->content['new-2d5ccef1-6b7a-4a6a-b735-95ba89bfef2d'] = $pane;
    $display->panels['top'][0] = 'new-2d5ccef1-6b7a-4a6a-b735-95ba89bfef2d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7d743dac-c7c9-4fb4-8e28-f892e37c3e4a';
  $panelizer->display = $display;
  $export['node:map:default:full'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:map:default:related_content';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'map';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'related_content';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'onecol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'content' => NULL,
      'bottom' => NULL,
      'top_menu_left' => NULL,
      'top_menu_right' => NULL,
      'content_3_columns' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5a18995f-f42a-4ec6-a186-35e514985398';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-87d6644e-52ff-4b10-adfb-fcebf90fbcf6';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'node_type_map__map_objects__view-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '87d6644e-52ff-4b10-adfb-fcebf90fbcf6';
    $display->content['new-87d6644e-52ff-4b10-adfb-fcebf90fbcf6'] = $pane;
    $display->panels['content'][0] = 'new-87d6644e-52ff-4b10-adfb-fcebf90fbcf6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:map:default:related_content'] = $panelizer;

  return $export;
}
