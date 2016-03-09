<?php
/**
 * @file
 * HTML field plugin for apachesolr allow most HTML. Very permisive.
 */
class apachesolr_channels_html_field extends apachesolr_channels_views_handler_field {
  // Permisive html.
  function render($values) {
    $value = $this->get_value($values);
    return $this->sanitize_value($value, 'xss_admin');
  }
}
