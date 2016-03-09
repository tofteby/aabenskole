<?php
/**
 * @file
 * Overriden field plugin for apachesolr URL - allow rewriting of url to point to local context
 */
class apachesolr_channels_url_field extends apachesolr_views_handler_field {
  var $local_context = FALSE;

  function init(&$view, &$options) {
    parent::init($view, $options);
    if ($this->options['channels_context_url'] && $this->view->display_handler->get_option('is_local_context')) {
      $this->local_context = TRUE;
    }
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['channels_context_url'] = array(
      '#type' => 'checkbox',
      '#title' => t('Is channels context URL'),
      '#description' => t('When the view results are shown in local context, the URL will be overriden'),
      '#default_value' => !empty($this->options['channels_context_url']),
    );
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['channels_context_url'] = array('default' => FALSE, 'bool' => TRUE);
    return $options;
  }

  function get_value($values, $field = NULL) {
    $alias = isset($field) ? $this->aliases[$field] : $this->field_alias;
    if ($this->local_context && isset($values->{$alias}, $values->site, $values->hash, $values->entity_id)) {
      if ($values->{$alias} && $values->site && strpos($values->{$alias}, $values->site) === 0) {
        $alias = substr($values->{$alias}, strlen($values->site));
        $alias = trim($alias, '/');
        return "sc/$alias/$values->hash-$values->entity_id";
      }
    }
    return parent::get_value($values, $field);
  }
}
