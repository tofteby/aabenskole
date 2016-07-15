<?php

/**
 * Implements hook_css_alter().
 * Unset unneeded module and library css.
 */
function aabenskole_theme_css_alter(&$css) {
  unset($css[drupal_get_path('module','system').'/system.menus.css']);
  unset($css[drupal_get_path('module','system').'/system.theme.css']);
  unset($css[drupal_get_path('module','field').'/theme/field.css']);
  unset($css[drupal_get_path('module','node').'/node.css']);
  unset($css[drupal_get_path('module','search').'/search.css']);
  unset($css[drupal_get_path('module','views').'/css/views.css']);
  unset($css[drupal_get_path('module','eu_cookie_compliance').'/css/eu_cookie_compliance.css']);

  // Unset css from follow module.
  $directory_path = file_stream_wrapper_get_instance_by_scheme('public')->getDirectoryPath();
  unset($css[$directory_path . '/css/follow.css']);
}

/**
 * Implements template_preprocess_html.
 * Add default or custom css to head.
 */
function aabenskole_theme_preprocess_html(&$vars, $hook) {
  $theme_path = drupal_get_path('theme', 'aabenskole_theme');
  if(theme_get_setting('default_theme_set') != 1) {
    $theme_path = variable_get('file_public_path', conf_path() . '/files') . '/theme';
  }

  // If default styling is selected, add pregenerated css.
  if (theme_get_setting('default_theme_set') == 1) {
    drupal_add_css($theme_path . '/css/aabenskole.style.default.css', array(
      'preprocess' => FALSE,
    ));
  }
  // If not, load custom css from sites/[file_public_path].
  else {
    drupal_add_css($theme_path. '/css/aabenskole.style.css', array(
      'preprocess' => FALSE,
    ));
  }

  drupal_add_css(
    $theme_path. '/css/aabenskole.ie.css',
    array(
      'group' => CSS_THEME,
      'browsers' => array(
        'IE' => TRUE,
        '!IE' => FALSE,
      ),
      'weight' => 999,
      'every_page' => TRUE,
    )
  );

  drupal_add_css(
    $theme_path. '/css/aabenskole.ie8.css',
    array(
      'group' => CSS_THEME,
      'browsers' => array(
        'IE' => 'IE 8',
        '!IE' => FALSE,
      ),
      'weight' => 999,
      'every_page' => TRUE,
    )
  );


}

/**
 * Implements template_preprocess_page.
 * Add variables to page.tpl.php.
 */
function aabenskole_theme_preprocess_page(&$vars, $hook) {

  $login_link = NULL;
  if (user_is_anonymous()) {
    $login_link = '<ul class="menu-serv"><li>' . l(t('Login'), 'user/login') . '</li></ul>';
  }
  $vars['login_link'] = $login_link;

  $theme_path = drupal_get_path('theme', 'aabenskole_theme');
  drupal_add_js($theme_path . '/js/jquery.equalheights.js');

  // Make $site_name available in theme even if it is turned off in theme settings
  $vars['site_name'] = filter_xss_admin(variable_get('site_name', 'Drupal'));
}

/**
 * Implements template_preprocess_html.
 * Add default or custom css to head.
 */
function aabenskole_theme_preprocess_region(&$vars, $hook) {
  // Remove region classes for all regions as default.
  // Wrappers for regions without classes are not printed.
  $vars['classes_array'] = array();

  // Add classes to specific regions if needed.
  // Here...
}

/**
 * Implements template_preprocess_node().
 *
 * Add styling classes for fields displaying references rendered nodes.
 * Expand Drupal's standard template suggestions.
 *
 * Some options are:
 * - For page.tpl.php:
 *   - Node type:   $vars['node']->type
 *   - User role:   $vars['user']['roles']
 * - For node.tpl.php:
 *   - View mode:   $vars['view_mode']
 *   - Node type:   $vars['type']
 *
 */
function aabenskole_theme_preprocess_node(&$vars) {

  // Add template suggestions for node.tpl.php.
  // Pattern: node--[view mode].tpl.php including custom view modes.
  $vars['theme_hook_suggestions'][] = 'node__' . $vars['view_mode'];

  // Pattern: node--[node type]--[view mode].tpl.php.
  $vars['theme_hook_suggestions'][] = 'node__' . $vars['type'] . '__' . $vars['view_mode'];

  // Use custom template for related content.
  if ($vars['view_mode'] == 'related_content' || $vars['view_mode'] == 'panels_pane') {
    $vars['theme_hook_suggestions'][] = 'node__block';
    // Define default element. Can be overriden later.
    $vars['element'] = 'aside';
  }

  switch ($vars['type']) {
    case 'factbox':
    case 'factbox_card_info':
      $vars['classes_array'][] = 'bl-element';
      break;

    case 'decision_tree_item':
    case 'factbox_figures':
    case 'video':
    case 'image_slideshow':
    case 'stepbox_tabs':
    case 'place':
    case 'faq_qa':
    case 'person':
    case 'table':
    case 'stepbox':
    case 'service_spot':
    case 'webform':
      break;
    default:
      if (function_exists('dsm') && theme_get_setting('debug_info')) {
        print '<pre>'.__FILE__.':'.__LINE__.'('.__FUNCTION__.')<br>  '.htmlspecialchars(print_r($vars['type'], TRUE), ENT_QUOTES) . '</pre>';exit();
        dsm($vars['type']);
      }
  }
}

