<?php
/**
 * @file
 *  Project-specific Drush configuration.
 *
 * To use this file, you must create a drushrc.php file in one of the following locations:
 * - User's .drush folder (i.e. ~/.drush/drushrc.php).
 * - System wide configuration folder (e.g. /etc/drush/drushrc.php).
 * - Drush installation folder.
 *
 * In that file, place :

$repo = exec('git rev-parse --git-dir 2> /dev/null', $output);
if ($repo) {
  $repo = $output[0];
}
$options['config'] = $repo . '/../.drushrc.php';
$options['include'] = $repo . '/../scripts';
 
 *
 * @see http://intranet.goingon.com/dev/wiki/DevelopmentEnvironment
 */

/**
 * If the current directory has a subdirectory 'drupal', bootstrap it for drush.
 * To facilitate URL generation, this snippet assumes the current directory name
 * is also the URL of the Drupal site.
 */
if (is_dir('drupal')) {
  $current_path = getcwd();
  $options['root'] = $current_path . '/drupal';
  $options['url'] = basename($current_path);
}

$command_specific['release-notes']['baseurl'] = 'https://trac.goingon.us/trac/goingon/ticket/';
$command_specific['database-load']['server'] = 'testweb5';
$command_specific['database-load']['remote-path'] = '/tmp/nightly';
$command_specific['database-load']['destination'] = '/tmp/noc';
