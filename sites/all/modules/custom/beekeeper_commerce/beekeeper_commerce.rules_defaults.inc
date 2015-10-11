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
  $items['beekeeper_commerce_bank_transfer'] = entity_import('rules_config', '{ "beekeeper_commerce_bank_transfer" : {
      "LABEL" : "Beekeepers: bank transfer",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Payments" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_bank_transfer" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : { "value" : {
                "method_id" : "bank_transfer",
                "settings" : { "information" : {
                    "value" : "\\u003Cp\\u003E\\r\\n\\u003Cstrong\\u003EPlease make payment to:\\u003C\\/strong\\u003E\\u003Cbr \\/\\u003E\\r\\nAccount owner: Wellington Beekeepers Association Incorporated\\u003Cbr \\/\\u003E\\r\\nAccount number: \\u003Cstrong\\u003E03 \\u2013 1534 \\u2013 0009311 \\u2013 00\\u003C\\/strong\\u003E\\u003Cbr \\/\\u003E\\r\\n\\u003Cbr \\/\\u003E\\r\\nPayment instructions: Please deposit the amount owing promptly.\\u003Cbr \\/\\u003E\\r\\n\\u003C\\/p\\u003E",
                    "format" : "filtered_html"
                  }
                }
              }
            }
          }
        }
      ]
    }
  }');
  return $items;
}