/**
 * Theme overrides for blocks.
 */
function aabenskole_theme_preprocess_block(&$vars) {
  // Remove uneeded wrapper elements from main content block.
  if (!empty($vars['elements']['#block']->delta) && $vars['elements']['#block']->delta == 'main') {
    $vars['theme_hook_suggestions'][] = 'block__nowrap';
  }

  $vars['title_attributes_array']['class'][] = 'title';

  // Add styling classes based on region.
  switch ($vars['elements']['#block']->region) {
    case 'menu':
      if($vars['elements']['#block']->module == 'search') {
        $vars['classes_array'][] = 'bl-search';
      }
      if($vars['elements']['#block']->module == 'locale' && $vars['elements']['#block']->delta == 'language') {
        $vars['classes_array'][] = 'menu-serv';
      }
      break;

    case 'header':
      break;

    case 'footer':
      $vars['title_attributes_array']['class'][] = 'title-footer';

      switch ($vars['elements']['#block']->module) {
        case 'follow':
          $vars['classes_array'][] = 'bl-follow';
          break;

        default:
          $vars['classes_array'][] = 'bl-footer';
      }

      switch ($vars['elements']['#block']->module) {
        case 'menu':
        case 'menu_block':
          $vars['content_attributes_array']['class'][] = 'menu-footer';
          $vars['content_attributes_array']['class'][] = 'tx-sec';
          break;

        case 'follow':
          break;

        default:
          $vars['content_attributes_array']['class'][] = 'tx-content';
          $vars['content_attributes_array']['class'][] = 'tx-sec';
      }
      break;

    case 'bottom':
      $vars['classes_array'][] = 'bl-btm';
      $vars['classes_array'][] = 'clearfix';
      $vars['title_attributes_array']['class'][] = 'tx-sec';
      $vars['title_attributes_array']['class'][] = 'title-bottom';
      break;

    case 'content':
    case 'topbar_search':
    case 'sidebar':
      break;
    default:
      if (function_exists('dsm') && theme_get_setting('debug_info')) {
        print '<pre>'.__FILE__.':'.__LINE__.'('.__FUNCTION__.')<br>  '.htmlspecialchars(print_r($vars['elements']['#block']->region, TRUE), ENT_QUOTES) . '</pre>';exit();
      }
      break;
  }

  // Add styling classes for specific blocks.
  switch ($vars['elements']['#block']->delta) {
    case 'aabenskole-social-share-block':
      $vars['title_attributes_array']['class'][] = 'element-invisible';
      $vars['classes_array'] = array('bl-icons');
      break;

    default;
    if (function_exists('dsm') && theme_get_setting('debug_info')) {
      //dsm($vars['elements']['#block']->delta);
    }
  }
}

/**
 *  Implements hook_preprocess for views_view_unformatted
 */
function aabenskole_theme_preprocess_views_view_unformatted(&$vars) {
  $rows = $vars['rows'];
  $count = 0;

  foreach ($rows as $id => $row) {
    $count++;

    switch ($count%3) {
    case 0:
        $temp = 'third';
        break;
    case 1:
        $temp = 'first';
        break;
    case 2:
        $temp = 'second';
        break;
    }

    $vars['classes'][$id][] = $temp;
    $vars['classes_array'][$id] .= ' ' . $temp;

  }
}

/**
 * Implements hook_preprocess_views_view_fields()
 *
 */
