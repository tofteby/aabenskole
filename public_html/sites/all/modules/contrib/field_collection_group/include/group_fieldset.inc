<?php

class group_fieldset extends group_base {
  protected $value_format = 'fieldset';

  function value_group() {
    $group = parent::value_group();
    if (!empty($this->settings['collapsed'])) {
      $group->format_settings['formatter'] = 'collapsed';
    }
    return $group;
  }

  function ensure_title(&$tab) {
    // No need to ensure title for fieldsets.
  }
}
