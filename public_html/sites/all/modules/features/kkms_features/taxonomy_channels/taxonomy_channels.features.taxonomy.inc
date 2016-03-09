<?php
/**
 * @file
 * taxonomy_channels.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomy_channels_taxonomy_default_vocabularies() {
  return array(
    'channels' => array(
      'name' => 'Channels',
      'machine_name' => 'channels',
      'description' => 'This taxonomy vocabulary is used for categorization of content, to facilitate sharing.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
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
