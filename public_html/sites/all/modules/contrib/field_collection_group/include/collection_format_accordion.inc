<?php

class collection_format_accordion extends collection_format {
  protected $group_class = 'group_accordion';

  function formatter_info() {
    return array(
      'label' => t('Collections grouped in Accordion'),
    ) + parent::formatter_info();
  }
}
