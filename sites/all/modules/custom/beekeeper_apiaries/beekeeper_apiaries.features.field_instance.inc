<?php
/**
 * @file
 * beekeeper_apiaries.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function beekeeper_apiaries_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-apiary-field_apiary_location'
  $field_instances['node-apiary-field_apiary_location'] = array(
    'bundle' => 'apiary',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'geolocation_googlemaps',
        'settings' => array(
          'map_height' => '480px',
          'map_imageformat' => 'png8',
          'map_maptype' => 'roadmap',
          'map_scrollwheel' => 0,
          'map_width' => '640px',
          'map_zoomlevel' => 12,
          'marker_icon' => '',
        ),
        'type' => 'geolocation_googlemaps_dynamic',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_apiary_location',
    'label' => 'Apiary location',
    'required' => 0,
    'settings' => array(
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geolocation_googlemaps',
      'settings' => array(
        'marker_draggable' => 1,
        'scrollwheel' => 0,
      ),
      'type' => 'geolocation_googlemap',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-apiary-field_apiary_notes'
  $field_instances['node-apiary-field_apiary_notes'] = array(
    'bundle' => 'apiary',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_apiary_notes',
    'label' => 'Apiary notes',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Apiary location');
  t('Apiary notes');

  return $field_instances;
}
