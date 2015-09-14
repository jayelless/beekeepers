<?php
/**
 * @file
 * beekeeper_apiaries.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function beekeeper_apiaries_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'apiaries';
  $view->description = '';
  $view->tag = 'Beekeepers';
  $view->base_table = 'node';
  $view->human_name = 'Apiaries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Apiaries';
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
  /* Field: Content: Apiary location */
  $handler->display->display_options['fields']['field_apiary_location']['id'] = 'field_apiary_location';
  $handler->display->display_options['fields']['field_apiary_location']['table'] = 'field_data_field_apiary_location';
  $handler->display->display_options['fields']['field_apiary_location']['field'] = 'field_apiary_location';
  $handler->display->display_options['fields']['field_apiary_location']['label'] = '';
  $handler->display->display_options['fields']['field_apiary_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apiary_location']['click_sort_column'] = 'lat';
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
    'apiary' => 'apiary',
  );
  /* Filter criterion: Geolocation: Distance */
  $handler->display->display_options['filters']['field_apiary_location_distance']['id'] = 'field_apiary_location_distance';
  $handler->display->display_options['filters']['field_apiary_location_distance']['table'] = 'field_data_field_apiary_location';
  $handler->display->display_options['filters']['field_apiary_location_distance']['field'] = 'field_apiary_location_distance';
  $handler->display->display_options['filters']['field_apiary_location_distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'search_distance' => '50',
    'search_units' => 'kilometers',
    'type' => 'googlemap',
  );
  $handler->display->display_options['filters']['field_apiary_location_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_apiary_location_distance']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_apiary_location_distance']['expose']['label'] = 'Distance';
  $handler->display->display_options['filters']['field_apiary_location_distance']['expose']['operator'] = 'field_apiary_location_distance_op';
  $handler->display->display_options['filters']['field_apiary_location_distance']['expose']['identifier'] = 'field_apiary_location_distance';
  $handler->display->display_options['filters']['field_apiary_location_distance']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_apiary_location_distance']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    12 => 0,
    11 => 0,
    8 => 0,
    7 => 0,
    9 => 0,
    10 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'apiaries';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Apiaries';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['apiaries'] = $view;

  return $export;
}
