<?php
/**
 * @file
 * "This site" views filter handler.
 * Used for two filters:
 *  - Created on site - check whether created on this site
 *  - Pushed to site - check whether pushed to this site
 */
class this_site_views_handler_filter extends apachesolr_views_handler_filter_string {
  function operators() {
    // Equality for the masses
    $equal = array('=' => 'equal');
    $operators = parent::operators();
    $operators = array_intersect_key($operators, $equal);
    return $operators;
  }

  function value_form(&$form, &$form_state) {
    parent::value_form($form, $form_state);

    // Override the value form - to use exatly our hash
    $options = array();
    $form['value'] = array(
      '#type' => 'radios',
      '#title' => t('Value'),
      '#size' => 30,
      '#default_value' => 'This site',
      '#options' => array('This site' => 'This site'),
    );
  }

  function option_definition() {
    $options = parent::option_definition();
    // This is mostly for clarity and to prevent unwanted regression
    // Everything here is for a reason.
    $options['value'] = array('default' => 'This site');
    return $options;
  }

  /**
   * Override the op_equal - hardcode our hash
   *
   * @param type $field
   */
  public function op_equal($field) {
    // Alter the equal check to work against the current site hash (always)
    $this->value = apachesolr_site_hash();
    parent::op_equal($field);
  }
}
