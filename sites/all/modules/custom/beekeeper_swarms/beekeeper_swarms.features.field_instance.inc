<?php
/**
 * @file
 * beekeeper_swarms.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function beekeeper_swarms_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_swarm_collect_details'.
  $field_instances['user-user-field_swarm_collect_details'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter details such as the times you are available to collect and the areas you will collect from.  People needing a swarm collected will see you name and phone number(s) along with this information.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_swarm_collect_details',
    'label' => 'Swarm collect details',
    'required' => 0,
    'settings' => array(
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => -11,
    ),
  );

  // Exported field_instance: 'user-user-field_swarm_collector'.
  $field_instances['user-user-field_swarm_collector'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Tick the box if you are willing to collect swarms.  Please also fill in the details of your availability in the swarm collection details field.  Please note, that you should also set your location details so that you will be listed for swarms in your vicinty.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_swarm_collector',
    'label' => 'Swarm collector',
    'required' => 0,
    'settings' => array(
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => -12,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Enter details such as the times you are available to collect and the areas you will collect from.  People needing a swarm collected will see you name and phone number(s) along with this information.');
  t('Swarm collect details');
  t('Swarm collector');
  t('Tick the box if you are willing to collect swarms.  Please also fill in the details of your availability in the swarm collection details field.  Please note, that you should also set your location details so that you will be listed for swarms in your vicinty.');

  return $field_instances;
}
