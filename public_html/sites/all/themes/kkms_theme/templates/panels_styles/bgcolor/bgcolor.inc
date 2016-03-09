<?php
$plugin = array(
  'bgcolor' => array(
    'title' => t('Background color'),
    'description' => t('Select the background color to apply for the region/pane.'),

    'render pane' => 'panels_bgcolor_style_render_pane',
    'pane settings form' => 'panels_pane_bgcolor_style_settings_form',

    'render region' => 'panels_bgcolor_style_render_region',
    'settings form' => 'panels_region_bgcolor_style_settings_form',

    'hook theme' => array(
      'panels_pane_bgcolor' => array(
        'arguments' => array('content' => NULL, 'color' => NULL),
        'path' =>  drupal_get_path('theme', 'kkms_theme') . '/templates/panels_styles/bgcolor',
        'template' => 'bgcolor-pane',
      ),
      'panels_region_bgcolor' => array(
        'arguments' => array('content' => NULL, 'color' => NULL),
        'path' =>  drupal_get_path('theme', 'kkms_theme') . '/templates/panels_styles/bgcolor',
        'template' => 'bgcolor-region',
      ),
    ),
  ),
);


/**
 * Render callback for a single pane.
 */
function theme_panels_bgcolor_style_render_pane($vars) {
  $content = $vars['content'];
  $pane = $vars['pane'];
  $display = $vars['display'];

  if (empty($content->content)) {
    return;
  }

  $settings = $vars['settings'];
  $color = empty($settings['bgcolor_color']) ? 'white' : $settings['bgcolor_color'];

  $output = theme('panels_pane', array('content' => $content, 'pane' => $pane, 'display' => $display));
  $output = theme('panels_pane_bgcolor', array('content' => $output, 'color'=>$color));
  return $output;
}

/**
 * Render callback for region (panel)
 */
function theme_panels_bgcolor_style_render_region($vars) {
  $display = $vars['display'];
  $region_id = $vars['region_id'];
  $panes = $vars['panes'];
  $settings = $vars['settings'];

  $where = empty($settings['bgcolor_target']) ? 'panel' : $settings['bgcolor_target'];
  $color = empty($settings['bgcolor_color']) ? 'white' : $settings['bgcolor_color'];
  //  print '<pre>'.__FILE__.':'.__LINE__.'('.__FUNCTION__.')<br>  '.htmlspecialchars(print_r($settings, TRUE), ENT_QUOTES) . '</pre>';exit();

  $output = '';
  foreach ($panes as $pane_id => $pane) {
    if($where == 'pane') {
      $output .= theme('panels_pane_bgcolor', array('content' => $pane, 'color'=>$color));
    }
    else {
      $output .= $pane;
    }
  }

  if($where == 'panel') {
    $output = theme('panels_region_bgcolor', array('content' => $output, 'color'=>$color));
  }

  return $output;
}


/**
 * Settings form to customize the background color for the panes.
 */
function panels_pane_bgcolor_style_settings_form($style_settings) {
  $form['bgcolor_color'] = array(
    '#type' => 'select',
    '#title' => t('Color'),
    '#options' => array(
      'white' => t('White'),
      'grey' => t('Grey'),
    ),
    '#default_value' => (isset($style_settings['bgcolor_color'])) ? $style_settings['bgcolor_color'] : 'white',
    '#description' => t('Choose the background color.'),
  );

  return $form;
}

/**
 * Settings form to customize the background color for the panels.
 */
function panels_region_bgcolor_style_settings_form($style_settings) {
  $form['bgcolor_color'] = array(
    '#type' => 'select',
    '#title' => t('Color'),
    '#options' => array(
      'white' => t('White'),
      'grey' => t('Grey'),
    ),
    '#default_value' => (isset($style_settings['bgcolor_color'])) ? $style_settings['bgcolor_color'] : 'white',
    '#description' => t('Choose the background color.'),
  );

  $form['bgcolor_target'] = array(
    '#type' => 'select',
    '#title' => t('Target'),
    '#options' => array(
      'pane' => t('Each pane'),
      'panel' => t('Region'),
    ),
    '#default_value' => (isset($style_settings['bgcolor_target'])) ? $style_settings['bgcolor_target'] : 'ul',
    '#description' => t('Choose whether to the background color should be applied around each pane (piece of content) or region (each column or region).'),
  );

  return $form;
}
