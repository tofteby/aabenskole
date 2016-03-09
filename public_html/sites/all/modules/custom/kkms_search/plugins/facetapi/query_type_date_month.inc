<?php

class KKMSFacetapiDateMonth extends ApacheSolrFacetapiDate implements FacetapiQueryTypeInterface {
  /**
   * Make sure only month GAP is chosen. Otherwise works the same as ApacheSolrFacetapiDate.
   */
  function getDateRange(DrupalSolrQueryInterface $query) {
    $return = NULL;
    $gap = NULL;

    // Attempts to get next gap from passed date filters.
    foreach ($this->adapter->getActiveItems($this->facet) as $item) {
      if ($gap = facetapi_get_date_gap($item['start'], $item['end'])) {
        $next_gap = facetapi_get_next_date_gap($gap, FACETAPI_DATE_SECOND);
        if ($next_gap == $gap) {
          $next_gap = NULL;
          return NULL;
        }
        $return = array(
          "{$item['start']}/$next_gap",
          "{$item['end']}+1$next_gap/$next_gap",
          "+1$next_gap",
        );
      }
    }

    // If no filters were passed, get default range.
    // This is the real change. We need to have minimum and maximum for the solr query.
    // But for the purposes of multisite search, and the Solrdate entities, we don't
    // know what these constraints are.
    if (NULL === $return) {
      $gap = FACETAPI_DATE_MONTH;
      $minimum = facetapi_isodate(1, $gap);
      $maximum = facetapi_isodate(9999999999, $gap);
      $return = array(
        "$minimum/$gap",
        "$maximum+1$gap/$gap",
        "+1$gap",
      );
    }
    // Returns the range information.
    return $return;
  }
}
