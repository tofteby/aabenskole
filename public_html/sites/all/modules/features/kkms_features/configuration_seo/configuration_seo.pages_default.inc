<?php
/**
 * @file
 * configuration_seo.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function configuration_seo_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'kkms_404_page';
  $page->task = 'page';
  $page->admin_title = 'KKMS 404 page';
  $page->admin_description = '';
  $page->path = 'page-404';
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
  $handler->name = 'page_kkms_404_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'kkms_404_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'KKMS 404 page',
    'no_blocks' => 1,
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
  $display->title = 'Page not found';
  $display->uuid = '91390378-b1e4-46c0-be20-04b9d7a25647';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2c3ea1df-5d52-4dbd-9ebb-49ba08dd7ec9';
    $pane->panel = 'content';
    $pane->type = 'contact';
    $pane->subtype = 'contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'What did you expect to find?',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2c3ea1df-5d52-4dbd-9ebb-49ba08dd7ec9';
    $display->content['new-2c3ea1df-5d52-4dbd-9ebb-49ba08dd7ec9'] = $pane;
    $display->panels['content'][0] = 'new-2c3ea1df-5d52-4dbd-9ebb-49ba08dd7ec9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['kkms_404_page'] = $page;

  return $pages;

}
