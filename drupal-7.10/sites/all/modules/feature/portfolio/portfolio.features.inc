<?php
/**
 * @file
 * portfolio.features.inc
 */

/**
 * Implements hook_views_api().
 */
function portfolio_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function portfolio_node_info() {
  $items = array(
    'portfolio_sample' => array(
      'name' => t('Portfolio Sample'),
      'base' => 'node_content',
      'description' => t('A project to share in my portfolio.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
