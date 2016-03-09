<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Services node view source'),
  'description' => t('Show source of a rendered remote node via Services module'),
  'category' => t('KK panes'),
  'edit form' => 'kkms_panes_services_source_edit_form',
  'render callback' => 'kkms_panes_services_source_pane_render',
  'defaults' => array(),
  'all contexts' => TRUE,
);


/**
 * An edit form for the pane's settings.
 */
function kkms_panes_services_source_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
 
  return $form;
}

/**
 * Submit function, note anything in the formstate[conf] automatically gets saved
 */
function kkms_panes_services_source_edit_form_submit(&$form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
} 


/**
 * Run-time rendering of the body of the block (content type)
 * See ctools_plugin_examples for more advanced info
 */
function kkms_panes_services_source_pane_render($subtype, $conf, $args, $contexts) {
  if(!user_access('kkms_panes_permission_access_source')) {
    return;
  }
   $data = _kkms_panes_services_source_context($subtype, $conf, $args, $contexts);
   if(empty($data)) {
     return;
   }
  $node = $data['node'];

  $block->title = NULL;
  $block->content = t('Content source: !url', array('!url' => l($node['node']['path'], $node['node']['path'])));

  return $block;
}

