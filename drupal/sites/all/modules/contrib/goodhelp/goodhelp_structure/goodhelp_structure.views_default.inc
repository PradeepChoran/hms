<?php
/**
 * @file
 * goodhelp_structure.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function goodhelp_structure_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'help_books';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Help Books';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Help Books';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_goodhelp_topic_product',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_goodhelp_topic_product' => 'field_goodhelp_topic_product',
    'field_goodhelp_topic_version' => 'field_goodhelp_topic_version',
    'nid' => 'nid',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_goodhelp_topic_product' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_goodhelp_topic_version' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Product */
  $handler->display->display_options['fields']['field_goodhelp_topic_product']['id'] = 'field_goodhelp_topic_product';
  $handler->display->display_options['fields']['field_goodhelp_topic_product']['table'] = 'field_data_field_goodhelp_topic_product';
  $handler->display->display_options['fields']['field_goodhelp_topic_product']['field'] = 'field_goodhelp_topic_product';
  $handler->display->display_options['fields']['field_goodhelp_topic_product']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_goodhelp_topic_product']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_goodhelp_topic_product']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_goodhelp_topic_product']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_goodhelp_topic_product']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_goodhelp_topic_product']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_goodhelp_topic_product']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_goodhelp_topic_product']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_goodhelp_topic_product']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_goodhelp_topic_product']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_goodhelp_topic_product']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_goodhelp_topic_product']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_goodhelp_topic_product']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_goodhelp_topic_product']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_goodhelp_topic_product']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_goodhelp_topic_product']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_goodhelp_topic_product']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_goodhelp_topic_product']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_goodhelp_topic_product']['field_api_classes'] = 0;
  /* Field: Content: Version */
  $handler->display->display_options['fields']['field_goodhelp_topic_version']['id'] = 'field_goodhelp_topic_version';
  $handler->display->display_options['fields']['field_goodhelp_topic_version']['table'] = 'field_data_field_goodhelp_topic_version';
  $handler->display->display_options['fields']['field_goodhelp_topic_version']['field'] = 'field_goodhelp_topic_version';
  $handler->display->display_options['fields']['field_goodhelp_topic_version']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_goodhelp_topic_version']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_goodhelp_topic_version']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_goodhelp_topic_version']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_goodhelp_topic_version']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_goodhelp_topic_version']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_goodhelp_topic_version']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_goodhelp_topic_version']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_goodhelp_topic_version']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_goodhelp_topic_version']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_goodhelp_topic_version']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_goodhelp_topic_version']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_goodhelp_topic_version']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_goodhelp_topic_version']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_goodhelp_topic_version']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_goodhelp_topic_version']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_goodhelp_topic_version']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_goodhelp_topic_version']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_goodhelp_topic_version']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Manage Link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Manage Link';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'edit order and titles';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'admin/content/book/[nid]';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Sort criterion: Content: Product (field_goodhelp_topic_product) */
  $handler->display->display_options['sorts']['field_goodhelp_topic_product_value']['id'] = 'field_goodhelp_topic_product_value';
  $handler->display->display_options['sorts']['field_goodhelp_topic_product_value']['table'] = 'field_data_field_goodhelp_topic_product';
  $handler->display->display_options['sorts']['field_goodhelp_topic_product_value']['field'] = 'field_goodhelp_topic_product_value';
  /* Sort criterion: Content: Version (field_goodhelp_topic_version) */
  $handler->display->display_options['sorts']['field_goodhelp_topic_version_value']['id'] = 'field_goodhelp_topic_version_value';
  $handler->display->display_options['sorts']['field_goodhelp_topic_version_value']['table'] = 'field_data_field_goodhelp_topic_version';
  $handler->display->display_options['sorts']['field_goodhelp_topic_version_value']['field'] = 'field_goodhelp_topic_version_value';
  $handler->display->display_options['sorts']['field_goodhelp_topic_version_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'goodhelp_topic' => 'goodhelp_topic',
  );
  /* Filter criterion: Book: Depth */
  $handler->display->display_options['filters']['depth']['id'] = 'depth';
  $handler->display->display_options['filters']['depth']['table'] = 'book_menu_links';
  $handler->display->display_options['filters']['depth']['field'] = 'depth';
  $handler->display->display_options['filters']['depth']['value']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'help-books';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Help Books';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['help_books'] = $view;

  return $export;
}
