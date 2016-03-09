<?php
/**
 * @file
 * configuration_pull_content.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function configuration_pull_content_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'external_content';
  $page->task = 'page';
  $page->admin_title = 'External content';
  $page->admin_description = 'Page will show content from external Drupal site from the same shared network';
  $page->path = 'sc/%alias';
  $page->access = array(
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'alias' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_external_content_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'external_content';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'External content',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => 'regex',
            'value' => '/-[0-9]+$/',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '84cb029d-90c8-4c17-b340-78bfc8ef2e08';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-319e60f3-2783-4864-b9b9-399c40f819c7';
    $pane->panel = 'middle';
    $pane->type = 'kkms_panes_services_source';
    $pane->subtype = 'kkms_panes_services_source';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '319e60f3-2783-4864-b9b9-399c40f819c7';
    $display->content['new-319e60f3-2783-4864-b9b9-399c40f819c7'] = $pane;
    $display->panels['middle'][0] = 'new-319e60f3-2783-4864-b9b9-399c40f819c7';
    $pane = new stdClass();
    $pane->pid = 'new-bf6ff990-568d-4e0c-b9d6-903c7c629c7a';
    $pane->panel = 'middle';
    $pane->type = 'kkms_panes_services_node_view';
    $pane->subtype = 'kkms_panes_services_node_view';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'bf6ff990-568d-4e0c-b9d6-903c7c629c7a';
    $display->content['new-bf6ff990-568d-4e0c-b9d6-903c7c629c7a'] = $pane;
    $display->panels['middle'][1] = 'new-bf6ff990-568d-4e0c-b9d6-903c7c629c7a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-bf6ff990-568d-4e0c-b9d6-903c7c629c7a';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['external_content'] = $page;

  return $pages;

}
