<?php
/**
 * @file
 * configuration_openlayers.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function configuration_openlayers_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'big_map_with_point';
  $openlayers_maps->title = 'Big map with point';
  $openlayers_maps->description = 'A map used for displaying of a single Point, on Place content.';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '10.349121077523044, 55.55349545978444',
        'zoom' => '9',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 1,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'geofield_formatter' => 'geofield_formatter',
          'mapquest_osm' => 0,
          'google_satellite' => 0,
        ),
        'point_zoom_level' => '9',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'google_satellite' => 'google_satellite',
      'geofield_formatter' => 'geofield_formatter',
    ),
    'layer_weight' => array(
      'objects_view_area_area_institution_data_overlay' => '0',
      'geofield_formatter' => '0',
      'objects_view_area_area_place_data_overlay' => '0',
      'node_type_map__map_objects__view_map_openlayers_for_institution' => '0',
      'openlayers_geojson_picture_this' => '0',
      'node_type_map__map_objects__view_openlayers_map_node_type' => '0',
      'openlayers_kml_example' => '0',
    ),
    'layer_styles' => array(
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'node_type_map__map_objects__view_openlayers_map_node_type' => '0',
      'node_type_map__map_objects__view_map_openlayers_for_institution' => '0',
      'objects_view_area_area_place_data_overlay' => '0',
      'objects_view_area_area_institution_data_overlay' => '0',
      'geofield_formatter' => 'kkms_default',
    ),
    'layer_styles_select' => array(
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'node_type_map__map_objects__view_openlayers_map_node_type' => '0',
      'node_type_map__map_objects__view_map_openlayers_for_institution' => '0',
      'objects_view_area_area_place_data_overlay' => '0',
      'objects_view_area_area_institution_data_overlay' => '0',
      'geofield_formatter' => 'kkms_default',
    ),
    'layer_styles_temporary' => array(
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'node_type_map__map_objects__view_openlayers_map_node_type' => '0',
      'node_type_map__map_objects__view_map_openlayers_for_institution' => '0',
      'objects_view_area_area_place_data_overlay' => '0',
      'objects_view_area_area_institution_data_overlay' => '0',
      'geofield_formatter' => 'kkms_default',
    ),
    'layer_activated' => array(
      'geofield_formatter' => 'geofield_formatter',
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'node_type_map__map_objects__view_openlayers_map_node_type' => 0,
      'node_type_map__map_objects__view_map_openlayers_for_institution' => 0,
      'objects_view_area_area_place_data_overlay' => 0,
      'objects_view_area_area_institution_data_overlay' => 0,
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'node_type_map__map_objects__view_openlayers_map_node_type' => 0,
      'node_type_map__map_objects__view_map_openlayers_for_institution' => 0,
      'objects_view_area_area_place_data_overlay' => 0,
      'objects_view_area_area_institution_data_overlay' => 0,
    ),
    'projection' => 'EPSG:900913',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['big_map_with_point'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'field_geolocation__widget_map';
  $openlayers_maps->title = 'Location widget map';
  $openlayers_maps->description = 'Widget map used for all content types using Location (field_geolocation) field.';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '0, 0',
        'zoom' => '1',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_geofield' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_normal' => 'google_normal',
    ),
    'layer_weight' => array(
      'objects_view_area_area_institution_data_overlay' => '0',
      'node_type_map__map_objects__view_openlayers_map_node_type' => '0',
      'node_type_map__map_objects__view_map_openlayers_for_institution' => '0',
      'objects_view_area_area_place_data_overlay' => '0',
      'hot_spots_view_openlayers_1' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'hot_spots_view_openlayers_1' => '0',
      'objects_view_area_area_place_data_overlay' => '0',
      'objects_view_area_area_institution_data_overlay' => '0',
      'node_type_map__map_objects__view_openlayers_map_node_type' => '0',
      'node_type_map__map_objects__view_map_openlayers_for_institution' => '0',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'hot_spots_view_openlayers_1' => '0',
      'objects_view_area_area_place_data_overlay' => '0',
      'objects_view_area_area_institution_data_overlay' => '0',
      'node_type_map__map_objects__view_openlayers_map_node_type' => '0',
      'node_type_map__map_objects__view_map_openlayers_for_institution' => '0',
    ),
    'layer_styles_temporary' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'hot_spots_view_openlayers_1' => '0',
      'objects_view_area_area_place_data_overlay' => '0',
      'objects_view_area_area_institution_data_overlay' => '0',
      'node_type_map__map_objects__view_openlayers_map_node_type' => '0',
      'node_type_map__map_objects__view_map_openlayers_for_institution' => '0',
    ),
    'layer_activated' => array(
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'hot_spots_view_openlayers_1' => 0,
      'objects_view_area_area_place_data_overlay' => 0,
      'objects_view_area_area_institution_data_overlay' => 0,
      'node_type_map__map_objects__view_openlayers_map_node_type' => 0,
      'node_type_map__map_objects__view_map_openlayers_for_institution' => 0,
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'hot_spots_view_openlayers_1' => 0,
      'objects_view_area_area_place_data_overlay' => 0,
      'objects_view_area_area_institution_data_overlay' => 0,
      'node_type_map__map_objects__view_openlayers_map_node_type' => 0,
      'node_type_map__map_objects__view_map_openlayers_for_institution' => 0,
    ),
    'projection' => 'EPSG:900913',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['field_geolocation__widget_map'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'node_type_area__formatter_map';
  $openlayers_maps->title = 'Area Formatter Map';
  $openlayers_maps->description = 'A Map Used for Area content type Output';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '8.789062462493037, 47.69497435948865',
        'zoom' => '4',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '-1428455.188337,4344069.194725,3404810.983325,8140237.7668',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 1,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'objects_view_area_area_place_data_overlay' => 'objects_view_area_area_place_data_overlay',
          'objects_view_area_area_institution_data_overlay' => 'objects_view_area_area_institution_data_overlay',
          'geofield_formatter' => 0,
        ),
        'panMapIfOutOfView' => 0,
        'keepInMap' => 1,
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'objects_view_area_area_place_data_overlay' => 'objects_view_area_area_place_data_overlay',
          'geofield_formatter' => 'geofield_formatter',
          'objects_view_area_area_institution_data_overlay' => 'objects_view_area_area_institution_data_overlay',
          'google_normal' => 0,
          'mapquest_openaerial' => 0,
        ),
        'point_zoom_level' => '5',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_normal' => 'google_normal',
      'mapquest_openaerial' => 'mapquest_openaerial',
      'geofield_formatter' => 'geofield_formatter',
      'objects_view_area_area_institution_data_overlay' => 'objects_view_area_area_institution_data_overlay',
      'objects_view_area_area_place_data_overlay' => 'objects_view_area_area_place_data_overlay',
    ),
    'layer_weight' => array(
      'geofield_formatter' => '0',
      'objects_view_area_area_institution_data_overlay' => '0',
      'objects_view_area_area_place_data_overlay' => '0',
      'node_type_map__map_objects__view_map_openlayers_for_institution' => '0',
      'openlayers_geojson_picture_this' => '0',
      'node_type_map__map_objects__view_openlayers_map_node_type' => '0',
      'openlayers_kml_example' => '0',
    ),
    'layer_styles' => array(
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'node_type_map__map_objects__view_openlayers_map_node_type' => '0',
      'node_type_map__map_objects__view_map_openlayers_for_institution' => '0',
      'objects_view_area_area_place_data_overlay' => 'kkms_default',
      'geofield_formatter' => '0',
      'objects_view_area_area_institution_data_overlay' => 'kkms_default',
    ),
    'layer_styles_select' => array(
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'node_type_map__map_objects__view_openlayers_map_node_type' => '0',
      'node_type_map__map_objects__view_map_openlayers_for_institution' => '0',
      'objects_view_area_area_place_data_overlay' => 'kkms_default',
      'geofield_formatter' => '0',
      'objects_view_area_area_institution_data_overlay' => 'kkms_default',
    ),
    'layer_styles_temporary' => array(
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'node_type_map__map_objects__view_openlayers_map_node_type' => '0',
      'node_type_map__map_objects__view_map_openlayers_for_institution' => '0',
      'objects_view_area_area_place_data_overlay' => 'kkms_default',
      'geofield_formatter' => '0',
      'objects_view_area_area_institution_data_overlay' => 'kkms_default',
    ),
    'layer_activated' => array(
      'objects_view_area_area_place_data_overlay' => 'objects_view_area_area_place_data_overlay',
      'geofield_formatter' => 'geofield_formatter',
      'objects_view_area_area_institution_data_overlay' => 'objects_view_area_area_institution_data_overlay',
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'node_type_map__map_objects__view_openlayers_map_node_type' => 0,
      'node_type_map__map_objects__view_map_openlayers_for_institution' => 0,
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'objects_view_area_area_place_data_overlay' => 0,
      'objects_view_area_area_institution_data_overlay' => 0,
      'node_type_map__map_objects__view_openlayers_map_node_type' => 0,
      'node_type_map__map_objects__view_map_openlayers_for_institution' => 0,
    ),
    'projection' => 'EPSG:900913',
    'displayProjection' => 'EPSG:900913',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['node_type_area__formatter_map'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'node_type_map__formatter_map';
  $openlayers_maps->title = 'Node Type Map - Formatter Map';
  $openlayers_maps->description = 'Map used to displays the related map objects to a map node on node view.';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '17.57812498247825, 52.052490478101355',
        'zoom' => '3',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'node_type_map__map_objects__view_map_openlayers_for_institution' => 'node_type_map__map_objects__view_map_openlayers_for_institution',
          'node_type_map__map_objects__view_openlayers_map_node_type' => 'node_type_map__map_objects__view_openlayers_map_node_type',
          'geofield_formatter' => 0,
        ),
        'panMapIfOutOfView' => 0,
        'keepInMap' => 1,
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'node_type_map__map_objects__view_map_openlayers_for_institution' => 'node_type_map__map_objects__view_map_openlayers_for_institution',
          'node_type_map__map_objects__view_openlayers_map_node_type' => 'node_type_map__map_objects__view_openlayers_map_node_type',
          'google_normal' => 0,
          'mapquest_openaerial' => 0,
          'geofield_formatter' => 0,
        ),
        'point_zoom_level' => '5',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_normal' => 'google_normal',
      'mapquest_openaerial' => 'mapquest_openaerial',
      'node_type_map__map_objects__view_map_openlayers_for_institution' => 'node_type_map__map_objects__view_map_openlayers_for_institution',
      'node_type_map__map_objects__view_openlayers_map_node_type' => 'node_type_map__map_objects__view_openlayers_map_node_type',
      'geofield_formatter' => 'geofield_formatter',
    ),
    'layer_weight' => array(
      'node_type_map__map_objects__view_map_openlayers_for_institution' => '0',
      'node_type_map__map_objects__view_openlayers_map_node_type' => '0',
      'geofield_formatter' => '0',
      'objects_view_area_area_institution_data_overlay' => '0',
      'openlayers_geojson_picture_this' => '0',
      'objects_view_area_area_place_data_overlay' => '0',
      'openlayers_kml_example' => '0',
    ),
    'layer_styles' => array(
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'objects_view_area_area_place_data_overlay' => '0',
      'objects_view_area_area_institution_data_overlay' => '0',
      'geofield_formatter' => '0',
      'node_type_map__map_objects__view_map_openlayers_for_institution' => 'kkms_default',
      'node_type_map__map_objects__view_openlayers_map_node_type' => 'kkms_default',
    ),
    'layer_styles_select' => array(
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'objects_view_area_area_place_data_overlay' => '0',
      'objects_view_area_area_institution_data_overlay' => '0',
      'geofield_formatter' => '0',
      'node_type_map__map_objects__view_map_openlayers_for_institution' => 'kkms_default',
      'node_type_map__map_objects__view_openlayers_map_node_type' => 'kkms_default',
    ),
    'layer_styles_temporary' => array(
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'objects_view_area_area_place_data_overlay' => '0',
      'objects_view_area_area_institution_data_overlay' => '0',
      'geofield_formatter' => '0',
      'node_type_map__map_objects__view_map_openlayers_for_institution' => 'kkms_default',
      'node_type_map__map_objects__view_openlayers_map_node_type' => 'kkms_default',
    ),
    'layer_activated' => array(
      'geofield_formatter' => 'geofield_formatter',
      'node_type_map__map_objects__view_map_openlayers_for_institution' => 'node_type_map__map_objects__view_map_openlayers_for_institution',
      'node_type_map__map_objects__view_openlayers_map_node_type' => 'node_type_map__map_objects__view_openlayers_map_node_type',
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'objects_view_area_area_place_data_overlay' => 0,
      'objects_view_area_area_institution_data_overlay' => 0,
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'objects_view_area_area_place_data_overlay' => 0,
      'objects_view_area_area_institution_data_overlay' => 0,
      'node_type_map__map_objects__view_openlayers_map_node_type' => 0,
      'node_type_map__map_objects__view_map_openlayers_for_institution' => 0,
    ),
    'projection' => 'EPSG:900913',
    'displayProjection' => 'EPSG:900913',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['node_type_map__formatter_map'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'simple_map_with_point';
  $openlayers_maps->title = 'Simple Map with Point';
  $openlayers_maps->description = 'A map used for displaying of a Reference to a single Place content.';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '120px',
    'image_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '10.349121077523044, 55.55349545978444',
        'zoom' => '9',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'geofield_formatter' => 'geofield_formatter',
          'mapquest_osm' => 0,
        ),
        'point_zoom_level' => '9',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'geofield_formatter' => 'geofield_formatter',
    ),
    'layer_weight' => array(
      'objects_view_area_area_institution_data_overlay' => '0',
      'geofield_formatter' => '0',
      'objects_view_area_area_place_data_overlay' => '0',
      'node_type_map__map_objects__view_map_openlayers_for_institution' => '0',
      'openlayers_geojson_picture_this' => '0',
      'node_type_map__map_objects__view_openlayers_map_node_type' => '0',
      'openlayers_kml_example' => '0',
    ),
    'layer_styles' => array(
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'node_type_map__map_objects__view_openlayers_map_node_type' => '0',
      'node_type_map__map_objects__view_map_openlayers_for_institution' => '0',
      'objects_view_area_area_place_data_overlay' => '0',
      'objects_view_area_area_institution_data_overlay' => '0',
      'geofield_formatter' => 'kkms_default',
    ),
    'layer_styles_select' => array(
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'node_type_map__map_objects__view_openlayers_map_node_type' => '0',
      'node_type_map__map_objects__view_map_openlayers_for_institution' => '0',
      'objects_view_area_area_place_data_overlay' => '0',
      'objects_view_area_area_institution_data_overlay' => '0',
      'geofield_formatter' => 'kkms_default',
    ),
    'layer_styles_temporary' => array(
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'node_type_map__map_objects__view_openlayers_map_node_type' => '0',
      'node_type_map__map_objects__view_map_openlayers_for_institution' => '0',
      'objects_view_area_area_place_data_overlay' => '0',
      'objects_view_area_area_institution_data_overlay' => '0',
      'geofield_formatter' => 'kkms_default',
    ),
    'layer_activated' => array(
      'geofield_formatter' => 'geofield_formatter',
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'node_type_map__map_objects__view_openlayers_map_node_type' => 0,
      'node_type_map__map_objects__view_map_openlayers_for_institution' => 0,
      'objects_view_area_area_place_data_overlay' => 0,
      'objects_view_area_area_institution_data_overlay' => 0,
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'node_type_map__map_objects__view_openlayers_map_node_type' => 0,
      'node_type_map__map_objects__view_map_openlayers_for_institution' => 0,
      'objects_view_area_area_place_data_overlay' => 0,
      'objects_view_area_area_institution_data_overlay' => 0,
    ),
    'projection' => 'EPSG:900913',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['simple_map_with_point'] = $openlayers_maps;

  return $export;
}
