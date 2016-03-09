<?php
/**
 * @file
 * linkit_profiles.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function linkit_profiles_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new stdClass();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'editorial_profile';
  $linkit_profile->admin_title = 'Editorial profile';
  $linkit_profile->data = array(
    'plugins' => array(
      'entity:taxonomy_term' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'entity:node' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'entity:file' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'entity:user' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
    ),
    'entity:node' => array(
      'result_description' => '[node:title] [[node:type] - nid: [node:nid]]',
      'bundles' => array(
        'area' => 0,
        'article' => 0,
        'blog' => 0,
        'contact_page' => 0,
        'decision_tree_item' => 0,
        'event' => 0,
        'faq_qa' => 0,
        'factbox' => 0,
        'factbox_card_info' => 0,
        'factbox_figures' => 0,
        'forum' => 0,
        'script' => 0,
        'image_map' => 0,
        'image_slideshow' => 0,
        'institution' => 0,
        'map' => 0,
        'news' => 0,
        'organisation' => 0,
        'person' => 0,
        'place' => 0,
        'section_page' => 0,
        'service' => 0,
        'service_situation' => 0,
        'service_spot' => 0,
        'simplenews' => 0,
        'stepbox' => 0,
        'stepbox_tabs' => 0,
        'table' => 0,
        'video' => 0,
        'webform' => 0,
      ),
      'group_by_bundle' => 1,
      'reverse_menu_trail' => 0,
      'include_unpublished' => 0,
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'image' => 0,
        'video' => 0,
        'audio' => 0,
        'document' => 0,
      ),
      'group_by_bundle' => 1,
      'reverse_menu_trail' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'image_extra_info' => array(
        'dimensions' => 'dimensions',
        'thumbnail' => 0,
      ),
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'newsletter' => 0,
        'forums' => 0,
        'channels' => 0,
        'activity' => 0,
        'article_type' => 0,
        'competence' => 0,
        'event' => 0,
        'institution' => 0,
        'job_title' => 0,
        'meeting' => 0,
        'news_type' => 0,
        'place' => 0,
        'kle' => 0,
        'tags' => 0,
        'tags_local' => 0,
        'tags_open' => 0,
        'common' => 0,
        'service_type' => 0,
        'kkorg' => 0,
        'working_hours_vocabulary' => 0,
      ),
      'group_by_bundle' => 0,
      'reverse_menu_trail' => 0,
    ),
    'entity:user' => array(
      'result_description' => '',
      'reverse_menu_trail' => 0,
    ),
    'autocomplete' => array(
      'charLimit' => 3,
      'wait' => 350,
      'remoteTimeout' => 10000,
    ),
    'attributes' => array(
      'rel' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'class' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'accesskey' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'id' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'title' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
    ),
  );
  $linkit_profile->role_rids = array(
    2 => 1,
  );
  $linkit_profile->weight = 0;
  $export['editorial_profile'] = $linkit_profile;

  return $export;
}
