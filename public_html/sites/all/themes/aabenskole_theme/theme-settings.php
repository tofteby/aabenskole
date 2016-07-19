<?php

/**
 * Implements hook_form_system_theme_settings_alter()
 */
function aabenskole_theme_form_system_theme_settings_alter(&$form, &$form_state, $form_id = NULL) {
  $theme_path = drupal_get_path('theme', 'aabenskole_theme');
  global $theme_key;



  //Add color javascript
  $form['#attached']['js'] = array(
    $theme_path . '/js/libraries/jscolor/jscolor.js',
  );

   $form['#attached']['js'] = array(
    $theme_path . '/js/theme-settings.js',
  );

  $form['#attached']['css'] = array(
    $theme_path . '/css/theme-settings.css',
  );

  $form['default_theme_settings_group'] = array(
    '#type' => 'fieldset',
    '#title' => t('Default theme settings'),
    '#weight'        => -10
   );

  //$testval = isset(theme_get_setting('default_theme_set')) ? theme_get_setting('default_theme_set') : 1;

  $form['default_theme_settings_group']['default_theme_set'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use default theme settings'),
    '#default_value' => (theme_get_setting('default_theme_set') !== null) ? theme_get_setting('default_theme_set') : 0,
    '#description' => t('Uncheck here if you want to customize the theme.')
  );

  $form['default_theme_settings_group']['theme_settings_container'] = array(
    '#type' => 'container',
    '#states' => array(
      // Hide the logo settings when using the default logo.
      'invisible' => array(
        'input[name="default_theme_set"]' => array('checked' => TRUE),
      ),
    ),
  );

  $form['default_theme_settings_group']['theme_settings_container']['colors'] = array(
    '#type' => 'fieldset',
    '#title' => t('Colors'),
    '#weight'        => -9
  );

  $form['default_theme_settings_group']['theme_settings_container']['layout'] = array(
    '#type' => 'fieldset',
    '#title' => t('Layout'),
    '#weight'        => -8
  );

  $form['default_theme_settings_group']['theme_settings_container']['images'] = array(
    '#type' => 'fieldset',
    '#title' => t('Images'),
    '#weight'        => -7
  );

  $form['config'] = array(
    '#type' => 'fieldset',
    '#title' => t('Config Settings'),
  );

  $form['config']['compass_path'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Compass path'),
    '#default_value' => ((theme_get_setting('compass_path') !== null)) ? theme_get_setting('compass_path') : 'compass',
    '#description'   => t("Specifies compass path"),
  );

  $form['config']['debug_info'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show debug info'),
    '#default_value' => ((theme_get_setting('debug_info') !== null)) ? theme_get_setting('debug_info') : FALSE,
    '#tree' => TRUE,
    '#description' => t('Show debug info. Default false.')
  );


  /************    COLOR SETTINGS     ***************/

  $form['default_theme_settings_group']['theme_settings_container']['colors']['default_color_scheme'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use default color schemes.'),
    '#default_value' => (theme_get_setting('default_color_scheme') !== null) ? theme_get_setting('default_color_scheme') : 1,
    '#tree' => TRUE,
    '#description' => t('Uncheck here if you want the theme to use a custom color scheme.')
  );

  $form['default_theme_settings_group']['theme_settings_container']['colors']['settings'] = array(
    '#type' => 'container',
    '#states' => array(
      // Hide the logo settings when using the default logo.
      'invisible' => array(
        'input[name="default_color_scheme"]' => array('checked' => FALSE),
        //'input[name="col_back"]' => array('checked' => TRUE),

      ),
    ),
  );

  $form['default_theme_settings_group']['theme_settings_container']['colors']['settings']['col_scheme']= array(
    '#type' => 'radios',
    '#title' => t('Color schemes'),
    '#options' => array('15A38D:181515:444444:15414D:$white:$grey:$black' => 'Color scheme 1',
                        'FFDB12:181515:231F20:181515:$black:$black:$black' => 'Color scheme 2',
                        '5B6771:FFFFFF:444444:181515:$white:$white:$black' => 'Color scheme 3'),
    '#default_value' => ((theme_get_setting('col_scheme') !== null)) ? theme_get_setting('col_scheme') : '15A38D:181515:444444:15414D:$white:$grey:$black',
  );

  $form['default_theme_settings_group']['theme_settings_container']['colors']['settings_custom'] = array(
    '#type' => 'container',
    '#states' => array(
      // Hide the logo settings when using the default logo.
      'invisible' => array(
        'input[name="default_color_scheme"]' => array('checked' => TRUE),
      ),
    ),
  );

  $form['default_theme_settings_group']['theme_settings_container']['colors']['settings_custom']['col_primary'] = array(
    '#type'          => 'jquery_colorpicker',
    '#title'         => t('Primary color'),
    '#size'          => 10,
    '#default_value' => ((theme_get_setting('col_primary') !== null)) ? theme_get_setting('col_primary') : '15A38D',
    '#description'   => t("Primary color. Used on: Main menu, links, linked icons, active background, hover background, hover text color, search icon, background color on default buttons, pagers, slideshow etc."),
    '#attributes' => array(
      'class' => array('color'),
    ),
    '#themesetting'  => true,
  );

  $form['default_theme_settings_group']['theme_settings_container']['colors']['settings_custom']['col_back'] = array(
    '#type'          => 'jquery_colorpicker',
    '#title'         => t('Background color'),
    '#size'          => 10,
    '#default_value' => ((theme_get_setting('col_back') !== null)) ? theme_get_setting('col_back') : '181515',
    '#description'   => t("Sets the background color."),
    '#attributes' => array(
        'class' => array('color'),
      ),
    '#themesetting'  => true,
  );

  $form['default_theme_settings_group']['theme_settings_container']['colors']['settings_custom']['col_text'] = array(
    '#type'          => 'jquery_colorpicker',
    '#title'         => t('Text color'),
    '#size'          => 10,
    '#default_value' => ((theme_get_setting('col_text') !== null)) ? theme_get_setting('col_text') : '444444',
    '#description'   => t("Sets the text color. Used on: Default text,  Hover color icon links, shadows (with opacity),page background (with opacity)"),
    '#attributes' => array(
        'class' => array('color'),
      ),
    '#themesetting'  => true,
  );

  $form['default_theme_settings_group']['theme_settings_container']['colors']['settings_custom']['col_button_hover'] = array(
    '#type'          => 'jquery_colorpicker',
    '#title'         => t('Button hover color'),
    '#size'          => 10,
    '#default_value' => ((theme_get_setting('col_button_hover') !== null)) ? theme_get_setting('col_button_hover') : '15414D',
    '#description'   => t("Sets the button hover color on certain buttons"),
    '#attributes' => array(
        'class' => array('color'),
      ),
    '#themesetting'  => true,
  );

  $form['default_theme_settings_group']['theme_settings_container']['colors']['settings_custom']['col_menu_bg'] = array(
    '#type' => 'radios',
    '#title' => t('Menu background color'),
    '#options' => array('$white' => 'White',
                        '$black' => 'Black'),
    '#default_value' => ((theme_get_setting('col_menu_bg') !== null)) ? theme_get_setting('col_menu_bg') : '$white',
    '#themesetting'  => true,
  );

  $form['default_theme_settings_group']['theme_settings_container']['colors']['settings_custom']['col_footer_bg'] = array(
    '#type' => 'radios',
    '#title' => t('Footer background color'),
    '#options' => array('$grey' => 'Grey',
                        '$white' => 'White',
                        '$black' => 'Black'),
    '#default_value' => ((theme_get_setting('col_footer_bg') !== null)) ? theme_get_setting('col_footer_bg') : '$grey',
    '#themesetting'  => true,
  );

  $form['default_theme_settings_group']['theme_settings_container']['colors']['settings_custom']['col_bottom_bg'] = array(
    '#type' => 'radios',
    '#title' => t('Bottom background color'),
    '#options' => array('$grey' => 'Grey',
                        '$white' => 'White',
                        '$black' => 'Black'),
    '#default_value' => ((theme_get_setting('col_bottom_bg') !== null)) ? theme_get_setting('col_bottom_bg') : '$black',
    '#themesetting'  => true,
  );


  $form['default_theme_settings_group']['theme_settings_container']['colors']['settings_custom']['col_shadows'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use primary color for shadows.'),
    '#default_value' => ((theme_get_setting('col_shadows') !== null)) ? theme_get_setting('col_shadows') : FALSE,
    '#tree' => TRUE,
    '#description' => t('Use primary color for shadows .')
  );

  $form['default_theme_settings_group']['theme_settings_container']['colors']['settings_custom']['col_menu_link'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use primary color for menu link text.'),
    '#default_value' => ((theme_get_setting('col_menu_link') !== null)) ? theme_get_setting('col_menu_link') : FALSE,
    '#tree' => TRUE,
    '#description' => t('Use primary color for menu link text.')
  );

  /*****************   LAYOUT SETTINGS  ********************/

  $form['default_theme_settings_group']['theme_settings_container']['layout']['layout_full'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use full width decks'),
    '#default_value' => ((theme_get_setting('layout_full') !== null)) ? theme_get_setting('layout_full') : TRUE,
    '#tree' => TRUE,
    '#description' => t('Controls whether the decks run full width with a background color. Use the background color.')
  );
  
/*   $form['default_theme_settings_group']['theme_settings_container']['layout']['settings'] = array(
    '#type' => 'container',
    '#states' => array(
      // Hide the logo settings when using the default logo.
      'invisible' => array(
        'input[name="layout_full"]' => array('checked' => TRUE),
      ),
    ),
  ); */
  
  $form['default_theme_settings_group']['theme_settings_container']['layout']['settings']['layout_bg_expose'] = array(
    '#type' => 'checkbox',
    '#title' => t('Expose the background image to the max.'),
    '#default_value' => ((theme_get_setting('layout_bg_expose') !== null)) ? theme_get_setting('layout_bg_expose') : FALSE,
    '#tree' => TRUE,
    '#description' => t('Controls how much of the background image should be exposed.')
  );
  
  $form['default_theme_settings_group']['theme_settings_container']['layout']['under_menu_line'] = array(
    '#type' => 'checkbox',
    '#title' => t('Primary color colored line under menu section.'),
    '#default_value' => ((theme_get_setting('under_menu_line') !== null)) ? theme_get_setting('under_menu_line') : FALSE,
    '#tree' => TRUE,
    '#description' => t('Controls if the line under the menu section should be in primary color or transparent.')
  );


  /******************   IMAGE SETTINGS   *******************/

  // Defining a managed_file form element:
  $form['default_theme_settings_group']['theme_settings_container']['images']['header_img_title'] = array(
    '#markup' => '<h4>' . t('Header image settings') . '</h4>',
  );

  $form['default_theme_settings_group']['theme_settings_container']['images']['no_image_header'] = array(
    '#type' => 'checkbox',
    '#title' => t('Don\'t use header image'),
    '#default_value' => theme_get_setting('no_image_header', $theme_key),
    '#tree' => FALSE,
    '#description' => t('Uncheck here if you want the theme to use a header image.')
  );

  $form['default_theme_settings_group']['theme_settings_container']['images']['settings'] = array(
    '#type' => 'container',
    '#states' => array(
      // Hide the logo settings when using the default logo.
      'invisible' => array(
        'input[name="no_image_header"]' => array('checked' => TRUE),
      ),
    ),
  );

  $form['default_theme_settings_group']['theme_settings_container']['images']['settings']['image_header_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Header image'),
    '#description' => t('The image you would like to use as header image.'),
    '#default_value' => theme_get_setting('image_header_name', $theme_key),
  );

  $form['default_theme_settings_group']['theme_settings_container']['images']['settings']['image_header_path'] = array(
    '#type' => 'hidden',
    '#description' => t('The image you would like to use as header image.'),
    '#default_value' => theme_get_setting('image_header_path'),
  );

  $form['default_theme_settings_group']['theme_settings_container']['images']['settings']['image_header_upload'] = array(
    '#title' => t('Header image'),
    '#type' => 'file',
    '#description' => t('Upload a custom header image for your site. Dimensions to display properly must be: 968 x 300'),
    '#upload_location' => 'public://theme_images/',

    '#upload_validators' => array(
        'file_validate_extensions' => array("png jpg jpeg gif"),
    ),
  );

  $form['default_theme_settings_group']['theme_settings_container']['images']['bg_img_title'] = array(
    '#markup' => '<h4>' . t('Background image settings') . '</h4>',
  );

  $form['default_theme_settings_group']['theme_settings_container']['images']['no_bg_image'] = array(
    '#type' => 'checkbox',
    '#title' => t('Don\'t use background image'),
    '#default_value' => theme_get_setting('no_bg_image', $theme_key),
    '#tree' => FALSE,
    '#description' => t('Uncheck here if you want the theme to use a background image.')
  );

  $form['default_theme_settings_group']['theme_settings_container']['images']['settings_bg_image'] = array(
    '#type' => 'container',
    '#states' => array(
      // Hide the logo settings when using the default logo.
      'invisible' => array(
        'input[name="no_bg_image"]' => array('checked' => TRUE),
      ),
    ),
  );

  $form['default_theme_settings_group']['theme_settings_container']['images']['settings_bg_image']['image_bg_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Background image'),
    '#description' => t('The file you would like to use as your background image.'),
    '#default_value' => theme_get_setting('image_bg_path', $theme_key),
  );

  $form['default_theme_settings_group']['theme_settings_container']['images']['settings_bg_image']['image_bg_path'] = array(
    '#type' => 'hidden',
    '#description' => t('The path to the file you would like to use as your background image.'),
    '#default_value' => theme_get_setting('image_bg_path'),
  );

  $form['default_theme_settings_group']['theme_settings_container']['images']['settings_bg_image']['image_bg_upload'] = array(
    '#title' => t('Background image'),
    '#type' => 'file',
    '#description' => t('Upload a custom background image for your site.'),

    '#upload_location' => 'public://theme_images/',
    '#upload_validators' => array(
        'file_validate_extensions' => array("png jpg jpeg gif"),
    ),
  );





  $form['default_theme_settings_group']['theme_settings_container']['images']['footer_img_title'] = array(
    '#markup' => '<h4>' . t('Footer image settings') . '</h4>',
  );

  $form['default_theme_settings_group']['theme_settings_container']['images']['no_footer_image'] = array(
    '#type' => 'checkbox',
    '#title' => t('Don\'t use footer image'),
    '#default_value' => theme_get_setting('no_footer_image', $theme_key),
    '#tree' => FALSE,
    '#description' => t('Uncheck here if you want the theme to use a footer image.')
  );

  $form['default_theme_settings_group']['theme_settings_container']['images']['settings_footer_image'] = array(
    '#type' => 'container',
    '#states' => array(
      // Hide the logo settings when using the default logo.
      'invisible' => array(
        'input[name="no_footer_image"]' => array('checked' => TRUE),
      ),
    ),
  );

  $form['default_theme_settings_group']['theme_settings_container']['images']['settings_footer_image']['image_footer_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Footer image'),
    '#description' => t('The file you would like to use as your footer image.'),
    '#default_value' => theme_get_setting('image_footer_path', $theme_key),
  );

  $form['default_theme_settings_group']['theme_settings_container']['images']['settings_footer_image']['image_footer_path'] = array(
    '#type' => 'hidden',
    '#description' => t('The path to the file you would like to use as your footer image.'),
    '#default_value' => theme_get_setting('image_footer_path'),
  );

  $form['default_theme_settings_group']['theme_settings_container']['images']['settings_footer_image']['image_footer_upload'] = array(
    '#title' => t('Footer image'),
    '#type' => 'file',
    '#description' => t('Upload a custom footer image for your site. Dimensions to display properly must be: 1050 x 182'),

    '#upload_location' => 'public://theme_images/',
    '#upload_validators' => array(
        'file_validate_extensions' => array("png jpg jpeg gif"),
    ),
  );




  // Inject human-friendly values for images.
  foreach (array('image_bg_name', 'image_header_name', 'image_footer_name') as $image) {
    if (isset($form['default_theme_settings_group']['theme_settings_container']['images']['settings'][$image])) {
      $element = &$form['default_theme_settings_group']['theme_settings_container']['images']['settings'][$image];

      // If path is a public:// URI, display the path relative to the files
      // directory; stream wrappers are not end-user friendly.
      $original_path = $element['#default_value'];
      $friendly_path = NULL;
      if (file_uri_scheme($original_path) == 'public') {
        $friendly_path = file_uri_target($original_path);
        $element['#default_value'] = $friendly_path;
      }
    }
  }

  // Collapse forms
  $form['theme_settings']['#collapsible'] = TRUE;
  $form['theme_settings']['#collapsed'] = TRUE;
  $form['logo']['#collapsible'] = TRUE;
  $form['logo']['#collapsed'] = TRUE;
  $form['favicon']['#collapsible'] = TRUE;
  $form['favicon']['#collapsed'] = TRUE;
  $form['default_theme_settings_group']['theme_settings_container']['colors']['#collapsible'] = TRUE;
  $form['default_theme_set']['theme_settings_container']['colors']['#collapsed'] = FALSE;
  $form['default_theme_set']['theme_settings_container']['images']['#collapsible'] = TRUE;
  $form['default_theme_set']['theme_settings_container']['images']['#collapsed'] = FALSE;
  $form['config']['#collapsible'] = TRUE;
  $form['config']['#collapsed'] = TRUE;
  $form['default_theme_set']['theme_settings_container']['layout']['#collapsible'] = TRUE;
  $form['default_theme_set']['theme_settings_container']['layout']['#collapsed'] = FALSE;

  $form['#validate'][] = 'aabenskole_theme_form_system_theme_settings_validate';
  $form['#submit'][] = 'aabenskole_theme_form_system_theme_settings_submit';

  return $form;
}


