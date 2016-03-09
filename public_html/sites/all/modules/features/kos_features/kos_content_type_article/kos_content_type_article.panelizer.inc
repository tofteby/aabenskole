<?php
/**
 * @file
 * kos_content_type_article.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function kos_content_type_article_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:article:alternative:full';
  $panelizer->title = 'Alternative panel';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'article';
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
  $display->uuid = '0b7a8448-fabe-444d-9d7e-5bf39b8ff083';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-196849b6-5d6f-4ac4-85a9-3180f9635801';
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
        'title_field' => '',
        'alt_field' => '',
        'referenced_fields' => array(),
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
    $pane->uuid = '196849b6-5d6f-4ac4-85a9-3180f9635801';
    $display->content['new-196849b6-5d6f-4ac4-85a9-3180f9635801'] = $pane;
    $display->panels['content'][0] = 'new-196849b6-5d6f-4ac4-85a9-3180f9635801';
    $pane = new stdClass();
    $pane->pid = 'new-e32d4ff5-628a-4772-a4ea-c6bcb7541843';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image_slideshow';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'links' => 0,
        'view_mode' => 'related_content',
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
    $pane->uuid = 'e32d4ff5-628a-4772-a4ea-c6bcb7541843';
    $display->content['new-e32d4ff5-628a-4772-a4ea-c6bcb7541843'] = $pane;
    $display->panels['content'][1] = 'new-e32d4ff5-628a-4772-a4ea-c6bcb7541843';
    $pane = new stdClass();
    $pane->pid = 'new-f5ce9940-af4f-42f2-9b0c-038217daf820';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f5ce9940-af4f-42f2-9b0c-038217daf820';
    $display->content['new-f5ce9940-af4f-42f2-9b0c-038217daf820'] = $pane;
    $display->panels['content'][2] = 'new-f5ce9940-af4f-42f2-9b0c-038217daf820';
    $pane = new stdClass();
    $pane->pid = 'new-5d7337ed-2cad-486f-aed6-be3405295999';
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
    $pane->uuid = '5d7337ed-2cad-486f-aed6-be3405295999';
    $display->content['new-5d7337ed-2cad-486f-aed6-be3405295999'] = $pane;
    $display->panels['content'][3] = 'new-5d7337ed-2cad-486f-aed6-be3405295999';
    $pane = new stdClass();
    $pane->pid = 'new-2d265b5c-2d49-42cb-b5f3-7f0116eeb815';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_box';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'links' => 0,
        'view_mode' => 'related_content',
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
    $pane->uuid = '2d265b5c-2d49-42cb-b5f3-7f0116eeb815';
    $display->content['new-2d265b5c-2d49-42cb-b5f3-7f0116eeb815'] = $pane;
    $display->panels['content'][4] = 'new-2d265b5c-2d49-42cb-b5f3-7f0116eeb815';
    $pane = new stdClass();
    $pane->pid = 'new-e324a8b4-f7d3-4929-a9a5-6184f476991a';
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
    $pane->uuid = 'e324a8b4-f7d3-4929-a9a5-6184f476991a';
    $display->content['new-e324a8b4-f7d3-4929-a9a5-6184f476991a'] = $pane;
    $display->panels['content'][5] = 'new-e324a8b4-f7d3-4929-a9a5-6184f476991a';
    $pane = new stdClass();
    $pane->pid = 'new-df44b6a9-8367-4afb-b065-629d7e63187f';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'df44b6a9-8367-4afb-b065-629d7e63187f';
    $display->content['new-df44b6a9-8367-4afb-b065-629d7e63187f'] = $pane;
    $display->panels['content'][6] = 'new-df44b6a9-8367-4afb-b065-629d7e63187f';
    $pane = new stdClass();
    $pane->pid = 'new-e5403acb-93ba-455c-8ebe-cd2be531b7ee';
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'e5403acb-93ba-455c-8ebe-cd2be531b7ee';
    $display->content['new-e5403acb-93ba-455c-8ebe-cd2be531b7ee'] = $pane;
    $display->panels['content'][7] = 'new-e5403acb-93ba-455c-8ebe-cd2be531b7ee';
    $pane = new stdClass();
    $pane->pid = 'new-32885eae-e7b5-4229-a84d-56a26b238ee4';
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '32885eae-e7b5-4229-a84d-56a26b238ee4';
    $display->content['new-32885eae-e7b5-4229-a84d-56a26b238ee4'] = $pane;
    $display->panels['content'][8] = 'new-32885eae-e7b5-4229-a84d-56a26b238ee4';
    $pane = new stdClass();
    $pane->pid = 'new-ea053413-2bf7-4f75-8549-d959eba40148';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'dynamic_links-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:article:field_dynamic_links',
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'ea053413-2bf7-4f75-8549-d959eba40148';
    $display->content['new-ea053413-2bf7-4f75-8549-d959eba40148'] = $pane;
    $display->panels['content'][9] = 'new-ea053413-2bf7-4f75-8549-d959eba40148';
    $pane = new stdClass();
    $pane->pid = 'new-2b51bee0-f103-46fc-ab71-566f984a1f71';
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
        'links' => 0,
        'view_mode' => 'related_content',
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
    $pane->uuid = '2b51bee0-f103-46fc-ab71-566f984a1f71';
    $display->content['new-2b51bee0-f103-46fc-ab71-566f984a1f71'] = $pane;
    $display->panels['content'][10] = 'new-2b51bee0-f103-46fc-ab71-566f984a1f71';
    $pane = new stdClass();
    $pane->pid = 'new-662a61a6-7cbf-49a4-87ca-20bae8dc89a6';
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
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '662a61a6-7cbf-49a4-87ca-20bae8dc89a6';
    $display->content['new-662a61a6-7cbf-49a4-87ca-20bae8dc89a6'] = $pane;
    $display->panels['content'][11] = 'new-662a61a6-7cbf-49a4-87ca-20bae8dc89a6';
    $pane = new stdClass();
    $pane->pid = 'new-05b62be7-43ce-48a3-9569-d6c22a19feee';
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
        'link' => 0,
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
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '05b62be7-43ce-48a3-9569-d6c22a19feee';
    $display->content['new-05b62be7-43ce-48a3-9569-d6c22a19feee'] = $pane;
    $display->panels['content'][12] = 'new-05b62be7-43ce-48a3-9569-d6c22a19feee';
    $pane = new stdClass();
    $pane->pid = 'new-0731f46a-25fe-4663-bf5e-45661a4b23ed';
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
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = '0731f46a-25fe-4663-bf5e-45661a4b23ed';
    $display->content['new-0731f46a-25fe-4663-bf5e-45661a4b23ed'] = $pane;
    $display->panels['content'][13] = 'new-0731f46a-25fe-4663-bf5e-45661a4b23ed';
    $pane = new stdClass();
    $pane->pid = 'new-5e054bb3-9538-49f9-8b43-dbd7f3c4c6d4';
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
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = '5e054bb3-9538-49f9-8b43-dbd7f3c4c6d4';
    $display->content['new-5e054bb3-9538-49f9-8b43-dbd7f3c4c6d4'] = $pane;
    $display->panels['content'][14] = 'new-5e054bb3-9538-49f9-8b43-dbd7f3c4c6d4';
    $pane = new stdClass();
    $pane->pid = 'new-cb656069-fe73-4e7c-b97b-b7dd4889cb1a';
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
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = 'cb656069-fe73-4e7c-b97b-b7dd4889cb1a';
    $display->content['new-cb656069-fe73-4e7c-b97b-b7dd4889cb1a'] = $pane;
    $display->panels['content'][15] = 'new-cb656069-fe73-4e7c-b97b-b7dd4889cb1a';
    $pane = new stdClass();
    $pane->pid = 'new-19348056-fca6-4414-9013-ee8b8dd54714';
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
    $pane->uuid = '19348056-fca6-4414-9013-ee8b8dd54714';
    $display->content['new-19348056-fca6-4414-9013-ee8b8dd54714'] = $pane;
    $display->panels['top'][0] = 'new-19348056-fca6-4414-9013-ee8b8dd54714';
    $pane = new stdClass();
    $pane->pid = 'new-6f3f08ca-dc91-4b10-a557-1d8cf934da4e';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_article_type';
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
    $pane->uuid = '6f3f08ca-dc91-4b10-a557-1d8cf934da4e';
    $display->content['new-6f3f08ca-dc91-4b10-a557-1d8cf934da4e'] = $pane;
    $display->panels['top'][1] = 'new-6f3f08ca-dc91-4b10-a557-1d8cf934da4e';
    $pane = new stdClass();
    $pane->pid = 'new-b6b9fd6a-d5a2-4c63-8f5e-be2fb51f62ba';
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
    $pane->uuid = 'b6b9fd6a-d5a2-4c63-8f5e-be2fb51f62ba';
    $display->content['new-b6b9fd6a-d5a2-4c63-8f5e-be2fb51f62ba'] = $pane;
    $display->panels['top'][2] = 'new-b6b9fd6a-d5a2-4c63-8f5e-be2fb51f62ba';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-196849b6-5d6f-4ac4-85a9-3180f9635801';
  $panelizer->display = $display;
  $export['node:article:alternative:full'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:article:custom_default:full';
  $panelizer->title = 'Default panel';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'article';
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
  $display->uuid = 'e3cbd032-4b84-4cc8-b25c-ad1019212c9a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8f163b0e-9785-47ed-ac4d-9d97b989ab26';
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
        'title_field' => '',
        'alt_field' => '',
        'referenced_fields' => array(),
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
    $pane->uuid = '8f163b0e-9785-47ed-ac4d-9d97b989ab26';
    $display->content['new-8f163b0e-9785-47ed-ac4d-9d97b989ab26'] = $pane;
    $display->panels['content'][0] = 'new-8f163b0e-9785-47ed-ac4d-9d97b989ab26';
    $pane = new stdClass();
    $pane->pid = 'new-c3eb6d66-70c5-41c1-a618-5afb934fca9b';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image_slideshow';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'links' => 0,
        'view_mode' => 'related_content',
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
    $pane->uuid = 'c3eb6d66-70c5-41c1-a618-5afb934fca9b';
    $display->content['new-c3eb6d66-70c5-41c1-a618-5afb934fca9b'] = $pane;
    $display->panels['content'][1] = 'new-c3eb6d66-70c5-41c1-a618-5afb934fca9b';
    $pane = new stdClass();
    $pane->pid = 'new-c65ce22f-f8f1-40f4-ae4f-b3ea22eb8287';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c65ce22f-f8f1-40f4-ae4f-b3ea22eb8287';
    $display->content['new-c65ce22f-f8f1-40f4-ae4f-b3ea22eb8287'] = $pane;
    $display->panels['content'][2] = 'new-c65ce22f-f8f1-40f4-ae4f-b3ea22eb8287';
    $pane = new stdClass();
    $pane->pid = 'new-c4709273-6dda-4d98-8eba-6930ac701540';
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
    $pane->uuid = 'c4709273-6dda-4d98-8eba-6930ac701540';
    $display->content['new-c4709273-6dda-4d98-8eba-6930ac701540'] = $pane;
    $display->panels['content'][3] = 'new-c4709273-6dda-4d98-8eba-6930ac701540';
    $pane = new stdClass();
    $pane->pid = 'new-c91351a8-a823-4696-87f9-2cd5684eeb65';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_box';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'links' => 0,
        'view_mode' => 'related_content',
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
    $pane->uuid = 'c91351a8-a823-4696-87f9-2cd5684eeb65';
    $display->content['new-c91351a8-a823-4696-87f9-2cd5684eeb65'] = $pane;
    $display->panels['content'][4] = 'new-c91351a8-a823-4696-87f9-2cd5684eeb65';
    $pane = new stdClass();
    $pane->pid = 'new-dde0f59a-3dc0-4287-a035-4686689cb4bc';
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
    $pane->uuid = 'dde0f59a-3dc0-4287-a035-4686689cb4bc';
    $display->content['new-dde0f59a-3dc0-4287-a035-4686689cb4bc'] = $pane;
    $display->panels['content'][5] = 'new-dde0f59a-3dc0-4287-a035-4686689cb4bc';
    $pane = new stdClass();
    $pane->pid = 'new-5a28a80d-d146-4d72-8dce-55ef97718100';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '5a28a80d-d146-4d72-8dce-55ef97718100';
    $display->content['new-5a28a80d-d146-4d72-8dce-55ef97718100'] = $pane;
    $display->panels['content'][6] = 'new-5a28a80d-d146-4d72-8dce-55ef97718100';
    $pane = new stdClass();
    $pane->pid = 'new-8842d3e4-cdbb-4383-a3ab-43c7e569aa44';
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '8842d3e4-cdbb-4383-a3ab-43c7e569aa44';
    $display->content['new-8842d3e4-cdbb-4383-a3ab-43c7e569aa44'] = $pane;
    $display->panels['content'][7] = 'new-8842d3e4-cdbb-4383-a3ab-43c7e569aa44';
    $pane = new stdClass();
    $pane->pid = 'new-3c7df195-8f6c-4e49-8cea-7732c3b294df';
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '3c7df195-8f6c-4e49-8cea-7732c3b294df';
    $display->content['new-3c7df195-8f6c-4e49-8cea-7732c3b294df'] = $pane;
    $display->panels['content'][8] = 'new-3c7df195-8f6c-4e49-8cea-7732c3b294df';
    $pane = new stdClass();
    $pane->pid = 'new-4b0f093b-950c-4923-ae7b-aac56c1064e5';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'dynamic_links-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:article:field_dynamic_links',
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '4b0f093b-950c-4923-ae7b-aac56c1064e5';
    $display->content['new-4b0f093b-950c-4923-ae7b-aac56c1064e5'] = $pane;
    $display->panels['content'][9] = 'new-4b0f093b-950c-4923-ae7b-aac56c1064e5';
    $pane = new stdClass();
    $pane->pid = 'new-6a7a185f-d031-4692-84d3-2386027fb43e';
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
        'links' => 0,
        'view_mode' => 'related_content',
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
    $pane->uuid = '6a7a185f-d031-4692-84d3-2386027fb43e';
    $display->content['new-6a7a185f-d031-4692-84d3-2386027fb43e'] = $pane;
    $display->panels['content'][10] = 'new-6a7a185f-d031-4692-84d3-2386027fb43e';
    $pane = new stdClass();
    $pane->pid = 'new-8d7642b0-ac6d-49b8-9f4d-a88f5c6ef80a';
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
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '8d7642b0-ac6d-49b8-9f4d-a88f5c6ef80a';
    $display->content['new-8d7642b0-ac6d-49b8-9f4d-a88f5c6ef80a'] = $pane;
    $display->panels['content'][11] = 'new-8d7642b0-ac6d-49b8-9f4d-a88f5c6ef80a';
    $pane = new stdClass();
    $pane->pid = 'new-53175a99-449f-4ad3-a20c-a8c3315fa0a4';
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
        'link' => 0,
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
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '53175a99-449f-4ad3-a20c-a8c3315fa0a4';
    $display->content['new-53175a99-449f-4ad3-a20c-a8c3315fa0a4'] = $pane;
    $display->panels['content'][12] = 'new-53175a99-449f-4ad3-a20c-a8c3315fa0a4';
    $pane = new stdClass();
    $pane->pid = 'new-e011fe79-66ce-4e0f-aa27-e2f5f3f0c7d3';
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
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = 'e011fe79-66ce-4e0f-aa27-e2f5f3f0c7d3';
    $display->content['new-e011fe79-66ce-4e0f-aa27-e2f5f3f0c7d3'] = $pane;
    $display->panels['content'][13] = 'new-e011fe79-66ce-4e0f-aa27-e2f5f3f0c7d3';
    $pane = new stdClass();
    $pane->pid = 'new-7b1a9d47-1c51-4457-bccb-e2b4151fe4ea';
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
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = '7b1a9d47-1c51-4457-bccb-e2b4151fe4ea';
    $display->content['new-7b1a9d47-1c51-4457-bccb-e2b4151fe4ea'] = $pane;
    $display->panels['content'][14] = 'new-7b1a9d47-1c51-4457-bccb-e2b4151fe4ea';
    $pane = new stdClass();
    $pane->pid = 'new-ce23dbfc-2162-4365-86a3-d89c2d94ada6';
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
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = 'ce23dbfc-2162-4365-86a3-d89c2d94ada6';
    $display->content['new-ce23dbfc-2162-4365-86a3-d89c2d94ada6'] = $pane;
    $display->panels['content'][15] = 'new-ce23dbfc-2162-4365-86a3-d89c2d94ada6';
    $pane = new stdClass();
    $pane->pid = 'new-67eb64bb-5e9b-4d0b-b5aa-90694146812c';
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
    $pane->uuid = '67eb64bb-5e9b-4d0b-b5aa-90694146812c';
    $display->content['new-67eb64bb-5e9b-4d0b-b5aa-90694146812c'] = $pane;
    $display->panels['top'][0] = 'new-67eb64bb-5e9b-4d0b-b5aa-90694146812c';
    $pane = new stdClass();
    $pane->pid = 'new-83007547-85bf-4124-8bd2-ad8f9c736f33';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_article_type';
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
    $pane->uuid = '83007547-85bf-4124-8bd2-ad8f9c736f33';
    $display->content['new-83007547-85bf-4124-8bd2-ad8f9c736f33'] = $pane;
    $display->panels['top'][1] = 'new-83007547-85bf-4124-8bd2-ad8f9c736f33';
    $pane = new stdClass();
    $pane->pid = 'new-49a109b1-eeb6-4349-a05e-903748e52bc3';
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
    $pane->uuid = '49a109b1-eeb6-4349-a05e-903748e52bc3';
    $display->content['new-49a109b1-eeb6-4349-a05e-903748e52bc3'] = $pane;
    $display->panels['top'][2] = 'new-49a109b1-eeb6-4349-a05e-903748e52bc3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8f163b0e-9785-47ed-ac4d-9d97b989ab26';
  $panelizer->display = $display;
  $export['node:article:custom_default:full'] = $panelizer;

  return $export;
}
