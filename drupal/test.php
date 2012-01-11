<?php

/**
 * @file
 * Handles incoming requests to fire off regularly-scheduled tasks (cron jobs).
 */

/**
 * Root directory of Drupal installation.
 */
define('DRUPAL_ROOT', getcwd());

include_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);

// Include better getter
  $bget_path = libraries_get_path('bget');
  if (empty($bget_path)){ // if we don't have bget library, run away!
    return;
  }

  require_once "$bget_path/includes/Bget.class.inc";
  require_once "$bget_path/includes/BgetHttp.class.inc";

  $url = 'http://noc.local';

  $bget = new BgetHttp("$url/services/ip_login");

  /*$bget->setPostFields(array(
       'username' => "client_$sitename",
       'password' => 'Z5M536f6iYKV4,<9mg1#14jf174Vi5'
      )
  );*/
  
  $cookie = explode('; ', array_pop($bget->execute()->getResponseHeader('Set-Cookie')));
  print_r($cookie);
  
  $bget = new BgetHttp("$url/services/v1/rest/node.xml");
  
  $bget->setRequestHeader('Cookie', $cookie[0]);

  
  print_r($bget->execute()->getResponseHeaders());
  print_r($bget->getRequestHeaders());
  print_r($bget->getResponseBody());