<?php

/**
 * @file
 * Services client allows you to push different objects from local drupal installation
 * to remote servers via REST api.
 */

/**
 * This hooks allows to alter source object which is going to be mapped
 * to data sent via services. Use this hook to introduce new properties
 * that can be easily mapped to remote objects.
 *
 * @param $object
 *   Object that should be altered.
 * @param $type
 *   String representation of object type
 *   - 'user'
 *   - 'node'
 */
function hook_services_client_data_alter(&$src_data, &$data_type) {
  if (isset($src_data->type) && $src_data->type == 'si_search_core') {
    // Test if the $object_input is the one we want
    $new_field_value = 'foo';
    // We can create new fields randomly and use the mappings as a tool
    //to map this new value to an existing field in this content type on the request side
    $src_data->field_new_field['und']['0']['value'] = $new_field_value;
  }
}


/**
 * Allows to exclude data from being sent
 *
 * @param type $object
 * @param type $type
 */
function hook_services_client_data_exclude($object, $type) {

}

/**
 * Alter list of all plugins for use in the UI
 *
 * @param array $plugins
 *   List of all currently available plugins
 * @param string $type
 *   Type of required plugins
 */
function hook_services_client_plugins($plugins, $type) {

}

/**
 * Allows to react on errors that were created during syncing.
 *
 * @param array $errors
 *   Array of errors in format:
 *
 *   array(
 *     'data' => ( .. source data ..),
 *     'type' => node_save,
 *     'hook' => 'my_hook',
 *     'task' => array(.. task ..),
 *     'entity_type' => 'node',
 *     'entity_id' => 1021,
 *   )
 */
function services_client_error_sc_process_errors($errors) {
  // Store errors for further processing.
  foreach ($errors as $error) {
    // Process error
  }
}

/**
 * Allows to react on syncing event.
 *
 * @param string $entity_type
 *   Type of pushed entity.
 *
 * @param stdClass $entity
 *   Entity that is pushed.
 *
 * @param stdClass $task
 *   Services client task object.
 */
function services_client_error_sc_process_data($entity_type, $entity, $task) {

}
