<?php
/**
 * @file
 * hms_conf.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hms_conf_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: access printer-friendly version
  $permissions['access printer-friendly version'] = array(
    'name' => 'access printer-friendly version',
    'roles' => array(),
  );

  // Exported permission: add content to books
  $permissions['add content to books'] = array(
    'name' => 'add content to books',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'book',
  );

  // Exported permission: administer book outlines
  $permissions['administer book outlines'] = array(
    'name' => 'administer book outlines',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'book',
  );

  // Exported permission: create goodhelp_topic content
  $permissions['create goodhelp_topic content'] = array(
    'name' => 'create goodhelp_topic content',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create new books
  $permissions['create new books'] = array(
    'name' => 'create new books',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'book',
  );

  // Exported permission: delete any goodhelp_topic content
  $permissions['delete any goodhelp_topic content'] = array(
    'name' => 'delete any goodhelp_topic content',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own goodhelp_topic content
  $permissions['delete own goodhelp_topic content'] = array(
    'name' => 'delete own goodhelp_topic content',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any goodhelp_topic content
  $permissions['edit any goodhelp_topic content'] = array(
    'name' => 'edit any goodhelp_topic content',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own goodhelp_topic content
  $permissions['edit own goodhelp_topic content'] = array(
    'name' => 'edit own goodhelp_topic content',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: view own unpublished content
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
