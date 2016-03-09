<?php
/**
 * @file
 * kos_roles_and_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function kos_roles_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => 4,
  );

  // Exported role: Content provider.
  $roles['Content provider'] = array(
    'name' => 'Content provider',
    'weight' => 2,
  );

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 3,
  );

  // Exported role: System administrator.
  $roles['System administrator'] = array(
    'name' => 'System administrator',
    'weight' => 5,
  );

  return $roles;
}
