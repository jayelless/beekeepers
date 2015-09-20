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
  $items['beekeeper_membership_email_membership_renewal_reminder'] = entity_import('rules_config', '{ "beekeeper_membership_email_membership_renewal_reminder" : {
      "LABEL" : "Email membership renewal reminder on May 31st",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "beekeeper_custom", "rules" ],
      "ON" : { "cron" : [] },
      "IF" : [ { "beekeeper_custom_rules_condition_send_renewal_notifications" : [] } ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4", "5" : "5" } },
            "subject" : "[site:name] Membership Renewal Due",
            "message" : "Hello Bee keepers!\\r\\n\\r\\nYour membership to [site:name] expires on the 31st May. If you have not done so already please login here [site:login-url] to renew your membership. You have a two month grace period to to renew your membership before it is cancelled.\\r\\n\\r\\nThank you.\\r\\n\\r\\nThe [site:name] Team."
          }
        }
      ]
    }
  }');
  $items['beekeeper_membership_set_expiry_date_of_new_memberships'] = entity_import('rules_config', '{ "beekeeper_membership_set_expiry_date_of_new_memberships" : {
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
  $items['beekeepers_membership_activate_membership_term'] = entity_import('rules_config', '{ "beekeepers_membership_activate_membership_term" : {
      "LABEL" : "Activate membership term when payment complete",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Memberships" ],
      "REQUIRES" : [
        "commerce_order",
        "membership_entity_commerce",
        "rules",
        "commerce_invoice_receipt",
        "commerce_payment"
      ],
      "ON" : { "commerce_payment_order_paid_in_full" : [] },
      "IF" : [
        { "commerce_order_contains_product_type" : {
            "commerce_order" : [ "commerce_order" ],
            "product_type" : { "value" : { "membership_entity_product" : "membership_entity_product" } },
            "operator" : "\\u003E=",
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "membership_entity_commerce_activate_term" : { "commerce_order" : [ "commerce_order" ] } },
        { "drupal_message" : { "message" : "Membership activated for [commerce-order:owner] and any other accounts associated this membership order." } },
        { "commerce_order_update_state" : { "commerce_order" : [ "commerce_order" ], "order_state" : "completed" } },
        { "commerce_invoice_receipt_action_mail" : {
            "commerce_order" : [ "commerce_order" ],
            "to" : "[commerce-order:owner] \\u003C[commerce-order:mail]\\u003E",
            "subject" : "[site:name]: Order #[commerce-order:order-id]"
          }
        }
      ]
    }
  }');
  return $items;
}
