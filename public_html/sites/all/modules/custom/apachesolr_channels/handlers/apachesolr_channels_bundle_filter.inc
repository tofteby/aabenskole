<?php
/**
 * @file
 * Multiple bundles filter handler
 * query() is mostly copied from "apachesolr_views_handler_filter",
 * because non-apachesolr filter is being inherited.
 */
class apachesolr_channels_bundle_filter extends views_handler_filter_node_type {
  function query() {
    if (!empty($this->value)) {
      if (is_array($this->value)) {
        $this->value = implode(' OR ', $this->value);
      }
      $this->query->add_where($this->options['group'], "$this->real_field", $this->value, $this->operator);
    }
  }

  function admin_summary() {
    if ($this->is_a_group()) {
      return t('grouped');
    }
    if (!empty($this->options['exposed'])) {
      return t('exposed');
    }

    $this->get_value_options();

    if (!is_array($this->value)) {
      return;
    }

    $values = '';
    foreach ($this->value as $value) {
      if ($values !== '') {
        $values .= ', ';
      }
      if (drupal_strlen($values) > 16) {
        $values .= '...';
        break;
      }
      if (isset($this->value_options[$value])) {
        $values .= check_plain($this->value_options[$value]);
      }
    }

    return 'in' . (($values !== '') ? ' ' . $values : '');
  }

  function get_value_options() {
    if (!isset($this->value_options)) {
      $info = entity_get_info($this->options['entity_type']);
      $types = $info['bundles'];
      $this->value_title = t('@entity types', array('@entity' => $info['label']));

      $options = array();
      foreach ($types as $type => $info) {
        $options[$type] = t($info['label']);
      }
      asort($options);
      $this->value_options = $options;
    }
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['entity_type'] = array('default' => 'node');
    return $options;
  }

  function has_extra_options() { return TRUE; }

  function extra_options_form(&$form, &$form_state) {
    $info_bundles = field_info_bundles();
    $bundles = array_keys($info_bundles);
    $options = array_combine($bundles, $bundles);
    $form['entity_type'] = array(
      '#type' => 'radios',
      '#title' => t('Entity type'),
      '#options' => $options,
      '#default_value' => $this->options['entity_type'],
    );
  }

  function value_form(&$form, &$form_state) {
    parent::value_form($form, $form_state);
  }
}


