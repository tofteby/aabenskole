<?php

class group_horizontal extends group_base {
  protected $value_format = 'htab';
  protected $wrapper_format = 'htabs';

  function wrapper_group() {
    $group = parent::wrapper_group();
    $group->label = 'Horizontal tabs';
    return $group;
  }
}