function aabenskole_theme_form_system_theme_settings_validate($form, &$form_state) {
  // Handle file uploads.
  $validators = array('file_validate_is_image' => array());

  // Check for a new uploaded logo.
  $file = file_save_upload('image_header_upload', $validators);
  if (isset($file)) {
    // File upload was attempted.
    if ($file) {
      // Put the temporary file in form_values so we can save it on submit.
      $form_state['values']['image_header_upload'] = $file;
      //$form_state['values']['image_header_path'] =
    }
    else {
      // File upload failed.
      form_set_error('image_header_upload', t('The header image could not be uploaded.'));
    }
  }

  $validators = array('file_validate_extensions' => array('png gif jpg jpeg apng svg'));

  // Check for a new uploaded favicon.
  $file = file_save_upload('image_bg_upload', $validators);
  if (isset($file)) {
    // File upload was attempted.
    if ($file) {
      // Put the temporary file in form_values so we can save it on submit.
      $form_state['values']['image_bg_upload'] = $file;
    }
    else {
      // File upload failed.
      form_set_error('image_bg_upload', t('The background image could not be uploaded.'));
    }
  }

  // Check for a new uploaded favicon.
  $file = file_save_upload('image_footer_upload', $validators);
  if (isset($file)) {
    // File upload was attempted.
    if ($file) {
      // Put the temporary file in form_values so we can save it on submit.
      $form_state['values']['image_footer_upload'] = $file;
    }
    else {
      // File upload failed.
      form_set_error('image_footer_upload', t('The footer image could not be uploaded.'));
    }
  }


  // If the user provided a path for a header image or background image, make sure a file
  // exists at that path.
  if ($form_state['values']['image_header_name']) {
    $path = aabenskole_theme_system_theme_settings_validate_path($form_state['values']['image_header_name']);
    if (!$path) {
      form_set_error('image_header_name', t('The custom header image path is invalid.'));
    }
  }
  if ($form_state['values']['image_bg_name']) {
    $path = aabenskole_theme_system_theme_settings_validate_path($form_state['values']['image_bg_name']);
    if (!$path) {
      form_set_error('image_bg_name', t('The custom background path is invalid.'));
    }
  }
  if ($form_state['values']['image_footer_name']) {
    $path = aabenskole_theme_system_theme_settings_validate_path($form_state['values']['image_footer_name']);
    if (!$path) {
      form_set_error('image_footer_name', t('The custom footer path is invalid.'));
    }
  }
}


