<?php

/**
 * @file
 * The RealName module allows the admin to choose fields from the user profile
 * that will be used to add a "realname" element (method) to a user object.
 */

/**
 * Argument handler for realnames
 */
class realname_handler_argument_user_uid extends views_handler_argument_user_uid {
  /**
   * Override the behavior of title(). Get the name of the user.
   *
   * @return array
   *   A list of usernames.
   */
  public function title_query() {

    if (!$this->argument) {
      return array(variable_get('anonymous', t('Anonymous')));
    }

    $titles = array();

    $result = db_query("SELECT r.realname FROM {users} u LEFT JOIN {realname} r ON u.uid=r.uid WHERE u.uid IN (:uids)", array(':uids' => $this->value));
    foreach ($result as $term) {
      $titles[] = check_plain($term->realname);
    }
    return $titles;

  }
}
