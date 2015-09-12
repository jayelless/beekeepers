<?php
/**
 * @file
 * beekeeper_messaging.features.inc
 */

/**
 * Implements hook_node_info().
 */
function beekeeper_messaging_node_info() {
  $items = array(
    'mass_contact' => array(
      'name' => t('Mass Contact message'),
      'base' => 'node_content',
      'description' => t('Archived copies of mass email messages sent from this site.'),
      'has_title' => '1',
      'title_label' => t('Subject'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
