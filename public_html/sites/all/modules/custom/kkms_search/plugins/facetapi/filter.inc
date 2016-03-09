<?php

/**
 * Plugin that filters active items.
 */
class FacetapiFilterNotLocalTerms extends FacetapiFilter {

  /**
   * Implements FacetapiFilter::execute().
   */
  public function execute(array $build) {
    $site = apachesolr_site_hash();
    foreach ($build as $key => $value) {
      if(preg_match('@^local_([\da-z]+)_[\d]+$@', $key, $match) && $match[1] != $site) {
       unset($build[$key]);
      }
    }
    return $build;
  }
}