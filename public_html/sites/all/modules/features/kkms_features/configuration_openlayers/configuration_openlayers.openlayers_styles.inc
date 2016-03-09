<?php
/**
 * @file
 * configuration_openlayers.openlayers_styles.inc
 */

/**
 * Implements hook_openlayers_styles().
 */
function configuration_openlayers_openlayers_styles() {
  $export = array();

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'kkms_default';
  $openlayers_styles->title = 'KKMS Default';
  $openlayers_styles->description = 'KKMS Default style';
  $openlayers_styles->data = array(
    'pointRadius' => 6,
    'fillColor' => '#FFFFFF',
    'strokeColor' => '#000000',
    'strokeWidth' => 5,
    'fillOpacity' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['kkms_default'] = $openlayers_styles;

  return $export;
}
