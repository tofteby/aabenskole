<?php
/**
 * @file
 *
 *
 * Variables:
 * - $fields - Rendered markup.
 */
?>
<div class="events-banner-pane <?php print $classes; ?>"<?php print $attributes; ?>>
  <?php print $fields; ?>
  <?php if ($display_form): ?>
    <div class='banner-pane-search-form' style="background:#<?php echo $search_form_color ?>">
         <?php print render($search_form); ?>
    </div>
  <?php endif; ?>  
</div>
