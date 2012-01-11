<?php
/**
 * @file
 * goodhelp.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function goodhelp_taxonomy_default_vocabularies() {
  return array(
    'goodhelp_topic_version' => array(
      'name' => 'Topic Version',
      'machine_name' => 'goodhelp_topic_version',
      'description' => 'Tag content as relevant to a given version of the help documentation.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
