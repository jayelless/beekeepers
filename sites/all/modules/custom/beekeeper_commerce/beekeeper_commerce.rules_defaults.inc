<?php
/**
 * @file
 * beekeeper_commerce.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function beekeeper_commerce_default_rules_configuration() {
  $items = array();
  $items['rules_bank_transfer'] = entity_import('rules_config', '{ "rules_bank_transfer" : {
      "LABEL" : "Bank Transfer",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_bank_transfer" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : "bank_transfer"
          }
        }
      ]
    }
  }');
  return $items;
}
