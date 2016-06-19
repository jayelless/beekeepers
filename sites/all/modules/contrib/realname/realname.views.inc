<?php

/**
 * @file
 * Views integration for the realname module.
 */

/**
 * Implements hook_views_data().
 */
function realname_views_data() {
  $data['realname']['table']['group']  = t('Realname');
  $data['realname']['table']['join'] = array(
    'users' => array(
      'left_field' => 'uid',
      'field' => 'uid',
    ),
  );

  $data['realname']['realname'] = array(
    'title' => t('Real name'),
    'help' => t("The user's real name."),
    'field' => array(
      'handler' => 'views_handler_field_user',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'realname_handler_argument_user_realname',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
      'title' => t('Real name'),
      'help' => t("The user's real name. This filter does not check if the user exists and allows partial matching. Does not utilize autocomplete."),
    ),
  );

  return $data;
}

/**
 * Implements hook_views_data_alter().
 */
function realname_views_data_alter(&$data) {
  $data['users']['username'] = array(
    'title' => t('Username'),
    'help' => t("The user's unaltered username."),
    'real field' => 'name',
    'field' => array(
      'handler' => 'views_handler_field_user',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'realname_handler_argument_user_username',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
      'title' => t('Username'),
      'help' => t("The user's unaltered username.  This filter does not check if the user exists and allows partial matching. Does not utilize autocomplete."),
    ),
  );

  // Override handling for UID to use realname in view title/breadcrumbxx.
  $data['users']['uid']['argument']['handler'] = 'realname_handler_argument_user_uid';

}

/**
 * Define all realname views handlers.
 */
function realname_views_handlers() {
  return array(
    'info' => array(),
    'handlers' => array(
      'realname_handler_argument_user_uid' => array('parent' => 'views_handler_argument_user_uid'),
      'realname_handler_argument_user_username' => array('parent' => 'views_handler_argument_user_uid'),
      'realname_handler_argument_user_realname' => array('parent' => 'views_handler_argument_user_uid'),
    ),
  );
}
