<?php
/**
 * @file
 *
 * Banner pane - wrap everything in a link
 * Variables:
 * - $fields - Rendered markup.
 * - $banner_url - Absoulte path for link
 * And more...
 */
?>
<div class="banner-pane <?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if ($banner_url): ?>
    <?php print l($fields, $banner_url, array('html' => TRUE)); ?>
  <?php else: ?>
    <?php print $fields; ?>
  <?php endif; ?>
</div>
