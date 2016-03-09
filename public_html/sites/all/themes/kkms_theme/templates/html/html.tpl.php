<!DOCTYPE html>
<html class="no-js" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>">
<head>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <meta name="viewport" content="width=device-width, initial-scale=1" />
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <?php print $styles; ?>
  <!--[if lte IE 8]>
    <script src="<?php print base_path() . path_to_theme();?>/js/libraries/respond.min.js"></script>
  <![endif]-->
  <?php print $scripts; ?>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <!--[if lt IE 7]>      <div class="page lt-ie9 lt-ie8 lt-ie7"> <![endif]-->
  <!--[if IE 7]>         <div class="page lt-ie9 lt-ie8"> <![endif]-->
  <!--[if IE 8]>         <div class="page lt-ie9"> <![endif]-->
  <!--[if gt IE 8]><!--> <div class="page"> <!--<![endif]-->
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</div>
</body>
</html>
