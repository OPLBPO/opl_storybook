<?php
/**
 * @file
 * opl_storybook.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opl_storybook_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function opl_storybook_node_info() {
  $items = array(
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => t('Publish video content and transcriptions.'),
      'has_title' => '1',
      'title_label' => t('Video Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
