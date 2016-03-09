<?php

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * Date handler that will manage the formatting based on the current site 
 * settings.
 *
 * @author Nikolay Dobromirov
 * @see apachesolr_views_handler_field
 */
class apachesolr_channels_views_handler_field_site extends apachesolr_views_handler_field {
  /**
   * 
   * @param type $values
   * @param type $field
   * @return type
   */
  function get_value($values, $field = NULL) {
    $value = parent::get_value($values);
    $result = $value;
    
    if (($url = parse_url($value)) !== FALSE && isset($url['scheme']) && isset($url['host'])) {
      $result = "$url[scheme]://$url[host]";
    }
    
    return $result;
  }
}
