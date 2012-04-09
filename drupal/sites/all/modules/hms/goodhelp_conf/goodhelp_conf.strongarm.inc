<?php
/**
 * @file
 * goodhelp_conf.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function goodhelp_conf_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'goodhelp_fallback';
  $strongarm->value = '1';
  $export['goodhelp_fallback'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'goodhelp_max_versions';
  $strongarm->value = array(
    'noc' => '4',
  );
  $export['goodhelp_max_versions'] = $strongarm;

  return $export;
}
