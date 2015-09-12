<?php
/**
 * @file
 * beekeeper_polls.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function beekeeper_polls_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'cancel own vote'.
  $permissions['cancel own vote'] = array(
    'name' => 'cancel own vote',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'poll',
  );

  // Exported permission: 'create poll content'.
  $permissions['create poll content'] = array(
    'name' => 'create poll content',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any poll content'.
  $permissions['delete any poll content'] = array(
    'name' => 'delete any poll content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own poll content'.
  $permissions['delete own poll content'] = array(
    'name' => 'delete own poll content',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any poll content'.
  $permissions['edit any poll content'] = array(
    'name' => 'edit any poll content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own poll content'.
  $permissions['edit own poll content'] = array(
    'name' => 'edit own poll content',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'inspect all votes'.
  $permissions['inspect all votes'] = array(
    'name' => 'inspect all votes',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'poll',
  );

  // Exported permission: 'vote on polls'.
  $permissions['vote on polls'] = array(
    'name' => 'vote on polls',
    'roles' => array(
      'Honorary membership' => 'Honorary membership',
      'Junior membership' => 'Junior membership',
      'Lifetime membership' => 'Lifetime membership',
      'Standard membership' => 'Standard membership',
      'administrator' => 'administrator',
    ),
    'module' => 'poll',
  );

  return $permissions;
}
