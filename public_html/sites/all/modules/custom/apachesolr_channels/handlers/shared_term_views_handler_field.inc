<?php
/**
 * @file
 * Views field handler for shared terms. Allows to convert them to local terms.
 */
class shared_term_views_handler_field extends apachesolr_channels_html_field {
  var $tems_mapped = array();

  function get_value($values, $field = NULL) {
    $alias = isset($field) ? $this->aliases[$field] : $this->field_alias;
    if (isset($values->{$alias}) && is_array($values->{$alias})) {
      $values->{$alias} = $this->map_term_values($values->{$alias});
    }
    return parent::get_value($values, $field);
  }

  function map_term_values($values) {
    $mapped = array();
    foreach ($values as $value) {
      if (isset($this->tems_mapped[$value])) {
        switch ($this->options['term_format']) {
          case 'server_tid':
          default:
            $mapped[] = $value;
            break;
          case 'tid':
            $mapped[] = $this->tems_mapped[$value]['tid'];
            break;
          case 'name':
            $mapped[] = $this->tems_mapped[$value]['name'];
            break;
          case 'link':
            $mapped[] = l($this->tems_mapped[$value]['name'], 'taxonomy/term/' . $this->tems_mapped[$value]['tid']);
            break;
        }
      }
    }
    return $mapped;
  }

  function pre_render(&$values) {
    $crtids = array();
    foreach ($values as $result) {
      if (!empty($result->{$this->field_alias})) {
        $crtids = array_merge($crtids, $result->{$this->field_alias});
      }
    }

    if (!$crtids) {
      return;
    }

    $query = db_select('kk_client_request_term', 'ct');
    $query->innerJoin('taxonomy_term_data', 'td', 'td.tid = ct.client_tid');
    $query->fields('ct', array('server_tid'));
    $query->fields('td', array('tid', 'name'));
    $query->condition('ct.server_tid', $crtids);
    $query->addTag('term_access');
    $result = $query->execute();

    foreach ($result as $term) {
      $this->tems_mapped[$term->server_tid]['name'] = check_plain($term->name);
      $this->tems_mapped[$term->server_tid]['tid'] = $term->tid;
      $this->tems_mapped[$term->server_tid]['server_tid'] = $term->server_tid;
    }
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['term_format'] = array(
      '#type' => 'radios',
      '#title' => t('Taxonomy term format'),
      '#options' => array(
        'server_tid' => 'CTAX Term ID',
        'tid' => 'Term ID',
        'name' => 'Term name',
        'link' => 'Term name as link',
      ),
      '#default_value' => $this->options['term_format'],
    );
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['term_format'] = array('default' => 'server_tid');
    return $options;
  }
}
