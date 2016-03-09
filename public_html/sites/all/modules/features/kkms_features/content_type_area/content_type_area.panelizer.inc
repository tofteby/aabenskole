<?php
/**
 * @file
 * content_type_area.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function content_type_area_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:area:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'area';
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
  $display->uuid = '76cafbbb-fe97-4830-b1a4-c42954cc0d72';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-12860567-1a18-4de3-bdd2-359982515bae';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'objects_view_area-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '12860567-1a18-4de3-bdd2-359982515bae';
    $display->content['new-12860567-1a18-4de3-bdd2-359982515bae'] = $pane;
    $display->panels['content'][0] = 'new-12860567-1a18-4de3-bdd2-359982515bae';
    $pane = new stdClass();
    $pane->pid = 'new-1bf6dc76-82d4-4b4f-882a-ed3ece5351e8';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'flexslider',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'image_style' => 'flexslider_full',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1bf6dc76-82d4-4b4f-882a-ed3ece5351e8';
    $display->content['new-1bf6dc76-82d4-4b4f-882a-ed3ece5351e8'] = $pane;
    $display->panels['content'][1] = 'new-1bf6dc76-82d4-4b4f-882a-ed3ece5351e8';
    $pane = new stdClass();
    $pane->pid = 'new-65d55d61-58dc-4aed-b66c-bab4b870dc09';
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
    $pane->uuid = '65d55d61-58dc-4aed-b66c-bab4b870dc09';
    $display->content['new-65d55d61-58dc-4aed-b66c-bab4b870dc09'] = $pane;
    $display->panels['content'][2] = 'new-65d55d61-58dc-4aed-b66c-bab4b870dc09';
    $pane = new stdClass();
    $pane->pid = 'new-a8e43537-b183-4ea7-a223-deb06c657a99';
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
    $pane->uuid = 'a8e43537-b183-4ea7-a223-deb06c657a99';
    $display->content['new-a8e43537-b183-4ea7-a223-deb06c657a99'] = $pane;
    $display->panels['content'][3] = 'new-a8e43537-b183-4ea7-a223-deb06c657a99';
    $pane = new stdClass();
    $pane->pid = 'new-653fdabd-725b-4651-8164-a2699638a820';
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
    $pane->uuid = '653fdabd-725b-4651-8164-a2699638a820';
    $display->content['new-653fdabd-725b-4651-8164-a2699638a820'] = $pane;
    $display->panels['content'][4] = 'new-653fdabd-725b-4651-8164-a2699638a820';
    $pane = new stdClass();
    $pane->pid = 'new-5a59de10-787e-4f34-94cf-2a4076def0f0';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'related_events_list-related_events_pane_area';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:area:field_related_events',
          'settings' => array(
            'field_related_events' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_related_events_value' => '1',
          ),
          'context' => 'panelizer',
          'not' => FALSE,
        ),
      ),
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
    $pane->uuid = '5a59de10-787e-4f34-94cf-2a4076def0f0';
    $display->content['new-5a59de10-787e-4f34-94cf-2a4076def0f0'] = $pane;
    $display->panels['sidebar'][0] = 'new-5a59de10-787e-4f34-94cf-2a4076def0f0';
    $pane = new stdClass();
    $pane->pid = 'new-1fa62f1d-b80e-4c9f-b0fa-73069125cad3';
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
    $pane->uuid = '1fa62f1d-b80e-4c9f-b0fa-73069125cad3';
    $display->content['new-1fa62f1d-b80e-4c9f-b0fa-73069125cad3'] = $pane;
    $display->panels['top'][0] = 'new-1fa62f1d-b80e-4c9f-b0fa-73069125cad3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-12860567-1a18-4de3-bdd2-359982515bae';
  $panelizer->display = $display;
  $export['node:area:default:full'] = $panelizer;

  return $export;
}
