<?php

class collection_format_fieldset extends collection_format {
  protected $group_class = 'group_fieldset';

  function formatter_info() {
    $info = array(
      'label' => t('Collections grouped in Fieldsets'),
    ) + parent::formatter_info();
    $info['settings']['collapsed'] = FALSE;
    return $info;
  }

  function formatter_settings($field, $settings) {
    $element = parent::formatter_settings($field, $settings);
    $element['collapsed'] = array(
      '#type' => 'checkbox',
      '#title' => t('Collapsed'),
      '#default_value' => $settings['collapsed'],
    );
    return $element;
  }

  function settings_summary($settings) {
    $summary = parent::settings_summary($settings);
    if ($settings['collapsed']) {
      $summary[] = t('Fieldsets: collapsed', array('@field' => $settings['heading']));
    }
    return $summary;
  }
}
