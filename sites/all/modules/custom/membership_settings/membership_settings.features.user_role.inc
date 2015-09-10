<?php
/**
 * @file
 * membership_settings.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function membership_settings_user_default_roles() {
  $roles = array();

  // Exported role: Honorary membership.
  $roles['Honorary membership'] = array(
    'name' => 'Honorary membership',
    'weight' => 5,
  );

  // Exported role: Junior membership.
  $roles['Junior membership'] = array(
    'name' => 'Junior membership',
    'weight' => 4,
  );

  // Exported role: Lifetime membership.
  $roles['Lifetime membership'] = array(
    'name' => 'Lifetime membership',
    'weight' => 6,
  );

  // Exported role: Membership Approver.
  $roles['Membership Approver'] = array(
    'name' => 'Membership Approver',
    'weight' => 7,
  );

  // Exported role: Standard membership.
  $roles['Standard membership'] = array(
    'name' => 'Standard membership',
    'weight' => 3,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
