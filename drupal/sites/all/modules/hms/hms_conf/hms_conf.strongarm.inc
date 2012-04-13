<?php
/**
 * @file
 * hms_conf.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hms_conf_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 0;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'help-books';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'hms';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tokenauth_length';
  $strongarm->value = '20';
  $export['tokenauth_length'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tokenauth_pages';
  $strongarm->value = 'goodhelp/services/*
node/*';
  $export['tokenauth_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tokenauth_text';
  $strongarm->value = array(
    'value' => 'You may use an alphanumeric token to see restricted content using RSS Feed Readers or other simple content viewers. This token authenticates your user account, and as unique to you. If you have reason to believe someone else is misusing your token, please press the <em>Reset token</em> button to get a new one, and update your RSS readers.

Append the string below to the end of URLs approved for use with Token Authentication for temporary authentication.',
    'format' => 'plain_text',
  );
  $export['tokenauth_text'] = $strongarm;

  return $export;
}
