<?php
/**
 * @file
 * portfolio.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function portfolio_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'portfolio_slider';
  $view->description = 'A view showing thumbnails of websites created.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Portfolio slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Websites Built';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Field: Content: Portfolio Image */
  $handler->display->display_options['fields']['field_portfolio_image']['id'] = 'field_portfolio_image';
  $handler->display->display_options['fields']['field_portfolio_image']['table'] = 'field_data_field_portfolio_image';
  $handler->display->display_options['fields']['field_portfolio_image']['field'] = 'field_portfolio_image';
  $handler->display->display_options['fields']['field_portfolio_image']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_portfolio_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_portfolio_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_portfolio_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_portfolio_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_portfolio_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_portfolio_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_portfolio_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_portfolio_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_portfolio_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_portfolio_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_portfolio_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_portfolio_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_portfolio_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_portfolio_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_portfolio_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_portfolio_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_portfolio_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_portfolio_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_portfolio_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_portfolio_image']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_portfolio_image']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'portfolio_sample' => 'portfolio_sample',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['portfolio_slider'] = $view;

  return $export;
}
