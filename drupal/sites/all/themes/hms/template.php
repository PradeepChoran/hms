<?php

/**
 * Implements hook_preprocess_page().
 */
function hms_preprocess_page(&$vars) {
  global $user;
  // Add a template suggestion if the user has the client site role.
  if (in_array('anonymous user', array_values($user->roles))) {
    $vars['theme_hook_suggestions'][] = 'page__plain';
  }
}