function aabenskole_theme_preprocess_views_view_fields(&$vars) {
  $view = $vars['view'];

  foreach ($vars['fields'] as $id => $field) {
    $field_class = preg_replace('/\_/i','-',$id);
    $views_field_class = sprintf('views-field-%s',$field_class);
    switch($id){
      case 'field_email':
        if(!empty($vars['fields'][$id]->content)){
          $vars['fields'][$id]->wrapper_prefix = preg_replace("/($views_field_class)/i","$1 ic-email",$vars['fields'][$id]->wrapper_prefix);
        }
        break;
      case 'field_telephone':
        if(!empty($vars['fields'][$id]->content)){
          $vars['fields'][$id]->wrapper_prefix = preg_replace("/($views_field_class)/i","$1 ic-phone",$vars['fields'][$id]->wrapper_prefix);
        }
        break;
      case 'term_node_tid':
        $raw = $vars['fields'][$id]->raw;
        if(isset($vars['fields'][$id]->handler->items[$raw]) && count($vars['fields'][$id]->handler->items[$raw])){
          $vars['fields'][$id]->wrapper_prefix = preg_replace("/($views_field_class)/i","$1 bl-tags ic-tag tx-tag",$vars['fields'][$id]->wrapper_prefix);
        }
        break;
      case 'name':
      case 'created':
      case 'comment_count':
        $vars['fields'][$id]->wrapper_prefix = preg_replace("/($views_field_class)/i","$1 $field_class byline",$vars['fields'][$id]->wrapper_prefix);
        break;

      case 'field_opening_hours':
        // TODO: This is not working.
        if(empty($vars['fields'][$id]->content)){
          $vars['fields'][$id]->label_html = preg_replace("/(views-label-field-opening-hours)/i","$1 views-label-hidden",$vars['fields'][$id]->label_html);
        }
        break;
      case 'body':
      case 'field_address':
      case 'field_image_single':
      case 'field_teaser':
      case 'title':
      case 'view_node':
        break;
      default:
        if(theme_get_setting('debug_info')) {
          print '<pre>'.__FILE__.':'.__LINE__.'('.__FUNCTION__.')<br>  '.htmlspecialchars(print_r($id, TRUE), ENT_QUOTES) . '</pre>';exit;
        }
        break;
    }
  }
}

/**
 * Implements template_preprocess_field().
 *
 * Adds classes for styling.
 * @todo: Test if it is necessary to add a test for view mode for the fields.
 */
function aabenskole_theme_preprocess_field(&$vars) {

  // Add classes for specific view mode only.
  if ($vars['element']['#view_mode'] == 'related_content') {
  }

  switch ($vars['element']['#field_type']) {
    case 'field_collection':
      break;
    default:
      break;
  }

  // Add classes for all view modes.
  switch ($vars['element']['#field_name']) {
    case 'field_teaser':
      $vars['classes_array'][] = 'tx-teaser';
      break;

    case 'body':
    case 'field_text':
    case 'comment_body':
    case 'field_pane_body':
      $vars['classes_array'][] = 'tx-content';
      break;

    case 'field_practical':
      $vars['classes_array'][] = 'tx-content';
      if(in_array($vars['element']['#view_mode'], array('_custom_display'))) {
        $vars['classes_array'][] = 'bl-element';
      }
      break;

    case 'title_field':
      $vars['classes_array'][] = 'title-page';
      $vars['classes_array'][] = 'bl-title';
      break;

    case 'field_common':
    case 'field_tags_local':
    case 'field_tags_open':
      $vars['classes_array'][] = 'bl-tags';
      $vars['classes_array'][] = 'ic-tag';
      $vars['classes_array'][] = 'tx-tag';
      break;

    case 'field_video':
    case 'field_video_single':
      $vars['classes_array'][] = 'bl-video';
      break;

    case 'field_image':
      if ($vars['element']['#view_mode'] == 'related_nodes') {
        if (count($vars['items']) > 1) {
          // Show only first value.
          $vars['items'] = array(reset($vars['items']));
        }
      }
    case 'field_image_single':
      $vars['classes_array'][] = 'bl-img';
      break;

    case 'field_place_category':
      $vars['classes_array'][] = 'tx-type';
      $vars['classes_array'][] = 'bl-i';
      break;

    case 'field_institution_category':
    case 'field_service_type':
    case 'field_event_type':
    case 'field_article_type':
    case 'field_news_type':
      $vars['classes_array'][] = 'tx-tag';
      $vars['classes_array'][] = 'bl-i';
      $vars['classes_array'][] = 'bl-type';
      break;

    case 'field_related_service_spot':
      $vars['classes_array'][] = 'bl-service';
      break;

    case 'field_information':
    case 'field_card_info':
    case 'field_capacity':
    case 'field_opening_hours':
      break;

    case 'field_nodequeue':
      $vars['classes_array'][] = 'bl-element';
      break;

    case 'field_email':
      $vars['classes_array'][] = 'ic-email';
      break;

    case 'field_telephone_second':
    case 'field_telephone':
      $vars['classes_array'][] = 'ic-phone';
      break;
    
    case 'field_pane_files':
    case 'field_related_files':
      if(!in_array($vars['element']['#view_mode'], array('related_content','_custom_display'))) {
        $vars['classes_array'][] = 'bl-element';
      }
      $vars['classes_array'][] = 'tx-sec';

      foreach ($vars['items'] as &$item) {
        $item['#theme'] = 'file_link__icon';
      }
      break;

    case 'field_contact':
      if(!in_array($vars['element']['#view_mode'], array('related_content','_custom_display'))) {
        $vars['classes_array'][] = 'bl-element';
      }
      break;

    case 'field_links':
      // For links displayed as separate panes or
      // in standard view mode style as box with shadow.
      if(!in_array($vars['element']['#view_mode'], array('related_content','_custom_display'))) {
        $vars['classes_array'][] = 'bl-element';
      }
      // For all view modes add link icons.
      $vars['classes_array'][] = 'tx-sec';
      foreach ($vars['items'] as &$item) {
        $item['#element']['attributes']['class'] = 'ic-link tx-ln';
      }
      break;

    case 'field_pane_links':
      $vars['classes_array'][] = 'tx-sec';
      foreach($vars['items'] as &$item) {
        $item['#element']['attributes']['class'] = 'ic-link tx-ln';
      }
      break;

    case 'field_pane_image':
    case 'field_qa':
    case 'field_contact':
    case 'field_related_boxes':
    case 'field_place':
    case 'field_job_title':
    case 'field_organisation':
    case 'field_link':
    case 'field_image_slideshow':
    case 'field_related_box':
    case 'field_facts':
    case 'field_table':
    case 'field_address':
    case 'field_heading':
    case 'field_date':
    case 'field_price':
    case 'field_geolocation':
    case 'field_steps':
    case 'field_fp_decision_tree_item':
    case 'field_dt_question':
    case 'field_fact':
      break;
    default:
      if (function_exists('dsm') && theme_get_setting('debug_info')) {
        print '<pre>'.__FILE__.':'.__LINE__.'('.__FUNCTION__.')<br>  '.htmlspecialchars(print_r($vars['element']['#field_name'], TRUE), ENT_QUOTES) . '</pre>';exit;
        //dsm($vars['element']['#field_name']);
      }
      break;
  }
}

