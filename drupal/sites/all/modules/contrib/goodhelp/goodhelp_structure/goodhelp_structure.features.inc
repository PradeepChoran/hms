<?php
/**
 * @file
 * goodhelp_structure.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function goodhelp_structure_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function goodhelp_structure_views_api() {
  return array("version" => "3.0");
}
