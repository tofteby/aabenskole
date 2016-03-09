<?php
/**
 * @file
 * kos_variables.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function kos_variables_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['language']['da'] = array(
  'chosen_no_results_text' => 'Ingen resultater kamp',
  'chosen_placeholder_text_multiple' => 'Vælg nogle muligheder',
  'chosen_placeholder_text_single' => 'Vælg en mulighed',
);
  $realm_variables['language']['en'] = array(
  'chosen_no_results_text' => 'No results match',
  'chosen_placeholder_text_multiple' => 'Choose some options',
  'chosen_placeholder_text_single' => 'Choose an option',
  'site_name' => 'Aabenskole',
  'site_slogan' => '',
);

return $realm_variables;
}
