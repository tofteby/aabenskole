<?php
/**
 * @file
 * Field API related code for Apachesolr channels module
 */

/**
 * Implements hook_field_info().
 */
function apachesolr_channels_field_info() {
  return array(
    'shared_site' => array(
      'label' => t('Shared site'),
      'description' => t('This field stores information about the sites this content is shared to.'),
      'default_widget' => 'options_select',
      'default_formatter' => 'site_hash',
    ),
  );
}

/**
 * Implements hook_field_is_empty().
 */
function apachesolr_channels_field_is_empty($item, $field) {
  if (!isset($item['site']) || $item['site'] === '') {
    return TRUE;
  }
  return FALSE;
}

/**
 * Implements hook_field_widget_info_alter().
 */
function apachesolr_channels_field_widget_info_alter(&$info) {
  $info['options_select']['field types'][] = 'shared_site';
  $info['options_buttons']['field types'][] = 'shared_site';
}

/**
 * Implements hook_field_formatter_info().
 */
function apachesolr_channels_field_formatter_info() {
  return array(
    'site_hash' => array(
      'label' => t('Site hash'),
      'field types' => array('shared_site'),
    ),
    'site_name' => array(
      'label' => t('Site name'),
      'field types' => array('shared_site'),
    ),
  );
}

/**
 * Implements hook_field_formatter_view().
 */
function apachesolr_channels_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {
  $element = array();

  switch ($display['type']) {
    case 'site_hash':
      foreach ($items as $delta => $item) {
        $output = check_plain($item['site']);
        $element[$delta] = array('#markup' => $output);
      }
      break;
    case 'site_name':
      $metadata = variable_get('apachesolr_multisitesearch_metadata', array());
      foreach ($items as $delta => $item) {
        if (isset($metadata[$item['site']]['ss_multisite_meta_sitename'])) {
          $output = $metadata[$item['site']]['ss_multisite_meta_sitename'];
        }
        else {
          $output = t('Unknown site %site', array('%site' => $item['site']));
        }
        $element[$delta] = array('#markup' => $output);
      }
      break;
  }

  return $element;
}

/**
 * Implements hook_options_list().
 */
function apachesolr_channels_options_list($field, $instance, $entity_type, $entity) {
  return apachesolr_channels_get_allowed_sites();
}

/**
 * Implement hook_field_widget_WIDGET_TYPE_form_alter().
 * Filter values for channels, add defaults for channels
 */
function apachesolr_channels_field_widget_options_select_form_alter(&$element, &$form_state, $context) {
  if ($context['field']['type'] === 'taxonomy_term_reference') {
    $field = $context['field'];
    $form = $context['form'];
    // check term reference is to the channels vocabulary
    $vocabs_count = count($field['settings']['allowed_values']);
    $vocab_setting = reset($field['settings']['allowed_values']);
    if (!empty($form['#node']->type) && $vocabs_count === 1 && $vocab_setting['vocabulary'] === 'channels') {
      // filter based on global configurations, but do not remove existing values + "None" value
      $channel_filters = array('_none' => '') + variable_get('site_content_sharing_channels', array());
      $element['#options'] = array_intersect_key($element['#options'], $channel_filters);

      $channel_defaults = variable_get('node_type_channels_' . $form['#node']->type, array());
      if (count($channel_defaults) && empty($form['#node']->nid)) {
        // node is new and we have defaults set
        $element['#default_value'] = $channel_defaults;
      }
    }
  }
}

/**
 * Implements hook_field_widget_info().
 */
function apachesolr_channels_field_widget_info() {
  return array(
    'sites_autocomplete' => array(
      'label' => t('Autocomplete shared site field'),
      'field types' => array('shared_site'),
      'settings' => array(
        'size' => 60,
        'autocomplete_path' => 'sites/autocomplete',
      ),
      'behaviors' => array(
        'multiple values' => FIELD_BEHAVIOR_CUSTOM,
      ),
    ),
  );
}

/**
 * Implements hook_field_widget_settings_form().
 */
function apachesolr_channels_field_widget_settings_form($field, $instance) {
  $widget = $instance['widget'];
  $settings = $widget['settings'];

  if ($widget['type'] == 'sites_autocomplete') {
    $form['size'] = array(
      '#type' => 'textfield',
      '#title' => t('Size of textfield'),
      '#default_value' => $settings['size'],
      '#required' => TRUE,
      '#element_validate' => array('element_validate_integer_positive'),
    );
  }

  return $form;
}

/**
 * Implements hook_field_widget_form().
 */
function apachesolr_channels_field_widget_form(&$form, &$form_state, $field, $instance, $langcode, $items, $delta, $element) {
  if ($instance['widget']['type'] == 'sites_autocomplete') {
    $values = array();
    if ($items) {
      $allowed_sites = apachesolr_channels_get_allowed_sites();
      foreach ($items as $item) {
        $hash = $item['site'];
        if (array_key_exists($hash, $allowed_sites)) {
          $values[] = $allowed_sites[$hash] . " [sid: $hash]";
        }
      }
    }

    $element += array(
      '#type' => 'textfield',
      '#default_value' => implode(', ', $values),
      '#autocomplete_path' => $instance['widget']['settings']['autocomplete_path'] . '/' . $field['field_name'],
      '#size' => $instance['widget']['settings']['size'],
      '#maxlength' => 1024,
      '#element_validate' => array('apachesolr_sites_autocomplete_validate'),
      '#value_callback' => 'apachesolr_sites_autocomplete_value',
    );
  }

  return $element;
}

/**
 * Validation callback for a site autocomplete element.
 */
function apachesolr_sites_autocomplete_validate($element, &$form_state) {
  $value = $element['#value'];
  $sids = array();

  if (!empty($value)) {
    preg_match_all('/\[\s*sid*:\s*(\w+)\s*\]/', $value, $matches);
    if (!empty($matches[1])) {
      $allowed = apachesolr_channels_get_allowed_sites();
      foreach ($matches[1] as $match) {
        if (array_key_exists($match, $allowed)) {
          $sids[] = array('site' => $match);
        }
      }
    }
    else {
      form_error($element, t('Found no valid sites.'));
    }
  }

  // Set the value
  form_set_value($element, $sids, $form_state);
}