/**
 * Implements template_preprocess_panes().
 * Add classes for styling.
 *
 */
function aabenskole_theme_preprocess_panels_pane(&$vars) {
  $vars['inner_prefix'] = '';
  $vars['inner_suffix'] = '';
            
  switch ($vars['pane']->type) {
    // Styling for titles
    case 'node_title':
      $vars['classes_array'][] = 'title-page';
      $vars['classes_array'][] = 'bl-title';
      break;

      // Styling for fields printed as panes.
    case 'entity_field':
      switch ($vars['pane']->subtype) {
        case 'node:field_related_files':
        case 'node:field_contact':
        case 'node:field_links':
        case 'node:field_capacity':
        case 'node:field_information':
        case 'node:field_opening_hours':
          $vars['classes_array'][] = 'bl-element';
          break;
        case 'node:body':
        case 'node:field_image':
        case 'node:field_image_slideshow':
        case 'node:field_teaser':
        case 'node:field_related_box':
        case 'node:field_related_boxes':
        case 'node:field_article_type':
        default:
          $vars['theme_hook_suggestions'][] = 'panels_pane__none';
          break;
      }
      break;

    case 'fieldable_panels_pane':
      if(isset($vars['content']['#bundle'])){
        $bundle = $vars['content']['#bundle'];
        switch($bundle){
          case 'link_box_pane':
          case 'nodequeue_pane':
          case 'files_pane':
            $vars['inner_prefix'] = '<div class="bl-element">';
            $vars['inner_suffix'] = '</div>';
            break;
          case 'form_pane':
          case 'text_pane':
          case 'banner_pane':
            break;
          default:
            break;
        }
      }
      break;

    case 'apachesolr_result':
      $vars['classes_array'][] = 'search-results-wrapper';
      break;

    case 'node_terms':
      $vars['classes_array'][] = 'bl-tags';
      $vars['classes_array'][] = 'ic-tag';
      $vars['classes_array'][] = 'tx-tag';
      break;

    case 'views_panes':
      $subtype = explode('-', $vars['pane']->subtype);
      switch (TRUE) {
        case $vars['pane']->subtype === 'blog_list-blog_list':
          // Nothing
          break;
        case $vars['pane']->subtype === 'institutions_near_by-near_by_pane':
          $vars['classes_array'][] = 'bl-aside';
          break;
        case $subtype[0] === 'dynamic_links':
          $vars['classes_array'][] = 'bl-aside';
          break;
        case $subtype[0] === 'events_list':
          $vars['classes_array'][] = 'bl-grid';
          break;
        case $subtype[0] === 'list_with_see_more':
          $vars['classes_array'][] = 'bl-grid';
          break;
        case $subtype[0] === 'content_shared_to_channels':
        case $subtype[0] === 'content_shared_to_this_site':
          switch ($subtype[1]) {
            case 'panel_pane_1':
            case 'panel_pane_2':
            case 'panel_pane_3':
              // @TODO
              break;
          }
          break;
        case $subtype[0] === 'list_local_content':
          switch ($subtype[1]) {
            case 'panel_pane_1':
            case 'panel_pane_2':
            case 'panel_pane_3':
              // @TODO
              break;
          }
          break;
        default:
          // Nothing
          break;
      }
      break;

    case 'block':
      switch($vars['pane']->subtype){
        case 'menu-menu-events-submenu':
          foreach($vars['content'] as $id => $content){
          }
          break;
      }
      break;

    case 'apachesolr_form':
      $vars['content']['apachesolr_panels_search_form']['#attributes']['placeholder'] = t('Search words');
      break;

    case 'field_group':
    case 'node_created':
    case 'node_comments':
    case 'node_comment_form':
    case 'node_comments_count':
    case 'custom':
    case 'node_links':
    case 'apachesolr_info':
    case 'page_title':
      break;
    case 'token':
    default:

      if (function_exists('dsm') && theme_get_setting('debug_info')) {
      //print '<pre>'.__FILE__.':'.__LINE__.'('.__FUNCTION__.')<br>  '.htmlspecialchars(print_r($vars, TRUE), ENT_QUOTES) . '</pre>';exit();
      }
      // Handle the rest based on subtype.
      // case 'token':
      switch ($vars['pane']->subtype) {
        case 'node:content-type':
          $vars['classes_array'][] = 'tx-type';
          $vars['classes_array'][] = 'bl-i';
          $vars['theme_hook_suggestions'][] = 'panels_pane__p__bare';
          break;
        default:
          break;
      }
  }
}

