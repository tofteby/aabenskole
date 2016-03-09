<?php

class collection_format_vertical extends collection_format {
  protected $group_class = 'group_vertical';

  function formatter_info() {
    return array(
      'label' => t('Collections grouped in Vertical tabs'),
    ) + parent::formatter_info();
  }
}
