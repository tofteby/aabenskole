<?php
/**
 * @see views_handler_filter_term_node_tid.inc
 * query() and trim_value() are taken from "apachesolr_views_handler_filter",
 * because we can't do multiple inheritance, and there is no good (safe) way to
 * abstract away this code duplication.
 * Tested on apachesolr_views @ 36f14d15efc01dc528a224148ae15d576b7e0901
 * Tested on views 3.5
 *
 * Document any TODOs and keep up to date
 */

class shared_term_views_handler_filter extends views_handler_filter_term_node_tid {
  /**
   * Apachesolr query
   */
  function query() {
    $this->trim_value();

    if (!empty($this->value)) {
      if (is_array($this->value)) {
        $this->value = implode(' OR ', $this->value);
      }
      $this->query->add_where($this->options['group'], "$this->real_field", $this->value, $this->operator);
    }
  }

  /**
   * Trim filter value.
   */
  function trim_value() {
    // Trim both array or scalar value.
    if (is_array($this->value)) {
      array_walk($this->value, 'apachesolr_views_handler_filter::trim');
      $this->value = array_filter($this->value);
    }
    else {
      $this->value = trim($this->value);
    }
  }

  function init(&$view, &$options) {
    parent::init($view, $options);
    if (!empty($this->definition['vocabulary'])) {
      $this->options['vocabulary'] = $this->definition['vocabulary'];
    }

    // get vocabulary from field name
    $match = 'im_shared_tax_';
    if (strpos($this->field, $match) === 0) {
      $vocabulary_machine_name = substr($this->field, strlen($match));
      $this->options['vocabulary'] = $vocabulary_machine_name;
    }
  }

  function operators() {
    // Solr queries don't support operators, so overriding operator options
    $operators = parent::operators();
    $operators = array('or' => $operators['or']);
    return $operators;
  }

  function extra_options_form(&$form, &$form_state) {
    $form['type'] = array(
      '#type' => 'radios',
      '#title' => t('Selection type'),
      '#options' => array('select' => t('Dropdown'), 'textfield' => t('Autocomplete')),
      '#default_value' => $this->options['type'],
    );

    $form['hierarchy'] = array(
      '#type' => 'checkbox',
      '#title' => t('Show hierarchy in dropdown'),
      '#default_value' => !empty($this->options['hierarchy']),
      '#dependency' => array('radio:options[type]' => array('select')),
    );
  }

  /**
   * Provide a simple textfield for equality
   */
  function value_form(&$form, &$form_state) {
    $vocabulary = taxonomy_vocabulary_machine_name_load($this->options['vocabulary']);
    if (empty($vocabulary) && $this->options['limit']) {
      $form['markup'] = array(
        '#markup' => '<div class="form-item">' . t('An invalid vocabulary is selected. Please change it in the options.') . '</div>',
      );
      return;
    }

    if ($this->options['type'] == 'textfield') {
      $default = '';
      if ($this->value) {
        $query = db_select('taxonomy_term_data', 'td');
        $query->innerJoin('kk_client_request_term', 'ct', 'td.tid = ct.client_tid');
        $query->fields('td');
        $query->condition('ct.server_tid', $this->value);
        $result = $query->execute();
        foreach ($result as $term) {
          if ($default) {
            $default .= ', ';
          }
          $default .= $term->name;
        }
      }
      $form['value'] = array(
        '#type' => 'textfield',
        '#title' => t($this->definition['title']),
        '#default_value' => $default,
      );

      // Autocomplete
      if ($this->options['limit']) {
        $form['value']['#autocomplete_path'] = 'admin/views/ajax/autocomplete/taxonomy/' . $vocabulary->vid;
      }
    }
    else {
      if (!empty($this->options['hierarchy']) && $this->options['limit']) {
        $tree = taxonomy_get_tree($vocabulary->vid);
        $options = array();

        if ($tree) {
          foreach ($tree as $term) {
            if (!$server_tid = kk_client_request_get_server_tid($term->tid)) {
              continue;
            }
            $choice = new stdClass();
            $choice->option = array($server_tid => str_repeat('-', $term->depth) . $term->name);
            $options[] = $choice;
          }
        }
      }
      else {
        $options = array();
        $query = db_select('taxonomy_term_data', 'td');
        $query->innerJoin('taxonomy_vocabulary', 'tv', 'td.vid = tv.vid');
        $query->innerJoin('kk_client_request_term', 'ct', 'td.tid = ct.client_tid');
        $query->fields('td');
        $query->fields('ct', array('server_tid'));
        $query->orderby('tv.weight');
        $query->orderby('tv.name');
        $query->orderby('td.weight');
        $query->orderby('td.name');
        $query->addTag('term_access');
        if ($this->options['limit']) {
          $query->condition('tv.machine_name', $vocabulary->machine_name);
        }
        $result = $query->execute();
        foreach ($result as $term) {
          $options[$term->server_tid] = $term->name;
        }
      }

      $default_value = (array) $this->value;

      if (!empty($form_state['exposed'])) {
        $identifier = $this->options['expose']['identifier'];

        if (!empty($this->options['expose']['reduce'])) {
          $options = $this->reduce_value_options($options);

          if (!empty($this->options['expose']['multiple']) && empty($this->options['expose']['required'])) {
            $default_value = array();
          }
        }

        if (empty($this->options['expose']['multiple'])) {
          if (empty($this->options['expose']['required']) && (empty($default_value) || !empty($this->options['expose']['reduce']))) {
            $default_value = 'All';
          }
          elseif (empty($default_value)) {
            $keys = array_keys($options);
            $default_value = array_shift($keys);
          }
          // Due to #1464174 there is a chance that array('') was saved in the admin ui.
          // Let's choose a safe default value.
          elseif ($default_value == array('')) {
            $default_value = 'All';
          }
          else {
            $copy = $default_value;
            $default_value = array_shift($copy);
          }
        }
      }
      $form['value'] = array(
        '#type' => 'select',
        '#title' => $this->options['limit'] ? t('Select terms from vocabulary @voc', array('@voc' => $vocabulary->name)) : t('Select terms'),
        '#multiple' => TRUE,
        '#options' => $options,
        '#size' => min(9, count($options)),
        '#default_value' => $default_value,
      );

      if (!empty($form_state['exposed']) && isset($identifier) && !isset($form_state['input'][$identifier])) {
        $form_state['input'][$identifier] = $default_value;
      }
    }
  }

