<?php

// Plugin definition
$plugin = array(
  'title' => t('Default page layout'),
  'category' => t('KK Layouts'),
  'icon' => 'default_page_stacked.png',
  'theme' => 'panels_default_page_stacked',
  'css' => 'default_page_stacked.css',
  'regions' => array(
    'top' => t('Top'),
    'sidebar' => t('Sidebar'),
    'content' => t('Main content'),
    'bottom' => t('Bottom')
  ),
);