/**
 * Helper function for the aabenskole_theme_system_theme_settings_validate_path form.
 *
 * Attempts to validate normal system paths, paths relative to the public files
 * directory, or stream wrapper URIs. If the given path is any of the above,
 * returns a valid path or URI that the theme system can display.
 *
 * @param $path
 *   A path relative to the Drupal root or to the public files directory, or
 *   a stream wrapper URI.
 * @return mixed
 *   A valid path that can be displayed through the theme system, or FALSE if
 *   the path could not be validated.
 */
function aabenskole_theme_system_theme_settings_validate_path($path) {
  // Absolute local file paths are invalid.
  if (drupal_realpath($path) == $path) {
    return FALSE;
  }
  // A path relative to the Drupal root or a fully qualified URI is valid.
  if (is_file($path)) {
    return $path;
  }
  // Prepend 'public://' for relative file paths within public filesystem.
  if (file_uri_scheme($path) === FALSE) {
    $path = 'public://' . $path;
  }
  if (is_file($path)) {
    return $path;
  }
  return FALSE;
}

/**
 * Implements theme_form_FORMID_submit().
 * Submit handler for theme settings
 */
function aabenskole_theme_form_system_theme_settings_submit($form, &$form_state) {
  $path_to_theme = drupal_get_path('theme', 'aabenskole_theme');

  $public_files_theme_path = variable_get('file_public_path', conf_path() . '/files');

  $realpath_pftp = drupal_realpath($public_files_theme_path);

  //$path_to_settings_scss = drupal_get_path($public_files_theme_path) . '/scss/settings/_aabenskole.settings.scss';
  $path_to_settings_scss = $realpath_pftp . '/theme/scss/settings/_aabenskole.settings.scss';
  $create_path = $realpath_pftp . '/theme/scss/settings/';

  if (!file_exists($create_path)) {
    $status = mkdir($create_path, 0775, true);
  }

  $handle = fopen($path_to_settings_scss, 'c+');

  $values = $form_state['values'];

  // Extract the name of the theme from the submitted form values, then remove
  // it from the array so that it is not saved as part of the variable.
  $key = $values['var'];
  unset($values['var']);

  if ($handle) {

    if ($form_state['values']['default_color_scheme']) {
      $colors = explode(":", $form_state['values']['col_scheme']);

      $form_state['values']['col_primary']      = $form['default_theme_settings_group']['theme_settings_container']['colors']['settings_custom']['col_primary']['#value']          = $colors[0];
      $form_state['values']['col_back']         = $form['default_theme_settings_group']['theme_settings_container']['colors']['settings_custom']['col_back']['#value']          = $colors[1];
      $form_state['values']['col_text']         = $form['default_theme_settings_group']['theme_settings_container']['colors']['settings_custom']['col_text']['#value']          = $colors[2];
      $form_state['values']['col_button_hover'] = $form['default_theme_settings_group']['theme_settings_container']['colors']['settings_custom']['col_button_hover']['#value']  = $colors[3];
      $form_state['values']['col_menu_bg']      = $form['default_theme_settings_group']['theme_settings_container']['colors']['settings_custom']['col_menu_bg']['#value']  = $colors[4];
      $form_state['values']['col_footer_bg']    = $form['default_theme_settings_group']['theme_settings_container']['colors']['settings_custom']['col_footer_bg']['#value']  = $colors[5];
      $form_state['values']['col_bottom_bg']    = $form['default_theme_settings_group']['theme_settings_container']['colors']['settings_custom']['col_bottom_bg']['#value']  = $colors[6];

      $form['default_theme_settings_group']['theme_settings_container']['colors']['settings_custom']['col_primary']['#default_value']       = $colors[0];
      $form['default_theme_settings_group']['theme_settings_container']['colors']['settings_custom']['col_back']['#default_value']          = $colors[1];
      $form['default_theme_settings_group']['theme_settings_container']['colors']['settings_custom']['col_text']['#default_value']          = $colors[2];
      $form['default_theme_settings_group']['theme_settings_container']['colors']['settings_custom']['col_button_hover']['#default_value']  = $colors[3];
      $form['default_theme_settings_group']['theme_settings_container']['colors']['settings_custom']['col_menu_bg']['#default_value']       = $colors[4];
      $form['default_theme_settings_group']['theme_settings_container']['colors']['settings_custom']['col_footer_bg']['#default_value']     = $colors[5];
      $form['default_theme_settings_group']['theme_settings_container']['colors']['settings_custom']['col_bottom_bg']['#default_value']     = $colors[6];
    }

    // Remove old file content
    ftruncate($handle, 0);
    // Write colors to scss
    fwrite($handle, "\n// Colors\n");

    // Colors
    foreach ($form['default_theme_settings_group']['theme_settings_container']['colors']['settings_custom'] as $key => $value) {
      if(is_array($value) && isset($value['#themesetting']) && $value['#themesetting'] == true){
        if(strpos($value['#value'],'$') !== FALSE){
          fwrite($handle, '$' . $key . ': ' . substr($value['#value'], 1) . ";\n");
        }
        else{
          fwrite($handle, '$' . $key . ': #' . $value['#value'] . ";\n");
        }

      }
    }

    if($form_state['values']['default_color_scheme'] == 0){
      if($form_state['values']['col_shadows'] == 1){
        fwrite($handle, '$col_shadows: true;' . "\n");
      }
      else{
        fwrite($handle, '$col_shadows: false;' . "\n");
      }


      if($form_state['values']['col_menu_link'] == 1){
        fwrite($handle, '$col_menu_link: true;' . "\n");
      }
      else{
        fwrite($handle, '$col_menu_link: false;' . "\n");
      }
    }

    // write layout settings for images
    fwrite($handle, "\n// Layout\n");
    if ($form_state['values']['layout_full'] == 1) {
      fwrite($handle, '$layout_full: true;' . "\n");
    } else {
      fwrite($handle, '$layout_full: false;' . "\n");
    }

    if ($form_state['values']['layout_bg_expose'] == 1) {
      fwrite($handle, '$layout_bg_expose: true;' . "\n");
    } else {
      fwrite($handle, '$layout_bg_expose: false;' . "\n");
    }
    
    if ($form_state['values']['under_menu_line'] == 1) {
      fwrite($handle, '$under_menu_line: true;' . "\n");
    } else {
      fwrite($handle, '$under_menu_line: false;' . "\n");
    }

    fwrite($handle, "\n// Config\n");
    if ($form_state['values']['debug_info'] == 1) {
      fwrite($handle, '$debug_info: true;' . "\n");
    } else{
      fwrite($handle, '$debug_info: false;' . "\n");
    }

    // Write image paths
    fwrite($handle, "\n// Images\n");
    if ($file = $values['image_header_upload']) {
      unset($values['image_header_upload']);
      $filename = file_unmanaged_copy($file->uri);
      $form_state['values']['image_header_path'] = $filename;
      $form_state['values']['image_header_name'] = $filename;
    }

    if (!empty($form_state['values']['image_header_path']) && $form_state['values']['no_image_header'] != 1) {
      fwrite($handle, '$image_header_path : \'' . file_create_url($form_state['values']['image_header_path']) . "';\n");
    }

    if ($file = $values['image_bg_upload']) {
      unset($values['image_bg_upload']);
      $filename = file_unmanaged_copy($file->uri);
      $form_state['values']['image_bg_path'] = $filename;
      $form_state['values']['image_bg_name'] = $filename;
    }

    if (!empty($form_state['values']['image_bg_path']) && $form_state['values']['no_bg_image'] != 1) {
      fwrite($handle, '$image_bg_path : \'' . file_create_url($form_state['values']['image_bg_path']) . "';\n");
    }

    if ($file = $values['image_footer_upload']) {
      unset($values['image_footer_upload']);
      $filename = file_unmanaged_copy($file->uri);
      $form_state['values']['image_footer_path'] = $filename;
      $form_state['values']['image_footer_name'] = $filename;
    }

    if (!empty($form_state['values']['image_footer_path']) && $form_state['values']['no_footer_image'] != 1) {
      fwrite($handle, '$image_footer_path : \'' . file_create_url($form_state['values']['image_footer_path']) . "';\n");
    }


    // If the user entered a path relative to the system files directory for
    // the images then store a public:// URI so the theme system can handle it.
    if (!empty($values['image_header_path'])) {
      $values['image_header_path'] = _system_theme_settings_validate_path($values['image_header_path']);
    }
    if (!empty($values['image_bg_path'])) {
      $values['image_bg_path'] = _system_theme_settings_validate_path($values['image_bg_path']);
    }
    if (!empty($values['image_footer_path'])) {
      $values['image_footer_path'] = _system_theme_settings_validate_path($values['image_footer_path']);
    }

    variable_set($key, $values);

    fwrite($handle, "\n// Theme path\n");
    fwrite($handle, '$theme_path : \'/' . $path_to_theme . "';\n");

    $cmd = $form['config']['compass_path']['#default_value'] . ' -v';
    $output = shell_exec($cmd);
    watchdog('theme', '%cmd => %output', array('%output' => $output, '%cmd' => $cmd), WATCHDOG_INFO);

    $cmd  = 'cp -R ' . $path_to_theme . '/scss ' . $public_files_theme_path . '/theme';
    $output = shell_exec($cmd);
    watchdog('theme', '%cmd => %output', array('%output' => $output, '%cmd' => $cmd), WATCHDOG_INFO);

    if (file_exists($public_files_theme_path . '/theme/scss/aabenskole.style.scss')) {
      $cmd = 'rm ' . $public_files_theme_path . '/theme/scss/aabenskole.style.scss';
      $output = shell_exec($cmd);
      watchdog('theme', '%cmd => %output', array('%output' => $output, '%cmd' => $cmd), WATCHDOG_INFO);
    }

    $cmd = 'mv ' . $public_files_theme_path . '/theme/scss/_aabenskole.style.scss ' . $public_files_theme_path . '/theme/scss/aabenskole.style.scss';
    $output = shell_exec($cmd);
    watchdog('theme', '%cmd => %output', array('%output' => $output, '%cmd' => $cmd), WATCHDOG_INFO);

    $cpconfig = 'cp ' . $path_to_theme . '/config.rb  ' . $public_files_theme_path . '/theme';
    $output = shell_exec($cpconfig);
    watchdog('theme', '%cmd => %output', array('%output' => $output, '%cmd' =>$cpconfig), WATCHDOG_INFO);

    // Compile sass files.
    $compass_path =  $form['config']['compass_path']['#default_value'] . " compile " . drupal_realpath($public_files_theme_path . '/theme');// . "\"";// --force";
    $ret = exec($compass_path, $output, $return_var);
    // Fix group permissions sass cache.
    shell_exec('chmod -R  ug+rwX ' . drupal_realpath($public_files_theme_path . '/theme'));

    if ($return_var > 0) {
      watchdog('theme', 'Compass failed with return code %return_var', array('%return_var' => $return_var), WATCHDOG_ERROR);
    }

    // This line is bacause KK admins are such nice people.
    $blessc = is_file('/usr/local/bin/blessc') ? '/usr/local/bin/blessc': 'blessc';
    if (is_dir($public_files_theme_path . '/theme/css')) {
      // Bless files Hallelujah!
      foreach (new DirectoryIterator($public_files_theme_path . '/theme/css') as $file) {
        if ($file->isFile() && pathinfo($file->getFilename(), PATHINFO_EXTENSION) == 'css') {
          $bless_cmd = "$blessc -f " . drupal_realpath($file->getPathname()) . ' 2>&1';
          $bless_output = shell_exec($bless_cmd);
          watchdog('theme', '%cmd => %output', array('%output' => $bless_output, '%cmd' => $bless_cmd), WATCHDOG_INFO);
        }
      }
    }

    drupal_clear_css_cache();
    drupal_clear_js_cache();
    cache_clear_all('*', 'cache_page', TRUE);

  } else {
    drupal_set_message("Error accessing _aabenskole.settings.scss file. Please check that the correct access settings is set for the sites/all/themes/aabenskole_theme/scss folder.", 'error');
    watchdog('theme', 'Error accessing _aabenskole.settings.scss file. Please check that the correct access settings is set for the sites/all/themes/aabenskole_theme/scss folder.', WATCHDOG_ERROR);
  }
}
