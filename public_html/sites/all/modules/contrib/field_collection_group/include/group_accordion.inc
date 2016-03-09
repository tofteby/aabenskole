<?php

class group_accordion extends group_base {
  protected $value_format = 'accordion_item';
  protected $wrapper_format = 'accordion';

  function wrapper_group() {
    $group = parent::wrapper_group();
    $group->format_settings['instance_settings']['speed'] = 'fast';
    $group->format_settings['instance_settings']['effect'] = 'bounceslide';
    return $group;
  }

  function value_pre_render(&$tab, stdClass $group, &$element) {
    $this->ensure_title($tab);
    $tab += array(
      '#type' => 'markup',
      '#prefix' => '<h3 class="field-group-format-toggler accordion_item"><a href="#">' . $tab['#title'] . '</a></h3>
      <div class="field-group-format-wrapper">',
      '#suffix' => '</div>',
    );
  }

  function add_attached(&$attached) {
    $attached['js'][] = drupal_get_path('module', 'field_group') . '/field_group.js';
    $attached['css'][] = drupal_get_path('module', 'field_group') . '/field_group.css';
  }
}
