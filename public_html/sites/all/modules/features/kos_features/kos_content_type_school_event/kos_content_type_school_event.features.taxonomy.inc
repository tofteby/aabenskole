<?php
/**
 * @file
 * kos_content_type_school_event.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function kos_content_type_school_event_taxonomy_default_vocabularies() {
  return array(
    'preparation' => array(
      'name' => 'Preparation',
      'machine_name' => 'preparation',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
      '_pull_content_metadata' => array(
        'field_info_fields' => array(),
      ),
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
