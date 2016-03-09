<?php

function _services_node_view_node_resource_view($nid, $display, $language) {

  $node = node_load($nid);

  if (empty($node)) {
    return services_error(t('Node not found - nid: "@nid"', array('@nid' => $nid)), 404);
  }

  // Temporary change language.
  $original_languages = _services_node_view_language();
  $replacement_languages = _services_node_view_replacement_languages($language);
  _services_node_view_language($replacement_languages);

  $uri = entity_uri('node', $node);
  $node->path = url($uri['path'], array('absolute' => TRUE));
  $node->_path_alias = drupal_get_path_alias($uri['path'], $language);

  // Unset uri as it has complete entity and this
  // cause never ending recursion in rendering.
  unset($node->uri);

  if ($menu_item = menu_get_item('node/' . $nid)) {
    menu_set_item(NULL, $menu_item);
  }

  // Temparary set GET to fix problems with destination path.
  $original_get = $_GET;
  $_GET = array('q' => $uri['path']);

  $node->_services_node_view = TRUE;
  // Alter on load.
  module_invoke_all('services_node_view_node_load_alter', $node);

  // Does not work with Panelizer: Full page override.
  $node_view = node_view($node, $display);
  // Alter node view result.
  drupal_alter('services_node_view_node_view', $node_view);

  $node_render = drupal_render($node_view);
  // Alter node drupal_render result.
  drupal_alter('services_node_view_node_render', $node_render);

  // Return original language.
  _services_node_view_language($original_languages);
  // Return original GET.
  $_GET = $original_get;

  // Unset some useless data in order to make the response smaller.
  unset($node->panelizer, $node->rdf_mapping);

  $data['node'] = $node;
  $data['node_view'] = $node_render;
  $dependencies = array();
  $dependencies['js'] = drupal_add_js();
  $dependencies['css'] = drupal_add_css();
  $dependencies['library'] = &drupal_static('drupal_add_library', array());

  // Add attached JS, CSS, libraries.
  $data['dependencies']['attachments']['js'] = array_filter($dependencies['js'], '_services_node_view_filter_files');
  $data['dependencies']['attachments']['css'] = array_filter($dependencies['css'], '_services_node_view_filter_files');
  foreach ($dependencies['library'] as $module => $libraries) {
    foreach ($libraries as $library => $not_library) {
      $data['dependencies']['attachments']['library'][] = array($module, $library);
    }
  }

  // Add JS settings.
  $setings_merged = drupal_array_merge_deep_array($dependencies['js']['settings']['data']);
  $unset_keys = array('basePath', 'pathPrefix', 'ajaxPageState', 'eu_cookie_compliance');
  foreach ($unset_keys as $key) {
    unset($setings_merged[$key]);
  }
  $data['dependencies']['settings'] = $setings_merged;

  return $data;
}

/**
 * Filter CSS and JS - we only want files.
 */
function _services_node_view_filter_files($css_js) {
  if ($css_js['type']) {
    if ($css_js['type'] == 'file' || $css_js['type'] == 'external') {
      return TRUE;
    }
  }
  return FALSE;
}

/**
 * Set the language, and return the current language globals.
 */
function _services_node_view_language($passed_languages = NULL) {
  if ($passed_languages) {
    foreach (_services_node_view_language_types() as $langtype) {
      if (isset($passed_languages[$langtype])) {
        $GLOBALS[$langtype] = $passed_languages[$langtype];
      }
    }
  }
  $current_languages = array();
  foreach (_services_node_view_language_types() as $langtype) {
    if (isset($GLOBALS[$langtype])) {
      $current_languages[$langtype] = $GLOBALS[$langtype];
    }
  }
  return $current_languages;
}

/**
 * Generate languages from passed language identifier.
 */
function _services_node_view_replacement_languages($language) {
  $languages = language_list('enabled');
  $langobj = isset($languages[1][$language])? $languages[1][$language]: language_default();
  $replacement_languages = array();
  // @TODO i18n_language_variable ?
  foreach (_services_node_view_language_types() as $langtype) {
    $replacement_languages[$langtype] = $langobj;
  }
  return $replacement_languages;
}

function _services_node_view_language_types() {
  return array('language', 'language_url', 'language_content', 'i18n_language_variable');
}
