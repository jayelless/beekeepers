<?php
/**
 * @file
 * beekeeper_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function beekeeper_users_user_default_roles() {
  $roles = array();

  // Exported role: Honorary member.
  $roles['Honorary member'] = array(
    'name' => 'Honorary member',
    'weight' => 5,
  );

  // Exported role: Junior member.
  $roles['Junior member'] = array(
    'name' => 'Junior member',
    'weight' => 4,
  );

  // Exported role: Lifetime member.
  $roles['Lifetime member'] = array(
    'name' => 'Lifetime member',
    'weight' => 6,
  );

  // Exported role: Membership admin.
  $roles['Membership admin'] = array(
    'name' => 'Membership admin',
    'weight' => 7,
  );

  // Exported role: Standard member.
  $roles['Standard member'] = array(
    'name' => 'Standard member',
    'weight' => 3,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