/**
 * Implements hook_form_formid_alter().
 * Changes search button for search_block_form.
 */
function aabenskole_theme_form_search_block_form_alter(&$form, &$form_state) {
  if (!empty($form['search_block_form'])) {
    if(isset($form['search_block_form']['#attributes']['title'])){
      $form['search_block_form']['#attributes']['placeholder'] = t('Enter your search');
    }
  }
}

/**
 * Implements template_preprocess_panelizer_view_mode().
 *
 * Unsets title if it exists for all content types
 * other than section pages to avoid duplicate title.
 */
function aabenskole_theme_preprocess_panelizer_view_mode(&$vars) {
  if (!empty($vars['title']) && $vars['element']['#entity_type'] == 'node') {
    $element = $vars['element'];
    if ($element['#bundle'] == 'section_page' && $element['#view_mode'] == 'full') {
      $node = $element['#node'];
      $hide_title = !empty($node->field_hide_title[LANGUAGE_NONE][0]['value']);
      // Section pages are special. The default panel is empty. IPE is used to add
      // the specific panes. But title should still be displayed above.
      if (!$hide_title) {
        // Make sure title is displayed with h1, and no "link to node".
        unset($vars['entity_url']);
        $vars['title_element'] = 'h1';
      }
      else {
        // Unless "Hide title" option is on for this node.
        unset($vars['title']);
      }
    }
    else {
        // Use title field when using panelizer.
        unset($vars['title']);
    }
  }
}

/**
 * Override theme_form_element_label to fix "Orphaned form label" probelms in
 * WAVE toolbar.
 * It appears "Orphaned form label" is not an actual WCAG validation error
 * http://webaim.org/discussion/mail_thread?thread=5448
 * So technically this functionality can be safely removed.
 * I suggest still using <label> element, but without for attribute. This
 * would be best for accessibility and styling purposes.
 *
 * Also related problem is "Form label missing" error, which is a real failure to meet
 * 3.3.2 Labels or Instructions: Labels or instructions are provided when content requires user input. (Level A)
 */
function aabenskole_theme_form_element_label($variables) {
  $element = $variables['element'];
  // This is also used in the installer, pre-database setup.
  $t = get_t();

  // If title and required marker are both empty, output no label.
  if ((!isset($element['#title']) || $element['#title'] === '') && empty($element['#required'])) {
    return '';
  }

  // If the element is required, a required marker is appended to the label.
  $required = !empty($element['#required']) ? theme('form_required_marker', array('element' => $element)) : '';

  $title = filter_xss_admin($element['#title']);

  $attributes = array();
  // Style the label as class option to display inline with the element.
  if ($element['#title_display'] == 'after') {
    $attributes['class'][] = 'option';
  }
  // Show label only to screen readers to avoid disruption in visual flows.
  elseif ($element['#title_display'] == 'invisible') {
    $attributes['class'][] = 'element-invisible';
  }

  $no_label_types = array(
    'item',
    'date',
    'managed_file',
    'webform_time',
    'webform_grid',
  );

  if (!empty($element['#id']) && !in_array($element['#type'], $no_label_types)) {
    $attributes['for'] = $element['#id'];
  }
  else {
    $attributes['class'][] = 'fake-label';
    // The leading whitespace helps visually separate fields from inline labels.
    return ' <span' . drupal_attributes($attributes) . '>' . $t('!title !required', array('!title' => $title, '!required' => $required)) . "</span>\n";
  }

  // The leading whitespace helps visually separate fields from inline labels.
  return ' <label' . drupal_attributes($attributes) . '>' . $t('!title !required', array('!title' => $title, '!required' => $required)) . "</label>\n";
}

/**
 * Override theme_panels_default_style_render_region().
 * Remove .panels-separator element.
 *
 * @ingroup themeable
 */
