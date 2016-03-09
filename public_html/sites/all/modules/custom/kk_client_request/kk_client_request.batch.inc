<?php

/**
 * @file
 * Holds functions related to the batch operations.
 */

/**
 * Prepares Batch.
 *
 * @param array $voc_terms
 *   Array with term objects.
 * @param string $operation
 *   Type of operation.
 * @param bool $from_voc
 *   Whether or not it is comming from vocabularies.
 */
function kk_client_request_batch_terms($voc_terms, $operation, $from_voc, &$operations) {
  foreach(array_chunk($voc_terms, KK_CLIENT_REQUEST_COUNTER_CRONQUEUE) as $terms_to_operate) {
    $operations[] = array("kk_client_request_batch_process_terms", array(
      $terms_to_operate,
      $operation,
      $from_voc,
    ));
  }
}

/**
 * Executes the batch operations.
 * @param array $operations
 *   Array of batch operations
 */
function kk_client_request_batch_terms_execute($operations) {
  // Prepare the batch array.
  $batch = array(
    'operations' => $operations,
    'title' => t('Import batch'),
    'init_message' => t('Initializing'),
    'error_message' => t('An error occurred'),
    'progress_message' => t('Processed @current out of @total...'),
    'finished' => 'kk_client_request_batch_process_terms_finished',
  );

  batch_set($batch);
  batch_process('admin/config/kk/client_request_resources');
}

/**
 * Defines Batch operation.
 *
 * @param array $voc_terms
 *   Array with term objects.
 * @param string $operation
 *   Type of operation to be performed
 * @param bool $from_voc
 *   Whether the function is called from voc.
 * @param array $context
 *   Special array holding information withing the batch operation.
 */
function kk_client_request_batch_process_terms($voc_terms, $operation, $from_voc, &$context) {
  if ($operation == 'term_insert') {
    foreach ($voc_terms as $term) {
      kk_client_request_create_client_term($term, $from_voc);
    }
  }

  if ($operation == 'term_update') {
    foreach ($voc_terms as $term) {
      kk_client_request_update_client_term($term);
    }
  }
}

/**
 * Batch operation for generating the JSON for autotagging.
 * @param int $vid
 *   Vocabulary id of the KLE taxonomy.
 * @param array $context
 *   Array to keep variables between operations.
 */
function kk_client_request_batch_generate_json($vid, &$context) {
  try {
    if (($status = kk_taxon_taxonomy_alter_generate_json_file($vid))) {
      drupal_set_message(t('Generated JSON File'), 'status');
    }
  }
  catch (Exception $e) {
    kk_client_request_watchdog_custom('KK Client Request', check_plain($e->getMessage()), array(), WATCHDOG_ERROR);
    drupal_set_message(t('There is problem with the preparation for proper Autotagging work. Please, check the reports for more details.'), 'error', FALSE);
  }
}

/**
 * Batch operation for reset worckbench access.
 * @param array $context
 *   Array to keep variables between operations.
 */
function kk_client_request_batch_workbench_access_reset_tree(&$context) {
  if (module_exists('workbench_access')) {
    workbench_access_reset_tree();
  }
}

/**
 * Defines the Batch finish.
 *
 * @param array $success
 *   Information whether or not the operation was successful.
 * @param array $results
 *   Information about the result of the performed Batch operations.
 * @param array $operations
 *   Information about the performed Batch operations.
 */
function kk_client_request_batch_process_terms_finished($success, $results, $operations) {
  $params = $success ? array(t('Success'), 'status') : array(t('Error'), 'error');
  call_user_func_array('drupal_set_message', $params);
}
