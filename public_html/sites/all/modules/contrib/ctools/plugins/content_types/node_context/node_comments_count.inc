<?php

if (module_exists('comment')) {
  /**
   * Plugins are described by creating a $plugin array which will be used
   * by the system that includes this file.
   */
  $plugin = array(
    'single' => TRUE,
    'title' => t('Node comment count'),
    'icon' => 'icon_node.png',
    'description' => t('The comment count of the referenced node.'),
    'required context' => new ctools_context_required(t('Node'), 'node'),
    'category' => t('Node'),
    'defaults' => array(
      'label' => '@comments_count comments',
    ),
  );
}

function ctools_node_comments_count_content_type_render($subtype, $conf, $panel_args, $context) {
  $node = isset($context->data) ? clone($context->data) : NULL;
  $block = new stdClass();
  $block->module = 'comments';
  $block->delta  = $node->nid;

  $block->title = t('Comment count');
  if (empty($node)) {
    $block->content = t('Node comment count go here.');
  }
  else if (isset($node->comment_count)) {
    $block->content = t($conf['label'], array('@comments_count' => $node->comment_count));
  }

  return $block;
}

function ctools_node_comments_count_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $form['label'] = array(
    '#type' => 'textfield',
    '#title' => t('Text to display'),
    '#default_value' => $conf['label'],
    '#description' => t("Use @comments_count to get the comment count"),
    '#weight' => 1,
  );
  return $form;
}

function ctools_node_comments_count_content_type_edit_form_submit($form, &$form_state) {
  // Copy everything from our defaults.
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}

function ctools_node_comments_count_content_type_admin_title($subtype, $conf, $context) {
  return t('"@s" comment count', array('@s' => $context->identifier));
}