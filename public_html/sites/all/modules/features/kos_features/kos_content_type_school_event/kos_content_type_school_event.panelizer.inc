<?php
/**
 * @file
 * kos_content_type_school_event.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function kos_content_type_school_event_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:school_event:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'school_event';
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
  $display->layout = 'panels_school_content_type';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
      'bottom' => NULL,
      'content_all' => NULL,
      'content_top' => NULL,
      'content_left' => NULL,
      'content_right' => NULL,
      'content_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '0cde18cd-5502-4b38-ac0e-caca91145da5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5563f56a-712a-4184-a16b-a807e2288945';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
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
    $pane->uuid = '5563f56a-712a-4184-a16b-a807e2288945';
    $display->content['new-5563f56a-712a-4184-a16b-a807e2288945'] = $pane;
    $display->panels['content'][0] = 'new-5563f56a-712a-4184-a16b-a807e2288945';
    $pane = new stdClass();
    $pane->pid = 'new-45863d15-b8de-4916-b6fd-9a79df7d9dda';
    $pane->panel = 'content';
    $pane->type = 'node_terms';
    $pane->subtype = 'node_terms';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'limit' => 1,
      'vocabularies' => array(
        'audiences' => 'audiences',
      ),
      'term_format' => 'term-links',
      'link' => 1,
      'term_delimiter' => ', ',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Target audience:',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '45863d15-b8de-4916-b6fd-9a79df7d9dda';
    $display->content['new-45863d15-b8de-4916-b6fd-9a79df7d9dda'] = $pane;
    $display->panels['content'][1] = 'new-45863d15-b8de-4916-b6fd-9a79df7d9dda';
    $pane = new stdClass();
    $pane->pid = 'new-23b29e50-8cdf-4a32-882f-f592d1a163a0';
    $pane->panel = 'content';
    $pane->type = 'node_terms';
    $pane->subtype = 'node_terms';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'limit' => 1,
      'vocabularies' => array(
        'school_event_category' => 'school_event_category',
      ),
      'term_format' => 'term-links',
      'link' => 1,
      'term_delimiter' => ', ',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Category:',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '23b29e50-8cdf-4a32-882f-f592d1a163a0';
    $display->content['new-23b29e50-8cdf-4a32-882f-f592d1a163a0'] = $pane;
    $display->panels['content'][2] = 'new-23b29e50-8cdf-4a32-882f-f592d1a163a0';
    $pane = new stdClass();
    $pane->pid = 'new-b29b3c8a-0507-4ec8-904e-a6b9f627dca6';
    $pane->panel = 'content';
    $pane->type = 'node_terms';
    $pane->subtype = 'node_terms';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'limit' => 1,
      'vocabularies' => array(
        'subjects' => 'subjects',
      ),
      'term_format' => 'term-links',
      'link' => 1,
      'term_delimiter' => ', ',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Subjects:',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'b29b3c8a-0507-4ec8-904e-a6b9f627dca6';
    $display->content['new-b29b3c8a-0507-4ec8-904e-a6b9f627dca6'] = $pane;
    $display->panels['content'][3] = 'new-b29b3c8a-0507-4ec8-904e-a6b9f627dca6';
    $pane = new stdClass();
    $pane->pid = 'new-943eb716-b3f6-47a4-8954-9d903b1acd87';
    $pane->panel = 'content';
    $pane->type = 'node_terms';
    $pane->subtype = 'node_terms';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'limit' => 1,
      'vocabularies' => array(
        'topics' => 'topics',
      ),
      'term_format' => 'term-links',
      'link' => 1,
      'term_delimiter' => ', ',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Topics:',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '943eb716-b3f6-47a4-8954-9d903b1acd87';
    $display->content['new-943eb716-b3f6-47a4-8954-9d903b1acd87'] = $pane;
    $display->panels['content'][4] = 'new-943eb716-b3f6-47a4-8954-9d903b1acd87';
    $pane = new stdClass();
    $pane->pid = 'new-a62c8f07-0540-46f1-86f7-c2f90629d921';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'date_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'format_type' => 'long',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
        'show_repeat_rule' => 'show',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Date:',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'a62c8f07-0540-46f1-86f7-c2f90629d921';
    $display->content['new-a62c8f07-0540-46f1-86f7-c2f90629d921'] = $pane;
    $display->panels['content'][5] = 'new-a62c8f07-0540-46f1-86f7-c2f90629d921';
    $pane = new stdClass();
    $pane->pid = 'new-dc58c6cf-73d6-470c-84d4-96bac078704e';
    $pane->panel = 'content';
    $pane->type = 'node_terms';
    $pane->subtype = 'node_terms';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'limit' => 1,
      'vocabularies' => array(
        'school_event_price' => 'school_event_price',
      ),
      'term_format' => 'term-links',
      'link' => 1,
      'term_delimiter' => ', ',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Price:',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'dc58c6cf-73d6-470c-84d4-96bac078704e';
    $display->content['new-dc58c6cf-73d6-470c-84d4-96bac078704e'] = $pane;
    $display->panels['content'][6] = 'new-dc58c6cf-73d6-470c-84d4-96bac078704e';
    $pane = new stdClass();
    $pane->pid = 'new-1dcf362c-7a61-4b0a-b533-5fcdff448905';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_school_event_place';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => '_none',
        'title_link' => '',
        'title_class' => '',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Place:',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '1dcf362c-7a61-4b0a-b533-5fcdff448905';
    $display->content['new-1dcf362c-7a61-4b0a-b533-5fcdff448905'] = $pane;
    $display->panels['content'][7] = 'new-1dcf362c-7a61-4b0a-b533-5fcdff448905';
    $pane = new stdClass();
    $pane->pid = 'new-15df49f9-43ee-4b4d-b0f8-2cd5a9fec47d';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_link';
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
      'override_title' => 1,
      'override_title_text' => 'Further information:',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '15df49f9-43ee-4b4d-b0f8-2cd5a9fec47d';
    $display->content['new-15df49f9-43ee-4b4d-b0f8-2cd5a9fec47d'] = $pane;
    $display->panels['content'][8] = 'new-15df49f9-43ee-4b4d-b0f8-2cd5a9fec47d';
    $pane = new stdClass();
    $pane->pid = 'new-a33c9889-b62f-4db4-9116-f89bd8c59899';
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'a33c9889-b62f-4db4-9116-f89bd8c59899';
    $display->content['new-a33c9889-b62f-4db4-9116-f89bd8c59899'] = $pane;
    $display->panels['content'][9] = 'new-a33c9889-b62f-4db4-9116-f89bd8c59899';
    $pane = new stdClass();
    $pane->pid = 'new-82a176d8-1f35-4ce8-8b8a-7948b41f1d04';
    $pane->panel = 'content_bottom';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_teaser';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->uuid = '82a176d8-1f35-4ce8-8b8a-7948b41f1d04';
    $display->content['new-82a176d8-1f35-4ce8-8b8a-7948b41f1d04'] = $pane;
    $display->panels['content_bottom'][0] = 'new-82a176d8-1f35-4ce8-8b8a-7948b41f1d04';
    $pane = new stdClass();
    $pane->pid = 'new-9f51c33a-62c0-41f0-976f-df77536a9fdd';
    $pane->panel = 'content_bottom';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_school_event_body';
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
    $pane->uuid = '9f51c33a-62c0-41f0-976f-df77536a9fdd';
    $display->content['new-9f51c33a-62c0-41f0-976f-df77536a9fdd'] = $pane;
    $display->panels['content_bottom'][1] = 'new-9f51c33a-62c0-41f0-976f-df77536a9fdd';
    $pane = new stdClass();
    $pane->pid = 'new-ebb7543a-9aa1-4c45-a8ac-a03becf50c37';
    $pane->panel = 'content_left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_audiences';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Target Audiences',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ebb7543a-9aa1-4c45-a8ac-a03becf50c37';
    $display->content['new-ebb7543a-9aa1-4c45-a8ac-a03becf50c37'] = $pane;
    $display->panels['content_left'][0] = 'new-ebb7543a-9aa1-4c45-a8ac-a03becf50c37';
    $pane = new stdClass();
    $pane->pid = 'new-aa65d02e-a137-4626-9caf-d602c040427b';
    $pane->panel = 'content_left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_subjects';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'aa65d02e-a137-4626-9caf-d602c040427b';
    $display->content['new-aa65d02e-a137-4626-9caf-d602c040427b'] = $pane;
    $display->panels['content_left'][1] = 'new-aa65d02e-a137-4626-9caf-d602c040427b';
    $pane = new stdClass();
    $pane->pid = 'new-3228a7e2-d6a5-42de-9848-9a39bed85902';
    $pane->panel = 'content_left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_topic';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3228a7e2-d6a5-42de-9848-9a39bed85902';
    $display->content['new-3228a7e2-d6a5-42de-9848-9a39bed85902'] = $pane;
    $display->panels['content_left'][2] = 'new-3228a7e2-d6a5-42de-9848-9a39bed85902';
    $pane = new stdClass();
    $pane->pid = 'new-e85109f8-e899-4f3b-bdc1-1c2b23aa3032';
    $pane->panel = 'content_left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_preparation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e85109f8-e899-4f3b-bdc1-1c2b23aa3032';
    $display->content['new-e85109f8-e899-4f3b-bdc1-1c2b23aa3032'] = $pane;
    $display->panels['content_left'][3] = 'new-e85109f8-e899-4f3b-bdc1-1c2b23aa3032';
    $pane = new stdClass();
    $pane->pid = 'new-f6ee00d1-0e07-4c1f-b68d-0afccaa9ba67';
    $pane->panel = 'content_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'date_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'format_type' => 'kos_events_date',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
        'show_repeat_rule' => 'show',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Date',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f6ee00d1-0e07-4c1f-b68d-0afccaa9ba67';
    $display->content['new-f6ee00d1-0e07-4c1f-b68d-0afccaa9ba67'] = $pane;
    $display->panels['content_right'][0] = 'new-f6ee00d1-0e07-4c1f-b68d-0afccaa9ba67';
    $pane = new stdClass();
    $pane->pid = 'new-b75053c9-6e00-47f9-898f-85d71f6119a1';
    $pane->panel = 'content_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_school_event_price';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Price',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array(
      'css_id' => 'price-school',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b75053c9-6e00-47f9-898f-85d71f6119a1';
    $display->content['new-b75053c9-6e00-47f9-898f-85d71f6119a1'] = $pane;
    $display->panels['content_right'][1] = 'new-b75053c9-6e00-47f9-898f-85d71f6119a1';
    $pane = new stdClass();
    $pane->pid = 'new-ab750a5a-eded-4e7a-9fc8-098d0f533110';
    $pane->panel = 'content_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_school_event_place';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => '_none',
        'title_link' => 'content',
        'title_class' => '',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Place',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ab750a5a-eded-4e7a-9fc8-098d0f533110';
    $display->content['new-ab750a5a-eded-4e7a-9fc8-098d0f533110'] = $pane;
    $display->panels['content_right'][2] = 'new-ab750a5a-eded-4e7a-9fc8-098d0f533110';
    $pane = new stdClass();
    $pane->pid = 'new-400f3e3f-899b-49e8-991a-7913480bb550';
    $pane->panel = 'content_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Further information',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '400f3e3f-899b-49e8-991a-7913480bb550';
    $display->content['new-400f3e3f-899b-49e8-991a-7913480bb550'] = $pane;
    $display->panels['content_right'][3] = 'new-400f3e3f-899b-49e8-991a-7913480bb550';
    $pane = new stdClass();
    $pane->pid = 'new-1dbf5712-9ca3-4142-97d6-434e93f4adcd';
    $pane->panel = 'content_top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'file_view_mode' => 'default',
        'image_style' => 'school_event_node_view',
        'image_link' => '',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1dbf5712-9ca3-4142-97d6-434e93f4adcd';
    $display->content['new-1dbf5712-9ca3-4142-97d6-434e93f4adcd'] = $pane;
    $display->panels['content_top'][0] = 'new-1dbf5712-9ca3-4142-97d6-434e93f4adcd';
    $pane = new stdClass();
    $pane->pid = 'new-3c25eb6d-a2c3-4bd6-aea0-9f8f409d1aae';
    $pane->panel = 'content_top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_video';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'controls' => 1,
        'autoplay' => 0,
        'loop' => 0,
        'multiple_file_behavior' => 'tags',
        'width' => '',
        'height' => '',
        'file_view_mode' => 'default',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3c25eb6d-a2c3-4bd6-aea0-9f8f409d1aae';
    $display->content['new-3c25eb6d-a2c3-4bd6-aea0-9f8f409d1aae'] = $pane;
    $display->panels['content_top'][1] = 'new-3c25eb6d-a2c3-4bd6-aea0-9f8f409d1aae';
    $pane = new stdClass();
    $pane->pid = 'new-e7540b4e-6d05-4650-a7df-97c99ede2a9e';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'kos_dynamic_links-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:school_event:field_dynamic_links',
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
      'override_title_text' => 'Similar activities',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e7540b4e-6d05-4650-a7df-97c99ede2a9e';
    $display->content['new-e7540b4e-6d05-4650-a7df-97c99ede2a9e'] = $pane;
    $display->panels['sidebar'][0] = 'new-e7540b4e-6d05-4650-a7df-97c99ede2a9e';
    $pane = new stdClass();
    $pane->pid = 'new-3c245675-aa98-4841-ab0f-6e5cf432a2f3';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'popular_events-school_events';
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
    $pane->uuid = '3c245675-aa98-4841-ab0f-6e5cf432a2f3';
    $display->content['new-3c245675-aa98-4841-ab0f-6e5cf432a2f3'] = $pane;
    $display->panels['sidebar'][1] = 'new-3c245675-aa98-4841-ab0f-6e5cf432a2f3';
    $pane = new stdClass();
    $pane->pid = 'new-847f8a87-5d30-4bd6-9911-e47120e99800';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_files';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'file_default',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '847f8a87-5d30-4bd6-9911-e47120e99800';
    $display->content['new-847f8a87-5d30-4bd6-9911-e47120e99800'] = $pane;
    $display->panels['sidebar'][2] = 'new-847f8a87-5d30-4bd6-9911-e47120e99800';
    $pane = new stdClass();
    $pane->pid = 'new-29b7929a-efda-402c-a010-b4adc3bd6ef0';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_popularity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'radioactivity_combo_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'energy' => '10',
        'type' => 'none',
        'accuracy' => '100',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => 'Populære aktiviteter',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '29b7929a-efda-402c-a010-b4adc3bd6ef0';
    $display->content['new-29b7929a-efda-402c-a010-b4adc3bd6ef0'] = $pane;
    $display->panels['sidebar'][3] = 'new-29b7929a-efda-402c-a010-b4adc3bd6ef0';
    $pane = new stdClass();
    $pane->pid = 'new-7b8eec98-a26e-40c8-8ff7-aad403567e89';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Related links',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '7b8eec98-a26e-40c8-8ff7-aad403567e89';
    $display->content['new-7b8eec98-a26e-40c8-8ff7-aad403567e89'] = $pane;
    $display->panels['sidebar'][4] = 'new-7b8eec98-a26e-40c8-8ff7-aad403567e89';
    $pane = new stdClass();
    $pane->pid = 'new-2e04d00c-a05f-4746-b6f2-7a88315df72c';
    $pane->panel = 'top';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'none',
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
    $pane->uuid = '2e04d00c-a05f-4746-b6f2-7a88315df72c';
    $display->content['new-2e04d00c-a05f-4746-b6f2-7a88315df72c'] = $pane;
    $display->panels['top'][0] = 'new-2e04d00c-a05f-4746-b6f2-7a88315df72c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a33c9889-b62f-4db4-9116-f89bd8c59899';
  $panelizer->display = $display;
  $export['node:school_event:default:full'] = $panelizer;

  return $export;
}
