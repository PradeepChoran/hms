<?php
/**
 * @file
 * Page and form callbacks for Good Help.
 */

/**
 * Returns the form for the Good Help configuration page.
 */
function goodhelp_settings_form() {
  $form = array();
  goodhelp_get_supported_versions('noc');
  $form['goodhelp_max_versions'] = array(
    '#type' => 'fieldset',
    '#title' => 'Maximum Supported Versions',
    '#description' => t('Select the maximum supported versions for each product'),
    '#tree' => TRUE,
  );
  
  // Get all products.
  $products = goodhelp_get_product_info();
  
  // Build version selection forms for each one.
  $max = variable_get('goodhelp_max_versions', array());
  foreach ($products as $product => $info) {
    $form['goodhelp_max_versions'][$product] = array(
      '#title' => $info['name'],
      '#type' => 'select',
      '#options' => drupal_map_assoc(array('1', '2', '3', '4', '5')),
      '#default_value' => $max[$product],
    );
  }
  
  $form = system_settings_form($form);
  return $form;
}