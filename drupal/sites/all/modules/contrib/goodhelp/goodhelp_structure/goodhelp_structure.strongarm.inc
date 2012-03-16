<?php
/**
 * @file
 * goodhelp_structure.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function goodhelp_structure_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'book_allowed_types';
  $strongarm->value = array(
    0 => 'goodhelp_topic',
  );
  $export['book_allowed_types'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'book_child_type';
  $strongarm->value = 'goodhelp_topic';
  $export['book_child_type'] = $strongarm;

  return $export;
}
