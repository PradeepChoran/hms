<?php
/**
 * @file
 * hms_conf.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function hms_conf_user_default_roles() {
  $roles = array();

  // Exported role: client site
  $roles['client site'] = array(
    'name' => 'client site',
    'weight' => '3',
  );

  // Exported role: editor
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => '2',
  );

  return $roles;
}
