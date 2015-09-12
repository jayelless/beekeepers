<?php
/**
 * @file
 * beekeeper_memberships.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function beekeeper_memberships_default_rules_configuration() {
  $items = array();
  $items['rules_email_membership_renewel_reminder_on_may_31st'] = entity_import('rules_config', '{ "rules_email_membership_renewel_reminder_on_may_31st" : {
      "LABEL" : "Email membership renewel reminder on May 31st",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "beekeeper_custom", "rules" ],
      "ON" : { "cron" : [] },
      "IF" : [ { "beekeeper_custom_rules_condition_send_renewal_notifications" : [] } ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4", "5" : "5", "6" : "6" } },
            "subject" : "[site:name] Membership Renewal Due",
            "message" : "Hello Bee keepers!\\r\\n\\r\\nYour membership to [site:name] expires on the 31st May. If you have not done so already please login here [site:login-url] to renew your membership. You have a two month grace period to to renew your membership before it is cancelled.\\r\\n\\r\\nThank you.\\r\\n\\r\\nThe [site:name] Team."
          }
        }
      ]
    }
  }');
  $items['rules_set_expiry_date_of_new_memberships'] = entity_import('rules_config', '{ "rules_set_expiry_date_of_new_memberships" : {
      "LABEL" : "Set expiry date of new memberships",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce", "membership_entity" ],
      "ON" : { "membership_entity_insert" : [] },
      "IF" : [
        { "entity_exists" : {
            "type" : "membership_entity_term",
            "property" : "start",
            "value" : "test"
          }
        },
        { "entity_has_field" : {
            "entity" : [ "membership-entity" ],
            "field" : "membership_entity_term_ref"
          }
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "Attempt to edit expiry date of membership" } },
        { "entity_query" : {
            "USING" : {
              "type" : "membership_entity_term",
              "property" : "id",
              "value" : [ "membership-entity:mid" ]
            },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "data_set" : { "data" : [ "membership-entity:created" ], "value" : "31 March" } }
      ]
    }
  }');
  return $items;
}
