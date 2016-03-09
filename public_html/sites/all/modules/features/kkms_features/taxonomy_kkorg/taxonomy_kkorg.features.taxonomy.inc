<?php
/**
 * @file
 * taxonomy_kkorg.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomy_kkorg_taxonomy_default_vocabularies() {
  return array(
    'kkorg' => array(
      'name' => 'Organisation (KKorg)',
      'machine_name' => 'kkorg',
      'description' => 'Organisation (KKorg) taxonomy defines the hierarchy and branches of the Københavns Kommune.',
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