function aabenskole_theme_panels_default_style_render_region($vars) {
  $output = '';
  $output .= implode('', $vars['panes']);
  return $output;
}

/**
 * Override theme_file_link.
 *
 * @param $vars
 *   An associative array containing:
 *   - file: A file object to which the link will be created.
 *     files. Defaults to the value of the "file_icon_directory" variable.
 *
 * @ingroup themeable
 */
function aabenskole_theme_file_link__icon($vars) {
  $file = $vars['file'];

  $url = file_create_url($file->uri);
  $filearray = explode('.', $file->filename);
  $extension = array_pop($filearray);
  $file->filename = implode(' ', $filearray);

  // Set options as per anchor format described at
  // http://microformats.org/wiki/file-format-examples
  $options = array(
    'attributes' => array(
      'type' => $file->filemime . '; length=' . $file->filesize,
      'class' => array('button', 'download'),
    ),
    'html' => TRUE,
  );

  switch ($extension) {
    case 'doc':
    case 'docx':
    case 'dot':
    case 'docm':
    case 'dotx':
    case 'dotm':
    case 'rtf':
    case 'odt':
      $filetype = 'doc';
      break;

    case 'xls':
    case 'xlsx':
    case 'xlt':
    case 'xlm':
    case 'xlsm':
    case 'xltx':
    case 'xltm':
    case 'xlsb':
    case 'xla':
    case 'xlam':
    case 'xll':
    case 'xlw':
    case 'ods':
    case 'ots':
      $filetype = 'spreadsheet';
      break;

    case 'pdf':
      $filetype = 'pdf';
      break;

    case 'ppt':
    case 'pps':
    case 'pptx':
    case 'pptm':
    case 'potx':
    case 'potm':
    case 'ppam':
    case 'ppsx':
    case 'ppsm':
    case 'sldx':
    case 'sldm':
    case 'odp':
    case 'otp':
    case 'pot':
    case 'key':
      $filetype = 'presentation';
      break;

    case 'jpg':
    case 'jpeg':
    case 'gif':
    case 'png':
    case 'tiff':
    case 'tif':
    case 'txt':
    case 'mp3':
    case 'mov':
    case 'm4v':
    case 'mpeg':
    case 'avi':
    case 'ogg':
    case 'oga':
    case 'ogv':
    case 'wmv':
    case 'ico':
    case 'zip':
    case 'tar':
    case 'rar':
    case '7z':
    case 'mp4':
    default:
      $filetype = 'generic';
      break;
  }

  // Use the description as the link text if available.
  if (empty($file->description)) {
    $filename = $file->filename;
  }
  else {
    $filename = $file->description;
    $options['attributes']['title'] = check_plain($file->filename);
  }

  // Include file name for screen readers to discern between different buttons.
  // Hide extention from screen readers since it is already included in the filename.
  $link_text = t('<span aria-hidden="true" class="filetype-' . $filetype . '">' . $extension . '</span><span>' . $filename . '</span><span class="element-invisible">.' . $extension . '</span> ');

  return l($link_text, $url, $options);
}


/**
 * Implements template_preprocess_views_view_table().
 *
 * Set a custom class on the table with the list view.
 */
function aabenskole_theme_preprocess_views_view_table(&$vars) {
  if(in_array($vars['view']->name,array('institutions_list','persons_list'))){
    $class = preg_replace('/\_/i','-',$vars['view']->name);
    $vars['classes_array'][] = 'list';
    $vars['classes_array'][] = $class;
  }
}

/**
 * Implements template_preprocess_views_view_list().
 *
 * Set a custom class on the table with the list view.
 */
function aabenskole_theme_preprocess_views_view_list(&$vars) {
  // The list type can be obtained by digging through the views object, but we do a quick hack here.
  $list_type = preg_replace('/[\<\>]/i','',$vars['list_type_prefix']);
  if(in_array($vars['view']->name,array('institutions_list','persons_list'))){
    $rows = $vars['rows'];
    foreach ($vars['classes_array'] as $key => $classes) {
      $vars['classes_array'][$key] .= ' list-item';
    }
  }
}

/**
 * Implements template_preprocess_views_view().
 *
 * Set a custom class on the view div-wrapper with the list view.
 */
