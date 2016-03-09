<?php 

// Plugin definition
$plugin = array(
  'title' => t('Panel school content type'),
  'category' => t('KOS Layouts'),
  'icon' => 'panels_school_content_type.png',
  'theme' => 'panels_school_content_type',
  'css' => 'panels_school_content_type.css',
  'regions' => array(
    'top' => t('Top'),
    'sidebar' => t('Sidebar'),
    'content' => t('Main content'),     
    'content_all' => t('Content all'), 
    'content_top' => t('Content top'),
    'content_left' => t('Content left'),
    'content_right' => t('Content right'),
    'content_bottom' => t('Content bottom'),
    'bottom' => t('Bottom') 
  ),
);
