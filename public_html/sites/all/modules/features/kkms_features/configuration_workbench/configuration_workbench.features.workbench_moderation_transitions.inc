<?php
/**
 * @file
 * configuration_workbench.features.workbench_moderation_transitions.inc
 */

/**
 * Implements hook_workbench_moderation_export_transitions().
 */
function configuration_workbench_workbench_moderation_export_transitions() {
  $items = array(
    'draft:published' => array(
      'from_name' => 'draft',
      'to_name' => 'published',
    ),
    'published:draft' => array(
      'from_name' => 'published',
      'to_name' => 'draft',
    ),
  );
  return $items;
}
