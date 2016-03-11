<?php
/**
 * @file
 * Enables modules and site configuration for a standard site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function kkms_profile_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
}

/**
 * Implements hook_install_tasks().
 *
 * Important to note - this happens after modules install and locale setup
 */
function kkms_profile_install_tasks() {
  return array(
    'kkms_profile_create_initial_content' => array(
      'display_name' => st('Create initial content'),
    ),
  );
}

/**
 * Create and enable initial content that can't be exported to features,
 * but should be available on istallation.
 */
function kkms_profile_create_initial_content() {
  _kkms_profile_create_standard_menus();
  _kkms_profile_enable_standard_blocks();
  _kkms_profile_setup_languages();
  _kkms_profile_setup_password_policy();
  _kkms_profile_create_homepage();
}

/**
 * Enables menus, which we can't export as features, because we need to be
 * able to override them on individual sites.
 */
function _kkms_profile_create_standard_menus() {
  // Create bottom menu - will be attached from feature
  $menu = array(
    'menu_name' => 'menu-footer-bottom',
    'title' => 'Copenhagen Commune',
    'description' => 'Quick navigation links placed in the bottom part of the footer.',
    'language' => LANGUAGE_NONE,
    'i18n_mode' => I18N_MODE_LOCALIZE | I18N_MODE_TRANSLATE,
  );
  menu_save($menu);
}

/**
 * Enables blocks, which we can't export as features, because we need to be
 * able to override them on individual sites.
 */
function _kkms_profile_enable_standard_blocks() {
  // Create custom block for contact in footer
  $block = array(
    'module' => 'block',
    'delta' => NULL,
    'title' => 'Kontakt',
    'info' => 'Footer contact block',
    'body' => array(
      'value' => '<p>København Kommune</p><p>Borgeservice</p><p>Tel. 33 66 33 66</p>',
      'format' => 'full_html',
    ),
    'regions' => array(
      'kkms_theme' => 'footer',
      'seven' => -1,
    ),
    'visibility' => '0',
    'pages' => '',
    'roles' => array(),
    'custom' => '0',
    'bid' => 0,
    'i18n_mode' => 0,
  );
  module_load_include('inc', 'block', 'block.admin');
  $form_state = array('values' => $block);
  block_add_block_form_submit(array(), $form_state);
  $delta = $form_state['values']['delta'];
  // Place contact block before other blocks in footer
  db_update('block')
    ->fields(array(
      'weight' => -150,
      'region' => 'footer',
    ))
    ->condition('module', 'block')
    ->condition('theme', 'kkms_theme')
    ->condition('delta', $delta)
    ->execute();
}

/**
 * Set Danish as the single enabled language.
 */
function _kkms_profile_setup_languages() {
  $form_state = array();
  $form_state['values']['site_default'] = 'da';
  $languages = language_list('language');
  foreach ($languages as $langcode => $language) {
    $form_state['values']['enabled'][$langcode] = 0;
    $form_state['values']['weight'][$langcode] = 0;
  }
  module_load_include('inc', 'locale', 'locale.admin');
  drupal_form_submit('locale_languages_overview_form_submit', $form_state);
}

function _kkms_profile_setup_password_policy() {
  $pid = db_insert('password_policy')
    ->fields(array(
      'name' => 'General policy',
      'description' => '',
      'enabled' => 1,
      'policy' => 'a:7:{s:6:"length";s:1:"6";s:8:"username";s:1:"1";s:15:"digit_placement";s:1:"1";s:9:"uppercase";s:1:"1";s:5:"digit";s:1:"1";s:9:"lowercase";s:1:"1";s:6:"letter";s:1:"1";}',
      'expiration' => 0,
      'warning' => '',
    )
  )
  ->execute();
  if($pid) {
    $roles = user_roles();
    unset($roles[DRUPAL_ANONYMOUS_RID]);
    foreach ($roles as $rid => $name) {
      db_insert('password_policy_role')
        ->fields(array(
          'pid' => $pid,
          'rid' => $rid,
        ))
        ->execute();
    }
  }
}

/**
 * Helper function - create Section page to be used for site home page.
 */
function _kkms_profile_create_homepage() {
  $t = get_t();

  $node = new stdClass();
  $node->title = $t('Home page'); // Forside
  $node->type = 'section_page';
  // Use one home page for all languages.
  $node->language = LANGUAGE_NONE;
  // Adding certain content-type defaults.
  node_object_prepare($node);
  node_save($node);

  // setting home page
  variable_set('site_frontpage', 'node/' . $node->nid);
}
