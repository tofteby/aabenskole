<?php
/**
 * @file
 */

?>
<div class="events-banner-pane clearfix <?php print $classes; ?>"<?php print $attributes; ?>>
  <a class="picture" href='<?php echo $field_search_link['0']['display_url']?>' >
    <?php echo $field_image; ?>
  </a>
  <?php if ($field_text['0']['safe_value']): ?>
    <div class="description">
      <a class="title" href='<?php echo $field_search_link['0']['display_url']?>' >
       <?php echo $field_text['0']['safe_value']; ?>
      </a>
      <a href='<?php echo $field_search_link['0']['display_url']?>' >
       <?php //echo drupal_render($field_image); ?> 
      </a>
    </div>
  <?php endif ?> 
</div>
