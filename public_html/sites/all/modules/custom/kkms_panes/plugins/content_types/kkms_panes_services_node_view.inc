<?php
//kkms_panes_services_node_view

$plugin = array(
  'single' => TRUE,
  'title' => t('Services node view'),
  'description' => t('Render a remote node via Services module'),
  'category' => t('KK panes'),
  'edit form' => 'kkms_panes_services_node_view_edit_form',
  'render callback' => 'kkms_panes_services_node_view_pane_render',
  'defaults' => array(),
  'all contexts' => TRUE,
);


/**
 * An edit form for the pane's settings.
 */
function kkms_panes_services_node_view_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
 
  return $form;
}

/**
 * Submit function, note anything in the formstate[conf] automatically gets saved
 */
function kkms_panes_services_node_view_edit_form_submit(&$form, &$form_state) {
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
function kkms_panes_services_node_view_pane_render($subtype, $conf, $args, $contexts) {
   $data = _kkms_panes_services_source_context($subtype, $conf, $args, $contexts);
   if(empty($data)) {
     return;
   }

  $node = $data['node'];
  $nid = $data['nid'];
  $path_array = $data['path_array'];
  if(implode('/', $path_array) != $data['alias']) {
    drupal_goto('sc' . '/' . $data['alias'] .'/'. $data['site_hash'] .'-' . $nid, array(), 301);
  }

  drupal_set_title($node['node']['title']);
  $block->title = NULL;

  // Add attached JS/CSS.
  $block->content['#attached'] = $node['dependencies']['attachments'];
  // Add JS settings.
  drupal_add_js($node['dependencies']['settings'], 'setting');
  $block->content['node_view']['#markup'] = $node['node_view'];

  return $block;
}
