<?php
/**
 * @file
 * views_shared_content.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_shared_content_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'content_shared_to_channels';
  $view->description = 'Content that is shared to channels, with exposed filters to be configured per pane.';
  $view->tag = 'default';
  $view->base_table = 'apachesolr__solr';
  $view->human_name = 'Content shared to Channels';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Apache Solr: url */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['channels_context_url'] = TRUE;
  /* Field: Apache Solr: label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['label']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['label']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Sort criterion: Apache Solr: bs_sticky */
  $handler->display->display_options['sorts']['bs_sticky']['id'] = 'bs_sticky';
  $handler->display->display_options['sorts']['bs_sticky']['table'] = 'apachesolr__solr';
  $handler->display->display_options['sorts']['bs_sticky']['field'] = 'bs_sticky';
  $handler->display->display_options['sorts']['bs_sticky']['order'] = 'DESC';
  $handler->display->display_options['sorts']['bs_sticky']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['bs_sticky']['expose']['label'] = 'Sticky';
  /* Sort criterion: Apache Solr: ds_changed */
  $handler->display->display_options['sorts']['ds_changed']['id'] = 'ds_changed';
  $handler->display->display_options['sorts']['ds_changed']['table'] = 'apachesolr__solr';
  $handler->display->display_options['sorts']['ds_changed']['field'] = 'ds_changed';
  $handler->display->display_options['sorts']['ds_changed']['order'] = 'DESC';
  $handler->display->display_options['sorts']['ds_changed']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['ds_changed']['expose']['label'] = 'Updated date';
  /* Sort criterion: Apache Solr: label */
  $handler->display->display_options['sorts']['label']['id'] = 'label';
  $handler->display->display_options['sorts']['label']['table'] = 'apachesolr__solr';
  $handler->display->display_options['sorts']['label']['field'] = 'label';
  $handler->display->display_options['sorts']['label']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['label']['expose']['label'] = 'Title';
  /* Sort criterion: Apache Solr: ds_created */
  $handler->display->display_options['sorts']['ds_created']['id'] = 'ds_created';
  $handler->display->display_options['sorts']['ds_created']['table'] = 'apachesolr__solr';
  $handler->display->display_options['sorts']['ds_created']['field'] = 'ds_created';
  $handler->display->display_options['sorts']['ds_created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['ds_created']['expose']['label'] = 'Post date';
  /* Filter criterion: Apache Solr: bs_status */
  $handler->display->display_options['filters']['bs_status']['id'] = 'bs_status';
  $handler->display->display_options['filters']['bs_status']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['bs_status']['field'] = 'bs_status';
  $handler->display->display_options['filters']['bs_status']['value'] = 'true';
  $handler->display->display_options['filters']['bs_status']['group'] = 1;
  $handler->display->display_options['filters']['bs_status']['expose']['operator_id'] = 'bs_status_op';
  $handler->display->display_options['filters']['bs_status']['expose']['label'] = 'bs_status';
  $handler->display->display_options['filters']['bs_status']['expose']['operator'] = 'bs_status_op';
  $handler->display->display_options['filters']['bs_status']['expose']['identifier'] = 'bs_status';
  /* Filter criterion: Apache Solr: entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'node';
  $handler->display->display_options['filters']['entity_type']['group'] = 1;
  /* Filter criterion: Apache Solr: im_field_channels */
  $handler->display->display_options['filters']['im_field_channels']['id'] = 'im_field_channels';
  $handler->display->display_options['filters']['im_field_channels']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['im_field_channels']['field'] = 'im_field_channels';
  $handler->display->display_options['filters']['im_field_channels']['value'] = '*';
  $handler->display->display_options['filters']['im_field_channels']['group'] = 1;
  /* Filter criterion: Apache Solr: Multiple bundles filter */
  $handler->display->display_options['filters']['bundle_multiple']['id'] = 'bundle_multiple';
  $handler->display->display_options['filters']['bundle_multiple']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['bundle_multiple']['field'] = 'bundle_multiple';
  $handler->display->display_options['filters']['bundle_multiple']['group'] = 1;
  $handler->display->display_options['filters']['bundle_multiple']['exposed'] = TRUE;
  $handler->display->display_options['filters']['bundle_multiple']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['bundle_multiple']['expose']['label'] = 'Content types';
  $handler->display->display_options['filters']['bundle_multiple']['expose']['operator'] = 'bundle_multiple_op';
  $handler->display->display_options['filters']['bundle_multiple']['expose']['identifier'] = 'bundle_multiple';
  $handler->display->display_options['filters']['bundle_multiple']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['bundle_multiple']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Apache Solr: hash */
  $handler->display->display_options['filters']['hash']['id'] = 'hash';
  $handler->display->display_options['filters']['hash']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['hash']['field'] = 'hash';
  $handler->display->display_options['filters']['hash']['value'] = array();
  $handler->display->display_options['filters']['hash']['group'] = 1;
  $handler->display->display_options['filters']['hash']['exposed'] = TRUE;
  $handler->display->display_options['filters']['hash']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['hash']['expose']['label'] = 'Created on sites';
  $handler->display->display_options['filters']['hash']['expose']['operator'] = 'hash_op';
  $handler->display->display_options['filters']['hash']['expose']['identifier'] = 'hash';
  $handler->display->display_options['filters']['hash']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['hash']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['hash']['type'] = 'select';
  /* Filter criterion: Apache Solr: im_shared_tax_channels */
  $handler->display->display_options['filters']['im_shared_tax_channels']['id'] = 'im_shared_tax_channels';
  $handler->display->display_options['filters']['im_shared_tax_channels']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['im_shared_tax_channels']['field'] = 'im_shared_tax_channels';
  $handler->display->display_options['filters']['im_shared_tax_channels']['group'] = 1;
  $handler->display->display_options['filters']['im_shared_tax_channels']['exposed'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_channels']['expose']['operator_id'] = 'im_shared_tax_channels_op';
  $handler->display->display_options['filters']['im_shared_tax_channels']['expose']['label'] = 'Pushed to channels';
  $handler->display->display_options['filters']['im_shared_tax_channels']['expose']['operator'] = 'im_shared_tax_channels_op';
  $handler->display->display_options['filters']['im_shared_tax_channels']['expose']['identifier'] = 'im_shared_tax_channels';
  $handler->display->display_options['filters']['im_shared_tax_channels']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_channels']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['im_shared_tax_channels']['type'] = 'select';
  $handler->display->display_options['filters']['im_shared_tax_channels']['vocabulary'] = 'channels';
  $handler->display->display_options['filters']['im_shared_tax_channels']['hierarchy'] = 1;
  /* Filter criterion: Apache Solr: im_shared_tax_common */
  $handler->display->display_options['filters']['im_shared_tax_common']['id'] = 'im_shared_tax_common';
  $handler->display->display_options['filters']['im_shared_tax_common']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['im_shared_tax_common']['field'] = 'im_shared_tax_common';
  $handler->display->display_options['filters']['im_shared_tax_common']['value'] = '';
  $handler->display->display_options['filters']['im_shared_tax_common']['group'] = 1;
  $handler->display->display_options['filters']['im_shared_tax_common']['exposed'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['operator_id'] = 'im_shared_tax_common_op';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['label'] = 'KK common';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['operator'] = 'im_shared_tax_common_op';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['identifier'] = 'im_shared_tax_common';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['im_shared_tax_common']['vocabulary'] = 'common';

  /* Display: Titles only */
  $handler = $view->new_display('panel_pane', 'Titles only', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Content that is shared to channels, with exposed filters to be configured per pane.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Apache Solr: url */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['channels_context_url'] = TRUE;
  /* Field: Apache Solr: label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['label']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['label']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Shared content';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['allow']['local_context'] = 'local_context';
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: Image only */
  $handler = $view->new_display('panel_pane', 'Image only', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Content that is shared to channels, with exposed filters to be configured per pane.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Apache Solr: url */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['channels_context_url'] = TRUE;
  /* Field: Apache Solr: sm_thumb_list_content_grid */
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['id'] = 'sm_thumb_list_content_grid';
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['field'] = 'sm_thumb_list_content_grid';
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['label'] = '';
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['limit_first'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Apache Solr: bs_status */
  $handler->display->display_options['filters']['bs_status']['id'] = 'bs_status';
  $handler->display->display_options['filters']['bs_status']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['bs_status']['field'] = 'bs_status';
  $handler->display->display_options['filters']['bs_status']['value'] = 'true';
  $handler->display->display_options['filters']['bs_status']['group'] = 1;
  $handler->display->display_options['filters']['bs_status']['expose']['operator_id'] = 'bs_status_op';
  $handler->display->display_options['filters']['bs_status']['expose']['label'] = 'bs_status';
  $handler->display->display_options['filters']['bs_status']['expose']['operator'] = 'bs_status_op';
  $handler->display->display_options['filters']['bs_status']['expose']['identifier'] = 'bs_status';
  /* Filter criterion: Apache Solr: entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'node';
  $handler->display->display_options['filters']['entity_type']['group'] = 1;
  /* Filter criterion: Apache Solr: im_field_channels */
  $handler->display->display_options['filters']['im_field_channels']['id'] = 'im_field_channels';
  $handler->display->display_options['filters']['im_field_channels']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['im_field_channels']['field'] = 'im_field_channels';
  $handler->display->display_options['filters']['im_field_channels']['value'] = '*';
  $handler->display->display_options['filters']['im_field_channels']['group'] = 1;
  /* Filter criterion: Apache Solr: sm_thumb_list_content_grid */
  $handler->display->display_options['filters']['sm_thumb_list_content_grid']['id'] = 'sm_thumb_list_content_grid';
  $handler->display->display_options['filters']['sm_thumb_list_content_grid']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['sm_thumb_list_content_grid']['field'] = 'sm_thumb_list_content_grid';
  $handler->display->display_options['filters']['sm_thumb_list_content_grid']['value'] = '*';
  $handler->display->display_options['filters']['sm_thumb_list_content_grid']['group'] = 1;
  /* Filter criterion: Apache Solr: Multiple bundles filter */
  $handler->display->display_options['filters']['bundle_multiple']['id'] = 'bundle_multiple';
  $handler->display->display_options['filters']['bundle_multiple']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['bundle_multiple']['field'] = 'bundle_multiple';
  $handler->display->display_options['filters']['bundle_multiple']['group'] = 1;
  $handler->display->display_options['filters']['bundle_multiple']['exposed'] = TRUE;
  $handler->display->display_options['filters']['bundle_multiple']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['bundle_multiple']['expose']['label'] = 'Content types';
  $handler->display->display_options['filters']['bundle_multiple']['expose']['operator'] = 'bundle_multiple_op';
  $handler->display->display_options['filters']['bundle_multiple']['expose']['identifier'] = 'bundle_multiple';
  $handler->display->display_options['filters']['bundle_multiple']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['bundle_multiple']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Apache Solr: hash */
  $handler->display->display_options['filters']['hash']['id'] = 'hash';
  $handler->display->display_options['filters']['hash']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['hash']['field'] = 'hash';
  $handler->display->display_options['filters']['hash']['value'] = array();
  $handler->display->display_options['filters']['hash']['group'] = 1;
  $handler->display->display_options['filters']['hash']['exposed'] = TRUE;
  $handler->display->display_options['filters']['hash']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['hash']['expose']['label'] = 'Created on sites';
  $handler->display->display_options['filters']['hash']['expose']['operator'] = 'hash_op';
  $handler->display->display_options['filters']['hash']['expose']['identifier'] = 'hash';
  $handler->display->display_options['filters']['hash']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['hash']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['hash']['type'] = 'select';
  /* Filter criterion: Apache Solr: im_shared_tax_channels */
  $handler->display->display_options['filters']['im_shared_tax_channels']['id'] = 'im_shared_tax_channels';
  $handler->display->display_options['filters']['im_shared_tax_channels']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['im_shared_tax_channels']['field'] = 'im_shared_tax_channels';
  $handler->display->display_options['filters']['im_shared_tax_channels']['group'] = 1;
  $handler->display->display_options['filters']['im_shared_tax_channels']['exposed'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_channels']['expose']['operator_id'] = 'im_shared_tax_channels_op';
  $handler->display->display_options['filters']['im_shared_tax_channels']['expose']['label'] = 'Pushed to channels';
  $handler->display->display_options['filters']['im_shared_tax_channels']['expose']['operator'] = 'im_shared_tax_channels_op';
  $handler->display->display_options['filters']['im_shared_tax_channels']['expose']['identifier'] = 'im_shared_tax_channels';
  $handler->display->display_options['filters']['im_shared_tax_channels']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_channels']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['im_shared_tax_channels']['type'] = 'select';
  $handler->display->display_options['filters']['im_shared_tax_channels']['vocabulary'] = 'channels';
  $handler->display->display_options['filters']['im_shared_tax_channels']['hierarchy'] = 1;
  /* Filter criterion: Apache Solr: im_shared_tax_common */
  $handler->display->display_options['filters']['im_shared_tax_common']['id'] = 'im_shared_tax_common';
  $handler->display->display_options['filters']['im_shared_tax_common']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['im_shared_tax_common']['field'] = 'im_shared_tax_common';
  $handler->display->display_options['filters']['im_shared_tax_common']['value'] = '';
  $handler->display->display_options['filters']['im_shared_tax_common']['group'] = 1;
  $handler->display->display_options['filters']['im_shared_tax_common']['exposed'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['operator_id'] = 'im_shared_tax_common_op';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['label'] = 'KK common';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['operator'] = 'im_shared_tax_common_op';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['identifier'] = 'im_shared_tax_common';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['im_shared_tax_common']['vocabulary'] = 'common';
  $handler->display->display_options['pane_category']['name'] = 'Shared content';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['allow']['local_context'] = 'local_context';

  /* Display: Title and text */
  $handler = $view->new_display('panel_pane', 'Title and text', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'Content that is shared to channels, with exposed filters to be configured per pane.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Apache Solr: url */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['channels_context_url'] = TRUE;
  /* Field: Apache Solr: label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['label']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['label']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: sm_field_teaser */
  $handler->display->display_options['fields']['sm_field_teaser']['id'] = 'sm_field_teaser';
  $handler->display->display_options['fields']['sm_field_teaser']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['sm_field_teaser']['field'] = 'sm_field_teaser';
  $handler->display->display_options['fields']['sm_field_teaser']['label'] = '';
  $handler->display->display_options['fields']['sm_field_teaser']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['sm_field_teaser']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['sm_field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Shared content';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['allow']['local_context'] = 'local_context';

  /* Display: Title, text and image */
  $handler = $view->new_display('panel_pane', 'Title, text and image', 'panel_pane_4');
  $handler->display->display_options['display_description'] = 'Content that is shared to channels, with exposed filters to be configured per pane.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Apache Solr: url */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['channels_context_url'] = TRUE;
  /* Field: Apache Solr: sm_thumb_list_content_grid */
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['id'] = 'sm_thumb_list_content_grid';
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['field'] = 'sm_thumb_list_content_grid';
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['label'] = '';
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['limit_first'] = TRUE;
  /* Field: Apache Solr: label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['label']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['label']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: sm_field_teaser */
  $handler->display->display_options['fields']['sm_field_teaser']['id'] = 'sm_field_teaser';
  $handler->display->display_options['fields']['sm_field_teaser']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['sm_field_teaser']['field'] = 'sm_field_teaser';
  $handler->display->display_options['fields']['sm_field_teaser']['label'] = '';
  $handler->display->display_options['fields']['sm_field_teaser']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['sm_field_teaser']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['sm_field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Shared content';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['allow']['local_context'] = 'local_context';
  $export['content_shared_to_channels'] = $view;

  $view = new view();
  $view->name = 'content_shared_to_this_site';
  $view->description = 'Content that is shared to this site directly, with exposed filters to be configured per pane.';
  $view->tag = 'default';
  $view->base_table = 'apachesolr__solr';
  $view->human_name = 'Content shared to this site';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Apache Solr: url */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['channels_context_url'] = TRUE;
  /* Field: Apache Solr: label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['label']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['label']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Sort criterion: Apache Solr: bs_sticky */
  $handler->display->display_options['sorts']['bs_sticky']['id'] = 'bs_sticky';
  $handler->display->display_options['sorts']['bs_sticky']['table'] = 'apachesolr__solr';
  $handler->display->display_options['sorts']['bs_sticky']['field'] = 'bs_sticky';
  $handler->display->display_options['sorts']['bs_sticky']['order'] = 'DESC';
  $handler->display->display_options['sorts']['bs_sticky']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['bs_sticky']['expose']['label'] = 'Sticky';
  /* Sort criterion: Apache Solr: ds_changed */
  $handler->display->display_options['sorts']['ds_changed']['id'] = 'ds_changed';
  $handler->display->display_options['sorts']['ds_changed']['table'] = 'apachesolr__solr';
  $handler->display->display_options['sorts']['ds_changed']['field'] = 'ds_changed';
  $handler->display->display_options['sorts']['ds_changed']['order'] = 'DESC';
  $handler->display->display_options['sorts']['ds_changed']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['ds_changed']['expose']['label'] = 'Updated date';
  /* Sort criterion: Apache Solr: label */
  $handler->display->display_options['sorts']['label']['id'] = 'label';
  $handler->display->display_options['sorts']['label']['table'] = 'apachesolr__solr';
  $handler->display->display_options['sorts']['label']['field'] = 'label';
  $handler->display->display_options['sorts']['label']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['label']['expose']['label'] = 'Title';
  /* Sort criterion: Apache Solr: ds_created */
  $handler->display->display_options['sorts']['ds_created']['id'] = 'ds_created';
  $handler->display->display_options['sorts']['ds_created']['table'] = 'apachesolr__solr';
  $handler->display->display_options['sorts']['ds_created']['field'] = 'ds_created';
  $handler->display->display_options['sorts']['ds_created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['ds_created']['expose']['label'] = 'Post date';
  /* Filter criterion: Apache Solr: bs_status */
  $handler->display->display_options['filters']['bs_status']['id'] = 'bs_status';
  $handler->display->display_options['filters']['bs_status']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['bs_status']['field'] = 'bs_status';
  $handler->display->display_options['filters']['bs_status']['value'] = 'true';
  $handler->display->display_options['filters']['bs_status']['group'] = 1;
  /* Filter criterion: Apache Solr: entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'node';
  $handler->display->display_options['filters']['entity_type']['group'] = 1;
  /* Filter criterion: Apache Solr: sm_share_site_field_sites */
  $handler->display->display_options['filters']['sm_share_site_field_sites']['id'] = 'sm_share_site_field_sites';
  $handler->display->display_options['filters']['sm_share_site_field_sites']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['sm_share_site_field_sites']['field'] = 'sm_share_site_field_sites';
  $handler->display->display_options['filters']['sm_share_site_field_sites']['group'] = 1;
  $handler->display->display_options['filters']['sm_share_site_field_sites']['expose']['operator_id'] = 'sm_share_site_field_sites_op';
  $handler->display->display_options['filters']['sm_share_site_field_sites']['expose']['label'] = 'sm_share_site_field_sites';
  $handler->display->display_options['filters']['sm_share_site_field_sites']['expose']['operator'] = 'sm_share_site_field_sites_op';
  $handler->display->display_options['filters']['sm_share_site_field_sites']['expose']['identifier'] = 'sm_share_site_field_sites';
  /* Filter criterion: Apache Solr: Multiple bundles filter */
  $handler->display->display_options['filters']['bundle_multiple']['id'] = 'bundle_multiple';
  $handler->display->display_options['filters']['bundle_multiple']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['bundle_multiple']['field'] = 'bundle_multiple';
  $handler->display->display_options['filters']['bundle_multiple']['group'] = 1;
  $handler->display->display_options['filters']['bundle_multiple']['exposed'] = TRUE;
  $handler->display->display_options['filters']['bundle_multiple']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['bundle_multiple']['expose']['label'] = 'Content types';
  $handler->display->display_options['filters']['bundle_multiple']['expose']['operator'] = 'bundle_multiple_op';
  $handler->display->display_options['filters']['bundle_multiple']['expose']['identifier'] = 'bundle_multiple';
  $handler->display->display_options['filters']['bundle_multiple']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['bundle_multiple']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Apache Solr: hash */
  $handler->display->display_options['filters']['hash']['id'] = 'hash';
  $handler->display->display_options['filters']['hash']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['hash']['field'] = 'hash';
  $handler->display->display_options['filters']['hash']['value'] = array();
  $handler->display->display_options['filters']['hash']['group'] = 1;
  $handler->display->display_options['filters']['hash']['exposed'] = TRUE;
  $handler->display->display_options['filters']['hash']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['hash']['expose']['label'] = 'Created on sites';
  $handler->display->display_options['filters']['hash']['expose']['operator'] = 'hash_op';
  $handler->display->display_options['filters']['hash']['expose']['identifier'] = 'hash';
  $handler->display->display_options['filters']['hash']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['hash']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['hash']['type'] = 'select';
  /* Filter criterion: Apache Solr: im_shared_tax_common */
  $handler->display->display_options['filters']['im_shared_tax_common']['id'] = 'im_shared_tax_common';
  $handler->display->display_options['filters']['im_shared_tax_common']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['im_shared_tax_common']['field'] = 'im_shared_tax_common';
  $handler->display->display_options['filters']['im_shared_tax_common']['value'] = '';
  $handler->display->display_options['filters']['im_shared_tax_common']['exposed'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['operator_id'] = 'im_shared_tax_common_op';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['label'] = 'KK common';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['operator'] = 'im_shared_tax_common_op';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['identifier'] = 'im_shared_tax_common';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['im_shared_tax_common']['vocabulary'] = 'common';

  /* Display: Titles only */
  $handler = $view->new_display('panel_pane', 'Titles only', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Content that is shared to this site directly, with exposed filters to be configured per pane.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Apache Solr: url */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['channels_context_url'] = TRUE;
  /* Field: Apache Solr: label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['label']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['label']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Shared content';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['allow']['local_context'] = 'local_context';
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: Image only */
  $handler = $view->new_display('panel_pane', 'Image only', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Content that is shared to this site directly, with exposed filters to be configured per pane.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Apache Solr: url */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['channels_context_url'] = TRUE;
  /* Field: Apache Solr: sm_thumb_list_content_grid */
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['id'] = 'sm_thumb_list_content_grid';
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['field'] = 'sm_thumb_list_content_grid';
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['label'] = '';
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['limit_first'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Apache Solr: bs_status */
  $handler->display->display_options['filters']['bs_status']['id'] = 'bs_status';
  $handler->display->display_options['filters']['bs_status']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['bs_status']['field'] = 'bs_status';
  $handler->display->display_options['filters']['bs_status']['value'] = 'true';
  $handler->display->display_options['filters']['bs_status']['group'] = 1;
  /* Filter criterion: Apache Solr: entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'node';
  $handler->display->display_options['filters']['entity_type']['group'] = 1;
  /* Filter criterion: Apache Solr: sm_thumb_list_content_grid */
  $handler->display->display_options['filters']['sm_thumb_list_content_grid']['id'] = 'sm_thumb_list_content_grid';
  $handler->display->display_options['filters']['sm_thumb_list_content_grid']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['sm_thumb_list_content_grid']['field'] = 'sm_thumb_list_content_grid';
  $handler->display->display_options['filters']['sm_thumb_list_content_grid']['value'] = '*';
  $handler->display->display_options['filters']['sm_thumb_list_content_grid']['group'] = 1;
  /* Filter criterion: Apache Solr: sm_share_site_field_sites */
  $handler->display->display_options['filters']['sm_share_site_field_sites']['id'] = 'sm_share_site_field_sites';
  $handler->display->display_options['filters']['sm_share_site_field_sites']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['sm_share_site_field_sites']['field'] = 'sm_share_site_field_sites';
  $handler->display->display_options['filters']['sm_share_site_field_sites']['group'] = 1;
  $handler->display->display_options['filters']['sm_share_site_field_sites']['expose']['operator_id'] = 'sm_share_site_field_sites_op';
  $handler->display->display_options['filters']['sm_share_site_field_sites']['expose']['label'] = 'sm_share_site_field_sites';
  $handler->display->display_options['filters']['sm_share_site_field_sites']['expose']['operator'] = 'sm_share_site_field_sites_op';
  $handler->display->display_options['filters']['sm_share_site_field_sites']['expose']['identifier'] = 'sm_share_site_field_sites';
  /* Filter criterion: Apache Solr: Multiple bundles filter */
  $handler->display->display_options['filters']['bundle_multiple']['id'] = 'bundle_multiple';
  $handler->display->display_options['filters']['bundle_multiple']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['bundle_multiple']['field'] = 'bundle_multiple';
  $handler->display->display_options['filters']['bundle_multiple']['group'] = 1;
  $handler->display->display_options['filters']['bundle_multiple']['exposed'] = TRUE;
  $handler->display->display_options['filters']['bundle_multiple']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['bundle_multiple']['expose']['label'] = 'Content types';
  $handler->display->display_options['filters']['bundle_multiple']['expose']['operator'] = 'bundle_multiple_op';
  $handler->display->display_options['filters']['bundle_multiple']['expose']['identifier'] = 'bundle_multiple';
  $handler->display->display_options['filters']['bundle_multiple']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['bundle_multiple']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Apache Solr: hash */
  $handler->display->display_options['filters']['hash']['id'] = 'hash';
  $handler->display->display_options['filters']['hash']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['hash']['field'] = 'hash';
  $handler->display->display_options['filters']['hash']['value'] = array();
  $handler->display->display_options['filters']['hash']['group'] = 1;
  $handler->display->display_options['filters']['hash']['exposed'] = TRUE;
  $handler->display->display_options['filters']['hash']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['hash']['expose']['label'] = 'Created on sites';
  $handler->display->display_options['filters']['hash']['expose']['operator'] = 'hash_op';
  $handler->display->display_options['filters']['hash']['expose']['identifier'] = 'hash';
  $handler->display->display_options['filters']['hash']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['hash']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['hash']['type'] = 'select';
  /* Filter criterion: Apache Solr: im_shared_tax_common */
  $handler->display->display_options['filters']['im_shared_tax_common']['id'] = 'im_shared_tax_common';
  $handler->display->display_options['filters']['im_shared_tax_common']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['im_shared_tax_common']['field'] = 'im_shared_tax_common';
  $handler->display->display_options['filters']['im_shared_tax_common']['value'] = '';
  $handler->display->display_options['filters']['im_shared_tax_common']['group'] = 1;
  $handler->display->display_options['filters']['im_shared_tax_common']['exposed'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['operator_id'] = 'im_shared_tax_common_op';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['label'] = 'KK common';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['operator'] = 'im_shared_tax_common_op';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['identifier'] = 'im_shared_tax_common';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['im_shared_tax_common']['vocabulary'] = 'common';
  $handler->display->display_options['pane_category']['name'] = 'Shared content';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['allow']['local_context'] = 'local_context';

  /* Display: Title and text */
  $handler = $view->new_display('panel_pane', 'Title and text', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'Content that is shared to this site directly, with exposed filters to be configured per pane.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Apache Solr: url */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['channels_context_url'] = TRUE;
  /* Field: Apache Solr: label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['label']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['label']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: sm_field_teaser */
  $handler->display->display_options['fields']['sm_field_teaser']['id'] = 'sm_field_teaser';
  $handler->display->display_options['fields']['sm_field_teaser']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['sm_field_teaser']['field'] = 'sm_field_teaser';
  $handler->display->display_options['fields']['sm_field_teaser']['label'] = '';
  $handler->display->display_options['fields']['sm_field_teaser']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['sm_field_teaser']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['sm_field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Shared content';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['allow']['local_context'] = 'local_context';

  /* Display: Title, text and image */
  $handler = $view->new_display('panel_pane', 'Title, text and image', 'panel_pane_4');
  $handler->display->display_options['display_description'] = 'Content that is shared to this site directly, with exposed filters to be configured per pane.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Apache Solr: url */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['channels_context_url'] = TRUE;
  /* Field: Apache Solr: sm_thumb_list_content_grid */
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['id'] = 'sm_thumb_list_content_grid';
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['field'] = 'sm_thumb_list_content_grid';
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['label'] = '';
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['limit_first'] = TRUE;
  /* Field: Apache Solr: label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['label']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['label']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: sm_field_teaser */
  $handler->display->display_options['fields']['sm_field_teaser']['id'] = 'sm_field_teaser';
  $handler->display->display_options['fields']['sm_field_teaser']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['sm_field_teaser']['field'] = 'sm_field_teaser';
  $handler->display->display_options['fields']['sm_field_teaser']['label'] = '';
  $handler->display->display_options['fields']['sm_field_teaser']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['sm_field_teaser']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['sm_field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Shared content';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['allow']['local_context'] = 'local_context';
  $export['content_shared_to_this_site'] = $view;

  $view = new view();
  $view->name = 'events_list';
  $view->description = 'Listings of events from Solr, with exposed filters to be configured per pane.';
  $view->tag = 'default';
  $view->base_table = 'apachesolr__solr';
  $view->human_name = 'Events list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
  $type = \'event\';
  $lists = array(
    \'event\' => array(
      \'trail\' => \'Events\',
      \'path\' => \'events/grid\',
    ),
  );

  if (array_key_exists($type, $lists)) {
    $link = l(\'> \' . t(\'See all\'), $lists[$type][\'path\']);
    $line = t($lists[$type][\'trail\'] . \' !link-all\', array(\'!link-all\' => $link));
    print \'<div class="list-all list-\' . $type . \'">\' . $line . \'<br></div>\';
  }
?>';
  /* Field: Apache Solr: url */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['channels_context_url'] = TRUE;
  /* Field: Apache Solr: sm_thumb_list_content_grid */
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['id'] = 'sm_thumb_list_content_grid';
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['field'] = 'sm_thumb_list_content_grid';
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['label'] = '';
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sm_thumb_list_content_grid']['limit_first'] = TRUE;
  /* Field: Apache Solr: ds_field_date_end */
  $handler->display->display_options['fields']['ds_field_date_end']['id'] = 'ds_field_date_end';
  $handler->display->display_options['fields']['ds_field_date_end']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['ds_field_date_end']['field'] = 'ds_field_date_end';
  $handler->display->display_options['fields']['ds_field_date_end']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ds_field_date_end']['date_format'] = 'kkms_date';
  /* Field: Apache Solr: ds_field_date */
  $handler->display->display_options['fields']['ds_field_date']['id'] = 'ds_field_date';
  $handler->display->display_options['fields']['ds_field_date']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['ds_field_date']['field'] = 'ds_field_date';
  $handler->display->display_options['fields']['ds_field_date']['label'] = '';
  $handler->display->display_options['fields']['ds_field_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['ds_field_date']['alter']['text'] = '[ds_field_date] - [ds_field_date_end]';
  $handler->display->display_options['fields']['ds_field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ds_field_date']['date_format'] = 'kkms_date';
  /* Field: Apache Solr: label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['label']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['label']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: im_shared_tax_event */
  $handler->display->display_options['fields']['im_shared_tax_event']['id'] = 'im_shared_tax_event';
  $handler->display->display_options['fields']['im_shared_tax_event']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['im_shared_tax_event']['field'] = 'im_shared_tax_event';
  $handler->display->display_options['fields']['im_shared_tax_event']['label'] = '';
  $handler->display->display_options['fields']['im_shared_tax_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['im_shared_tax_event']['term_format'] = 'link';
  /* Field: Apache Solr: im_shared_tax_place */
  $handler->display->display_options['fields']['im_shared_tax_place']['id'] = 'im_shared_tax_place';
  $handler->display->display_options['fields']['im_shared_tax_place']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['im_shared_tax_place']['field'] = 'im_shared_tax_place';
  $handler->display->display_options['fields']['im_shared_tax_place']['label'] = '';
  $handler->display->display_options['fields']['im_shared_tax_place']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['im_shared_tax_place']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['im_shared_tax_place']['term_format'] = 'name';
  /* Sort criterion: Apache Solr: ds_field_date */
  $handler->display->display_options['sorts']['ds_field_date']['id'] = 'ds_field_date';
  $handler->display->display_options['sorts']['ds_field_date']['table'] = 'apachesolr__solr';
  $handler->display->display_options['sorts']['ds_field_date']['field'] = 'ds_field_date';
  $handler->display->display_options['sorts']['ds_field_date']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['ds_field_date']['expose']['label'] = 'Event date (Default)';
  /* Sort criterion: Apache Solr: bs_sticky */
  $handler->display->display_options['sorts']['bs_sticky']['id'] = 'bs_sticky';
  $handler->display->display_options['sorts']['bs_sticky']['table'] = 'apachesolr__solr';
  $handler->display->display_options['sorts']['bs_sticky']['field'] = 'bs_sticky';
  $handler->display->display_options['sorts']['bs_sticky']['order'] = 'DESC';
  $handler->display->display_options['sorts']['bs_sticky']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['bs_sticky']['expose']['label'] = 'Sticky';
  /* Sort criterion: Apache Solr: ds_created_real */
  $handler->display->display_options['sorts']['ds_created_real']['id'] = 'ds_created_real';
  $handler->display->display_options['sorts']['ds_created_real']['table'] = 'apachesolr__solr';
  $handler->display->display_options['sorts']['ds_created_real']['field'] = 'ds_created_real';
  $handler->display->display_options['sorts']['ds_created_real']['order'] = 'DESC';
  $handler->display->display_options['sorts']['ds_created_real']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['ds_created_real']['expose']['label'] = 'Created date';
  /* Sort criterion: Apache Solr: ds_changed */
  $handler->display->display_options['sorts']['ds_changed']['id'] = 'ds_changed';
  $handler->display->display_options['sorts']['ds_changed']['table'] = 'apachesolr__solr';
  $handler->display->display_options['sorts']['ds_changed']['field'] = 'ds_changed';
  $handler->display->display_options['sorts']['ds_changed']['order'] = 'DESC';
  $handler->display->display_options['sorts']['ds_changed']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['ds_changed']['expose']['label'] = 'Updated date';
  /* Sort criterion: Apache Solr: label */
  $handler->display->display_options['sorts']['label']['id'] = 'label';
  $handler->display->display_options['sorts']['label']['table'] = 'apachesolr__solr';
  $handler->display->display_options['sorts']['label']['field'] = 'label';
  $handler->display->display_options['sorts']['label']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['label']['expose']['label'] = 'Title';
  /* Sort criterion: Apache Solr: ds_created */
  $handler->display->display_options['sorts']['ds_created']['id'] = 'ds_created';
  $handler->display->display_options['sorts']['ds_created']['table'] = 'apachesolr__solr';
  $handler->display->display_options['sorts']['ds_created']['field'] = 'ds_created';
  $handler->display->display_options['sorts']['ds_created']['expose']['label'] = 'Post date';
  /* Filter criterion: Apache Solr: bs_status */
  $handler->display->display_options['filters']['bs_status']['id'] = 'bs_status';
  $handler->display->display_options['filters']['bs_status']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['bs_status']['field'] = 'bs_status';
  $handler->display->display_options['filters']['bs_status']['value'] = 'true';
  $handler->display->display_options['filters']['bs_status']['group'] = 1;
  $handler->display->display_options['filters']['bs_status']['expose']['operator_id'] = 'bs_status_op';
  $handler->display->display_options['filters']['bs_status']['expose']['label'] = 'bs_status';
  $handler->display->display_options['filters']['bs_status']['expose']['operator'] = 'bs_status_op';
  $handler->display->display_options['filters']['bs_status']['expose']['identifier'] = 'bs_status';
  /* Filter criterion: Apache Solr: entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'solrdate';
  $handler->display->display_options['filters']['entity_type']['group'] = 1;
  /* Filter criterion: Apache Solr: im_field_channels */
  $handler->display->display_options['filters']['im_field_channels']['id'] = 'im_field_channels';
  $handler->display->display_options['filters']['im_field_channels']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['im_field_channels']['field'] = 'im_field_channels';
  $handler->display->display_options['filters']['im_field_channels']['value'] = '*';
  $handler->display->display_options['filters']['im_field_channels']['group'] = 1;
  /* Filter criterion: Apache Solr: ds_field_date */
  $handler->display->display_options['filters']['ds_field_date']['id'] = 'ds_field_date';
  $handler->display->display_options['filters']['ds_field_date']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['ds_field_date']['field'] = 'ds_field_date';
  $handler->display->display_options['filters']['ds_field_date']['operator'] = '>';
  $handler->display->display_options['filters']['ds_field_date']['value']['value'] = 'NOW';
  $handler->display->display_options['filters']['ds_field_date']['group'] = 1;
  /* Filter criterion: Apache Solr: im_shared_tax_event */
  $handler->display->display_options['filters']['im_shared_tax_event']['id'] = 'im_shared_tax_event';
  $handler->display->display_options['filters']['im_shared_tax_event']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['im_shared_tax_event']['field'] = 'im_shared_tax_event';
  $handler->display->display_options['filters']['im_shared_tax_event']['group'] = 1;
  $handler->display->display_options['filters']['im_shared_tax_event']['exposed'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_event']['expose']['operator_id'] = 'im_shared_tax_event_op';
  $handler->display->display_options['filters']['im_shared_tax_event']['expose']['label'] = 'Event type';
  $handler->display->display_options['filters']['im_shared_tax_event']['expose']['operator'] = 'im_shared_tax_event_op';
  $handler->display->display_options['filters']['im_shared_tax_event']['expose']['identifier'] = 'im_shared_tax_event';
  $handler->display->display_options['filters']['im_shared_tax_event']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_event']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['im_shared_tax_event']['type'] = 'select';
  $handler->display->display_options['filters']['im_shared_tax_event']['vocabulary'] = 'event';
  $handler->display->display_options['filters']['im_shared_tax_event']['hierarchy'] = 1;
  /* Filter criterion: Apache Solr: hash */
  $handler->display->display_options['filters']['hash']['id'] = 'hash';
  $handler->display->display_options['filters']['hash']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['hash']['field'] = 'hash';
  $handler->display->display_options['filters']['hash']['value'] = array();
  $handler->display->display_options['filters']['hash']['group'] = 1;
  $handler->display->display_options['filters']['hash']['exposed'] = TRUE;
  $handler->display->display_options['filters']['hash']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['hash']['expose']['label'] = 'Created on sites';
  $handler->display->display_options['filters']['hash']['expose']['operator'] = 'hash_op';
  $handler->display->display_options['filters']['hash']['expose']['identifier'] = 'hash';
  $handler->display->display_options['filters']['hash']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['hash']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['hash']['type'] = 'select';
  /* Filter criterion: Apache Solr: im_shared_tax_channels */
  $handler->display->display_options['filters']['im_shared_tax_channels']['id'] = 'im_shared_tax_channels';
  $handler->display->display_options['filters']['im_shared_tax_channels']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['im_shared_tax_channels']['field'] = 'im_shared_tax_channels';
  $handler->display->display_options['filters']['im_shared_tax_channels']['group'] = 1;
  $handler->display->display_options['filters']['im_shared_tax_channels']['exposed'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_channels']['expose']['operator_id'] = 'im_shared_tax_channels_op';
  $handler->display->display_options['filters']['im_shared_tax_channels']['expose']['label'] = 'Pushed to channels';
  $handler->display->display_options['filters']['im_shared_tax_channels']['expose']['operator'] = 'im_shared_tax_channels_op';
  $handler->display->display_options['filters']['im_shared_tax_channels']['expose']['identifier'] = 'im_shared_tax_channels';
  $handler->display->display_options['filters']['im_shared_tax_channels']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_channels']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['im_shared_tax_channels']['type'] = 'select';
  $handler->display->display_options['filters']['im_shared_tax_channels']['vocabulary'] = 'channels';
  $handler->display->display_options['filters']['im_shared_tax_channels']['hierarchy'] = 1;
  /* Filter criterion: Apache Solr: im_shared_tax_common */
  $handler->display->display_options['filters']['im_shared_tax_common']['id'] = 'im_shared_tax_common';
  $handler->display->display_options['filters']['im_shared_tax_common']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['im_shared_tax_common']['field'] = 'im_shared_tax_common';
  $handler->display->display_options['filters']['im_shared_tax_common']['value'] = '';
  $handler->display->display_options['filters']['im_shared_tax_common']['group'] = 1;
  $handler->display->display_options['filters']['im_shared_tax_common']['exposed'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['operator_id'] = 'im_shared_tax_common_op';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['label'] = 'KK common';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['operator'] = 'im_shared_tax_common_op';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['identifier'] = 'im_shared_tax_common';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['im_shared_tax_common']['vocabulary'] = 'common';

  /* Display: Shared to Channels */
  $handler = $view->new_display('panel_pane', 'Shared to Channels', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Events shared to channels, with exposed filters to be configured per pane.';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Apache Solr: bs_status */
  $handler->display->display_options['filters']['bs_status']['id'] = 'bs_status';
  $handler->display->display_options['filters']['bs_status']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['bs_status']['field'] = 'bs_status';
  $handler->display->display_options['filters']['bs_status']['value'] = 'true';
  $handler->display->display_options['filters']['bs_status']['group'] = 1;
  $handler->display->display_options['filters']['bs_status']['expose']['operator_id'] = 'bs_status_op';
  $handler->display->display_options['filters']['bs_status']['expose']['label'] = 'bs_status';
  $handler->display->display_options['filters']['bs_status']['expose']['operator'] = 'bs_status_op';
  $handler->display->display_options['filters']['bs_status']['expose']['identifier'] = 'bs_status';
  /* Filter criterion: Apache Solr: entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'solrdate';
  $handler->display->display_options['filters']['entity_type']['group'] = 1;
  /* Filter criterion: Apache Solr: im_field_channels */
  $handler->display->display_options['filters']['im_field_channels']['id'] = 'im_field_channels';
  $handler->display->display_options['filters']['im_field_channels']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['im_field_channels']['field'] = 'im_field_channels';
  $handler->display->display_options['filters']['im_field_channels']['value'] = '*';
  $handler->display->display_options['filters']['im_field_channels']['group'] = 1;
  /* Filter criterion: Apache Solr: ds_field_date */
  $handler->display->display_options['filters']['ds_field_date']['id'] = 'ds_field_date';
  $handler->display->display_options['filters']['ds_field_date']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['ds_field_date']['field'] = 'ds_field_date';
  $handler->display->display_options['filters']['ds_field_date']['operator'] = '>';
  $handler->display->display_options['filters']['ds_field_date']['value']['value'] = 'NOW';
  $handler->display->display_options['filters']['ds_field_date']['group'] = 1;
  /* Filter criterion: Apache Solr: im_shared_tax_event */
  $handler->display->display_options['filters']['im_shared_tax_event']['id'] = 'im_shared_tax_event';
  $handler->display->display_options['filters']['im_shared_tax_event']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['im_shared_tax_event']['field'] = 'im_shared_tax_event';
  $handler->display->display_options['filters']['im_shared_tax_event']['group'] = 1;
  $handler->display->display_options['filters']['im_shared_tax_event']['exposed'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_event']['expose']['operator_id'] = 'im_shared_tax_event_op';
  $handler->display->display_options['filters']['im_shared_tax_event']['expose']['label'] = 'Event type';
  $handler->display->display_options['filters']['im_shared_tax_event']['expose']['operator'] = 'im_shared_tax_event_op';
  $handler->display->display_options['filters']['im_shared_tax_event']['expose']['identifier'] = 'im_shared_tax_event';
  $handler->display->display_options['filters']['im_shared_tax_event']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_event']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['im_shared_tax_event']['type'] = 'select';
  $handler->display->display_options['filters']['im_shared_tax_event']['vocabulary'] = 'event';
  $handler->display->display_options['filters']['im_shared_tax_event']['hierarchy'] = 1;
  /* Filter criterion: Apache Solr: hash */
  $handler->display->display_options['filters']['hash']['id'] = 'hash';
  $handler->display->display_options['filters']['hash']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['hash']['field'] = 'hash';
  $handler->display->display_options['filters']['hash']['value'] = array();
  $handler->display->display_options['filters']['hash']['group'] = 1;
  $handler->display->display_options['filters']['hash']['exposed'] = TRUE;
  $handler->display->display_options['filters']['hash']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['hash']['expose']['label'] = 'Created on sites';
  $handler->display->display_options['filters']['hash']['expose']['operator'] = 'hash_op';
  $handler->display->display_options['filters']['hash']['expose']['identifier'] = 'hash';
  $handler->display->display_options['filters']['hash']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['hash']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['hash']['type'] = 'select';
  /* Filter criterion: Apache Solr: im_shared_tax_channels */
  $handler->display->display_options['filters']['im_shared_tax_channels']['id'] = 'im_shared_tax_channels';
  $handler->display->display_options['filters']['im_shared_tax_channels']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['im_shared_tax_channels']['field'] = 'im_shared_tax_channels';
  $handler->display->display_options['filters']['im_shared_tax_channels']['group'] = 1;
  $handler->display->display_options['filters']['im_shared_tax_channels']['exposed'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_channels']['expose']['operator_id'] = 'im_shared_tax_channels_op';
  $handler->display->display_options['filters']['im_shared_tax_channels']['expose']['label'] = 'Pushed to channels';
  $handler->display->display_options['filters']['im_shared_tax_channels']['expose']['operator'] = 'im_shared_tax_channels_op';
  $handler->display->display_options['filters']['im_shared_tax_channels']['expose']['identifier'] = 'im_shared_tax_channels';
  $handler->display->display_options['filters']['im_shared_tax_channels']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_channels']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['im_shared_tax_channels']['type'] = 'select';
  $handler->display->display_options['filters']['im_shared_tax_channels']['vocabulary'] = 'channels';
  $handler->display->display_options['filters']['im_shared_tax_channels']['hierarchy'] = 1;
  /* Filter criterion: Apache Solr: im_shared_tax_common */
  $handler->display->display_options['filters']['im_shared_tax_common']['id'] = 'im_shared_tax_common';
  $handler->display->display_options['filters']['im_shared_tax_common']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['im_shared_tax_common']['field'] = 'im_shared_tax_common';
  $handler->display->display_options['filters']['im_shared_tax_common']['value'] = '';
  $handler->display->display_options['filters']['im_shared_tax_common']['group'] = 1;
  $handler->display->display_options['filters']['im_shared_tax_common']['exposed'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['operator_id'] = 'im_shared_tax_common_op';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['label'] = 'KK common';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['operator'] = 'im_shared_tax_common_op';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['identifier'] = 'im_shared_tax_common';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['im_shared_tax_common']['vocabulary'] = 'common';
  $handler->display->display_options['pane_category']['name'] = 'Shared content';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['allow']['local_context'] = 'local_context';

  /* Display: Shared to this site */
  $handler = $view->new_display('panel_pane', 'Shared to this site', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Events shared to this site directly, with exposed filters to be configured per pane.';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Apache Solr: bs_status */
  $handler->display->display_options['filters']['bs_status']['id'] = 'bs_status';
  $handler->display->display_options['filters']['bs_status']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['bs_status']['field'] = 'bs_status';
  $handler->display->display_options['filters']['bs_status']['value'] = 'true';
  $handler->display->display_options['filters']['bs_status']['group'] = 1;
  $handler->display->display_options['filters']['bs_status']['expose']['operator_id'] = 'bs_status_op';
  $handler->display->display_options['filters']['bs_status']['expose']['label'] = 'bs_status';
  $handler->display->display_options['filters']['bs_status']['expose']['operator'] = 'bs_status_op';
  $handler->display->display_options['filters']['bs_status']['expose']['identifier'] = 'bs_status';
  /* Filter criterion: Apache Solr: entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'solrdate';
  $handler->display->display_options['filters']['entity_type']['group'] = 1;
  /* Filter criterion: Apache Solr: sm_share_site_field_sites */
  $handler->display->display_options['filters']['sm_share_site_field_sites']['id'] = 'sm_share_site_field_sites';
  $handler->display->display_options['filters']['sm_share_site_field_sites']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['sm_share_site_field_sites']['field'] = 'sm_share_site_field_sites';
  $handler->display->display_options['filters']['sm_share_site_field_sites']['group'] = 1;
  /* Filter criterion: Apache Solr: ds_field_date */
  $handler->display->display_options['filters']['ds_field_date']['id'] = 'ds_field_date';
  $handler->display->display_options['filters']['ds_field_date']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['ds_field_date']['field'] = 'ds_field_date';
  $handler->display->display_options['filters']['ds_field_date']['operator'] = '>';
  $handler->display->display_options['filters']['ds_field_date']['value']['value'] = 'NOW';
  $handler->display->display_options['filters']['ds_field_date']['group'] = 1;
  /* Filter criterion: Apache Solr: im_shared_tax_event */
  $handler->display->display_options['filters']['im_shared_tax_event']['id'] = 'im_shared_tax_event';
  $handler->display->display_options['filters']['im_shared_tax_event']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['im_shared_tax_event']['field'] = 'im_shared_tax_event';
  $handler->display->display_options['filters']['im_shared_tax_event']['group'] = 1;
  $handler->display->display_options['filters']['im_shared_tax_event']['exposed'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_event']['expose']['operator_id'] = 'im_shared_tax_event_op';
  $handler->display->display_options['filters']['im_shared_tax_event']['expose']['label'] = 'Event type';
  $handler->display->display_options['filters']['im_shared_tax_event']['expose']['operator'] = 'im_shared_tax_event_op';
  $handler->display->display_options['filters']['im_shared_tax_event']['expose']['identifier'] = 'im_shared_tax_event';
  $handler->display->display_options['filters']['im_shared_tax_event']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_event']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['im_shared_tax_event']['type'] = 'select';
  $handler->display->display_options['filters']['im_shared_tax_event']['vocabulary'] = 'event';
  $handler->display->display_options['filters']['im_shared_tax_event']['hierarchy'] = 1;
  /* Filter criterion: Apache Solr: hash */
  $handler->display->display_options['filters']['hash']['id'] = 'hash';
  $handler->display->display_options['filters']['hash']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['hash']['field'] = 'hash';
  $handler->display->display_options['filters']['hash']['value'] = array();
  $handler->display->display_options['filters']['hash']['group'] = 1;
  $handler->display->display_options['filters']['hash']['exposed'] = TRUE;
  $handler->display->display_options['filters']['hash']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['hash']['expose']['label'] = 'Created on sites';
  $handler->display->display_options['filters']['hash']['expose']['operator'] = 'hash_op';
  $handler->display->display_options['filters']['hash']['expose']['identifier'] = 'hash';
  $handler->display->display_options['filters']['hash']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['hash']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['hash']['type'] = 'select';
  /* Filter criterion: Apache Solr: im_shared_tax_common */
  $handler->display->display_options['filters']['im_shared_tax_common']['id'] = 'im_shared_tax_common';
  $handler->display->display_options['filters']['im_shared_tax_common']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['im_shared_tax_common']['field'] = 'im_shared_tax_common';
  $handler->display->display_options['filters']['im_shared_tax_common']['value'] = '';
  $handler->display->display_options['filters']['im_shared_tax_common']['group'] = 1;
  $handler->display->display_options['filters']['im_shared_tax_common']['exposed'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['operator_id'] = 'im_shared_tax_common_op';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['label'] = 'KK common';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['operator'] = 'im_shared_tax_common_op';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['identifier'] = 'im_shared_tax_common';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['im_shared_tax_common']['vocabulary'] = 'common';
  $handler->display->display_options['pane_category']['name'] = 'Shared content';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['allow']['local_context'] = 'local_context';

  /* Display: Local content */
  $handler = $view->new_display('panel_pane', 'Local content', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'Local events, with exposed filters to be configured per pane.';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Apache Solr: bs_status */
  $handler->display->display_options['filters']['bs_status']['id'] = 'bs_status';
  $handler->display->display_options['filters']['bs_status']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['bs_status']['field'] = 'bs_status';
  $handler->display->display_options['filters']['bs_status']['value'] = 'true';
  $handler->display->display_options['filters']['bs_status']['group'] = 1;
  $handler->display->display_options['filters']['bs_status']['expose']['operator_id'] = 'bs_status_op';
  $handler->display->display_options['filters']['bs_status']['expose']['label'] = 'bs_status';
  $handler->display->display_options['filters']['bs_status']['expose']['operator'] = 'bs_status_op';
  $handler->display->display_options['filters']['bs_status']['expose']['identifier'] = 'bs_status';
  /* Filter criterion: Apache Solr: entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'solrdate';
  $handler->display->display_options['filters']['entity_type']['group'] = 1;
  /* Filter criterion: Apache Solr: Local content */
  $handler->display->display_options['filters']['local_content']['id'] = 'local_content';
  $handler->display->display_options['filters']['local_content']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['local_content']['field'] = 'local_content';
  $handler->display->display_options['filters']['local_content']['group'] = 1;
  /* Filter criterion: Apache Solr: ds_field_date */
  $handler->display->display_options['filters']['ds_field_date']['id'] = 'ds_field_date';
  $handler->display->display_options['filters']['ds_field_date']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['ds_field_date']['field'] = 'ds_field_date';
  $handler->display->display_options['filters']['ds_field_date']['operator'] = '>';
  $handler->display->display_options['filters']['ds_field_date']['value']['value'] = 'NOW';
  $handler->display->display_options['filters']['ds_field_date']['group'] = 1;
  /* Filter criterion: Apache Solr: im_shared_tax_event */
  $handler->display->display_options['filters']['im_shared_tax_event']['id'] = 'im_shared_tax_event';
  $handler->display->display_options['filters']['im_shared_tax_event']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['im_shared_tax_event']['field'] = 'im_shared_tax_event';
  $handler->display->display_options['filters']['im_shared_tax_event']['group'] = 1;
  $handler->display->display_options['filters']['im_shared_tax_event']['exposed'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_event']['expose']['operator_id'] = 'im_shared_tax_event_op';
  $handler->display->display_options['filters']['im_shared_tax_event']['expose']['label'] = 'Event type';
  $handler->display->display_options['filters']['im_shared_tax_event']['expose']['operator'] = 'im_shared_tax_event_op';
  $handler->display->display_options['filters']['im_shared_tax_event']['expose']['identifier'] = 'im_shared_tax_event';
  $handler->display->display_options['filters']['im_shared_tax_event']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_event']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['im_shared_tax_event']['type'] = 'select';
  $handler->display->display_options['filters']['im_shared_tax_event']['vocabulary'] = 'event';
  $handler->display->display_options['filters']['im_shared_tax_event']['hierarchy'] = 1;
  /* Filter criterion: Apache Solr: im_shared_tax_common */
  $handler->display->display_options['filters']['im_shared_tax_common']['id'] = 'im_shared_tax_common';
  $handler->display->display_options['filters']['im_shared_tax_common']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['im_shared_tax_common']['field'] = 'im_shared_tax_common';
  $handler->display->display_options['filters']['im_shared_tax_common']['value'] = '';
  $handler->display->display_options['filters']['im_shared_tax_common']['group'] = 1;
  $handler->display->display_options['filters']['im_shared_tax_common']['exposed'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['operator_id'] = 'im_shared_tax_common_op';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['label'] = 'KK common';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['operator'] = 'im_shared_tax_common_op';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['identifier'] = 'im_shared_tax_common';
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['im_shared_tax_common']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['im_shared_tax_common']['vocabulary'] = 'common';
  /* Filter criterion: Apache Solr: Local term in field_tags_local */
  $handler->display->display_options['filters']['im_field_tags_local_alt']['id'] = 'im_field_tags_local_alt';
  $handler->display->display_options['filters']['im_field_tags_local_alt']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['im_field_tags_local_alt']['field'] = 'im_field_tags_local_alt';
  $handler->display->display_options['filters']['im_field_tags_local_alt']['group'] = 1;
  $handler->display->display_options['filters']['im_field_tags_local_alt']['exposed'] = TRUE;
  $handler->display->display_options['filters']['im_field_tags_local_alt']['expose']['operator_id'] = 'im_field_tags_local_alt_op';
  $handler->display->display_options['filters']['im_field_tags_local_alt']['expose']['label'] = 'KK local';
  $handler->display->display_options['filters']['im_field_tags_local_alt']['expose']['operator'] = 'im_field_tags_local_alt_op';
  $handler->display->display_options['filters']['im_field_tags_local_alt']['expose']['identifier'] = 'im_field_tags_local_alt';
  $handler->display->display_options['filters']['im_field_tags_local_alt']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['im_field_tags_local_alt']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['im_field_tags_local_alt']['type'] = 'select';
  $handler->display->display_options['filters']['im_field_tags_local_alt']['vocabulary'] = 'tags_local';
  $handler->display->display_options['filters']['im_field_tags_local_alt']['hierarchy'] = 1;
  /* Filter criterion: Apache Solr: Local term in field_tags_open */
  $handler->display->display_options['filters']['im_field_tags_open_alt']['id'] = 'im_field_tags_open_alt';
  $handler->display->display_options['filters']['im_field_tags_open_alt']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['im_field_tags_open_alt']['field'] = 'im_field_tags_open_alt';
  $handler->display->display_options['filters']['im_field_tags_open_alt']['group'] = 1;
  $handler->display->display_options['filters']['im_field_tags_open_alt']['exposed'] = TRUE;
  $handler->display->display_options['filters']['im_field_tags_open_alt']['expose']['operator_id'] = 'im_field_tags_open_alt_op';
  $handler->display->display_options['filters']['im_field_tags_open_alt']['expose']['label'] = 'KK open';
  $handler->display->display_options['filters']['im_field_tags_open_alt']['expose']['operator'] = 'im_field_tags_open_alt_op';
  $handler->display->display_options['filters']['im_field_tags_open_alt']['expose']['identifier'] = 'im_field_tags_open_alt';
  $handler->display->display_options['filters']['im_field_tags_open_alt']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['im_field_tags_open_alt']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['im_field_tags_open_alt']['type'] = 'select';
  $handler->display->display_options['filters']['im_field_tags_open_alt']['vocabulary'] = 'tags_open';
  $handler->display->display_options['filters']['im_field_tags_open_alt']['hierarchy'] = 1;
  $handler->display->display_options['pane_category']['name'] = 'Local content';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['allow']['local_context'] = 0;
  $export['events_list'] = $view;

  return $export;
}
