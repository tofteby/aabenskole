<?php
/**
 * @file
 * kkms_roles_and_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function kkms_roles_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => 3,
  );

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 4,
  );

  // Exported role: System administrator.
  $roles['System administrator'] = array(
    'name' => 'System administrator',
    'weight' => 2,
  );

  return $roles;
}
