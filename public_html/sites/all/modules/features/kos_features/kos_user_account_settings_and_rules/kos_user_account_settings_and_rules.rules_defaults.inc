<?php
/**
 * @file
 * kos_user_account_settings_and_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function kos_user_account_settings_and_rules_default_rules_configuration() {
  $items = array();
  $items['rules_account_has_been_deleted_'] = entity_import('rules_config', '{ "rules_account_has_been_deleted_" : {
      "LABEL" : "Account has been deleted.",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "User" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_delete" ],
      "DO" : [
        { "mail" : {
            "to" : [ "account:mail" ],
            "subject" : "[account:name] deleted",
            "message" : "[account:name] your account has been deleted.",
            "language" : [ "account:language" ]
          }
        }
      ]
    }
  }');
  $items['rules_add_role_to_new_user_account'] = entity_import('rules_config', '{ "rules_add_role_to_new_user_account" : {
      "LABEL" : "Add role to new user account",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "User" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_insert" ],
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "6" : "6" } } } },
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4" } },
            "subject" : "New user account has been saved.",
            "message" : "ID: [account:uid]\\r\\nUsername: [account:name]\\r\\nEdit link: [account:edit-url]"
          }
        }
      ]
    }
  }');
  $items['rules_administrative_disapproval_for_user_account_'] = entity_import('rules_config', '{ "rules_administrative_disapproval_for_user_account_" : {
      "LABEL" : "Administrative disapproval for user account.",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "User" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_update" ],
      "IF" : [ { "user_is_blocked" : { "account" : [ "account" ] } } ],
      "DO" : [
        { "mail" : {
            "to" : [ "account:mail" ],
            "subject" : "[account:name] blocked.",
            "message" : "Your account has been blocked.",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_notify_administrator_for_new_events_added'] = entity_import('rules_config', '{ "rules_notify_administrator_for_new_events_added" : {
      "LABEL" : "Notify administrator for new events added",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "school_event" : "school_event" } }
          }
        }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4" } },
            "subject" : "New event added to [site:name]",
            "message" : "New event added to [site:name]\\r\\n\\r\\nTitle: [node:title]\\r\\n\\r\\nText: \\r\\n[node:field-teaser]\\r\\n\\r\\nURL:\\r\\n[node:url]"
          }
        }
      ]
    }
  }');
  return $items;
}
