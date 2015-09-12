<?php
/**
 * @file
 * beekeeper_memberships.features.inc
 */

/**
 * Implements hook_views_api().
 */
function beekeeper_memberships_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_membership_entity_type().
 */
function beekeeper_memberships_default_membership_entity_type() {
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
      "custom_grace_period" : "2 months",
      "cardinality" : "1",
      "primary_role" : "6",
      "secondary_role" : "6",
      "show_on_profile" : 1,
      "all_edit" : 0,
      "bundle" : "membership_entity_type",
      "additional_settings__active_tab" : "edit-term-lengths",
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
      "custom_grace_period" : "2 months",
      "cardinality" : "1",
      "primary_role" : "5",
      "secondary_role" : "5",
      "show_on_profile" : 1,
      "all_edit" : 0,
      "bundle" : "membership_entity_type",
      "additional_settings__active_tab" : "edit-term-lengths",
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
      "cardinality" : "1",
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