<?php
/**
 * @file
 * bo8_settings.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bo8_settings_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'view_quotation';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'View quotation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'View quotation';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'quote-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['label'] = '';
  $handler->display->display_options['fields']['field_source']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_source']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_source']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_source']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_source']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_source']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_source']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_source']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_source']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_source']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_source']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_source']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_source']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_source']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_source']['element_class'] = 'quote-source';
  $handler->display->display_options['fields']['field_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_source']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_source']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_source']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_source']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_source']['field_api_classes'] = 0;
  /* Field: Content: Source name */
  $handler->display->display_options['fields']['field_source_name']['id'] = 'field_source_name';
  $handler->display->display_options['fields']['field_source_name']['table'] = 'field_data_field_source_name';
  $handler->display->display_options['fields']['field_source_name']['field'] = 'field_source_name';
  $handler->display->display_options['fields']['field_source_name']['label'] = '';
  $handler->display->display_options['fields']['field_source_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_source_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_source_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_source_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_source_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_source_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_source_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_source_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_source_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_source_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_source_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_source_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_source_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_source_name']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_source_name']['element_class'] = 'quote-source-detail';
  $handler->display->display_options['fields']['field_source_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_source_name']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_source_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_source_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_source_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_source_name']['field_api_classes'] = 0;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'quotation' => 'quotation',
  );
  /* Filter criterion: Content: Rotation (field_rotation) */
  $handler->display->display_options['filters']['field_rotation_value']['id'] = 'field_rotation_value';
  $handler->display->display_options['filters']['field_rotation_value']['table'] = 'field_data_field_rotation';
  $handler->display->display_options['filters']['field_rotation_value']['field'] = 'field_rotation_value';
  $handler->display->display_options['filters']['field_rotation_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'view-quotation';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['view_quotation'] = $view;

  return $export;
}
