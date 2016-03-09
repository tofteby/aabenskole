<?php

// Plugin definition
$plugin = array(
  'title' => t('One column stacked'),
  'category' => t('KK Layouts'),
  'icon' => 'onecol_stacked.png',
  'theme' => 'panels_onecol_stacked',
  'css' => 'onecol_stacked.css',
  'regions' => array(
    'top_menu_left' => t('Top left'),
    'top_menu_right' => t('Top right'),
    'top' => t('Top'),
    'content' => t('Main content'),
    'content_3_columns' => t('Main content 3 columns'),
    'bottom' => t('Bottom')
  ),
);
