<?php
/**
 * @file
 * beekeeper_users.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function beekeeper_users_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Committee member' => 'Committee member',
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Committee member' => 'Committee member',
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
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

  // Exported permission: 'clear import_current_members feeds'.
  $permissions['clear import_current_members feeds'] = array(
    'name' => 'clear import_current_members feeds',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear import_expired_members feeds'.
  $permissions['clear import_expired_members feeds'] = array(
    'name' => 'clear import_expired_members feeds',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear import_honorary_members feeds'.
  $permissions['clear import_honorary_members feeds'] = array(
    'name' => 'clear import_honorary_members feeds',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import import_current_members feeds'.
  $permissions['import import_current_members feeds'] = array(
    'name' => 'import import_current_members feeds',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import import_expired_members feeds'.
  $permissions['import import_expired_members feeds'] = array(
    'name' => 'import import_expired_members feeds',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import import_honorary_members feeds'.
  $permissions['import import_honorary_members feeds'] = array(
    'name' => 'import import_honorary_members feeds',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'unlock import_current_members feeds'.
  $permissions['unlock import_current_members feeds'] = array(
    'name' => 'unlock import_current_members feeds',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock import_expired_members feeds'.
  $permissions['unlock import_expired_members feeds'] = array(
    'name' => 'unlock import_expired_members feeds',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock import_honorary_members feeds'.
  $permissions['unlock import_honorary_members feeds'] = array(
    'name' => 'unlock import_honorary_members feeds',
    'roles' => array(
      'Membership admin' => 'Membership admin',
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
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

  return $permissions;
}
