<?php

/**
 * @file
 */

/**
 * Form that calls the cloning operation.
 *
 * @param $bid
 *  the book id of the book that will be cloned.
 */
function hms_book_clone_clone_form($bid) {
  $form = array();
  $book_info = goodhelp_structure_get_book_info($bid);
  $product = $book_info['product'];
  $version_options = goodhelp_version_options($product);

  $form['cloning_this_book'] = array(
    '#type' => 'item',
    '#title' => t('Cloning'),
    '#markup' => t('@name (@product version @version)', array('@name' => $book_info['name'], '@product' => $product, '@version' => $book_info['version'])),
  );

  // Unset the version of the book we're cloning. New book has to have different version.
  if (isset($version_options[$book_info['version']])) {
    unset($version_options[$book_info['version']]);
  }
  $form['version'] = array(
    '#type' => 'select',
    '#title' => t('Clone to Version'),
    '#description' => t('Select the version for the new book'),
    '#options' => $version_options,
  );

  $form['clone'] = array(
    '#type' => 'submit',
    '#value' => t('Clone'),
  );

  $form['#validate'] = 'hms_book_clone_clone_form_validate';
  $form['#submit'] = 'hms_book_clone_clone_form_submit';
  return $form;
}

/**
 * Validate callback for the clone form.
 */
function hms_book_clone_clone_form_validate($form, $form_state) {
  
}

/**
 * Submit callback for the clone form.
 */
function hms_book_clone_clone_form_submit($form, $form_state) {
  
}