function aabenskole_theme_preprocess_views_view(&$vars) {

  if(isset($vars['view']->name)){
    $class = sprintf("%s-wrapper",preg_replace('/\_/i','-',$vars['view']->name));

    switch($vars['view']->name){
      case 'institutions_list':
      case 'persons_list':
        if(isset($vars['list_type_prefix'])) {
          $list_type = preg_replace('/[\<\>]/i','',$vars['list_type_prefix']);
          $vars['classes_array'][] = 'list-'.$list_type;
        }

        $vars['classes_array'][] = 'list-wrapper';
        $vars['classes_array'][] = $class;
        break;
      case 'blog_list':
        $vars['classes_array'][] = 'blog-list-wrapper';
        $vars['classes_array'][] = $class;

        break;
      case 'list_local_content':
        if(isset($vars['view']->exposed_data) && isset($vars['view']->exposed_data['type'])){
          //$types = array_values($vars['view']->exposed_data['type']);
          //$first_value = reset($type);
          $vars['classes_array'][] = $class;
        }
        break;
      case 'decision_tree_children':
      case 'related_events_list':
      case 'institutions_near_by':
      case 'dynamic_links':
      case 'node_type_map__map_objects__view':
      case 'objects_view_area':
        break;
      default:
        if (function_exists('dsm') && theme_get_setting('debug_info')) {
          print '<pre>'.__FILE__.':'.__LINE__.'('.__FUNCTION__.')<br>  '.htmlspecialchars(print_r($vars['view']->name, TRUE), ENT_QUOTES) . '</pre>';exit;
        }

        break;
    }
  }
}


/**
 * Overrides theme_pager().
 *
 * - The first and last page elements are removed.
 * - The symbols for privious and next elements are changed.
 */
