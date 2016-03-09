<?php
/**
 * @file
 * content_type_service.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function content_type_service_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:service:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'service';
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
  $display->uuid = '30747eaf-9494-4938-8cf8-f46b07390efa';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f50422df-b1fd-473c-8e3e-38442766c8f7';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f50422df-b1fd-473c-8e3e-38442766c8f7';
    $display->content['new-f50422df-b1fd-473c-8e3e-38442766c8f7'] = $pane;
    $display->panels['content'][0] = 'new-f50422df-b1fd-473c-8e3e-38442766c8f7';
    $pane = new stdClass();
    $pane->pid = 'new-4b0450a6-55b9-4e0a-88c3-d9059e0d207b';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4b0450a6-55b9-4e0a-88c3-d9059e0d207b';
    $display->content['new-4b0450a6-55b9-4e0a-88c3-d9059e0d207b'] = $pane;
    $display->panels['content'][1] = 'new-4b0450a6-55b9-4e0a-88c3-d9059e0d207b';
    $pane = new stdClass();
    $pane->pid = 'new-31b50358-e54e-4d4a-98e9-4a67c7ec8b60';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '31b50358-e54e-4d4a-98e9-4a67c7ec8b60';
    $display->content['new-31b50358-e54e-4d4a-98e9-4a67c7ec8b60'] = $pane;
    $display->panels['content'][2] = 'new-31b50358-e54e-4d4a-98e9-4a67c7ec8b60';
    $pane = new stdClass();
    $pane->pid = 'new-4b34d292-d759-4b7a-bb3e-796662487fa6';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4b34d292-d759-4b7a-bb3e-796662487fa6';
    $display->content['new-4b34d292-d759-4b7a-bb3e-796662487fa6'] = $pane;
    $display->panels['content'][3] = 'new-4b34d292-d759-4b7a-bb3e-796662487fa6';
    $pane = new stdClass();
    $pane->pid = 'new-99dedd6a-c6dd-4e95-aaa8-4627434b22ed';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '99dedd6a-c6dd-4e95-aaa8-4627434b22ed';
    $display->content['new-99dedd6a-c6dd-4e95-aaa8-4627434b22ed'] = $pane;
    $display->panels['content'][4] = 'new-99dedd6a-c6dd-4e95-aaa8-4627434b22ed';
    $pane = new stdClass();
    $pane->pid = 'new-3019f2e1-a63f-4841-9800-be6cf3114d87';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '3019f2e1-a63f-4841-9800-be6cf3114d87';
    $display->content['new-3019f2e1-a63f-4841-9800-be6cf3114d87'] = $pane;
    $display->panels['content'][5] = 'new-3019f2e1-a63f-4841-9800-be6cf3114d87';
    $pane = new stdClass();
    $pane->pid = 'new-94cde7f6-5a8a-48b9-a122-93e5e265f68d';
    $pane->panel = 'content';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
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
    $pane->uuid = '94cde7f6-5a8a-48b9-a122-93e5e265f68d';
    $display->content['new-94cde7f6-5a8a-48b9-a122-93e5e265f68d'] = $pane;
    $display->panels['content'][6] = 'new-94cde7f6-5a8a-48b9-a122-93e5e265f68d';
    $pane = new stdClass();
    $pane->pid = 'new-f69d55d0-1241-4a0b-9d38-1b006083ed25';
    $pane->panel = 'content';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 0,
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'f69d55d0-1241-4a0b-9d38-1b006083ed25';
    $display->content['new-f69d55d0-1241-4a0b-9d38-1b006083ed25'] = $pane;
    $display->panels['content'][7] = 'new-f69d55d0-1241-4a0b-9d38-1b006083ed25';
    $pane = new stdClass();
    $pane->pid = 'new-0db4218b-f2f7-4be1-88e3-5bf1f506f4b4';
    $pane->panel = 'content';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:facebook_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '0db4218b-f2f7-4be1-88e3-5bf1f506f4b4';
    $display->content['new-0db4218b-f2f7-4be1-88e3-5bf1f506f4b4'] = $pane;
    $display->panels['content'][8] = 'new-0db4218b-f2f7-4be1-88e3-5bf1f506f4b4';
    $pane = new stdClass();
    $pane->pid = 'new-5d4a49f4-2beb-400a-a4c6-504d96ca23c8';
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
    $pane->uuid = '5d4a49f4-2beb-400a-a4c6-504d96ca23c8';
    $display->content['new-5d4a49f4-2beb-400a-a4c6-504d96ca23c8'] = $pane;
    $display->panels['top'][0] = 'new-5d4a49f4-2beb-400a-a4c6-504d96ca23c8';
    $pane = new stdClass();
    $pane->pid = 'new-d580ee2e-c70c-4955-9cb6-ed37b3bf0af0';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_service_type';
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
    $pane->uuid = 'd580ee2e-c70c-4955-9cb6-ed37b3bf0af0';
    $display->content['new-d580ee2e-c70c-4955-9cb6-ed37b3bf0af0'] = $pane;
    $display->panels['top'][1] = 'new-d580ee2e-c70c-4955-9cb6-ed37b3bf0af0';
    $pane = new stdClass();
    $pane->pid = 'new-f163dd6b-642e-4eaa-a72e-99a3d593f7d8';
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
    $pane->uuid = 'f163dd6b-642e-4eaa-a72e-99a3d593f7d8';
    $display->content['new-f163dd6b-642e-4eaa-a72e-99a3d593f7d8'] = $pane;
    $display->panels['top'][2] = 'new-f163dd6b-642e-4eaa-a72e-99a3d593f7d8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d580ee2e-c70c-4955-9cb6-ed37b3bf0af0';
  $panelizer->display = $display;
  $export['node:service:default:full'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:service_situation:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'service_situation';
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
  $display->uuid = '5e90460c-eb18-4630-bf84-ab57dae12ad8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4834a0d0-437a-44f2-b766-5df9bfd2eb1c';
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
    $pane->uuid = '4834a0d0-437a-44f2-b766-5df9bfd2eb1c';
    $display->content['new-4834a0d0-437a-44f2-b766-5df9bfd2eb1c'] = $pane;
    $display->panels['content'][0] = 'new-4834a0d0-437a-44f2-b766-5df9bfd2eb1c';
    $pane = new stdClass();
    $pane->pid = 'new-52fc61a1-fe97-4f80-be99-dcccc2be06d4';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '52fc61a1-fe97-4f80-be99-dcccc2be06d4';
    $display->content['new-52fc61a1-fe97-4f80-be99-dcccc2be06d4'] = $pane;
    $display->panels['content'][1] = 'new-52fc61a1-fe97-4f80-be99-dcccc2be06d4';
    $pane = new stdClass();
    $pane->pid = 'new-9ab2ddab-84fd-4439-827d-e76f8dcaecb2';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9ab2ddab-84fd-4439-827d-e76f8dcaecb2';
    $display->content['new-9ab2ddab-84fd-4439-827d-e76f8dcaecb2'] = $pane;
    $display->panels['content'][2] = 'new-9ab2ddab-84fd-4439-827d-e76f8dcaecb2';
    $pane = new stdClass();
    $pane->pid = 'new-d29298de-2889-408d-bee1-a2ab678bccd2';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'service_situation_links-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd29298de-2889-408d-bee1-a2ab678bccd2';
    $display->content['new-d29298de-2889-408d-bee1-a2ab678bccd2'] = $pane;
    $display->panels['content'][3] = 'new-d29298de-2889-408d-bee1-a2ab678bccd2';
    $pane = new stdClass();
    $pane->pid = 'new-bdbb6007-8092-4ac5-bdcf-d8e107883fb4';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'service_situation_links-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'bdbb6007-8092-4ac5-bdcf-d8e107883fb4';
    $display->content['new-bdbb6007-8092-4ac5-bdcf-d8e107883fb4'] = $pane;
    $display->panels['content'][4] = 'new-bdbb6007-8092-4ac5-bdcf-d8e107883fb4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:service_situation:default:full'] = $panelizer;

  return $export;
}
