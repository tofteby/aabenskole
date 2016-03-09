<?php

/**
 * @file
 * Provide views data and handlers for history_node_deleted module.
 *
 * @ingroup views_module_handlers
 */

/**
 * Implements hook_views_data().
 */
function history_node_deleted_views_data() {
  // Basic table information.
  $data['history_node_deleted']['table']['group']  = t('History node deleted');

  // Define this as a base table.
  $data['history_node_deleted']['table']['base'] = array(
    'field' => 'nid',
    'title' => t('History node deleted'),
    'help' => t('History node deleted contains data about the deleted nodes.'),
    'weight' => -10,
  );

  // Fields
  
  // Node ID table field.
  $data['history_node_deleted']['nid'] = array(
    'title' => t('Deleted node'),
    'help' => t('Nid of the deleted node'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
     ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // Node type.
  $data['history_node_deleted']['type'] = array(
    'title' => t('Content type'),
    'help' => t('Content type of the deleted node.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  
  // Timestamp field.
  $data['history_node_deleted']['timestamp'] = array(
    'title' => t('Timestamp field'),
    'help' => t('Time when the node was deleted.'),
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );
  
  // Uuid.
  $data['history_node_deleted']['uuid'] = array(
    'title' => t('UUID'),
    'help' => t('UUID of the deleted node.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  return $data;
}
