<?php
/**
 * @file
 * content_type_blog.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function content_type_blog_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:blog:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'blog';
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
  $display->uuid = '32fb8540-1265-41c4-94a4-2c9d7838a462';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-02d89574-81ab-4fa4-84b9-393520d2264a';
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
        'image_link' => '',
        'image_style' => 'node_view_images',
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
    $pane->uuid = '02d89574-81ab-4fa4-84b9-393520d2264a';
    $display->content['new-02d89574-81ab-4fa4-84b9-393520d2264a'] = $pane;
    $display->panels['content'][0] = 'new-02d89574-81ab-4fa4-84b9-393520d2264a';
    $pane = new stdClass();
    $pane->pid = 'new-3aa4b6c1-87d9-4410-b031-3aecb646abd8';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3aa4b6c1-87d9-4410-b031-3aecb646abd8';
    $display->content['new-3aa4b6c1-87d9-4410-b031-3aecb646abd8'] = $pane;
    $display->panels['content'][1] = 'new-3aa4b6c1-87d9-4410-b031-3aecb646abd8';
    $pane = new stdClass();
    $pane->pid = 'new-d71d6c20-eeee-4260-91df-3981dcd2d874';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd71d6c20-eeee-4260-91df-3981dcd2d874';
    $display->content['new-d71d6c20-eeee-4260-91df-3981dcd2d874'] = $pane;
    $display->panels['content'][2] = 'new-d71d6c20-eeee-4260-91df-3981dcd2d874';
    $pane = new stdClass();
    $pane->pid = 'new-6edcf1ec-1f59-4e26-b3b3-cff283f78a25';
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
    $pane->uuid = '6edcf1ec-1f59-4e26-b3b3-cff283f78a25';
    $display->content['new-6edcf1ec-1f59-4e26-b3b3-cff283f78a25'] = $pane;
    $display->panels['content'][3] = 'new-6edcf1ec-1f59-4e26-b3b3-cff283f78a25';
    $pane = new stdClass();
    $pane->pid = 'new-22a99648-537d-46e5-8cc8-d0eda103711c';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '22a99648-537d-46e5-8cc8-d0eda103711c';
    $display->content['new-22a99648-537d-46e5-8cc8-d0eda103711c'] = $pane;
    $display->panels['content'][4] = 'new-22a99648-537d-46e5-8cc8-d0eda103711c';
    $pane = new stdClass();
    $pane->pid = 'new-c7362095-80c4-4c2b-83a4-bd48cc2fcf27';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'c7362095-80c4-4c2b-83a4-bd48cc2fcf27';
    $display->content['new-c7362095-80c4-4c2b-83a4-bd48cc2fcf27'] = $pane;
    $display->panels['content'][5] = 'new-c7362095-80c4-4c2b-83a4-bd48cc2fcf27';
    $pane = new stdClass();
    $pane->pid = 'new-d23e20f1-de12-493c-921a-0923b0d189a8';
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
      'term_delimiter' => ' | ',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'd23e20f1-de12-493c-921a-0923b0d189a8';
    $display->content['new-d23e20f1-de12-493c-921a-0923b0d189a8'] = $pane;
    $display->panels['content'][6] = 'new-d23e20f1-de12-493c-921a-0923b0d189a8';
    $pane = new stdClass();
    $pane->pid = 'new-55cb5d9c-63a4-4af6-b727-858d5017ea8a';
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '55cb5d9c-63a4-4af6-b727-858d5017ea8a';
    $display->content['new-55cb5d9c-63a4-4af6-b727-858d5017ea8a'] = $pane;
    $display->panels['content'][7] = 'new-55cb5d9c-63a4-4af6-b727-858d5017ea8a';
    $pane = new stdClass();
    $pane->pid = 'new-5fac4b5e-2a71-4d5b-b665-440d7e1cff77';
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '5fac4b5e-2a71-4d5b-b665-440d7e1cff77';
    $display->content['new-5fac4b5e-2a71-4d5b-b665-440d7e1cff77'] = $pane;
    $display->panels['content'][8] = 'new-5fac4b5e-2a71-4d5b-b665-440d7e1cff77';
    $pane = new stdClass();
    $pane->pid = 'new-ee143962-1268-44e4-ad3f-3cbe76eb4a13';
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'ee143962-1268-44e4-ad3f-3cbe76eb4a13';
    $display->content['new-ee143962-1268-44e4-ad3f-3cbe76eb4a13'] = $pane;
    $display->panels['content'][9] = 'new-ee143962-1268-44e4-ad3f-3cbe76eb4a13';
    $pane = new stdClass();
    $pane->pid = 'new-ee0d5247-6276-4120-88c0-6e4d6c45d5b0';
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
    $pane->uuid = 'ee0d5247-6276-4120-88c0-6e4d6c45d5b0';
    $display->content['new-ee0d5247-6276-4120-88c0-6e4d6c45d5b0'] = $pane;
    $display->panels['top'][0] = 'new-ee0d5247-6276-4120-88c0-6e4d6c45d5b0';
    $pane = new stdClass();
    $pane->pid = 'new-8ada8609-1ae4-4d8f-bd46-1a6358072ddb';
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
    $pane->uuid = '8ada8609-1ae4-4d8f-bd46-1a6358072ddb';
    $display->content['new-8ada8609-1ae4-4d8f-bd46-1a6358072ddb'] = $pane;
    $display->panels['top'][1] = 'new-8ada8609-1ae4-4d8f-bd46-1a6358072ddb';
    $pane = new stdClass();
    $pane->pid = 'new-353eb693-4a01-45a6-8667-acfc553d6fd1';
    $pane->panel = 'top';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'kkms_date',
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
    $pane->uuid = '353eb693-4a01-45a6-8667-acfc553d6fd1';
    $display->content['new-353eb693-4a01-45a6-8667-acfc553d6fd1'] = $pane;
    $display->panels['top'][2] = 'new-353eb693-4a01-45a6-8667-acfc553d6fd1';
    $pane = new stdClass();
    $pane->pid = 'new-2f9c2a88-0965-4571-8d76-20808d438683';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'By author',
      'title' => '',
      'body' => 'By %node:author',
      'format' => 'plain_text',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-node-author',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2f9c2a88-0965-4571-8d76-20808d438683';
    $display->content['new-2f9c2a88-0965-4571-8d76-20808d438683'] = $pane;
    $display->panels['top'][3] = 'new-2f9c2a88-0965-4571-8d76-20808d438683';
    $pane = new stdClass();
    $pane->pid = 'new-bdeb3e41-421b-421a-8123-8563a1ad2033';
    $pane->panel = 'top';
    $pane->type = 'node_comments_count';
    $pane->subtype = 'node_comments_count';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '@comments_count comments',
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
    $pane->uuid = 'bdeb3e41-421b-421a-8123-8563a1ad2033';
    $display->content['new-bdeb3e41-421b-421a-8123-8563a1ad2033'] = $pane;
    $display->panels['top'][4] = 'new-bdeb3e41-421b-421a-8123-8563a1ad2033';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6edcf1ec-1f59-4e26-b3b3-cff283f78a25';
  $panelizer->display = $display;
  $export['node:blog:default:full'] = $panelizer;

  return $export;
}
