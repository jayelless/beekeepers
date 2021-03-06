<?php
/**
 * @file
 * beekeeper_messaging.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function beekeeper_messaging_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-mass_contact-body'.
  $field_instances['node-mass_contact-body'] = array(
    'bundle' => 'mass_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'notifications' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Message body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'node-mass_contact-field_mass_contact_attachments'.
  $field_instances['node-mass_contact-field_mass_contact_attachments'] = array(
    'bundle' => 'mass_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Any attachments that were included in the message.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 10,
      ),
      'notifications' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mass_contact_attachments',
    'label' => 'Attachments',
    'required' => FALSE,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'txt',
      'max_filesize' => '',
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'file',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => FALSE,
        'insert_class' => '',
        'insert_default' => array(
          0 => 'auto',
        ),
        'insert_styles' => array(
          0 => 'auto',
        ),
        'insert_width' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-mass_contact-field_mass_contact_bcc'.
  $field_instances['node-mass_contact-field_mass_contact_bcc'] = array(
    'bundle' => 'mass_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The person or people the message was blind copied to.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -7,
      ),
      'notifications' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mass_contact_bcc',
    'label' => 'BCC',
    'required' => FALSE,
    'settings' => array(
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -7,
    ),
  );

  // Exported field_instance: 'node-mass_contact-field_mass_contact_category'.
  $field_instances['node-mass_contact-field_mass_contact_category'] = array(
    'bundle' => 'mass_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The Mass Contact category of users sent to.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -9,
      ),
      'notifications' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mass_contact_category',
    'label' => 'Category',
    'required' => FALSE,
    'settings' => array(
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -9,
    ),
  );

  // Exported field_instance: 'node-mass_contact-field_mass_contact_from'.
  $field_instances['node-mass_contact-field_mass_contact_from'] = array(
    'bundle' => 'mass_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The person who sent the message.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -10,
      ),
      'notifications' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mass_contact_from',
    'label' => 'From',
    'required' => 1,
    'settings' => array(
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -10,
    ),
  );

  // Exported field_instance: 'node-mass_contact-field_mass_contact_headers'.
  $field_instances['node-mass_contact-field_mass_contact_headers'] = array(
    'bundle' => 'mass_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Any other headers that were created by the Mass Contact module.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -6,
      ),
      'notifications' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mass_contact_headers',
    'label' => 'Headers',
    'required' => FALSE,
    'settings' => array(
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => -6,
    ),
  );

  // Exported field_instance: 'node-mass_contact-field_mass_contact_result'.
  $field_instances['node-mass_contact-field_mass_contact_result'] = array(
    'bundle' => 'mass_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The result of sending this message.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'notifications' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mass_contact_result',
    'label' => 'Result',
    'required' => FALSE,
    'settings' => array(
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-mass_contact-field_mass_contact_to'.
  $field_instances['node-mass_contact-field_mass_contact_to'] = array(
    'bundle' => 'mass_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The person or people the message was sent to.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -8,
      ),
      'notifications' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mass_contact_to',
    'label' => 'To',
    'required' => 1,
    'settings' => array(
      'membership_entity_join_form' => FALSE,
      'membership_entity_term_renew_form' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Any attachments that were included in the message.');
  t('Any other headers that were created by the Mass Contact module.');
  t('Attachments');
  t('BCC');
  t('Category');
  t('From');
  t('Headers');
  t('Message body');
  t('Result');
  t('The Mass Contact category of users sent to.');
  t('The person or people the message was blind copied to.');
  t('The person or people the message was sent to.');
  t('The person who sent the message.');
  t('The result of sending this message.');
  t('To');

  return $field_instances;
}
