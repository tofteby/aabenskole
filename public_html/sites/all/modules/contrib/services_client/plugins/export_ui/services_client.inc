<?php

/**
* Define this Export UI plugin.
*/
$plugin = array(
  // The name of the table as found in the schema in hook_install. This
  // must be an exportable type with the 'export' section defined.
  'schema' => 'services_client_connection_hook',
  // The access permission to use. If not provided it will default to
  // 'administer site configuration'
  'access' => 'administer services client',
  // You can actually define large chunks of the menu system here. Nothing
  // is required here. If you leave out the values, the prefix will default
  // to admin/structure and the item will default to the plugin name.
  'menu' => array(
    'menu item' => 'services_client',
    // Title of the top level menu. Note this should not be translated,
    // as the menu system will translate it.
    'menu title' => 'Services Client',
    // Description of the top level menu, which is usually needed for
    // menu items in an administration list. Will be translated
    // by the menu system.
    'menu description' => 'Administer Services Client Connection Hooks.',
    // Add services specific own menu callbacks.
    'items' => array(
      'condition' => array(
        'path' => 'list/%ctools_export_ui/condition',
        'title' => 'Conditions',
        'page callback' => 'ctools_export_ui_switcher_page',
        'page arguments' => array('services_client', 'condition', 4),
        'load arguments' => array('services_client'),
        'access arguments' => array('administer services client'),
        'type' => MENU_LOCAL_TASK,
      ),
      'mapping' => array(
        'path' => 'list/%ctools_export_ui/mapping',
        'title' => 'Mappings',
        'page callback' => 'ctools_export_ui_switcher_page',
        'page arguments' => array('services_client', 'mapping', 4),
        'load arguments' => array('services_client'),
        'access arguments' => array('administer services client'),
        'type' => MENU_LOCAL_TASK,
        'weight' => -1,
      ),
    ),
  ),

  // These are required to provide proper strings for referring to the
  // actual type of exportable. "proper" means it will appear at the
  // beginning of a sentence.
  'title singular' => t('hook'),
  'title plural' => t('hooks'),
  'title singular proper' => t('Services Client Connection hook'),
  'title plural proper' => t('Services Client Connection hook'),

  // This will provide you with a form for editing the properties on your
  // exportable, with validate and submit handler.
  //
  // The item being edited will be in $form_state['item'].
  //
  // The submit handler is only responsible for moving data from
  // $form_state['values'] to $form_state['item'].
  //
  // All callbacks will accept &$form and &$form_state as arguments.

  // Add our custom operations.
  'allowed operations' => array(
    'condition' => array('title' => t('Edit Conditions')),
    'mapping'  => array('title' => t('Edit Mappings')),
  ),
  'form' => array(
    'settings' => 'services_client_ctools_export_ui_form',
    'validate' => 'services_client_ctools_export_ui_form_validate',
    'submit' => 'services_client_ctools_export_ui_form_submit',
  ),
  'handler' => array(
    'class' => 'services_client_ui',
    'parent' => 'ctools_export_ui',
  ),
);

