<?php
/**
 * @file
 * hms_user.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hms_user_user_default_permissions() {
  $permissions = array();

  // Exported permission: access tokenauth
  $permissions['access tokenauth'] = array(
    'name' => 'access tokenauth',
    'roles' => array(
      0 => 'client site',
    ),
    'module' => 'tokenauth',
  );

  // Exported permission: administer tokenauth
  $permissions['administer tokenauth'] = array(
    'name' => 'administer tokenauth',
    'roles' => array(),
    'module' => 'tokenauth',
  );

  return $permissions;
}
