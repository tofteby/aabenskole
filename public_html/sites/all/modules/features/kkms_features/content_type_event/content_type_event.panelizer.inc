<?php
/**
 * @file
 * content_type_event.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function content_type_event_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
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
  $display->uuid = 'a96dd536-dda9-4829-9c80-962aed3c7a41';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e5c28614-1657-4892-ba3c-239b0e111c11';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'flexslider',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'optionset' => 'kkms',
        'image_style' => 'flexslider_full',
        'caption' => 0,
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e5c28614-1657-4892-ba3c-239b0e111c11';
    $display->content['new-e5c28614-1657-4892-ba3c-239b0e111c11'] = $pane;
    $display->panels['content'][0] = 'new-e5c28614-1657-4892-ba3c-239b0e111c11';
    $pane = new stdClass();
    $pane->pid = 'new-75cb23be-4c3f-4dc1-b555-dac000d6b3a8';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_video';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'file_view_mode' => 'default',
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
    $pane->uuid = '75cb23be-4c3f-4dc1-b555-dac000d6b3a8';
    $display->content['new-75cb23be-4c3f-4dc1-b555-dac000d6b3a8'] = $pane;
    $display->panels['content'][1] = 'new-75cb23be-4c3f-4dc1-b555-dac000d6b3a8';
    $pane = new stdClass();
    $pane->pid = 'new-b6a8b826-047e-4a7f-92e0-41cc627b9fa4';
    $pane->panel = 'content';
    $pane->type = 'field_group';
    $pane->subtype = 'field_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'panelizer',
      'build_mode' => 'full',
      'field_group' => 'group_quick_info',
      'bundle' => 'event',
      'override_title' => 0,
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
    $pane->uuid = 'b6a8b826-047e-4a7f-92e0-41cc627b9fa4';
    $display->content['new-b6a8b826-047e-4a7f-92e0-41cc627b9fa4'] = $pane;
    $display->panels['content'][2] = 'new-b6a8b826-047e-4a7f-92e0-41cc627b9fa4';
    $pane = new stdClass();
    $pane->pid = 'new-2ffec7c0-4dce-49e1-8629-806a4f999d18';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2ffec7c0-4dce-49e1-8629-806a4f999d18';
    $display->content['new-2ffec7c0-4dce-49e1-8629-806a4f999d18'] = $pane;
    $display->panels['content'][3] = 'new-2ffec7c0-4dce-49e1-8629-806a4f999d18';
    $pane = new stdClass();
    $pane->pid = 'new-02987682-a53c-468f-bf4f-8a7558bb646d';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '02987682-a53c-468f-bf4f-8a7558bb646d';
    $display->content['new-02987682-a53c-468f-bf4f-8a7558bb646d'] = $pane;
    $display->panels['content'][4] = 'new-02987682-a53c-468f-bf4f-8a7558bb646d';
    $pane = new stdClass();
    $pane->pid = 'new-782a4eda-5989-4c40-8752-3d71b29ba971';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_files';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Documents',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '782a4eda-5989-4c40-8752-3d71b29ba971';
    $display->content['new-782a4eda-5989-4c40-8752-3d71b29ba971'] = $pane;
    $display->panels['content'][5] = 'new-782a4eda-5989-4c40-8752-3d71b29ba971';
    $pane = new stdClass();
    $pane->pid = 'new-5ddc1efc-da9a-40b5-bff9-7483890d9970';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'link_default',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '5ddc1efc-da9a-40b5-bff9-7483890d9970';
    $display->content['new-5ddc1efc-da9a-40b5-bff9-7483890d9970'] = $pane;
    $display->panels['content'][6] = 'new-5ddc1efc-da9a-40b5-bff9-7483890d9970';
    $pane = new stdClass();
    $pane->pid = 'new-fbfaf7c8-8545-4bce-8b0c-d6757fca4998';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'dynamic_links-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:event:field_dynamic_links',
          'settings' => array(
            'field_dynamic_links' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_dynamic_links_value' => '1',
          ),
          'context' => 'panelizer',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Links',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'fbfaf7c8-8545-4bce-8b0c-d6757fca4998';
    $display->content['new-fbfaf7c8-8545-4bce-8b0c-d6757fca4998'] = $pane;
    $display->panels['content'][7] = 'new-fbfaf7c8-8545-4bce-8b0c-d6757fca4998';
    $pane = new stdClass();
    $pane->pid = 'new-ec6da38b-9e53-4009-9566-0a6b04123f3d';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_boxes';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'related_content',
        'links' => 0,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'ec6da38b-9e53-4009-9566-0a6b04123f3d';
    $display->content['new-ec6da38b-9e53-4009-9566-0a6b04123f3d'] = $pane;
    $display->panels['content'][8] = 'new-ec6da38b-9e53-4009-9566-0a6b04123f3d';
    $pane = new stdClass();
    $pane->pid = 'new-4a34d985-9fdc-4e00-a3ff-128a00462181';
    $pane->panel = 'content';
    $pane->type = 'node_terms';
    $pane->subtype = 'node_terms';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'limit' => 1,
      'vocabularies' => array(
        'common' => 'common',
        'tags_local' => 'tags_local',
      ),
      'term_format' => 'term-links',
      'link' => 1,
      'term_delimiter' => ', ',
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '4a34d985-9fdc-4e00-a3ff-128a00462181';
    $display->content['new-4a34d985-9fdc-4e00-a3ff-128a00462181'] = $pane;
    $display->panels['content'][9] = 'new-4a34d985-9fdc-4e00-a3ff-128a00462181';
    $pane = new stdClass();
    $pane->pid = 'new-7d286a69-2949-4495-9c63-a52babf2ec49';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => FALSE,
        'view_mode' => 'related_content',
        'links' => 0,
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
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '7d286a69-2949-4495-9c63-a52babf2ec49';
    $display->content['new-7d286a69-2949-4495-9c63-a52babf2ec49'] = $pane;
    $display->panels['content'][10] = 'new-7d286a69-2949-4495-9c63-a52babf2ec49';
    $pane = new stdClass();
    $pane->pid = 'new-9f9c43c8-2b2b-4dcf-9927-14749a6f6f13';
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
    $pane->uuid = '9f9c43c8-2b2b-4dcf-9927-14749a6f6f13';
    $display->content['new-9f9c43c8-2b2b-4dcf-9927-14749a6f6f13'] = $pane;
    $display->panels['top'][0] = 'new-9f9c43c8-2b2b-4dcf-9927-14749a6f6f13';
    $pane = new stdClass();
    $pane->pid = 'new-77f60d9e-b82e-403f-8a92-7f4a0aa520ab';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'i18n_taxonomy_term_reference_link',
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
    $pane->uuid = '77f60d9e-b82e-403f-8a92-7f4a0aa520ab';
    $display->content['new-77f60d9e-b82e-403f-8a92-7f4a0aa520ab'] = $pane;
    $display->panels['top'][1] = 'new-77f60d9e-b82e-403f-8a92-7f4a0aa520ab';
    $pane = new stdClass();
    $pane->pid = 'new-51b1e9c4-5d57-43ac-a1a8-8f7170061bc9';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '51b1e9c4-5d57-43ac-a1a8-8f7170061bc9';
    $display->content['new-51b1e9c4-5d57-43ac-a1a8-8f7170061bc9'] = $pane;
    $display->panels['top'][2] = 'new-51b1e9c4-5d57-43ac-a1a8-8f7170061bc9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-02987682-a53c-468f-bf4f-8a7558bb646d';
  $panelizer->display = $display;
  $export['node:event:default:full'] = $panelizer;

  return $export;
}
