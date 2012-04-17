<?php
/**
 * @file
 * hms_conf.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hms_conf_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'book';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'bookroot' => array(
      'values' => array(
        'goodhelp_topic' => 'goodhelp_topic',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'goodhelp_conf-goodhelp_conf_book_nav' => array(
          'module' => 'goodhelp_conf',
          'delta' => 'goodhelp_conf_book_nav',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-topic_search-block' => array(
          'module' => 'views',
          'delta' => 'topic_search-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['book'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'client_site';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'client site' => 'client site',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'client-site',
    ),
  );
  $context->condition_mode = 0;
  $export['client_site'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~book' => '~book',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['sitewide'] = $context;

  return $export;
}
