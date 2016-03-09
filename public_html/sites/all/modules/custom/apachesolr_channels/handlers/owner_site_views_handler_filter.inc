<?php
/**
 * @file
 * Created on site filter handler
 * Overriden hash filter
 */
class owner_site_views_handler_filter extends apachesolr_views_handler_filter {
  // Stores the exposed input for this filter.
  var $validated_exposed_input = NULL;

  function has_extra_options() { return TRUE; }

  function extra_options_form(&$form, &$form_state) {
    $form['type'] = array(
      '#type' => 'radios',
      '#title' => t('Selection type'),
      '#options' => array('select' => t('Dropdown'), 'textfield' => t('Autocomplete')),
      '#default_value' => $this->options['type'],
    );
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['type'] = array('default' => 'textfield');
    return $options;
  }

  function value_form(&$form, &$form_state) {
    if ($this->options['type'] == 'textfield') {
      // Value form - use autocomplete hash
      $this->get_value_options();
      $sites = $this->value_options;
      $defaults = array();
      foreach ($this->value as $hash) { 
        $site = !empty($sites[$hash])? $sites[$hash]: 'Missing site'; 
        $defaults[] = $site . " [sid: $hash]";
      }
      $form['value'] = array(
        '#type' => 'textfield',
        '#title' => t('Sites'),
        '#default_value' => implode(', ', $defaults),
        '#autocomplete_path' => 'multiple-hash/autocomplete',
      );
    }
    else {
      // Value form - use select hashes/sites
      $this->get_value_options();
      $options = $this->value_options;
      $form['value'] = array(
        '#type' => 'select',
        '#title' => t('Sites'),
        '#multiple' => TRUE,
        '#options' => $options,
        '#size' => min(9, count($options)),
        '#default_value' => $this->value,
      );
    }
  }

  function value_validate($form, &$form_state) {
    // We only validate if they've chosen the text field style.
    if ($this->options['type'] != 'textfield') {
      return;
    }

    $value = $form_state['values']['options']['value'];
    preg_match_all('/\[\s*sid*:\s*(\w+)\s*\]/', $value, $matches);

    $form_state['values']['options']['value'] = array();
    if (!empty($matches[1])) {
      $form_state['values']['options']['value'] = $matches[1];
    }
  }

  function accept_exposed_input($input) {
    if (empty($this->options['exposed'])) {
      return TRUE;
    }

    if ($this->options['type'] == 'textfield') {
      if (isset($this->validated_exposed_input)) {
        $this->value = $this->validated_exposed_input;
        return TRUE;
      }
    }

    return parent::accept_exposed_input($input);
  }

  function exposed_validate(&$form, &$form_state) {
    if (empty($this->options['exposed']) || empty($this->options['expose']['identifier'])) {
      return;
    }

    if ($this->options['type'] != 'textfield') {
      return;
    }

    $identifier = $this->options['expose']['identifier'];
    $value = $form_state['values'][$identifier];
    preg_match_all('/\[\s*sid*:\s*(\w+)\s*\]/', $value, $matches);

    $this->validated_exposed_input = array();
    if (!empty($matches[1])) {
      $this->validated_exposed_input = $matches[1];
    }
  }

  function get_value_options() {
    if (isset($this->value_options)) {
      return;
    }
    $this->value_options = apachesolr_multisitesearch_map_hash();
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
}
