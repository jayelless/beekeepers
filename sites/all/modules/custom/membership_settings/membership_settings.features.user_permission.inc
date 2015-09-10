<?php
/**
 * @file
 * membership_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function membership_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access checkout'.
  $permissions['access checkout'] = array(
    'name' => 'access checkout',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_checkout',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer checkout'.
  $permissions['administer checkout'] = array(
    'name' => 'administer checkout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_checkout',
  );

  // Exported permission: 'administer commerce_customer_profile entities'.
  $permissions['administer commerce_customer_profile entities'] = array(
    'name' => 'administer commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'administer commerce_order entities'.
  $permissions['administer commerce_order entities'] = array(
    'name' => 'administer commerce_order entities',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'administer commerce_product entities'.
  $permissions['administer commerce_product entities'] = array(
    'name' => 'administer commerce_product entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'administer custom offline payments'.
  $permissions['administer custom offline payments'] = array(
    'name' => 'administer custom offline payments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_cop',
  );

  // Exported permission: 'administer customer profile types'.
  $permissions['administer customer profile types'] = array(
    'name' => 'administer customer profile types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'administer line item types'.
  $permissions['administer line item types'] = array(
    'name' => 'administer line item types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_line_item',
  );

  // Exported permission: 'administer line items'.
  $permissions['administer line items'] = array(
    'name' => 'administer line items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_line_item',
  );

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

  // Exported permission: 'administer payment methods'.
  $permissions['administer payment methods'] = array(
    'name' => 'administer payment methods',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'administer payments'.
  $permissions['administer payments'] = array(
    'name' => 'administer payments',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'administer product types'.
  $permissions['administer product types'] = array(
    'name' => 'administer product types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'administer realname'.
  $permissions['administer realname'] = array(
    'name' => 'administer realname',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'realname',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'cancel own vote'.
  $permissions['cancel own vote'] = array(
    'name' => 'cancel own vote',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'poll',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'configure order settings'.
  $permissions['configure order settings'] = array(
    'name' => 'configure order settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'configure store'.
  $permissions['configure store'] = array(
    'name' => 'configure store',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce',
  );

  // Exported permission: 'create beehive content'.
  $permissions['create beehive content'] = array(
    'name' => 'create beehive content',
    'roles' => array(
      'Honorary membership' => 'Honorary membership',
      'Junior membership' => 'Junior membership',
      'Lifetime membership' => 'Lifetime membership',
      'Membership Approver' => 'Membership Approver',
      'Standard membership' => 'Standard membership',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create commerce_customer_profile entities'.
  $permissions['create commerce_customer_profile entities'] = array(
    'name' => 'create commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create commerce_customer_profile entities of bundle billing'.
  $permissions['create commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'create commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create commerce_order entities'.
  $permissions['create commerce_order entities'] = array(
    'name' => 'create commerce_order entities',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create commerce_order entities of bundle commerce_order'.
  $permissions['create commerce_order entities of bundle commerce_order'] = array(
    'name' => 'create commerce_order entities of bundle commerce_order',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create commerce_product entities'.
  $permissions['create commerce_product entities'] = array(
    'name' => 'create commerce_product entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle membership_entity_product'.
  $permissions['create commerce_product entities of bundle membership_entity_product'] = array(
    'name' => 'create commerce_product entities of bundle membership_entity_product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle product'.
  $permissions['create commerce_product entities of bundle product'] = array(
    'name' => 'create commerce_product entities of bundle product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create mass_contact content'.
  $permissions['create mass_contact content'] = array(
    'name' => 'create mass_contact content',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create payments'.
  $permissions['create payments'] = array(
    'name' => 'create payments',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
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

  // Exported permission: 'delete any beehive content'.
  $permissions['delete any beehive content'] = array(
    'name' => 'delete any beehive content',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any mass_contact content'.
  $permissions['delete any mass_contact content'] = array(
    'name' => 'delete any mass_contact content',
    'roles' => array(
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

  // Exported permission: 'delete own beehive content'.
  $permissions['delete own beehive content'] = array(
    'name' => 'delete own beehive content',
    'roles' => array(
      'Honorary membership' => 'Honorary membership',
      'Junior membership' => 'Junior membership',
      'Lifetime membership' => 'Lifetime membership',
      'Membership Approver' => 'Membership Approver',
      'Standard membership' => 'Standard membership',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own mass_contact content'.
  $permissions['delete own mass_contact content'] = array(
    'name' => 'delete own mass_contact content',
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

  // Exported permission: 'delete payments'.
  $permissions['delete payments'] = array(
    'name' => 'delete payments',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any beehive content'.
  $permissions['edit any beehive content'] = array(
    'name' => 'edit any beehive content',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any commerce_customer_profile entity'.
  $permissions['edit any commerce_customer_profile entity'] = array(
    'name' => 'edit any commerce_customer_profile entity',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any commerce_customer_profile entity of bundle billing'.
  $permissions['edit any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'edit any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any commerce_order entity'.
  $permissions['edit any commerce_order entity'] = array(
    'name' => 'edit any commerce_order entity',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit any commerce_order entity of bundle commerce_order'.
  $permissions['edit any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'edit any commerce_order entity of bundle commerce_order',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit any commerce_product entity'.
  $permissions['edit any commerce_product entity'] = array(
    'name' => 'edit any commerce_product entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle membership_entity_product'.
  $permissions['edit any commerce_product entity of bundle membership_entity_product'] = array(
    'name' => 'edit any commerce_product entity of bundle membership_entity_product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle product'.
  $permissions['edit any commerce_product entity of bundle product'] = array(
    'name' => 'edit any commerce_product entity of bundle product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any mass_contact content'.
  $permissions['edit any mass_contact content'] = array(
    'name' => 'edit any mass_contact content',
    'roles' => array(
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

  // Exported permission: 'edit own beehive content'.
  $permissions['edit own beehive content'] = array(
    'name' => 'edit own beehive content',
    'roles' => array(
      'Honorary membership' => 'Honorary membership',
      'Junior membership' => 'Junior membership',
      'Lifetime membership' => 'Lifetime membership',
      'Membership Approver' => 'Membership Approver',
      'Standard membership' => 'Standard membership',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own commerce_customer_profile entities'.
  $permissions['edit own commerce_customer_profile entities'] = array(
    'name' => 'edit own commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit own commerce_customer_profile entities of bundle billing'.
  $permissions['edit own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'edit own commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit own commerce_order entities'.
  $permissions['edit own commerce_order entities'] = array(
    'name' => 'edit own commerce_order entities',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit own commerce_order entities of bundle commerce_order'.
  $permissions['edit own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'edit own commerce_order entities of bundle commerce_order',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit own commerce_product entities'.
  $permissions['edit own commerce_product entities'] = array(
    'name' => 'edit own commerce_product entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle membership_entity_product'.
  $permissions['edit own commerce_product entities of bundle membership_entity_product'] = array(
    'name' => 'edit own commerce_product entities of bundle membership_entity_product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle product'.
  $permissions['edit own commerce_product entities of bundle product'] = array(
    'name' => 'edit own commerce_product entities of bundle product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own mass_contact content'.
  $permissions['edit own mass_contact content'] = array(
    'name' => 'edit own mass_contact content',
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

  // Exported permission: 'inspect all votes'.
  $permissions['inspect all votes'] = array(
    'name' => 'inspect all votes',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'poll',
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

  // Exported permission: 'mass contact administer'.
  $permissions['mass contact administer'] = array(
    'name' => 'mass contact administer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mass_contact',
  );

  // Exported permission: 'mass contact archive messages'.
  $permissions['mass contact archive messages'] = array(
    'name' => 'mass contact archive messages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mass_contact',
  );

  // Exported permission: 'mass contact change default sender information'.
  $permissions['mass contact change default sender information'] = array(
    'name' => 'mass contact change default sender information',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'mass_contact',
  );

  // Exported permission: 'mass contact include attachments'.
  $permissions['mass contact include attachments'] = array(
    'name' => 'mass contact include attachments',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'mass_contact',
  );

  // Exported permission: 'mass contact override archiving'.
  $permissions['mass contact override archiving'] = array(
    'name' => 'mass contact override archiving',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mass_contact',
  );

  // Exported permission: 'mass contact override bcc'.
  $permissions['mass contact override bcc'] = array(
    'name' => 'mass contact override bcc',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mass_contact',
  );

  // Exported permission: 'mass contact override text format'.
  $permissions['mass contact override text format'] = array(
    'name' => 'mass contact override text format',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mass_contact',
  );

  // Exported permission: 'mass contact send messages'.
  $permissions['mass contact send messages'] = array(
    'name' => 'mass contact send messages',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'mass_contact',
  );

  // Exported permission: 'mass contact send to users in the Member category'.
  $permissions['mass contact send to users in the Member category'] = array(
    'name' => 'mass contact send to users in the Member category',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'mass_contact',
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

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'update payments'.
  $permissions['update payments'] = array(
    'name' => 'update payments',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view any commerce_customer_profile entity'.
  $permissions['view any commerce_customer_profile entity'] = array(
    'name' => 'view any commerce_customer_profile entity',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_customer_profile entity of bundle billing'.
  $permissions['view any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'view any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_order entity'.
  $permissions['view any commerce_order entity'] = array(
    'name' => 'view any commerce_order entity',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view any commerce_order entity of bundle commerce_order'.
  $permissions['view any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'view any commerce_order entity of bundle commerce_order',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view any commerce_product entity'.
  $permissions['view any commerce_product entity'] = array(
    'name' => 'view any commerce_product entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle membership_entity_product'.
  $permissions['view any commerce_product entity of bundle membership_entity_product'] = array(
    'name' => 'view any commerce_product entity of bundle membership_entity_product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle product'.
  $permissions['view any commerce_product entity of bundle product'] = array(
    'name' => 'view any commerce_product entity of bundle product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_customer_profile entities'.
  $permissions['view own commerce_customer_profile entities'] = array(
    'name' => 'view own commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own commerce_customer_profile entities of bundle billing'.
  $permissions['view own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'view own commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own commerce_order entities'.
  $permissions['view own commerce_order entities'] = array(
    'name' => 'view own commerce_order entities',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view own commerce_order entities of bundle commerce_order'.
  $permissions['view own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'view own commerce_order entities of bundle commerce_order',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view own commerce_product entities'.
  $permissions['view own commerce_product entities'] = array(
    'name' => 'view own commerce_product entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle membership_entity_product'.
  $permissions['view own commerce_product entities of bundle membership_entity_product'] = array(
    'name' => 'view own commerce_product entities of bundle membership_entity_product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle product'.
  $permissions['view own commerce_product entities of bundle product'] = array(
    'name' => 'view own commerce_product entities of bundle product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view payments'.
  $permissions['view payments'] = array(
    'name' => 'view payments',
    'roles' => array(
      'Membership Approver' => 'Membership Approver',
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
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
