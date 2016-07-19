<?php
/**
 * @file
 * Template for a 2 column panel layout.
 *
 * This template provides a two column panel display layout, with
 * additional areas for the top and the bottom.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['top']: Content in the top row.
 *   - $content['sidebar']: Content in the right column.
 *   - $content['content']: Content in the left column.
 *   - $content['bottom']: Content in the bottom row.
 */
?>
<div class="panels_school_content_type">
  <?php if ($content['top']): ?>
  <div class="reg-top">
    <?php print $content['top']; ?>
  </div>
  <?php endif ?>  
  
  <div class="wrapper-layout">   
    <div class="content-wrap">
      <div class="panel-panel content-top">
        <div class="inside"><?php print $content['content_top']; ?></div>
      </div>
      <div class="content-all clearfix">
        <div class="panel-panel content-left">
          <div class="inside"><?php print $content['content_left']; ?></div>
        </div>

        <div class="panel-panel content-right">
          <div class="inside"><?php print $content['content_right']; ?></div>
        </div>
      </div>
      <div class="panel-panel content-bottom clearfix">
        <div class="inside"><?php print $content['content_bottom']; ?></div>
      </div>
    </div>
    <div class="reg-sidebar">
      <?php print $content['sidebar']; ?>
    </div> 
  </div>

  <?php if ($content['bottom']): ?>
  <div class="reg-bottom clearfix">
    <?php print $content['bottom']; ?>
  </div>
  <?php endif ?>
</div>