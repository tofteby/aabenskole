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
function kos_profile_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
}

/**
 * Implements hook_install_tasks().
 *
 * Important to note - this happens after modules install and locale setup
 */
function kos_profile_install_tasks() {
  return array(
    'kos_profile_create_initial_content' => array(
      'display_name' => st('Create initial content'),
    ),
  );
}

/**
 * Create and enable initial content that can't be exported to features,
 * but should be available on istallation.
 */
function kos_profile_create_initial_content() {
  _kos_profile_create_standard_menus();
  _kos_profile_enable_standard_blocks();
  _kos_profile_setup_languages();
  _kos_profile_setup_password_policy();
  _kos_profile_create_homepage();
  _kos_profile_setup_themekey_rule();
}

/**
 * Enables menus, which we can't export as features, because we need to be
 * able to override them on individual sites.
 */
function _kos_profile_create_standard_menus() {
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
function _kos_profile_enable_standard_blocks() {
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
    ->fields(array('weight' => -150, 'region' => 'footer',))
    ->condition('module', 'block')
    ->condition('theme', 'kkms_theme')
    ->condition('delta', $delta)
    ->execute();
}

/**
 * Set Danish as the single enabled language.
 */
function _kos_profile_setup_languages() {
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

/**
 * Initial configuration of the passowrd policy for the website.
 */
function _kos_profile_setup_password_policy() {
  $pid = db_insert('password_policy')
    ->fields(array(
      'name' => 'General policy',
      'description' => '',
      'enabled' => 1,
      'policy' => serialize(array(
        'length' => 6,
        'digit' => 1,
        'letter' => 1,
        'username' => 1,
        'lowercase' => 1,
        'uppercase' => 1,
        'digit_placement' => 1,
      )),
      'expiration' => 0,
      'warning' => '',
    ))
    ->execute();
  if($pid) {
    $roles = user_roles();
    unset($roles[DRUPAL_ANONYMOUS_RID]);
    foreach ($roles as $rid => $name) {
      db_insert('password_policy_role')
        ->fields(array('pid' => $pid, 'rid' => $rid,))
        ->execute();
    }
  }
}

/**
 * Helper function - create Section page to be used for site home page.
 */
function _kos_profile_create_homepage() {
  $t = get_t();

  // Prepare the node's stdClass instance.
  $node = new stdClass();
  $node->title = $t('Home page'); // Forside
  $node->type = 'section_page';
  $node->language = LANGUAGE_NONE; // Use one home page for all languages.

  // Adding certain content-type defaults.
  node_object_prepare($node);
  node_save($node);

  // Set the required layout for the homepage.
  $front_page = node_load($node->nid);
  $panelizer = $front_page->panelizer['full'];
  $panelizer->display->layout = 'threecol_33_34_33_stacked';
  panels_save_display($panelizer->display);
  // setting home page
  variable_set('site_frontpage', 'node/' . $node->nid);
}

/**
 * Set theme rule for content provider role.
 */
function _kos_profile_setup_themekey_rule() {
  // Create form state.
  $form_state = array();

  // Add rule for content provider (parent).
  $form_state['values']['old_items'][0]['property'] = 'user:role';
  $form_state['values']['old_items'][0]['wildcard'] = '';
  $form_state['values']['old_items'][0]['operator'] = '=';
  $form_state['values']['old_items'][0]['value'] = 'Content provider';
  $form_state['values']['old_items'][0]['theme'] = 'kos_theme';
  $form_state['values']['old_items'][0]['enabled'] = '1';
  $form_state['values']['old_items'][0]['parent'] = '0';
  $form_state['values']['old_items'][0]['weight'] = '1';
  $form_state['values']['old_items'][0]['depth'] = '0';
  $form_state['values']['old_items'][0]['module'] = 'themekey';

  // Insert into database.
  module_load_include('inc', 'themekey', 'themekey_admin');
  drupal_form_submit('themekey_rule_chain_form_submit', $form_state);

  // Get last insert id.
  $id = db_select('themekey_properties', 'tp')
    ->fields('tp', array('id'))
    ->condition('tp.property', 'user:role')
    ->condition('tp.value', 'Content provider')
    ->condition('tp.theme', 'kos_theme')
    ->condition('tp.module', 'themekey')
    ->orderBy('id', 'DESC')
    ->execute()
    ->fetchField();

//  if (!$id) {
//    //@todo error
//  }

  // Add rule for school event content type (child).
  $form_state['values']['old_items'][0]['property'] = 'node:type';
  $form_state['values']['old_items'][0]['wildcard'] = '';
  $form_state['values']['old_items'][0]['operator'] = '=';
  $form_state['values']['old_items'][0]['value'] = 'school_event';
  $form_state['values']['old_items'][0]['theme'] = 'kos_theme';
  $form_state['values']['old_items'][0]['enabled'] = '1';
  $form_state['values']['old_items'][0]['parent'] = $id;
  $form_state['values']['old_items'][0]['weight'] = '2';
  $form_state['values']['old_items'][0]['depth'] = '0';
  $form_state['values']['old_items'][0]['module'] = 'themekey';

  // Insert into database.
  drupal_form_submit('themekey_rule_chain_form_submit', $form_state);
  drupal_set_message('Test themekey success.');
}
