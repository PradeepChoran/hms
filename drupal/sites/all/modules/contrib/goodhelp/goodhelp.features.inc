<?php
/**
 * @file
 * goodhelp.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function goodhelp_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_node_info().
 */
function goodhelp_node_info() {
  $items = array(
    'goodhelp_topic' => array(
      'name' => t('Topic'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('When you press the Save button this content will eventually go live. Be careful!'),
    ),
  );
  return $items;
}