/**
* Define the preset add/edit form.
*/
function services_client_ctools_export_ui_form(&$form, &$form_state) {
  // Include the dependent helper
  ctools_include('dependent');
  $hook = &$form_state['item'];

  $breadcrumb = array();
  $breadcrumb[] = l(t('Home'), '');
  $breadcrumb[] = l(t('Administration'), 'admin');
  $breadcrumb[] = l(t('Structure'), 'admin/structure');
  $breadcrumb[] = l(t('Services Client'), 'admin/structure/services_client');

  // Set Breadcrumbs
  drupal_set_breadcrumb($breadcrumb);


  $form['title'] = array(
    '#type' => 'textfield',
    '#title' => t('Description'),
    '#description' => t('The human readable name or description of this connection hook.'),
    '#default_value' => $hook->title,
    '#required' => true,
  );

  $form['name'] = array(
    '#type' => 'machine_name',
    '#title' => t('Machine name'),
    '#default_value' => !empty($hook->name) ? $hook->name : '',
    '#maxlength' => 32,
    '#description' => t('Specify a machine-name for this hook (lowercase and underscores only).'),
    '#machine_name' => array(
      'exists' => 'services_client_services_connection_hook_exists',
      'source' => array('title'),
      'label' => t('Machine name'),
      'conn_name' => $hook->name,
    ),
  );

  // Get all available connections
  $connections = services_client_connection_load_all();
  $avail_conns = array();
  foreach ($connections as $connection) {
    $avail_conns[$connection->name] = $connection->name;
  }

  $form['conn_name'] = array(
    '#type' => 'select',
    '#title' => t('Connection'),
    '#description' => t('Choose the Connection for which to this hook is valid.'),
    '#options' => $avail_conns,
    '#default_value' => !empty($hook->conn_name) ? $hook->conn_name : '',
    '#required' => TRUE,
  );

  $avail_hooks = array(
    'node_save' => 'Node Save',
    'node_delete' => 'Node Delete',
    'user_save' => 'User Save',
    'webform_submission_save' => 'Webform Submission Save',
  );

  // If we have a value for the hook type ($form['hook']) from $form_state['values'] we use
  // this both as the default value for the hook type select list and also as a
  // parameter to pass to the function that retrieves the options for the
  // plugins.
  $default_hook = !empty($hook->hook) ? $hook->hook : key($avail_hooks);
  $selected_hook = isset($form_state['values']['hook']) ? $form_state['values']['hook'] : $default_hook;

  $form['hook'] = array(
    '#type' => 'select',
    '#title' => t('Drupal hook'),
    '#description' => t('Choose the Drupal hook for which to execute the services connection.'),
    '#options' => $avail_hooks,
    '#default_value' => $selected_hook,
    '#required' => TRUE,
    '#ajax' => array(
      // When 'event' occurs, Drupal will perform an ajax request in the
      // background. Usually the default value is sufficient (eg. change for
      // select elements), but valid values include any jQuery event,
      // most notably 'mousedown', 'blur', and 'submit'.
      'event' => 'change',
      'callback' => 'services_client_ajax_callback',
      'wrapper' => 'scc-plugins',
    ),
  );

  $form['plugins'] = array(
    '#tree' => FALSE,
    '#prefix' => '<div id="scc-plugins">',
    '#suffix' => '</div>',
    '#type' => 'item',
  );

  $form['plugins']['mapping'] = array(
    '#type' => 'select',
    '#title' => t('Mapping'),
    '#options' => services_client_plugin_options('mapping', $selected_hook),
    '#description' => t('Select a mapping plugin. Default is node mapping'),
    '#default_value' => $hook->config['mapping']['plugin'],

  );

  $form['plugins']['condition'] = array(
    '#type' => 'select',
    '#title' => t('Condition'),
    '#description' => t('Select a condition plugin. Default is node condition'),
    '#options' => services_client_plugin_options('condition', $selected_hook),
    '#default_value' => $hook->config['condition']['plugin'],
  );
}

/**
 * Selects just the plugins to be returned for re-rendering
 *
 * Since the controlling logic for populating the form is in the form builder
 * function, all we do here is select the element and return it to be updated.
 *
 * @return renderable array (plugins)
 */
function services_client_ajax_callback($form, $form_state) {
    return $form['plugins'];
}


/**
 * Helper function to populate the second dropdown. This would normally be
 * pulling data from the database.
 *
 * @param type. This can be either mapping or conditions.
 * @param key. This will determine which set of options is returned.
 *
 * @return array of options
 */
function services_client_plugin_options($type = 'mapping', $key = '') {
  return services_client_get_plugins($type, TRUE, $key);
}

/**
 * Validate function
 */
function services_client_ctools_export_ui_form_validate($form, &$form_state) {

}

/**
* Submit handler for the preset edit form.
*/
function services_client_ctools_export_ui_form_submit($form, &$form_state) {
  $item = &$form_state['item'];
  $item->config['mapping']['plugin'] = $form_state['values']['mapping'];
  $item->config['condition']['plugin'] = $form_state['values']['condition'];
}
