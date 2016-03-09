<?php
/**
 * @file
 * configuration_newsletter.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function configuration_newsletter_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'newsletter_pending_emails';
  $view->description = 'List of the mails pending in the send queue for the newsletter.';
  $view->tag = 'default';
  $view->base_table = 'simplenews_mail_spool';
  $view->human_name = 'newsletter pending emails';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'pending emails';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'node_types';
  $handler->display->display_options['access']['node_types'] = array(
    'simplenews' => 'simplenews',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Simplenews spool: Ms ID */
  $handler->display->display_options['fields']['msid']['id'] = 'msid';
  $handler->display->display_options['fields']['msid']['table'] = 'simplenews_mail_spool';
  $handler->display->display_options['fields']['msid']['field'] = 'msid';
  /* Field: Simplenews spool: Sent status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'simplenews_mail_spool';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  /* Field: Simplenews spool: Subscriber */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'simplenews_mail_spool';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Contextual filter: Simplenews spool: Node ID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'simplenews_mail_spool';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/newsletter_pending';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Pending newsletters';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['newsletter_pending_emails'] = $view;

  return $export;
}