  function value_validate($form, &$form_state) {
    // We only validate if they've chosen the text field style.
    if ($this->options['type'] != 'textfield') {
      return;
    }

    $values = drupal_explode_tags($form_state['values']['options']['value']);
    $tids = $this->validate_term_strings($form['value'], $values);

    if ($tids) {
      $form_state['values']['options']['value'] = $tids;
    }
  }

  function exposed_validate(&$form, &$form_state) {
    if (empty($this->options['exposed']) || empty($this->options['expose']['identifier'])) {
      return;
    }

    $identifier = $this->options['expose']['identifier'];

    // We only validate if they've chosen the text field style.
    if ($this->options['type'] != 'textfield') {
      if ($form_state['values'][$identifier] != 'All')  {
        $this->validated_exposed_input = (array) $form_state['values'][$identifier];
      }
      return;
    }

    $values = drupal_explode_tags($form_state['values'][$identifier]);

    $tids = $this->validate_term_strings($form[$identifier], $values);
    if ($tids) {
      $this->validated_exposed_input = $tids;
    }
  }

  /**
   * Validate the user string. Since this can come from either the form
   * or the exposed filter, this is abstracted out a bit so it can
   * handle the multiple input sources.
   *
   * @param $form
   *   The form which is used, either the views ui or the exposed filters.
   * @param $values
   *   The taxonomy names which will be converted to tids.
   *
   * @return array
   *   The taxonomy ids fo all validated terms.
   */
  function validate_term_strings(&$form, $values) {
    if (empty($values)) {
      return array();
    }

    $tids = array();
    $names = array();
    $missing = array();
    foreach ($values as $value) {
      $missing[strtolower($value)] = TRUE;
      $names[] = $value;
    }

    if (!$names) {
      return FALSE;
    }

    $query = db_select('taxonomy_term_data', 'td');
    $query->innerJoin('taxonomy_vocabulary', 'tv', 'td.vid = tv.vid');
    $query->innerJoin('kk_client_request_term', 'ct', 'td.tid = ct.client_tid');
    $query->fields('td');
    $query->fields('ct', array('server_tid'));
    $query->condition('td.name', $names);
    $query->condition('tv.machine_name', $this->options['vocabulary']);
    $query->addTag('term_access');
    $result = $query->execute();
    foreach ($result as $term) {
      unset($missing[strtolower($term->name)]);
      $tids[] = $term->server_tid;
    }

    if ($missing && !empty($this->options['error_message'])) {
      form_error($form, format_plural(count($missing), 'Unable to find term: @terms', 'Unable to find terms: @terms', array('@terms' => implode(', ', array_keys($missing)))));
    }
    elseif ($missing && empty($this->options['error_message'])) {
      $tids = array(0);
    }

    return $tids;
  }

  function admin_summary() {
    // set up $this->value_options for the parent summary
    $this->value_options = array();

    if ($this->value) {
      $this->value = array_filter($this->value);
      $query = db_select('taxonomy_term_data', 'td');
      $query->innerJoin('kk_client_request_term', 'ct', 'td.tid = ct.client_tid');
      $query->fields('td');
      $query->fields('ct', array('server_tid'));
      $query->condition('ct.server_tid', $this->value);
      $result = $query->execute();
      foreach ($result as $term) {
        $this->value_options[$term->server_tid] = $term->name;
      }
    }
    // bypass views_handler_filter_term_node_tid implementation
    return views_handler_filter_many_to_one::admin_summary();
  }
}
