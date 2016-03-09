<?php
/**
 * @file
 * content_type_institution.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function content_type_institution_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'page_institutions_list';
  $page->task = 'page';
  $page->admin_title = 'page-Institutions list';
  $page->admin_description = '';
  $page->path = 'institutions/list';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_page_institutions_list_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'page_institutions_list';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'content' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Institutions';
  $display->uuid = '56b4c846-95f2-47dc-bb72-2c21e9c03617';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-018ed41a-9ebc-4914-8161-b9d8175b1ce2';
    $pane->panel = 'content';
    $pane->type = 'views';
    $pane->subtype = 'institutions_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '15',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
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
    $pane->uuid = '018ed41a-9ebc-4914-8161-b9d8175b1ce2';
    $display->content['new-018ed41a-9ebc-4914-8161-b9d8175b1ce2'] = $pane;
    $display->panels['content'][0] = 'new-018ed41a-9ebc-4914-8161-b9d8175b1ce2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-018ed41a-9ebc-4914-8161-b9d8175b1ce2';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['page_institutions_list'] = $page;

  return $pages;

}
