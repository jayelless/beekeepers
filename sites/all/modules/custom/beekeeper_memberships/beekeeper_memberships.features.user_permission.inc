<?php
/**
 * @file
 * beekeeper_memberships.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function beekeeper_memberships_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer membership terms'.
  $permissions['administer membership terms'] = array(
    'name' => 'administer membership terms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_term',
  );

  // Exported permission: 'administer membership types'.
  $permissions['administer membership types'] = array(
    'name' => 'administer membership types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'administer memberships'.
  $permissions['administer memberships'] = array(
    'name' => 'administer memberships',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity',
  );

  // Exported permission: 'honorary_membership delete any membership'.
  $permissions['honorary_membership delete any membership'] = array(
    'name' => 'honorary_membership delete any membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'honorary_membership delete own membership'.
  $permissions['honorary_membership delete own membership'] = array(
    'name' => 'honorary_membership delete own membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'honorary_membership edit any membership'.
  $permissions['honorary_membership edit any membership'] = array(
    'name' => 'honorary_membership edit any membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'honorary_membership edit own membership'.
  $permissions['honorary_membership edit own membership'] = array(
    'name' => 'honorary_membership edit own membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'honorary_membership join'.
  $permissions['honorary_membership join'] = array(
    'name' => 'honorary_membership join',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'honorary_membership renew any membership'.
  $permissions['honorary_membership renew any membership'] = array(
    'name' => 'honorary_membership renew any membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'honorary_membership renew own membership'.
  $permissions['honorary_membership renew own membership'] = array(
    'name' => 'honorary_membership renew own membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'honorary_membership view any membership'.
  $permissions['honorary_membership view any membership'] = array(
    'name' => 'honorary_membership view any membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'honorary_membership view own membership'.
  $permissions['honorary_membership view own membership'] = array(
    'name' => 'honorary_membership view own membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'junior_membership delete any membership'.
  $permissions['junior_membership delete any membership'] = array(
    'name' => 'junior_membership delete any membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'junior_membership delete own membership'.
  $permissions['junior_membership delete own membership'] = array(
    'name' => 'junior_membership delete own membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'junior_membership edit any membership'.
  $permissions['junior_membership edit any membership'] = array(
    'name' => 'junior_membership edit any membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'junior_membership edit own membership'.
  $permissions['junior_membership edit own membership'] = array(
    'name' => 'junior_membership edit own membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'junior_membership join'.
  $permissions['junior_membership join'] = array(
    'name' => 'junior_membership join',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'junior_membership renew any membership'.
  $permissions['junior_membership renew any membership'] = array(
    'name' => 'junior_membership renew any membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'junior_membership renew own membership'.
  $permissions['junior_membership renew own membership'] = array(
    'name' => 'junior_membership renew own membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'junior_membership view any membership'.
  $permissions['junior_membership view any membership'] = array(
    'name' => 'junior_membership view any membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'junior_membership view own membership'.
  $permissions['junior_membership view own membership'] = array(
    'name' => 'junior_membership view own membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'lifetime_membership delete any membership'.
  $permissions['lifetime_membership delete any membership'] = array(
    'name' => 'lifetime_membership delete any membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'lifetime_membership delete own membership'.
  $permissions['lifetime_membership delete own membership'] = array(
    'name' => 'lifetime_membership delete own membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'lifetime_membership edit any membership'.
  $permissions['lifetime_membership edit any membership'] = array(
    'name' => 'lifetime_membership edit any membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'lifetime_membership edit own membership'.
  $permissions['lifetime_membership edit own membership'] = array(
    'name' => 'lifetime_membership edit own membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'lifetime_membership join'.
  $permissions['lifetime_membership join'] = array(
    'name' => 'lifetime_membership join',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'lifetime_membership renew any membership'.
  $permissions['lifetime_membership renew any membership'] = array(
    'name' => 'lifetime_membership renew any membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'lifetime_membership renew own membership'.
  $permissions['lifetime_membership renew own membership'] = array(
    'name' => 'lifetime_membership renew own membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'lifetime_membership view any membership'.
  $permissions['lifetime_membership view any membership'] = array(
    'name' => 'lifetime_membership view any membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'lifetime_membership view own membership'.
  $permissions['lifetime_membership view own membership'] = array(
    'name' => 'lifetime_membership view own membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'membership delete any membership'.
  $permissions['membership delete any membership'] = array(
    'name' => 'membership delete any membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'membership delete own membership'.
  $permissions['membership delete own membership'] = array(
    'name' => 'membership delete own membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'membership edit any membership'.
  $permissions['membership edit any membership'] = array(
    'name' => 'membership edit any membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'membership edit own membership'.
  $permissions['membership edit own membership'] = array(
    'name' => 'membership edit own membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'membership join'.
  $permissions['membership join'] = array(
    'name' => 'membership join',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'membership renew any membership'.
  $permissions['membership renew any membership'] = array(
    'name' => 'membership renew any membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'membership renew own membership'.
  $permissions['membership renew own membership'] = array(
    'name' => 'membership renew own membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'membership view any membership'.
  $permissions['membership view any membership'] = array(
    'name' => 'membership view any membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'membership view own membership'.
  $permissions['membership view own membership'] = array(
    'name' => 'membership view own membership',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'membership_entity_type',
  );

  return $permissions;
}
