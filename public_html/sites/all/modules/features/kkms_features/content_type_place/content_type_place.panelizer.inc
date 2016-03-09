<?php
/**
 * @file
 * content_type_place.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function content_type_place_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:place:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'place';
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
      'top' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '7d429a04-4e95-43d9-8ae6-22d8ce4d264d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a82ec4fe-db49-4299-aa92-ed4245929dc9';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image_single';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'node_view_images',
        'image_link' => '',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a82ec4fe-db49-4299-aa92-ed4245929dc9';
    $display->content['new-a82ec4fe-db49-4299-aa92-ed4245929dc9'] = $pane;
    $display->panels['content'][0] = 'new-a82ec4fe-db49-4299-aa92-ed4245929dc9';
    $pane = new stdClass();
    $pane->pid = 'new-eefb6059-ffca-4570-93be-879349990af2';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_geolocation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'geofield_openlayers',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'data' => 'full',
        'map_preset' => 'big_map_with_point',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
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
    $pane->uuid = 'eefb6059-ffca-4570-93be-879349990af2';
    $display->content['new-eefb6059-ffca-4570-93be-879349990af2'] = $pane;
    $display->panels['content'][1] = 'new-eefb6059-ffca-4570-93be-879349990af2';
    $pane = new stdClass();
    $pane->pid = 'new-e73d89ce-e059-4dce-afee-27c3c98b1047';
    $pane->panel = 'content';
    $pane->type = 'field_group';
    $pane->subtype = 'field_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => NULL,
      'label' => NULL,
      'bundle' => 'place',
      'build_mode' => 'full',
      'field_group' => 'group_contact',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e73d89ce-e059-4dce-afee-27c3c98b1047';
    $display->content['new-e73d89ce-e059-4dce-afee-27c3c98b1047'] = $pane;
    $display->panels['content'][2] = 'new-e73d89ce-e059-4dce-afee-27c3c98b1047';
    $pane = new stdClass();
    $pane->pid = 'new-ae676386-3db6-46cd-854b-40ff8255705e';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
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
    $pane->uuid = 'ae676386-3db6-46cd-854b-40ff8255705e';
    $display->content['new-ae676386-3db6-46cd-854b-40ff8255705e'] = $pane;
    $display->panels['content'][3] = 'new-ae676386-3db6-46cd-854b-40ff8255705e';
    $pane = new stdClass();
    $pane->pid = 'new-71a23fc6-c9de-47c8-86cb-f411a6700d9a';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_capacity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'double_field_unformatted_list',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'first' => array(
          'hidden' => 0,
          'format' => '_none',
          'prefix' => '',
          'suffix' => ':&nbsp;',
        ),
        'second' => array(
          'hidden' => 0,
          'format' => '_none',
          'prefix' => '',
          'suffix' => '',
        ),
        'style' => 'inline',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '71a23fc6-c9de-47c8-86cb-f411a6700d9a';
    $display->content['new-71a23fc6-c9de-47c8-86cb-f411a6700d9a'] = $pane;
    $display->panels['content'][4] = 'new-71a23fc6-c9de-47c8-86cb-f411a6700d9a';
    $pane = new stdClass();
    $pane->pid = 'new-af34a00e-9e42-4d93-b60f-afcfcc6313e9';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_opening_hours';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'working_hours_formatter_days',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
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
    $pane->uuid = 'af34a00e-9e42-4d93-b60f-afcfcc6313e9';
    $display->content['new-af34a00e-9e42-4d93-b60f-afcfcc6313e9'] = $pane;
    $display->panels['content'][5] = 'new-af34a00e-9e42-4d93-b60f-afcfcc6313e9';
    $pane = new stdClass();
    $pane->pid = 'new-2352cbee-d494-45c4-bc1a-f90311ffaff1';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_place_category';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'bl-i bl-type',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2352cbee-d494-45c4-bc1a-f90311ffaff1';
    $display->content['new-2352cbee-d494-45c4-bc1a-f90311ffaff1'] = $pane;
    $display->panels['top'][0] = 'new-2352cbee-d494-45c4-bc1a-f90311ffaff1';
    $pane = new stdClass();
    $pane->pid = 'new-cef1fbfe-5689-46f0-b87e-3fb515abc9b1';
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
    $pane->uuid = 'cef1fbfe-5689-46f0-b87e-3fb515abc9b1';
    $display->content['new-cef1fbfe-5689-46f0-b87e-3fb515abc9b1'] = $pane;
    $display->panels['top'][1] = 'new-cef1fbfe-5689-46f0-b87e-3fb515abc9b1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:place:default:full'] = $panelizer;

  return $export;
}
