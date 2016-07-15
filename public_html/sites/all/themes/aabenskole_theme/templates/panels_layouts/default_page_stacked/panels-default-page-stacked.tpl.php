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
<?php if (!empty($css_id)) { print "<section id=\"$css_id\" >"; } ?>
  <?php if ($content['top']): ?>
  <div class="reg-top">
    <?php print $content['top']; ?>
  </div>
  <?php endif ?>

  <?php if ($content['content']): ?>
  <div class="reg-content">
    <?php print $content['content']; ?>
  </div>
  <?php endif ?>

  <?php $blocks = block_get_blocks_by_region('sidebar'); ?>
  <?php if ($content['sidebar'] || $blocks): ?>
  <div class="reg-sidebar">
    <?php if(!empty($blocks)): ?>
      <?php print render($blocks); ?>
    <?php endif; ?>
    <?php print $content['sidebar']; ?>
  </div>
  <?php endif ?>

  <?php if ($content['bottom']): ?>
  <div class="reg-bottom">
    <?php print $content['bottom']; ?>
  </div>
  <?php endif ?>
<?php if (!empty($css_id)) { print "</section>"; } ?>
