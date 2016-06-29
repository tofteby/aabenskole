<?php

/**
 * Theme overrides for blocks.
 */
function ringstedtheme_preprocess_block(&$vars) {

  // Add styling classes based on region.
  switch ($vars['elements']['#block']->region) {

    case 'footer':
      $vars['title_attributes_array']['class'][] = 'title-footer';

      switch ($vars['elements']['#block']->module) {
        case 'follow':
          $vars['classes_array'][] = 'bl-follow';
          break;

        default:
          if(($key = array_search('bl-footer', $vars['classes_array'])) !== false) {
              unset($vars['classes_array'][$key]);
          }
          $vars['classes_array'][] = 'block-footer';
          if(($key = array_search('tx-content', $vars['content_attributes_array']['class'])) !== false) {
              unset($vars['content_attributes_array']['class'][$key]);
          }
          if(($key = array_search('tx-sec', $vars['content_attributes_array']['class'])) !== false) {
              unset($vars['content_attributes_array']['class'][$key]);
          }

      }

      break;

    default:
      if (function_exists('dsm') && theme_get_setting('debug_info')) {
        print '<pre>'.__FILE__.':'.__LINE__.'('.__FUNCTION__.')<br>  '.htmlspecialchars(print_r($vars['elements']['#block']->region, TRUE), ENT_QUOTES) . '</pre>';exit();
      }
      break;
  }

}