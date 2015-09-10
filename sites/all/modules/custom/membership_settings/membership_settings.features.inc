<?php
/**
 * @file
 * membership_settings.features.inc
 */

/**
 * Implements hook_commerce_custom_offline_payments().
 */
function membership_settings_commerce_custom_offline_payments() {
  $items = array(
    'bank_transfer' => array(
      'id' => 'bank_transfer',
      'title' => 'Bank Transfer',
      'description' => 'Receive direct money transfers initiated by the customer to your bank account.',
      'information' => '<p>
        <strong>Please make payment to:</strong><br />
        Account owner: <br />
        Account number: <br />
        IBAN: <br />
        Bank code: <br />
        SWIFT: <br />
        Banking institution: <br />
        Branch office: <br />
        <br />
        Payment instructions: <br />
        </p>',
      'format' => 'filtered_html',
      'status' => 1,
      'checkout' => 1,
      'terminal' => 1,
      'fieldable' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_views_api().
 */
function membership_settings_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_membership_entity_type().
 */
function membership_settings_default_membership_entity_type() {
  $items = array();
  $items['honorary_membership'] = entity_import('membership_entity_type', '{
    "label" : "Honorary Membership",
    "type" : "honorary_membership",
    "description" : "",
    "weight" : "0",
    "data" : {
      "member_id_format" : "membership_entity_numeric_member_id",
      "member_id_settings" : { "length" : "5" },
      "grace_period" : "2 months",
      "custom_grace_period" : "none",
      "cardinality" : "-1",
      "primary_role" : "6",
      "secondary_role" : "6",
      "show_on_profile" : 1,
      "all_edit" : 0,
      "bundle" : "membership_entity_type",
      "additional_settings__active_tab" : "edit-membership-settings",
      "tz_handling" : "site",
      "timezone_db" : "UTC",
      "available_term_lengths" : [ "1 year" ]
    },
    "rdf_mapping" : []
  }');
  $items['junior_membership'] = entity_import('membership_entity_type', '{
    "label" : "Junior Membership",
    "type" : "junior_membership",
    "description" : "",
    "weight" : "0",
    "data" : {
      "member_id_format" : "membership_entity_numeric_member_id",
      "member_id_settings" : { "length" : "5" },
      "grace_period" : "2 months",
      "custom_grace_period" : "none",
      "cardinality" : "-1",
      "primary_role" : "5",
      "secondary_role" : "5",
      "show_on_profile" : 1,
      "all_edit" : 0,
      "bundle" : "membership_entity_type",
      "additional_settings__active_tab" : "edit-membership-settings",
      "tz_handling" : "site",
      "timezone_db" : "UTC",
      "available_term_lengths" : [ "1 year" ]
    },
    "rdf_mapping" : []
  }');
  $items['lifetime_membership'] = entity_import('membership_entity_type', '{
    "label" : "Lifetime Membership",
    "type" : "lifetime_membership",
    "description" : "",
    "weight" : "0",
    "data" : {
      "member_id_format" : "membership_entity_numeric_member_id",
      "member_id_settings" : { "length" : "5" },
      "grace_period" : "none",
      "custom_grace_period" : "none",
      "cardinality" : "-1",
      "primary_role" : "7",
      "secondary_role" : "7",
      "show_on_profile" : 1,
      "all_edit" : 0,
      "bundle" : "membership_entity_type",
      "additional_settings__active_tab" : "edit-term-lengths",
      "tz_handling" : "site",
      "timezone_db" : "UTC",
      "available_term_lengths" : [ "lifetime" ]
    },
    "rdf_mapping" : []
  }');
  $items['membership'] = entity_import('membership_entity_type', '{
    "label" : "Standard Membership",
    "type" : "membership",
    "description" : "A regular membership.",
    "weight" : "0",
    "data" : {
      "member_id_format" : "membership_entity_numeric_member_id",
      "member_id_settings" : { "length" : "5" },
      "grace_period" : "2 months",
      "custom_grace_period" : "none",
      "cardinality" : "-1",
      "primary_role" : "4",
      "secondary_role" : "4",
      "show_on_profile" : 1,
      "all_edit" : 0,
      "bundle" : "membership_entity_type",
      "additional_settings__active_tab" : "edit-membership-settings",
      "tz_handling" : "site",
      "timezone_db" : "UTC",
      "available_term_lengths" : [ "1 year" ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function membership_settings_node_info() {
  $items = array(
    'beehive' => array(
      'name' => t('Beehive'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
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
