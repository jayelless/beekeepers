<?php
/**
 * @file
 * beekeepers_memberships.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function beekeeper_memberships_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu_join---honorary-membership:user/join/honorary-membership
  $menu_links['user-menu_join---honorary-membership:user/join/honorary-membership'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/join/honorary-membership',
    'router_path' => 'user/join/honorary-membership',
    'link_title' => 'Join - Honorary Membership',
    'options' => array(
      'identifier' => 'user-menu_join---honorary-membership:user/join/honorary-membership',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'user-menu_join:user/join',
  );
  // Exported menu link: user-menu_join---junior-membership:user/join/junior-membership
  $menu_links['user-menu_join---junior-membership:user/join/junior-membership'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/join/junior-membership',
    'router_path' => 'user/join/junior-membership',
    'link_title' => 'Join - Junior Membership',
    'options' => array(
      'identifier' => 'user-menu_join---junior-membership:user/join/junior-membership',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'user-menu_join:user/join',
  );
  // Exported menu link: user-menu_join---lifetime-membership:user/join/lifetime-membership
  $menu_links['user-menu_join---lifetime-membership:user/join/lifetime-membership'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/join/lifetime-membership',
    'router_path' => 'user/join/lifetime-membership',
    'link_title' => 'Join - Lifetime Membership',
    'options' => array(
      'identifier' => 'user-menu_join---lifetime-membership:user/join/lifetime-membership',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'user-menu_join:user/join',
  );
  // Exported menu link: user-menu_join---standard-membership:user/join/membership
  $menu_links['user-menu_join---standard-membership:user/join/membership'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/join/membership',
    'router_path' => 'user/join/membership',
    'link_title' => 'Join - Standard Membership',
    'options' => array(
      'attributes' => array(
        'title' => 'A regular membership.',
      ),
      'identifier' => 'user-menu_join---standard-membership:user/join/membership',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'user-menu_join:user/join',
  );
  // Exported menu link: user-menu_join:user/join
  $menu_links['user-menu_join:user/join'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/join',
    'router_path' => 'user/join',
    'link_title' => 'Join',
    'options' => array(
      'identifier' => 'user-menu_join:user/join',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -9999,
    'customized' => 0,
  );
  // Exported menu link: user-menu_renew---honorary-membership:user/renew/honorary-membership
  $menu_links['user-menu_renew---honorary-membership:user/renew/honorary-membership'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/renew/honorary-membership',
    'router_path' => 'user/renew/honorary-membership',
    'link_title' => 'Renew - Honorary Membership',
    'options' => array(
      'identifier' => 'user-menu_renew---honorary-membership:user/renew/honorary-membership',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'user-menu_renew:user/renew',
  );
  // Exported menu link: user-menu_renew---junior-membership:user/renew/junior-membership
  $menu_links['user-menu_renew---junior-membership:user/renew/junior-membership'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/renew/junior-membership',
    'router_path' => 'user/renew/junior-membership',
    'link_title' => 'Renew - Junior Membership',
    'options' => array(
      'identifier' => 'user-menu_renew---junior-membership:user/renew/junior-membership',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'user-menu_renew:user/renew',
  );
  // Exported menu link: user-menu_renew---lifetime-membership:user/renew/lifetime-membership
  $menu_links['user-menu_renew---lifetime-membership:user/renew/lifetime-membership'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/renew/lifetime-membership',
    'router_path' => 'user/renew/lifetime-membership',
    'link_title' => 'Renew - Lifetime Membership',
    'options' => array(
      'identifier' => 'user-menu_renew---lifetime-membership:user/renew/lifetime-membership',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'user-menu_renew:user/renew',
  );
  // Exported menu link: user-menu_renew---standard-membership:user/renew/membership
  $menu_links['user-menu_renew---standard-membership:user/renew/membership'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/renew/membership',
    'router_path' => 'user/renew/membership',
    'link_title' => 'Renew - Standard Membership',
    'options' => array(
      'attributes' => array(
        'title' => 'A regular membership.',
      ),
      'identifier' => 'user-menu_renew---standard-membership:user/renew/membership',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'user-menu_renew:user/renew',
  );
  // Exported menu link: user-menu_renew:user/renew
  $menu_links['user-menu_renew:user/renew'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/renew',
    'router_path' => 'user/renew',
    'link_title' => 'Renew',
    'options' => array(
      'identifier' => 'user-menu_renew:user/renew',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -9998,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Join');
  t('Join - Honorary Membership');
  t('Join - Junior Membership');
  t('Join - Lifetime Membership');
  t('Join - Standard Membership');
  t('Renew');
  t('Renew - Honorary Membership');
  t('Renew - Junior Membership');
  t('Renew - Lifetime Membership');
  t('Renew - Standard Membership');

  return $menu_links;
}
