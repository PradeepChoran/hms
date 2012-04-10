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

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquerymenu_animate';
  $strongarm->value = 1;
  $export['jquerymenu_animate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquerymenu_edit_link';
  $strongarm->value = 0;
  $export['jquerymenu_edit_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquerymenu_hover';
  $strongarm->value = 0;
  $export['jquerymenu_hover'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquerymenu_parentlink';
  $strongarm->value = 0;
  $export['jquerymenu_parentlink'] = $strongarm;

  return $export;
}
