<?php
/**
 * @file
 * membership_settings.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function membership_settings_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'beehives';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Beehives';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Beehives';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'google_map';
  $handler->display->display_options['style_options']['map_min_zoom'] = '1';
  $handler->display->display_options['style_options']['map_max_zoom'] = '19';
  $handler->display->display_options['style_options']['marker_title_field'] = 'title';
  $handler->display->display_options['style_options']['use_marker_clusterer'] = 1;
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Hive location */
  $handler->display->display_options['fields']['field_hive_location']['id'] = 'field_hive_location';
  $handler->display->display_options['fields']['field_hive_location']['table'] = 'field_data_field_hive_location';
  $handler->display->display_options['fields']['field_hive_location']['field'] = 'field_hive_location';
  $handler->display->display_options['fields']['field_hive_location']['label'] = '';
  $handler->display->display_options['fields']['field_hive_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hive_location']['click_sort_column'] = 'lat';
  $handler->display->display_options['fields']['field_hive_location']['settings'] = array(
    'map_width' => '300px',
    'map_height' => '300px',
    'marker_icon' => '',
    'map_scrollwheel' => 0,
    'map_maptype' => 'roadmap',
    'map_zoomlevel' => '7',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'beehive' => 'beehive',
  );
  /* Filter criterion: Geolocation: Distance */
  $handler->display->display_options['filters']['field_hive_location_distance']['id'] = 'field_hive_location_distance';
  $handler->display->display_options['filters']['field_hive_location_distance']['table'] = 'field_data_field_hive_location';
  $handler->display->display_options['filters']['field_hive_location_distance']['field'] = 'field_hive_location_distance';
  $handler->display->display_options['filters']['field_hive_location_distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'search_distance' => '50',
    'search_units' => 'kilometers',
    'type' => 'googlemap',
  );
  $handler->display->display_options['filters']['field_hive_location_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_hive_location_distance']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_hive_location_distance']['expose']['label'] = 'Distance';
  $handler->display->display_options['filters']['field_hive_location_distance']['expose']['operator'] = 'field_hive_location_distance_op';
  $handler->display->display_options['filters']['field_hive_location_distance']['expose']['identifier'] = 'field_hive_location_distance';
  $handler->display->display_options['filters']['field_hive_location_distance']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_hive_location_distance']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'beehives';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Beehives';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['beehives'] = $view;

  $view = new view();
  $view->name = 'buy_membership';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_product';
  $view->human_name = 'buy-membership';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Buy Membership';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Commerce Product: Add to Cart form */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'views_entity_commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
  $handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['combine'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 'product';
  /* Filter criterion: Commerce Product: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'membership_entity_product' => 'membership_entity_product',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'buy-membership';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Buy Membership';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['buy_membership'] = $view;

  return $export;
}
