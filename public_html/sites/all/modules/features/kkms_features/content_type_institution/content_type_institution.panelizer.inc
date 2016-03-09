<?php
/**
 * @file
 * content_type_institution.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function content_type_institution_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:institution:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'institution';
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
  $display->uuid = '4239f23b-0406-4439-be56-6401632a9775';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ca0d4a7b-59a8-40b4-a400-2cf56ade0f3b';
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
        'optionset' => 'kkms',
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
    $pane->uuid = 'ca0d4a7b-59a8-40b4-a400-2cf56ade0f3b';
    $display->content['new-ca0d4a7b-59a8-40b4-a400-2cf56ade0f3b'] = $pane;
    $display->panels['content'][0] = 'new-ca0d4a7b-59a8-40b4-a400-2cf56ade0f3b';
    $pane = new stdClass();
    $pane->pid = 'new-6f856222-2cfc-47e1-9019-a09eef0bf0b1';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_video_single';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
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
    $pane->uuid = '6f856222-2cfc-47e1-9019-a09eef0bf0b1';
    $display->content['new-6f856222-2cfc-47e1-9019-a09eef0bf0b1'] = $pane;
    $display->panels['content'][1] = 'new-6f856222-2cfc-47e1-9019-a09eef0bf0b1';
    $pane = new stdClass();
    $pane->pid = 'new-bb2a0880-b949-4a4c-b03f-8da67fb0efb1';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_place';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'bb2a0880-b949-4a4c-b03f-8da67fb0efb1';
    $display->content['new-bb2a0880-b949-4a4c-b03f-8da67fb0efb1'] = $pane;
    $display->panels['content'][2] = 'new-bb2a0880-b949-4a4c-b03f-8da67fb0efb1';
    $pane = new stdClass();
    $pane->pid = 'new-17a01ca1-e8b6-42f7-b005-bf6e43885b6b';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '17a01ca1-e8b6-42f7-b005-bf6e43885b6b';
    $display->content['new-17a01ca1-e8b6-42f7-b005-bf6e43885b6b'] = $pane;
    $display->panels['content'][3] = 'new-17a01ca1-e8b6-42f7-b005-bf6e43885b6b';
    $pane = new stdClass();
    $pane->pid = 'new-f1561e61-ce10-4201-bbf8-68621dc17ea0';
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
    $pane->uuid = 'f1561e61-ce10-4201-bbf8-68621dc17ea0';
    $display->content['new-f1561e61-ce10-4201-bbf8-68621dc17ea0'] = $pane;
    $display->panels['content'][4] = 'new-f1561e61-ce10-4201-bbf8-68621dc17ea0';
    $pane = new stdClass();
    $pane->pid = 'new-f441b293-35ee-47c9-9ca1-e687a7177a12';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_information';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'f441b293-35ee-47c9-9ca1-e687a7177a12';
    $display->content['new-f441b293-35ee-47c9-9ca1-e687a7177a12'] = $pane;
    $display->panels['content'][5] = 'new-f441b293-35ee-47c9-9ca1-e687a7177a12';
    $pane = new stdClass();
    $pane->pid = 'new-99942eaa-e6d1-4cf3-bf82-bd666d196d49';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '99942eaa-e6d1-4cf3-bf82-bd666d196d49';
    $display->content['new-99942eaa-e6d1-4cf3-bf82-bd666d196d49'] = $pane;
    $display->panels['content'][6] = 'new-99942eaa-e6d1-4cf3-bf82-bd666d196d49';
    $pane = new stdClass();
    $pane->pid = 'new-e1ea6f26-e3d7-4dc6-81a0-2f5b3b97f7e9';
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'e1ea6f26-e3d7-4dc6-81a0-2f5b3b97f7e9';
    $display->content['new-e1ea6f26-e3d7-4dc6-81a0-2f5b3b97f7e9'] = $pane;
    $display->panels['content'][7] = 'new-e1ea6f26-e3d7-4dc6-81a0-2f5b3b97f7e9';
    $pane = new stdClass();
    $pane->pid = 'new-71316784-1334-42fe-8606-9d9377bc579d';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '71316784-1334-42fe-8606-9d9377bc579d';
    $display->content['new-71316784-1334-42fe-8606-9d9377bc579d'] = $pane;
    $display->panels['content'][8] = 'new-71316784-1334-42fe-8606-9d9377bc579d';
    $pane = new stdClass();
    $pane->pid = 'new-7533dbbd-741d-4633-beee-ce1f82bce56b';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_nodequeue';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'nodequeue_list_nodes',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Links',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '7533dbbd-741d-4633-beee-ce1f82bce56b';
    $display->content['new-7533dbbd-741d-4633-beee-ce1f82bce56b'] = $pane;
    $display->panels['content'][9] = 'new-7533dbbd-741d-4633-beee-ce1f82bce56b';
    $pane = new stdClass();
    $pane->pid = 'new-dcbab1ec-496f-4979-b77a-d29ab224633d';
    $pane->panel = 'content';
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
    $pane->uuid = 'dcbab1ec-496f-4979-b77a-d29ab224633d';
    $display->content['new-dcbab1ec-496f-4979-b77a-d29ab224633d'] = $pane;
    $display->panels['content'][10] = 'new-dcbab1ec-496f-4979-b77a-d29ab224633d';
    $pane = new stdClass();
    $pane->pid = 'new-f06d4913-7379-48bb-aed7-dbe588a97a42';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_service_spot';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = 'f06d4913-7379-48bb-aed7-dbe588a97a42';
    $display->content['new-f06d4913-7379-48bb-aed7-dbe588a97a42'] = $pane;
    $display->panels['content'][11] = 'new-f06d4913-7379-48bb-aed7-dbe588a97a42';
    $pane = new stdClass();
    $pane->pid = 'new-5030c5f8-10e3-44b1-b80a-53be1dee845e';
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
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '5030c5f8-10e3-44b1-b80a-53be1dee845e';
    $display->content['new-5030c5f8-10e3-44b1-b80a-53be1dee845e'] = $pane;
    $display->panels['content'][12] = 'new-5030c5f8-10e3-44b1-b80a-53be1dee845e';
    $pane = new stdClass();
    $pane->pid = 'new-18412703-fe68-4808-94b6-38b34d8f6936';
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
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = '18412703-fe68-4808-94b6-38b34d8f6936';
    $display->content['new-18412703-fe68-4808-94b6-38b34d8f6936'] = $pane;
    $display->panels['content'][13] = 'new-18412703-fe68-4808-94b6-38b34d8f6936';
    $pane = new stdClass();
    $pane->pid = 'new-4ac4b965-4ab2-4a11-a002-9ce13660038d';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'related_events_list-related_events_pane_institution';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4ac4b965-4ab2-4a11-a002-9ce13660038d';
    $display->content['new-4ac4b965-4ab2-4a11-a002-9ce13660038d'] = $pane;
    $display->panels['sidebar'][0] = 'new-4ac4b965-4ab2-4a11-a002-9ce13660038d';
    $pane = new stdClass();
    $pane->pid = 'new-f3784117-e2f8-4d88-9e53-9876b354f118';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'institutions_near_by-near_by_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f3784117-e2f8-4d88-9e53-9876b354f118';
    $display->content['new-f3784117-e2f8-4d88-9e53-9876b354f118'] = $pane;
    $display->panels['sidebar'][1] = 'new-f3784117-e2f8-4d88-9e53-9876b354f118';
    $pane = new stdClass();
    $pane->pid = 'new-44ebd8ac-98ec-4bed-918e-ea44d691f3c7';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'dynamic_links-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Dynamic links',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '44ebd8ac-98ec-4bed-918e-ea44d691f3c7';
    $display->content['new-44ebd8ac-98ec-4bed-918e-ea44d691f3c7'] = $pane;
    $display->panels['sidebar'][2] = 'new-44ebd8ac-98ec-4bed-918e-ea44d691f3c7';
    $pane = new stdClass();
    $pane->pid = 'new-8f6ed8d3-7b29-464a-a86b-36862d359be0';
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
    $pane->uuid = '8f6ed8d3-7b29-464a-a86b-36862d359be0';
    $display->content['new-8f6ed8d3-7b29-464a-a86b-36862d359be0'] = $pane;
    $display->panels['top'][0] = 'new-8f6ed8d3-7b29-464a-a86b-36862d359be0';
    $pane = new stdClass();
    $pane->pid = 'new-e6d8e00a-865f-4858-bf57-16679036600e';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_institution_category';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_link',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e6d8e00a-865f-4858-bf57-16679036600e';
    $display->content['new-e6d8e00a-865f-4858-bf57-16679036600e'] = $pane;
    $display->panels['top'][1] = 'new-e6d8e00a-865f-4858-bf57-16679036600e';
    $pane = new stdClass();
    $pane->pid = 'new-9e598466-dd1c-499c-aa84-4f314b2fef12';
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
    $pane->uuid = '9e598466-dd1c-499c-aa84-4f314b2fef12';
    $display->content['new-9e598466-dd1c-499c-aa84-4f314b2fef12'] = $pane;
    $display->panels['top'][2] = 'new-9e598466-dd1c-499c-aa84-4f314b2fef12';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-17a01ca1-e8b6-42f7-b005-bf6e43885b6b';
  $panelizer->display = $display;
  $export['node:institution:default:full'] = $panelizer;

  return $export;
}
