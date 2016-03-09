<?php

/*
 * File for collection helper methods that should be private.
 * Stored here to lower the clutter in the main module file.
 */

/**
 * Provides a list of the optional field property names.
 * 
 * @return array
 */
function _working_hours_get_optionsl_fields() {
  return array('notes');
}

/**
 * Provides a list of the required property names.
 * 
 * @return array
 */
function _working_hours_get_required_fields() {
  $field_labels = working_hours_get_field_labels();
  $optional = _working_hours_get_optionsl_fields();
  $required = array_diff(array_keys($field_labels), $optional);
  return $required;
}

/**
 * Provides an associative array with field_name => field_label pairs.
 * 
 * @return array
 */
function working_hours_get_field_labels() {
  $defaults = array(
    'type_tid' => t('type'),
    'from' => t('From'),
    'to' => t('To'),
    'days' => t('Days'),
    'notes' => t('Notes'),
  );
  drupal_alter('working_hours_default_field_labels', $defaults);
  return $defaults;
}

/**
 * Returns a list of available date type and format pairs.
 * 
 * @return type
 */
function _working_hours_get_default_date_formats() {
  return array(
    'date' => 'd/m/Y',
    'time' => 'H:i',
    'date_time' => 'd/m/Y - H:i',
  );
}

/**
 * Returns the configured date format for the $type.
 * Available types: date, time, date_time.
 * 
 * @param type $type
 * @return type
 */
function _working_hours_get_date_format($type) {
  $formats = _working_hours_get_default_date_formats();
  $result = variable_get("date_format_working_hours_$type", $formats[$type]);
  return $result;
}

/**
 * Helper for enumeration of translated week days.
 * 
 * @return type
 */
function _working_hours_get_days($type = WORKING_HOURS_DAY_NAME_FORMAT_SHORT) {
  static $result = NULL;
  if($result === NULL) {
    $result = array(
      WORKING_HOURS_DAY_NAME_FORMAT_SHORT => array(
        1 => t('Mon'),
        2 => t('Tue'),
        3 => t('Wed'),
        4 => t('Thu'),
        5 => t('Fri'),
        6 => t('Sat'),
        7 => t('Sun'),
      ),
      WORKING_HOURS_DAY_NAME_FORMAT_FULL => array(
        1 => t('Monday'),
        2 => t('Tuesday'),
        3 => t('Wednesday'),
        4 => t('Thursday'),
        5 => t('Friday'),
        6 => t('Saturday'),
        7 => t('Sunday'),
      ),
    );
  }
  if(!in_array($type, array_keys($result))) {
    $type = WORKING_HOURS_DAY_NAME_FORMAT_SHORT;
  }
  return $result[$type];
}

/**
 * Helper method that returns the terms in vocabulary stored in 
 * `working_hours_vid` variable with appropriate format to be used in #items 
 * property in a form API element.
 * 
 * @return array
 */
function _working_hours_get_types() {
  $result = array(0 => '---',);
  foreach (taxonomy_get_tree(variable_get('working_hours_vid')) as $term) {
    $result[$term->tid] = check_plain($term->name);
  }
  return $result;
}

/**
 * Helper proxy method for watchdog.
 * 
 * @param type $message
 * @param type $variables
 * @param type $severity
 */
function _working_hours_log($message, $variables = array(), $severity = WATCHDOG_NOTICE) {
  watchdog('working_hours', $message, $variables, $severity);
}

/**
 * Helper proxy method for watchdog with severity WATCHDOG_WARNING.
 * 
 * @param type $message
 * @param type $variables
 */
function _working_hours_warning($message, $variables = array()) {
  _working_hours_log($message, $variables, WATCHDOG_WARNING);
}

function _working_hours_field_check_all_empty($item) {
  $all_empty = TRUE; // Assume all fields are empty.
  foreach (_working_hours_get_required_fields() as $field_name) {
    $all_empty = empty($item[$field_name]) && $all_empty;
  }
  return $all_empty;
}

/**
 * 
 * Helper method that manages the extraction of the modules vocabulary ID.
 * 
 * @return mixed 
 *   Integer - the vocabulary ID that will be used 
 *   Boolean FALSE when no VID is set.
 */
function _working_hours_get_vid() {
  if (($vid = variable_get('working_hours_vid', FALSE)) === FALSE) {
    // Should not happen, byt just in case we notify in the log.
    $message = t('Working hours vocabulary ID is not properly set');
    _working_hours_warning($message);
    return FALSE;
  }
  
  return $vid;
}

/**
 * Helper method that extracts a list of terms within working hours vocabulary 
 * based on a list or term IDs.
 * 
 * @param array $term_ids
 * @return array
 */
function _working_hours_get_terms($term_ids) {
  if(($vid = _working_hours_get_vid()) === FALSE) {
    return array();
  }
  
  return taxonomy_term_load_multiple(array_unique($term_ids), array(
    'vid'=>$vid,
  ));
}
