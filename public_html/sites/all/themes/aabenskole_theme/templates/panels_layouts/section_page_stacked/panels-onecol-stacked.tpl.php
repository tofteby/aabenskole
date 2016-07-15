<?php
/**
 * @file
 * Template for a 2 column panel layout.
 *
 * This template provides a one column display layout, with
 * additional areas for the top and the bottom.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['top']: Content in the top row.
 *   - $content['content']: Content in the left column.
 *   - $content['bottom']: Content in the bottom row.
 */
/*
 * The way to determine when to put the background color
 */
?>
<section <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['top_menu_left'] || $content['top_menu_right']): ?>
  <?php
    $class=' ';
    if($content['top_menu_right'] && preg_match('/(panels-region-bgcolor-[^\"]*)/i',$content['top_menu_right'],$matches)){
      $class .= 'full-width-bg '. $matches[1];
    }
    else if($content['top_menu_left'] && preg_match('/(panels-region-bgcolor-[^\"]*)/i',$content['top_menu_left'],$matches)) {
      $class .= 'full-width-bg '. $matches[1];
    }
  ?>
  <div class="reg-top-menu <?php print($class); ?>">
    <div class="reg-inner">
      <div class="reg-inner-regions">
        <div class="reg-top-menu-left">
          <?php print $content['top_menu_left']; ?>
        </div>
        <div class="reg-top-menu-right">
          <?php print $content['top_menu_right']; ?>
        </div>
      </div>
    </div>
  </div>
  <?php endif ?>
  
  <?php if ($content['top']): ?>
  <?php
    $class=' ';
    if(preg_match('/(panels-region-bgcolor-[^\"]*)/i',$content['top'],$matches)){
      $class .= 'full-width-bg '. $matches[1];
    }
    if(preg_match('/(banner-pane)/i',$content['top'],$matches)){
      $class .= ' full-width-image';
    }
  ?>
  <div class="reg-top <?php print($class); ?>">
    <div class="reg-inner">
      <?php print $content['top']; ?>
    </div>
  </div>
  <?php endif ?>

  <?php if ($content['content']): ?>
  <?php
    $class='';
      if(preg_match('/(panels-region-bgcolor-[^\"]*)/i',$content['content'],$matches)){
        $class .= 'full-width-bg '. $matches[1];
      }
    if(preg_match('/(banner-pane)/i',$content['content'],$matches)){
      $class .= ' full-width-image';
    }
  ?>
  <div class="reg-middle <?php print($class); ?>">
    <div class="reg-inner">
      <?php print $content['content']; ?>
    </div>
  </div>
  <?php endif ?>
  
  <?php if ($content['content_3_columns']): ?>
  <?php
    $class='';
    if(preg_match('/(panels-region-bgcolor-[^\"]*)/i',$content['content_3_columns'],$matches)){
      $class .= 'full-width-bg '. $matches[1];
    }
    if(preg_match('/(banner-pane)/i',$content['content_3_columns'],$matches)){
      $class .= ' full-width-image';
    }
  ?>
  <div class="reg-middle-3-col <?php print($class); ?>">
    <div class="reg-inner">
      <div class="reg-inner-regions">
        <?php print $content['content_3_columns']; ?>
      </div>
    </div>
  </div>
  <?php endif ?>

  <?php if ($content['bottom']): ?>
  <?php
    $class='';
    if(preg_match('/(panels-region-bgcolor-[^\"]*)/i',$content['bottom'],$matches)){
      $class .= 'full-width-bg '. $matches[1];
    }
    if(preg_match('/(banner-pane)/i',$content['bottom'],$matches)){
      $class .= ' full-width-image';
    }
  ?>
  <div class="reg-bottom <?php print($class); ?>">
    <div class="reg-inner">
      <?php print $content['bottom']; ?>
    </div>
  </div>
  <?php endif ?>
</section>
