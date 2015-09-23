<?php
/**
 * @file
 * beekeeper_users.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function beekeeper_users_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'member_lists';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Member lists';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Members';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer users';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'google_map';
  $handler->display->display_options['style_options']['map_zoom'] = '10';
  $handler->display->display_options['style_options']['map_min_zoom'] = '1';
  $handler->display->display_options['style_options']['map_max_zoom'] = '19';
  $handler->display->display_options['style_options']['marker_title_field'] = 'realname';
  $handler->display->display_options['style_options']['use_marker_clusterer'] = 0;
  $handler->display->display_options['style_options']['marker_clusterer'] = array(
    'grid_size' => '',
    'max_zoom' => '',
    'icon_url' => '',
    'icon_size' => '',
  );
  $handler->display->display_options['style_options']['map_auto_center_and_zoom'] = 1;
  $handler->display->display_options['style_options']['map_disable_scroll_wheel'] = 0;
  $handler->display->display_options['style_options']['map_disable_double_click_zoom'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: Primary membership */
  $handler->display->display_options['relationships']['membership_entity']['id'] = 'membership_entity';
  $handler->display->display_options['relationships']['membership_entity']['table'] = 'users';
  $handler->display->display_options['relationships']['membership_entity']['field'] = 'membership_entity';
  $handler->display->display_options['relationships']['membership_entity']['bundle_types'] = array(
    'honorary_membership' => 'honorary_membership',
    'junior_membership' => 'junior_membership',
    'life_membership' => 'life_membership',
    'standard_membership' => 'standard_membership',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: My Location */
  $handler->display->display_options['fields']['field_user_location']['id'] = 'field_user_location';
  $handler->display->display_options['fields']['field_user_location']['table'] = 'field_data_field_user_location';
  $handler->display->display_options['fields']['field_user_location']['field'] = 'field_user_location';
  $handler->display->display_options['fields']['field_user_location']['label'] = '';
  $handler->display->display_options['fields']['field_user_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_location']['click_sort_column'] = 'lat';
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = 'Name';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Geolocation: Distance */
  $handler->display->display_options['filters']['field_user_location_distance']['id'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['table'] = 'field_data_field_user_location';
  $handler->display->display_options['filters']['field_user_location_distance']['field'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'search_distance' => '100',
    'search_units' => 'kilometers',
    'type' => 'googlemap',
  );
  $handler->display->display_options['filters']['field_user_location_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['label'] = 'Distance';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['operator'] = 'field_user_location_distance_op';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['identifier'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );

  /* Display: Members admin */
  $handler = $view->new_display('page', 'Members admin', 'page');
  $handler->display->display_options['display_description'] = 'List of all members for administrators';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
  );
  $handler->display->display_options['path'] = 'members-admin';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Members list (all for admins)';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Members list */
  $handler = $view->new_display('page', 'Members list', 'page_1');
  $handler->display->display_options['display_description'] = 'List of members who have agreed to share their details';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
    5 => '5',
    7 => '7',
    4 => '4',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Geolocation: Distance */
  $handler->display->display_options['filters']['field_user_location_distance']['id'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['table'] = 'field_data_field_user_location';
  $handler->display->display_options['filters']['field_user_location_distance']['field'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'search_distance' => '100',
    'search_units' => 'kilometers',
    'type' => 'googlemap',
  );
  $handler->display->display_options['filters']['field_user_location_distance']['group'] = 1;
  $handler->display->display_options['filters']['field_user_location_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['label'] = 'Distance';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['operator'] = 'field_user_location_distance_op';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['identifier'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: User: Location Privacy (field_location_privacy) */
  $handler->display->display_options['filters']['field_location_privacy_value']['id'] = 'field_location_privacy_value';
  $handler->display->display_options['filters']['field_location_privacy_value']['table'] = 'field_data_field_location_privacy';
  $handler->display->display_options['filters']['field_location_privacy_value']['field'] = 'field_location_privacy_value';
  $handler->display->display_options['filters']['field_location_privacy_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_location_privacy_value']['group'] = 1;
  $handler->display->display_options['path'] = 'members-list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Members list';
  $handler->display->display_options['menu']['description'] = 'List of members who have agreed to share their details';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Members export */
  $handler = $view->new_display('page', 'Members export', 'page_2');
  $handler->display->display_options['display_description'] = 'List of all members for export';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_my_location' => 'field_my_location',
    'mail' => 'mail',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_my_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = 'Name';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: My Location */
  $handler->display->display_options['fields']['field_user_location']['id'] = 'field_user_location';
  $handler->display->display_options['fields']['field_user_location']['table'] = 'field_data_field_user_location';
  $handler->display->display_options['fields']['field_user_location']['field'] = 'field_user_location';
  $handler->display->display_options['fields']['field_user_location']['label'] = '';
  $handler->display->display_options['fields']['field_user_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_location']['click_sort_column'] = 'lat';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: Membership: Membership status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['relationship'] = 'membership_entity';
  /* Field: Membership: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'membership_entity';
  $handler->display->display_options['fields']['type']['label'] = 'Membership Type';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Geolocation: Distance */
  $handler->display->display_options['filters']['field_user_location_distance']['id'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['table'] = 'field_data_field_user_location';
  $handler->display->display_options['filters']['field_user_location_distance']['field'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'search_distance' => '100',
    'search_units' => 'kilometers',
    'type' => 'googlemap',
  );
  $handler->display->display_options['filters']['field_user_location_distance']['group'] = 1;
  $handler->display->display_options['filters']['field_user_location_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['label'] = 'Distance';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['operator'] = 'field_user_location_distance_op';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['identifier'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Membership: Membership status */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'membership_entity';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'membership_entity';
  $handler->display->display_options['filters']['status_1']['value'] = array(
    0 => '0',
    1 => '1',
    2 => '2',
    3 => '3',
  );
  $handler->display->display_options['filters']['status_1']['group'] = 1;
  $handler->display->display_options['path'] = 'members-export';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Members list (for export)';
  $handler->display->display_options['menu']['description'] = 'List od all members for export';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['member_lists'] = $view;

  $view = new view();
  $view->name = 'user_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Users';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer users';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'google_map';
  $handler->display->display_options['style_options']['map_zoom'] = '10';
  $handler->display->display_options['style_options']['map_min_zoom'] = '1';
  $handler->display->display_options['style_options']['map_max_zoom'] = '19';
  $handler->display->display_options['style_options']['marker_title_field'] = 'realname';
  $handler->display->display_options['style_options']['use_marker_clusterer'] = 0;
  $handler->display->display_options['style_options']['marker_clusterer'] = array(
    'grid_size' => '',
    'max_zoom' => '',
    'icon_url' => '',
    'icon_size' => '',
  );
  $handler->display->display_options['style_options']['map_auto_center_and_zoom'] = 1;
  $handler->display->display_options['style_options']['map_disable_scroll_wheel'] = 0;
  $handler->display->display_options['style_options']['map_disable_double_click_zoom'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: Primary membership */
  $handler->display->display_options['relationships']['membership_entity']['id'] = 'membership_entity';
  $handler->display->display_options['relationships']['membership_entity']['table'] = 'users';
  $handler->display->display_options['relationships']['membership_entity']['field'] = 'membership_entity';
  $handler->display->display_options['relationships']['membership_entity']['bundle_types'] = array(
    'honorary_membership' => 'honorary_membership',
    'junior_membership' => 'junior_membership',
    'life_membership' => 'life_membership',
    'standard_membership' => 'standard_membership',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: My Location */
  $handler->display->display_options['fields']['field_user_location']['id'] = 'field_user_location';
  $handler->display->display_options['fields']['field_user_location']['table'] = 'field_data_field_user_location';
  $handler->display->display_options['fields']['field_user_location']['field'] = 'field_user_location';
  $handler->display->display_options['fields']['field_user_location']['label'] = '';
  $handler->display->display_options['fields']['field_user_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_location']['click_sort_column'] = 'lat';
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = 'Name';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Geolocation: Distance */
  $handler->display->display_options['filters']['field_user_location_distance']['id'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['table'] = 'field_data_field_user_location';
  $handler->display->display_options['filters']['field_user_location_distance']['field'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'search_distance' => '100',
    'search_units' => 'kilometers',
    'type' => 'googlemap',
  );
  $handler->display->display_options['filters']['field_user_location_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['label'] = 'Distance';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['operator'] = 'field_user_location_distance_op';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['identifier'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
  );
  $handler->display->display_options['path'] = 'user-admin';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Users listing all (for admins)';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
    5 => '5',
    7 => '7',
    4 => '4',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Geolocation: Distance */
  $handler->display->display_options['filters']['field_user_location_distance']['id'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['table'] = 'field_data_field_user_location';
  $handler->display->display_options['filters']['field_user_location_distance']['field'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'search_distance' => '100',
    'search_units' => 'kilometers',
    'type' => 'googlemap',
  );
  $handler->display->display_options['filters']['field_user_location_distance']['group'] = 1;
  $handler->display->display_options['filters']['field_user_location_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['label'] = 'Distance';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['operator'] = 'field_user_location_distance_op';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['identifier'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: User: Location Privacy (field_location_privacy) */
  $handler->display->display_options['filters']['field_location_privacy_value']['id'] = 'field_location_privacy_value';
  $handler->display->display_options['filters']['field_location_privacy_value']['table'] = 'field_data_field_location_privacy';
  $handler->display->display_options['filters']['field_location_privacy_value']['field'] = 'field_location_privacy_value';
  $handler->display->display_options['filters']['field_location_privacy_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_location_privacy_value']['group'] = 1;
  $handler->display->display_options['path'] = 'users-listing';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Users listing';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_2');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_my_location' => 'field_my_location',
    'mail' => 'mail',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_my_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = 'Name';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: My Location */
  $handler->display->display_options['fields']['field_user_location']['id'] = 'field_user_location';
  $handler->display->display_options['fields']['field_user_location']['table'] = 'field_data_field_user_location';
  $handler->display->display_options['fields']['field_user_location']['field'] = 'field_user_location';
  $handler->display->display_options['fields']['field_user_location']['label'] = '';
  $handler->display->display_options['fields']['field_user_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_location']['click_sort_column'] = 'lat';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: Membership: Membership status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['relationship'] = 'membership_entity';
  /* Field: Membership: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'membership_entity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'membership_entity';
  $handler->display->display_options['fields']['type']['label'] = 'Membership Type';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Geolocation: Distance */
  $handler->display->display_options['filters']['field_user_location_distance']['id'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['table'] = 'field_data_field_user_location';
  $handler->display->display_options['filters']['field_user_location_distance']['field'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'search_distance' => '100',
    'search_units' => 'kilometers',
    'type' => 'googlemap',
  );
  $handler->display->display_options['filters']['field_user_location_distance']['group'] = 1;
  $handler->display->display_options['filters']['field_user_location_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['label'] = 'Distance';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['operator'] = 'field_user_location_distance_op';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['identifier'] = 'field_user_location_distance';
  $handler->display->display_options['filters']['field_user_location_distance']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Membership: Membership status */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'membership_entity';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'membership_entity';
  $handler->display->display_options['filters']['status_1']['value'] = array(
    0 => '0',
    1 => '1',
    2 => '2',
    3 => '3',
  );
  $handler->display->display_options['filters']['status_1']['group'] = 1;
  $handler->display->display_options['path'] = 'users-listing-export';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Users listing export';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['user_admin'] = $view;

  return $export;
}
