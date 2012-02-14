<?php
/**
 * @file
 * hms_callouts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hms_callouts_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function hms_callouts_node_info() {
  $items = array(
    'callout' => array(
      'name' => t('Callout'),
      'base' => 'node_content',
      'description' => t('A Callout'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
