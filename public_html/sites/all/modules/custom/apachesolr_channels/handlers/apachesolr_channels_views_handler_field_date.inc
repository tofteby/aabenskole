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
class apachesolr_channels_views_handler_field_date extends views_handler_field_date {
  /**
   * Custom implementation that extracts a timestamp from string, based on the 
   * current locale settintgs.
   * 
   * @see apachesolr_views_handler_field::get_value
   * 
   * @param type $values
   * @param type $field
   * @return int timestamp
   */
  function get_value($values, $field = NULL) {
    $alias = isset($field) ? $this->aliases[$field] : $this->field_alias;
    if (!isset($values->{$alias})) {
      return;
    }
    $callback = 'strtotime';
    if (is_array($values->{$alias})) {
      $all_values = array_map($callback, $values->{$alias});
      // Date field expects only one timestamp, so extracting the first one only.
      $value = array_shift($all_values);
    }
    else {
      $value = call_user_func($callback, $values->{$alias});
    }
    return $value;
  }

  /**
   * Called to determine what to tell the clicksorter.
   * 
   * @see apachesolr_views_handler_field::click_sort
   */
  function click_sort($order) {
    $sort_field = (isset($this->definition['click sort field']) ? $this->definition['click sort field'] : $this->real_field);
    $this->query->add_sort($sort_field, $order);
  }
}
