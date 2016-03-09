<?php
/**
 * @file
 * content_type_news.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function content_type_news_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news_list';
  $page->task = 'page';
  $page->admin_title = 'News list';
  $page->admin_description = '';
  $page->path = 'news/list/!query';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'query' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
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
  $handler->name = 'page_news_list_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'news_list';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'News list',
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
  $display->title = 'News';
  $display->uuid = '7af0e0f4-13b8-4e65-9f93-df9d2af82e17';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bf9e82c6-c31b-4fcb-9f48-068de668f601';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'node-syndicate';
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
    $pane->uuid = 'bf9e82c6-c31b-4fcb-9f48-068de668f601';
    $display->content['new-bf9e82c6-c31b-4fcb-9f48-068de668f601'] = $pane;
    $display->panels['bottom'][0] = 'new-bf9e82c6-c31b-4fcb-9f48-068de668f601';
    $pane = new stdClass();
    $pane->pid = 'new-c58de3fe-d9e1-4207-854b-082bfb3961c7';
    $pane->panel = 'content';
    $pane->type = 'apachesolr_info';
    $pane->subtype = 'apachesolr_info';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'title_override' => FALSE,
      'title_override_text' => '',
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
    $pane->uuid = 'c58de3fe-d9e1-4207-854b-082bfb3961c7';
    $display->content['new-c58de3fe-d9e1-4207-854b-082bfb3961c7'] = $pane;
    $display->panels['content'][0] = 'new-c58de3fe-d9e1-4207-854b-082bfb3961c7';
    $pane = new stdClass();
    $pane->pid = 'new-b4342459-1342-4557-ba30-64d9cdc23497';
    $pane->panel = 'content';
    $pane->type = 'apachesolr_result';
    $pane->subtype = 'apachesolr_result';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'keys_action' => 'none',
      'keys' => '',
      'keys_required' => 0,
      'filters_action' => 'append',
      'filters' => 'bundle:"news"',
      'rows' => '8',
      'env_id' => '',
      'sort_action' => 'none',
      'sort' => '',
      'breadcrumb' => 0,
      'title_override' => 1,
      'title_override_text' => '',
      'empty_override' => 0,
      'empty_override_title' => '',
      'empty_override_text' => array(
        'value' => '',
        'format' => 'plain_text',
      ),
      'empty_override_format' => 'plain_text',
      'log' => 0,
      'substitute' => 0,
      'context' => 'argument_string_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b4342459-1342-4557-ba30-64d9cdc23497';
    $display->content['new-b4342459-1342-4557-ba30-64d9cdc23497'] = $pane;
    $display->panels['content'][1] = 'new-b4342459-1342-4557-ba30-64d9cdc23497';
    $pane = new stdClass();
    $pane->pid = 'new-ef3799ba-e89d-402d-92c8-c41443fad903';
    $pane->panel = 'top';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'div',
      'class' => 'tx-type',
      'id' => '',
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
    $pane->uuid = 'ef3799ba-e89d-402d-92c8-c41443fad903';
    $display->content['new-ef3799ba-e89d-402d-92c8-c41443fad903'] = $pane;
    $display->panels['top'][0] = 'new-ef3799ba-e89d-402d-92c8-c41443fad903';
    $pane = new stdClass();
    $pane->pid = 'new-7163d201-bce4-4cc1-89f5-cf1b3078a8e5';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-n18E4x0qRRaIP7nV6I0SDYiCJsq77HCB';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Time',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7163d201-bce4-4cc1-89f5-cf1b3078a8e5';
    $display->content['new-7163d201-bce4-4cc1-89f5-cf1b3078a8e5'] = $pane;
    $display->panels['top'][1] = 'new-7163d201-bce4-4cc1-89f5-cf1b3078a8e5';
    $pane = new stdClass();
    $pane->pid = 'new-a89e0142-f6b9-4da4-a6de-5dd98fdd0c83';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-Up4vqKgOst0r0X3V9rBalJ1fkEJlO6qW';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Category',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a89e0142-f6b9-4da4-a6de-5dd98fdd0c83';
    $display->content['new-a89e0142-f6b9-4da4-a6de-5dd98fdd0c83'] = $pane;
    $display->panels['top'][2] = 'new-a89e0142-f6b9-4da4-a6de-5dd98fdd0c83';
    $pane = new stdClass();
    $pane->pid = 'new-a48fee39-69c1-4b28-8846-71b70a53772d';
    $pane->panel = 'top';
    $pane->type = 'apachesolr_form';
    $pane->subtype = 'apachesolr_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path_type' => 'same',
      'path' => '',
      'override_prompt' => 1,
      'prompt' => '',
      'show_keys' => 1,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a48fee39-69c1-4b28-8846-71b70a53772d';
    $display->content['new-a48fee39-69c1-4b28-8846-71b70a53772d'] = $pane;
    $display->panels['top'][3] = 'new-a48fee39-69c1-4b28-8846-71b70a53772d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a48fee39-69c1-4b28-8846-71b70a53772d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news_list'] = $page;

  return $pages;

}
