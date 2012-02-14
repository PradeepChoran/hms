<?php

/**
 * @file
 *   Provides a list of selectors and events that can be used for callouts.
 */

/**
 * Returns the full list of selectors. Serves also as the allowed values callback
 * for the selector field.
 */
function hms_callouts_selectors() {
  return array(
    '#some-wigdet' => 'Some Widget',
    '#another-widget' => 'Another Widget',
  );
}

/**
 * Returns the full list of events. Serves also as the allowed values callback
 * for the event field.
 */
function hms_callouts_events() {
  return array(
    '.new-comm-page' => 'New community page created',
    '.new-comm' => 'New community created',
  );
}