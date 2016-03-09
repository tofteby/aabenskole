<?php

class group_base {
  protected $value_format = NULL;
  protected $wrapper_format = NULL;
  protected $settings;
  protected $weight;

  function __construct(array $settings = array()) {
    $this->settings = $settings;
  }

  protected function base_group() {
    $group = new stdClass();
    $group->weight = 0;
    $group->group_name = 'fcg';
    $group->collapsible = TRUE;
    $group->collapsed = TRUE;
    $group->format_settings['instance_settings']['id'] = drupal_html_id('fcg');
    return $group;
  }

  protected function value_group() {
    $group = $this->base_group();
    $this->weight++;
    $group->format_type = $this->value_format;
    $group->group_name = "fcg$this->weight";
    $group->weight = $this->weight;
    $group->label = '';
    $group->parent_name = 'fcg';
    return $group;
  }

  protected function wrapper_group() {
    $group = $this->base_group();
    $group->format_type = $this->wrapper_format;
    return $group;
  }

  function group($elements) {
    $element = array();
    $this->weight = 0;
    if ($elements) {
      // Temporary fake some properties to suppress errors from field_group_pre_render().
      $element['#view_mode'] = $element['#entity_type'] = $element['#bundle'] = 'fcg';
      if ($this->value_format) {
        foreach ($elements as $tab) {
          $group = $this->value_group();
          $this->value_pre_render($tab, $group, $element);
          $element[0]['tabs'][] = $tab;
        }
      }
      if ($this->wrapper_format) {
        $group = $this->wrapper_group();
        $this->wrapper_pre_render($element[0], $group, $element);
      }
      // Cleanup the fake properties we needed for calling field_group_pre_render().
      unset($element['#view_mode'], $element['#entity_type'], $element['#bundle']);
      $this->add_attached($element['#attached']);
    }
    return $element;
  }

  function ensure_title(&$tab) {
    $tab += array(
      '#title' => t('Group @number', array('@number' => $this->weight)),
    );
  }

  function value_pre_render(&$tab, stdClass $group, &$element) {
    $this->ensure_title($tab);
    // This is where field_group module does its thing.
    field_group_pre_render($tab, $group, $element);
  }

  function wrapper_pre_render(&$tab, stdClass $group, &$element) {
    // This is where field_group module does its thing.
    field_group_pre_render($tab, $group, $element);
  }

  function add_attached(&$attached) {
    // Attach some css/js to collection render array.
  }
}
