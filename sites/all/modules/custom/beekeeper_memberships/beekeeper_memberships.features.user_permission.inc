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
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_term',
  );

  // Exported permission: 'administer membership types'.
  $permissions['administer membership types'] = array(
    'name' => 'administer membership types',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'administer memberships'.
  $permissions['administer memberships'] = array(
    'name' => 'administer memberships',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity',
  );

  // Exported permission: 'honorary_membership delete any membership'.
  $permissions['honorary_membership delete any membership'] = array(
    'name' => 'honorary_membership delete any membership',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'honorary_membership delete own membership'.
  $permissions['honorary_membership delete own membership'] = array(
    'name' => 'honorary_membership delete own membership',
    'roles' => array(
      'Membership admin' => 'Membership admin',
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
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'honorary_membership edit own membership'.
  $permissions['honorary_membership edit own membership'] = array(
    'name' => 'honorary_membership edit own membership',
    'roles' => array(
      'Membership admin' => 'Membership admin',
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
      'Membership admin' => 'Membership admin',
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
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'honorary_membership renew own membership'.
  $permissions['honorary_membership renew own membership'] = array(
    'name' => 'honorary_membership renew own membership',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'honorary_membership view any membership'.
  $permissions['honorary_membership view any membership'] = array(
    'name' => 'honorary_membership view any membership',
    'roles' => array(
      'Membership admin' => 'Membership admin',
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
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'junior_membership delete any membership'.
  $permissions['junior_membership delete any membership'] = array(
    'name' => 'junior_membership delete any membership',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'junior_membership delete own membership'.
  $permissions['junior_membership delete own membership'] = array(
    'name' => 'junior_membership delete own membership',
    'roles' => array(
      'Membership admin' => 'Membership admin',
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
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'junior_membership edit own membership'.
  $permissions['junior_membership edit own membership'] = array(
    'name' => 'junior_membership edit own membership',
    'roles' => array(
      'Membership admin' => 'Membership admin',
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
      'Membership admin' => 'Membership admin',
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
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'junior_membership renew own membership'.
  $permissions['junior_membership renew own membership'] = array(
    'name' => 'junior_membership renew own membership',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'junior_membership view any membership'.
  $permissions['junior_membership view any membership'] = array(
    'name' => 'junior_membership view any membership',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'junior_membership view own membership'.
  $permissions['junior_membership view own membership'] = array(
    'name' => 'junior_membership view own membership',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'life_membership delete any membership'.
  $permissions['life_membership delete any membership'] = array(
    'name' => 'life_membership delete any membership',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'life_membership delete own membership'.
  $permissions['life_membership delete own membership'] = array(
    'name' => 'life_membership delete own membership',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'life_membership edit any membership'.
  $permissions['life_membership edit any membership'] = array(
    'name' => 'life_membership edit any membership',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'life_membership edit own membership'.
  $permissions['life_membership edit own membership'] = array(
    'name' => 'life_membership edit own membership',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'life_membership join'.
  $permissions['life_membership join'] = array(
    'name' => 'life_membership join',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'life_membership renew any membership'.
  $permissions['life_membership renew any membership'] = array(
    'name' => 'life_membership renew any membership',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'life_membership renew own membership'.
  $permissions['life_membership renew own membership'] = array(
    'name' => 'life_membership renew own membership',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'life_membership view any membership'.
  $permissions['life_membership view any membership'] = array(
    'name' => 'life_membership view any membership',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'life_membership view own membership'.
  $permissions['life_membership view own membership'] = array(
    'name' => 'life_membership view own membership',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'standard_membership delete any membership'.
  $permissions['standard_membership delete any membership'] = array(
    'name' => 'standard_membership delete any membership',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'standard_membership delete own membership'.
  $permissions['standard_membership delete own membership'] = array(
    'name' => 'standard_membership delete own membership',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'standard_membership edit any membership'.
  $permissions['standard_membership edit any membership'] = array(
    'name' => 'standard_membership edit any membership',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'standard_membership edit own membership'.
  $permissions['standard_membership edit own membership'] = array(
    'name' => 'standard_membership edit own membership',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'standard_membership join'.
  $permissions['standard_membership join'] = array(
    'name' => 'standard_membership join',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'standard_membership renew any membership'.
  $permissions['standard_membership renew any membership'] = array(
    'name' => 'standard_membership renew any membership',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'standard_membership renew own membership'.
  $permissions['standard_membership renew own membership'] = array(
    'name' => 'standard_membership renew own membership',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'standard_membership view any membership'.
  $permissions['standard_membership view any membership'] = array(
    'name' => 'standard_membership view any membership',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'membership_entity_type',
  );

  // Exported permission: 'standard_membership view own membership'.
  $permissions['standard_membership view own membership'] = array(
    'name' => 'standard_membership view own membership',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'membership_entity_type',
  );

  return $permissions;
}
