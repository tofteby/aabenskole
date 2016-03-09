<?php

class collection_format_horizontal extends collection_format {
  protected $group_class = 'group_horizontal';
  
  function formatter_info() {
    return array(
      'label' => t('Collections grouped in Horizontal tabs'),
    ) + parent::formatter_info();
  }
}