function aabenskole_theme_pager($variables) {
  $tags = $variables['tags'];

  $tags = array(
    0 => '<<',
    1 => '<',
    3 => '>',
    4 => '>>',
  );

  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $quantity = $variables['quantity'];
  global $pager_page_array, $pager_total;

  // Calculate various markers within this pager piece:
  // Middle is used to "center" pages around the current page.
  $pager_middle = ceil($quantity / 2);
  // current is the page we are currently paged to
  $pager_current = $pager_page_array[$element] + 1;
  // first is the first page listed by this pager piece (re quantity)
  $pager_first = $pager_current - $pager_middle + 1;
  // last is the last page listed by this pager piece (re quantity)
  $pager_last = $pager_current + $quantity - $pager_middle;
  // max is the maximum page number
  $pager_max = $pager_total[$element];
  // End of marker calculations.

  // Prepare for generation loop.
  $i = $pager_first;
  if ($pager_last > $pager_max) {
    // Adjust "center" if at end of query.
    $i = $i + ($pager_max - $pager_last);
    $pager_last = $pager_max;
  }
  if ($i <= 0) {
    // Adjust "center" if at start of query.
    $pager_last = $pager_last + (1 - $i);
    $i = 1;
  }
  // End of generation loop preparation.

  $li_first = NULL; // Removes the first pager element
  $li_previous = theme('pager_previous', array('text' => (isset($tags[1]) ? $tags[1] : t('‹ previous')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_next = theme('pager_next', array('text' => (isset($tags[3]) ? $tags[3] : t('next ›')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_last = NULL; // Removes the last pager element

  if ($pager_total[$element] > 1) {
    if ($li_first) {
      $items[] = array(
        'class' => array('pager-first'),
        'data' => $li_first,
      );
    }
    if ($li_previous) {
      $items[] = array(
        'class' => array('pager-previous'),
        'data' => $li_previous,
      );
    }

    // When there is more than one page, create the pager list.
    if ($i != $pager_max) {
      if ($i > 1) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
      }
      // Now generate the actual pager piece.
      for (; $i <= $pager_last && $i <= $pager_max; $i++) {
        if ($i < $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_previous', array('text' => $i, 'element' => $element, 'interval' => ($pager_current - $i), 'parameters' => $parameters)),
          );
        }
        if ($i == $pager_current) {
          $items[] = array(
            'class' => array('pager-current'),
            'data' => '<span>' . $i . '</span>',
          );
        }
        if ($i > $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_next', array('text' => $i, 'element' => $element, 'interval' => ($i - $pager_current), 'parameters' => $parameters)),
          );
        }
      }
      if ($i < $pager_max) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
      }
    }
    // End generation.
    if ($li_next) {
      $items[] = array(
        'class' => array('pager-next'),
        'data' => $li_next,
      );
    }
    if ($li_last) {
      $items[] = array(
        'class' => array('pager-last'),
        'data' => $li_last,
      );
    }
    return '<h2 class="element-invisible">' . t('Pages') . '</h2>' . theme('item_list', array(
        'items' => $items,
        'attributes' => array('class' => array('pager')),
      ));
  }
}



/**
 * Overrides theme_pager_previous().
 *
 * On first page, the previous element is still rendered as nolink.
 */
function aabenskole_theme_pager_previous($variables) {
  $text = $variables['text'];
  $element = $variables['element'];
  $interval = $variables['interval'];
  $parameters = $variables['parameters'];
  global $pager_page_array;
  $output = '';

  // If we are anywhere but the first page
  if ($pager_page_array[$element] > 0) {
    $page_new = pager_load_array($pager_page_array[$element] - $interval, $element, $pager_page_array);

    // If the previous page is the first page, mark the link as such.
    if ($page_new[$element] == 0) {
      $output = theme('pager_first', array('text' => $text, 'element' => $element, 'parameters' => $parameters));
    }
    // The previous page is not the first page.
    else {
      $output = theme('pager_link', array('text' => $text, 'page_new' => $page_new, 'element' => $element, 'parameters' => $parameters));
    }
  } else {
    $output =  '<span>&lt;</span>';
  }

  return $output;
}

/**
 * Overrides theme_pager_next().
 *
 * On last page, the next element is still rendered as nolink.
 */
function aabenskole_theme_pager_next($variables) {
  $text = $variables['text'];
  $element = $variables['element'];
  $interval = $variables['interval'];
  $parameters = $variables['parameters'];
  global $pager_page_array, $pager_total;
  $output = '';

  // If we are anywhere but the last page
  if ($pager_page_array[$element] < ($pager_total[$element] - 1)) {
    $page_new = pager_load_array($pager_page_array[$element] + $interval, $element, $pager_page_array);
    // If the next page is the last page, mark the link as such.
    if ($page_new[$element] == ($pager_total[$element] - 1)) {
      $output = theme('pager_last', array('text' => $text, 'element' => $element, 'parameters' => $parameters));
    }
    // The next page is not the last page.
    else {
      $output = theme('pager_link', array('text' => $text, 'page_new' => $page_new, 'element' => $element, 'parameters' => $parameters));
    }
  } else {
    $output =  '<span>&gt;</span>';
  }

  return $output;
}

/**
 * Theme function to print an individual link.
 *
 * @param $link
 *   A follow link object.
 * @param $title
 *   The translated title of the social network.
 *
 * @ingroup themable
 */
function aabenskole_theme_follow_link($variables) {
  $link = $variables['link'];
  $title = '<span class="tx-ic">' . $variables['title'] . '</span>';
  $classes = array();
  $classes[] = "ln-{$link->name}";
  $classes[] = 'ic-';
  $attributes = array(
    'class' => $classes,
    'title' => follow_link_title($link->uid) .' '. $title,
  );
  // Clean up the blank titles.
  if ($title == '<none>') {
    $title = '';
  }
  $link->options['attributes'] = $attributes;
  $link->options['html'] = TRUE;
  return l($title, $link->path, $link->options) . "\n";
}

/**
 * Theme override for search result information.
 * @see theme_apachesolr_panels_info().
 */
function aabenskole_theme_apachesolr_panels_info($variables) {
  $response = $variables['response'];
  $search = $variables['search'];
  if ($total = $response->response->numFound) {
    $start = $response->response->start + 1;
    $end = $response->response->start + count($response->response->docs);

    if (!empty($search['keys'])) {
      $info = t('Found %total matches for "%keys". Currently showing %start - %end.', array('%start' => $start, '%end' => $end, '%total' => $total, '%keys' => $search['keys']));
    }
    else {
      $info = t('Found %total matches. Currently showing %start - %end.', array('%start' => $start, '%end' => $end, '%total' => $total));
    }

    return $info;
  }
}

/**
 * Impements hook_openlayers_map_alter().
 *
 * Custom theme for openlayers map.
 */
function aabenskole_theme_openlayers_map_alter(&$map) {
  $path = drupal_get_path('theme', 'aabenskole_theme');
  $map['image_path'] = $path . '/templates/openlayers/default/img/';
  $map['css_path'] = $path . '/templates/openlayers/default/style.css';
}


function aabenskole_theme_status_messages($variables) {
  $display = $variables['display'];
  $output = '';

  $status_heading = array(
    'status' => t('Status message'),
    'error' => t('Error message'),
    'warning' => t('Warning message'),
  );
  foreach (drupal_get_messages($display) as $type => $messages) {
    $output .= "<div class=\"messages $type\">\n";
    $output .= "<div class=\"messages-icon\"></div>\n";
    if (!empty($status_heading[$type])) {
      $output .= '<h2>' . $status_heading[$type] . "</h2>\n";
    }
    if (count($messages) > 1) {
      $output .= " <ul>\n";
      foreach ($messages as $message) {
        $output .= '  <li>' . $message . "</li>\n";
      }
      $output .= " </ul>\n";
    }
    else {
      $output .= $messages[0];
    }
    $output .= "</div>\n";
  }
  return $output;
}


/**
 * Returns HTML for a menu link and submenu.
 *
 * @param $variables
 *   An associative array containing:
 *   - element: Structured array data for a menu link.
 *
 * @ingroup themeable
 */
function aabenskole_theme_menu_link__menu_events_submenu(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }

  $element['#localized_options']['html'] = true;
  $output = '';
  if(preg_match('/events\/list/i',$element['#href'])){
    $output = '<span class="ic-list"></span>';
  } else if(preg_match('/events\/grid/i',$element['#href'])){
    $output = '<span class="ic-grid"></span>';
  }

  $output .= '<span class="tx-ic">'.$element['#title'].'</span>';
  $output = l($output, $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}
