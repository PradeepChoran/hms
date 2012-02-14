<?php
/**
 * @file
 * hms_callouts.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hms_callouts_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_callout';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_callout'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_callout';
  $strongarm->value = '1';
  $export['node_preview_callout'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_callout';
  $strongarm->value = 0;
  $export['node_submitted_callout'] = $strongarm;

  return $export;
}
