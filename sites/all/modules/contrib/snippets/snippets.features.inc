<?php
/**
 * @file
 * snippets.features.inc
 */

/**
 * Implements hook_views_api().
 */
function snippets_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function snippets_node_info() {
  $items = array(
    'code_snippet' => array(
      'name' => t('Code snippet'),
      'base' => 'node_content',
      'description' => t('Defines code snippet content type.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
