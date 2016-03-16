<?php

/**
 * Implements hook_css_alter().
 * Unset unneeded module and library css.
 */

function kos_theme_form_kos_search_frontpage_events_search_form_alter(&$form, &$form_state, $form_id) {
  $form['keyword']['#field_suffix'] = '<span class="magnifier"></span>';
  $form['submit']['#prefix'] = '<div class="arrow-box">';
  $form['submit']['#suffix'] = '<span class="arrow-search ic-arrow-right"></span></div>';
}


/**
 * Implements template_preprocess_page.
 * Add variables to page.tpl.php.
 */
function kos_theme_preprocess_page(&$vars, $hook) {
  if (isset($vars['login_link'])) unset($vars['login_link']);
}


function kos_theme_preprocess_panels_pane(&$vars) {
  $pane = $vars['pane'];

  if ($pane->type == 'entity_field' && $pane->configuration['formatter'] == 'taxonomy_term_reference_link'
  && $vars['content']['#object']->type == 'school_event') {
    $vars['theme_hook_suggestions'][] = 'panels_pane__entity_field__taxonomy';
  }
}
