<?php
/**
 * @file
 * goodhelp.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function goodhelp_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_goodhelp_topic';
  $strongarm->value = 0;
  $export['comment_anonymous_goodhelp_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_goodhelp_topic';
  $strongarm->value = 1;
  $export['comment_default_mode_goodhelp_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_goodhelp_topic';
  $strongarm->value = '50';
  $export['comment_default_per_page_goodhelp_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_goodhelp_topic';
  $strongarm->value = 1;
  $export['comment_form_location_goodhelp_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_goodhelp_topic';
  $strongarm->value = '0';
  $export['comment_goodhelp_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_goodhelp_topic';
  $strongarm->value = '1';
  $export['comment_preview_goodhelp_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_goodhelp_topic';
  $strongarm->value = 1;
  $export['comment_subject_field_goodhelp_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_goodhelp_topic';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_goodhelp_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_goodhelp_topic';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_goodhelp_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_goodhelp_topic';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_goodhelp_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_goodhelp_topic';
  $strongarm->value = '1';
  $export['node_preview_goodhelp_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_goodhelp_topic';
  $strongarm->value = 0;
  $export['node_submitted_goodhelp_topic'] = $strongarm;

  return $export;
}
