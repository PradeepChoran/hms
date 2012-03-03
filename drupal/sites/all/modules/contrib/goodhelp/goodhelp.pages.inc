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

  $form['goodhelp_max_versions'] = array(
    '#type' => 'fieldset',
    '#title' => 'Maximum Supported Versions',
    '#description' => t('Select the maximum supported versions allowed for each product. A version is considered supported if there is at least one help topic assigned to it.'),
    '#tree' => TRUE,
  );
  
  // Get all products.
  $products = goodhelp_get_product_info();
  
  // Build version selection forms for each one.
  $max = variable_get('goodhelp_max_versions', array());
  foreach ($products as $product => $info) {
    $supported = goodhelp_get_supported_versions($product);
    $description = count($supported) . ' versions currently supported in the system.';
    $form['goodhelp_max_versions'][$product] = array(
      '#title' => $info['name'],
      '#description' => $description,
      '#type' => 'select',
      '#options' => drupal_map_assoc(range(1, 6)),
      '#default_value' => $max[$product],
    );
  }
  
  // Some validation.
  $form['#validate'] = array('goodhelp_settings_validate');
  
  $form = system_settings_form($form);
  return $form;
}

/**
 * Validate callback for the goodhelp settings form.
 */
function goodhelp_settings_validate($form, &$form_state) {
  // Validate max allowed versions.
  $product_info = goodhelp_get_product_info();
  foreach ($form_state['values']['goodhelp_max_versions'] as $product => $new_max) {
    $currently_supported = count(goodhelp_get_supported_versions($product));
    if ($currently_supported > $new_max) {
      $replace = array(
        '!product' => $product_info[$product]['name'],
        '!max' => $new_max,
        '!current' => $currently_supported,
      );
      form_set_error('goodhelp_max_versions][' . $product, t('Error: You set the maximum allowed supported versions for !product to !max, but there are currently !current versions supported. You must remove the extra versions first.', $replace));
    }
  } 
}