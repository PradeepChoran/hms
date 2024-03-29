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
  $max = variable_get('goodhelp_max_versions', array_fill_keys(array_keys($products), 0));
  foreach ($products as $product => $info) {
    $supported = goodhelp_get_supported_versions($product);
    $description = count($supported) . ' versions currently supported in the system.';
    $form['goodhelp_max_versions'][$product] = array(
      '#title' => $info['name'],
      '#description' => $description,
      '#type' => 'select',
      '#options' => drupal_map_assoc(range(0, 6)),
      '#default_value' => $max[$product],
    );
  }

  $form['goodhelp_fallback_settings'] = array(
    '#type' => 'fieldset',
    '#title' => 'Fallback Settings',
    '#description' => t('Determine how Good Help will choose a version to serve when a topic is requested through the service or the manual.'),
    '#tree' => FALSE,
  );

  // Fallback settings.
  $form['goodhelp_fallback_settings']['goodhelp_fallback'] = array(
    '#type' => 'radios',
    '#title' => 'Attempt Fallback',
    '#options' => array(
      0 => t('No Fallback'),
      2 => t('Fall back to topics within the requested second level version (i.e. 4.7.4 falls back to 4.7.2, 4.7)'),
      1 => t('Fall back to topics within the requested first level version (i.e. 4.7 falls back to 4.5)'),
    ),
    '#default_value' => variable_get('goodhelp_fallback', 2),
  );
  
  $form['goodhelp_fallback_settings']['goodhelp_fallback_default'] = array(
    '#type' => 'textfield',
    '#title' => 'Default Version',
    '#description' => t("If this is set, it will be used as a last resort in case no appropriate version can be found using the 'Attempt Fallback' settings above. Use this if you want to guarantee that some version will always be selected, for instance if an incorrect version is requested or if a version is requested that is lower than any available."),
    '#default_value' => variable_get('goodhelp_fallback_default', ''),
    '#size' => 15,
  );
  
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

/**
 * Page callback for Goodhelp Preview.
 */
function goodhelp_preview_page() {
  $form = array();
  $form['#method'] = 'GET';
  
  // Display the form to select parameters.
  $form['goodhelp_preview_form'] = array(
    '#type' => 'fieldset',
    '#title' => 'Parameters',
  );
  $form['goodhelp_preview_form']['topic'] = array(
    '#type' => 'textfield',
    '#title' => 'Topic ID',
    '#size' => 20,
    '#default_value' => isset($_GET['topic']) ?  $_GET['topic'] : '',
  );
  $form['goodhelp_preview_form']['product'] = array(
    '#type' => 'select',
    '#title' => 'Product',
    '#options' => goodhelp_product_options(),
    '#default_value' => isset($_GET['product']) ? $_GET['product'] : '',
  );
  $form['goodhelp_preview_form']['version'] = array(
    '#type' => 'textfield',
    '#title' => 'Version',
    '#size' => 20,
    '#default_value' => isset($_GET['version']) ? $_GET['version'] : '',
  );
  $form['goodhelp_preview_form']['size'] = array(
    '#type' => 'select',
    '#title' => 'Size',
    '#options' => array(
      'manual' => t('Full (Manual)'),
      'tip' => t('Small (Tooltip)'),
    ),
    '#default_value' => isset($_GET['size']) ? $_GET['size'] : '',
  );
  $form['goodhelp_preview_form']['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Preview',
  );
  
  // Show a preview.
  $form['goodhelp_preview'] = array(
    '#type' => 'fieldset',
    '#title' => 'Preview',
  );
  $form['goodhelp_preview']['preview'] = array(
    '#markup' => t('Select parameters.'),
  );
  
  // Get the services response for these parameters and show the preview.
  if (!empty($_GET['topic']) && !empty($_GET['product']) && !empty($_GET['version']) && !empty($_GET['size'])) {
    module_load_include('inc', 'services', 'services.runtime');
    try {
      $response = _goodhelp_services_retrieve($_GET['topic'], $_GET['product'], $_GET['version'], $_GET['size']);
    }
    catch (ServicesException $e) {}
    if (isset($response['response']['message'])) {
      $form['goodhelp_preview']['preview']['#markup'] = $response['response']['message'];
    }
    else {
      $form['goodhelp_preview']['preview']['#markup'] = '<strong>' . t('No topic found.') . '</strong>';
    }
  }
  
  return $form;
}
