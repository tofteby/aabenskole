<?php
/**
 * @file
 * content_type_event.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function content_type_event_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events_grid';
  $page->task = 'page';
  $page->admin_title = 'Events grid';
  $page->admin_description = '';
  $page->path = 'events/grid/!query';
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
  $handler->name = 'page_events_grid_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'events_grid';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Events grid',
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
      'top_menu_left' => NULL,
      'top_menu_right' => NULL,
      'content_3_columns' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Events';
  $display->uuid = '243a443d-e7bb-4b22-a915-c0f96e2f148a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2e8838f8-52e2-4ab8-8bfd-b2319b1bdfba';
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
    $pane->uuid = '2e8838f8-52e2-4ab8-8bfd-b2319b1bdfba';
    $display->content['new-2e8838f8-52e2-4ab8-8bfd-b2319b1bdfba'] = $pane;
    $display->panels['content'][0] = 'new-2e8838f8-52e2-4ab8-8bfd-b2319b1bdfba';
    $pane = new stdClass();
    $pane->pid = 'new-695ca8e8-e9bc-47cb-a758-c000528a45d6';
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
      'filters' => 'entity_type:"solrdate"',
      'rows' => '12',
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
    $pane->uuid = '695ca8e8-e9bc-47cb-a758-c000528a45d6';
    $display->content['new-695ca8e8-e9bc-47cb-a758-c000528a45d6'] = $pane;
    $display->panels['content'][1] = 'new-695ca8e8-e9bc-47cb-a758-c000528a45d6';
    $pane = new stdClass();
    $pane->pid = 'new-8a89f082-e1dc-4c19-977d-257cd0542cd5';
    $pane->panel = 'top';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
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
    $pane->uuid = '8a89f082-e1dc-4c19-977d-257cd0542cd5';
    $display->content['new-8a89f082-e1dc-4c19-977d-257cd0542cd5'] = $pane;
    $display->panels['top'][0] = 'new-8a89f082-e1dc-4c19-977d-257cd0542cd5';
    $pane = new stdClass();
    $pane->pid = 'new-446804b5-7470-40bb-ba6e-9dc2e39f509e';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-events-submenu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'View',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '446804b5-7470-40bb-ba6e-9dc2e39f509e';
    $display->content['new-446804b5-7470-40bb-ba6e-9dc2e39f509e'] = $pane;
    $display->panels['top'][1] = 'new-446804b5-7470-40bb-ba6e-9dc2e39f509e';
    $pane = new stdClass();
    $pane->pid = 'new-e6a94f13-eafc-4082-bf93-74f1a64b8d00';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e6a94f13-eafc-4082-bf93-74f1a64b8d00';
    $display->content['new-e6a94f13-eafc-4082-bf93-74f1a64b8d00'] = $pane;
    $display->panels['top'][2] = 'new-e6a94f13-eafc-4082-bf93-74f1a64b8d00';
    $pane = new stdClass();
    $pane->pid = 'new-b07ac8c9-b68f-4355-8dda-9368cb327467';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-iCCIaUB02Oj0l0TYy9TaYkBdnF51o3M1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Type',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'b07ac8c9-b68f-4355-8dda-9368cb327467';
    $display->content['new-b07ac8c9-b68f-4355-8dda-9368cb327467'] = $pane;
    $display->panels['top'][3] = 'new-b07ac8c9-b68f-4355-8dda-9368cb327467';
    $pane = new stdClass();
    $pane->pid = 'new-c508f17a-8968-4cf0-8974-0a1f12231f85';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-hmbYcCHh5Jux4en8BrbqB2CuJHFi1KDO';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Area',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c508f17a-8968-4cf0-8974-0a1f12231f85';
    $display->content['new-c508f17a-8968-4cf0-8974-0a1f12231f85'] = $pane;
    $display->panels['top'][4] = 'new-c508f17a-8968-4cf0-8974-0a1f12231f85';
    $pane = new stdClass();
    $pane->pid = 'new-ee8e697e-a99a-4288-917a-c063330d1fc9';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'ee8e697e-a99a-4288-917a-c063330d1fc9';
    $display->content['new-ee8e697e-a99a-4288-917a-c063330d1fc9'] = $pane;
    $display->panels['top'][5] = 'new-ee8e697e-a99a-4288-917a-c063330d1fc9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events_grid'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events_list';
  $page->task = 'page';
  $page->admin_title = 'Events list';
  $page->admin_description = '';
  $page->path = 'events/list/!query';
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
  $handler->name = 'page_events_list_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'events_list';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Events list',
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
      'top_menu_left' => NULL,
      'top_menu_right' => NULL,
      'content_3_columns' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Events';
  $display->uuid = 'af7b458b-c615-495a-bba7-13a9d363119a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-40122f29-8d9e-41c3-b01b-b2cba883f06c';
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
    $pane->uuid = '40122f29-8d9e-41c3-b01b-b2cba883f06c';
    $display->content['new-40122f29-8d9e-41c3-b01b-b2cba883f06c'] = $pane;
    $display->panels['content'][0] = 'new-40122f29-8d9e-41c3-b01b-b2cba883f06c';
    $pane = new stdClass();
    $pane->pid = 'new-331b1a3b-5bca-46b9-9dcb-fc7d9aedfd3c';
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
      'filters' => 'entity_type:"solrdate"',
      'rows' => '10',
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
    $pane->uuid = '331b1a3b-5bca-46b9-9dcb-fc7d9aedfd3c';
    $display->content['new-331b1a3b-5bca-46b9-9dcb-fc7d9aedfd3c'] = $pane;
    $display->panels['content'][1] = 'new-331b1a3b-5bca-46b9-9dcb-fc7d9aedfd3c';
    $pane = new stdClass();
    $pane->pid = 'new-2c04f5cb-4616-42ae-bb08-c32344bdc398';
    $pane->panel = 'top';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
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
    $pane->uuid = '2c04f5cb-4616-42ae-bb08-c32344bdc398';
    $display->content['new-2c04f5cb-4616-42ae-bb08-c32344bdc398'] = $pane;
    $display->panels['top'][0] = 'new-2c04f5cb-4616-42ae-bb08-c32344bdc398';
    $pane = new stdClass();
    $pane->pid = 'new-9a841cbb-2235-46fc-8546-48d1fc030302';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-events-submenu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'View',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9a841cbb-2235-46fc-8546-48d1fc030302';
    $display->content['new-9a841cbb-2235-46fc-8546-48d1fc030302'] = $pane;
    $display->panels['top'][1] = 'new-9a841cbb-2235-46fc-8546-48d1fc030302';
    $pane = new stdClass();
    $pane->pid = 'new-4597431a-fa0f-44b7-8962-c8d9c805bfcd';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4597431a-fa0f-44b7-8962-c8d9c805bfcd';
    $display->content['new-4597431a-fa0f-44b7-8962-c8d9c805bfcd'] = $pane;
    $display->panels['top'][2] = 'new-4597431a-fa0f-44b7-8962-c8d9c805bfcd';
    $pane = new stdClass();
    $pane->pid = 'new-88b37c1f-3fe9-4e1a-88b1-62b2a9374586';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-iCCIaUB02Oj0l0TYy9TaYkBdnF51o3M1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Type',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '88b37c1f-3fe9-4e1a-88b1-62b2a9374586';
    $display->content['new-88b37c1f-3fe9-4e1a-88b1-62b2a9374586'] = $pane;
    $display->panels['top'][3] = 'new-88b37c1f-3fe9-4e1a-88b1-62b2a9374586';
    $pane = new stdClass();
    $pane->pid = 'new-bc01482c-b29f-4b34-939d-f5945a8d15a4';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-hmbYcCHh5Jux4en8BrbqB2CuJHFi1KDO';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Area',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'bc01482c-b29f-4b34-939d-f5945a8d15a4';
    $display->content['new-bc01482c-b29f-4b34-939d-f5945a8d15a4'] = $pane;
    $display->panels['top'][4] = 'new-bc01482c-b29f-4b34-939d-f5945a8d15a4';
    $pane = new stdClass();
    $pane->pid = 'new-0b1c69d6-e666-444e-a867-b91db768ac6b';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '0b1c69d6-e666-444e-a867-b91db768ac6b';
    $display->content['new-0b1c69d6-e666-444e-a867-b91db768ac6b'] = $pane;
    $display->panels['top'][5] = 'new-0b1c69d6-e666-444e-a867-b91db768ac6b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events_list'] = $page;

  return $pages;

}
