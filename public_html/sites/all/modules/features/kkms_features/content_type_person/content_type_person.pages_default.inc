<?php
/**
 * @file
 * content_type_person.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function content_type_person_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'list_persons';
  $page->task = 'page';
  $page->admin_title = 'List employees';
  $page->admin_description = '';
  $page->path = 'employees/list';
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
  $handler->name = 'page_list_persons_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'list_persons';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
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
  $display->title = 'Employees';
  $display->uuid = 'aa32a701-fa6e-41b0-a3b9-7f9911dc0e53';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a23f2483-d7ed-49ec-a960-4ea3f79444d3';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'persons_list-persons_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a23f2483-d7ed-49ec-a960-4ea3f79444d3';
    $display->content['new-a23f2483-d7ed-49ec-a960-4ea3f79444d3'] = $pane;
    $display->panels['content'][0] = 'new-a23f2483-d7ed-49ec-a960-4ea3f79444d3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a23f2483-d7ed-49ec-a960-4ea3f79444d3';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['list_persons'] = $page;

  return $pages;

}
