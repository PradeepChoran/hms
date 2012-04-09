<?php
/**
 * @file
 * Contains the book root from current node argument default plugin.
 */

/**
 * Default argument plugin to get the current node's book root.
 */
class views_plugin_argument_default_book_root extends views_plugin_argument_default {
  function get_argument() {
    foreach (range(1, 3) as $i) {
      $node = menu_get_object('node', $i);
      if (!empty($node) && isset($node->book['bid'])) {
        return $node->book['bid'];
      }
    }

    if (arg(0) == 'node' && is_numeric(arg(1))) {
      $node = node_load(arg(1));
      if (!empty($node) && isset($node->book['bid'])) {
        return $node->book['bid'];
      }
    }
  }
}
