<?php

/**
 * @file
 * KKMS theme implementation for displaying a single search result.
 *
 * This template renders a single search result and is collected into
 * search-results.tpl.php. This and the parent template are
 * dependent to one another sharing the markup for definition lists.
 *
 * Available variables:
 * - $url: URL of the result.
 * - $title: Title of the result.
 * - $snippet: A small preview of the result. Does not apply to user searches.
 * - $info: String of all the meta information ready for print. Does not apply
 *   to user searches.
 * - $info_split: Contains same data as $info, split into a keyed array.
 * - $module: The machine-readable name of the module (tab) being searched, such
 *   as "node" or "user".
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Default keys within $info_split:
 * - $info_split['type']: Node type (or item type string supplied by module).
 * - $info_split['user']: Author of the node linked to users profile. Depends
 *   on permission.
 * - $info_split['date']: Last update of the node. Short formatted.
 * - $info_split['comment']: Number of comments output as "% comments", %
 *   being the count. Depends on comment.module.
 *
 * Other variables:
 * - $classes_array: Array of HTML class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $title_attributes_array: Array of HTML attributes for the title. It is
 *   flattened into a string within the variable $title_attributes.
 * - $content_attributes_array: Array of HTML attributes for the content. It is
 *   flattened into a string within the variable $content_attributes.
 *
 * Since $info_split is keyed, a direct print of the item is possible.
 * This array does not apply to user searches so it is recommended to check
 * for its existence before printing. The default keys of 'type', 'user' and
 * 'date' always exist for node searches. Modules may provide other data.
 * @code
 *   <?php if (isset($info_split['comment'])): ?>
 *     <span class="info-comment">
 *       <?php print $info_split['comment']; ?>
 *     </span>
 *   <?php endif; ?>
 * @endcode
 *
 * To check for all available data within $info_split, use the code below.
 * @code
 *   <?php print '<pre>'. check_plain(print_r($info_split, 1)) .'</pre>'; ?>
 * @endcode
 *
 * @see template_preprocess()
 * @see template_preprocess_search_result()
 * @see template_process()
 *
 * @ingroup themeable
 */

$term_fields = _kos_search_get_term_fields();

?>
<li class="clearfix <?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="search-snippet-info">
     <a href="<?php print $url; ?>">
       <p class="search-image"><?php echo $image_field ?></p>
     </a>
     <div class="content">
        <?php print render($title_prefix); ?>
          <h3 class="title"<?php print $title_attributes; ?>>
            <a href="<?php print $url; ?>"><?php print $title; ?></a>
          </h3>
        <?php print render($title_suffix); ?>
        <?php if ($snippet): ?>
          <p class="search-snippet"<?php print $content_attributes; ?>><?php print $snippet; ?></p>
        <?php endif; ?>
     </div>
    <div class='search-fields-events-left'>
<?php foreach ($term_fields as $field_id => $field_data):
        if (isset(${$field_id}) && count(${$field_id})): ?>
            <div class='search-categories'>
            <span class="tx-type" ><?php echo $field_data['title']?>:</span>
            <?php foreach(${$field_id} as $term_item): ?>
              <div class="field-item">
                <?php print $term_item['name']; ?>
              </div>
            <?php endforeach;?>
            </div>
         <?php endif ?>
<?php endforeach; ?>
      </div>
      <div class='search-fields-events-right'>
        <div class='date'><span class="begin-date"><?php print $event_date_start?> <?print t("to");?></span>  <span class="end-date"><?php print $event_date_end?></span></div>
        <?php if($result['fields']['sm_vid_School_event_price']['0']): ?>
        <div class='price'><span class="price-text"><?php print $result['fields']['sm_vid_School_event_price']['0']?></span></div>
        <?php endif; ?>
        <div class='icon-link'><span class="link-search"><?php print l(t('Go to event'),$url, array('attributes' => array('target'=>'_blank')))?></span></div>
      </div>
  </div>
</li>
