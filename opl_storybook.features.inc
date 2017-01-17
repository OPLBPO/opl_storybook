<?php
/**
 * @file
 * opl_storybook.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opl_storybook_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function opl_storybook_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function opl_storybook_node_info() {
  $items = array(
    'audio' => array(
      'name' => t('Audio'),
      'base' => 'node_content',
      'description' => t('Publish audio content and transcriptions.'),
      'has_title' => '1',
      'title_label' => t('Audio Title'),
      'help' => '',
    ),
    'instagram_feed' => array(
      'name' => t('Instagram Feed'),
      'base' => 'node_content',
      'description' => t('Display Instagram feed using LightWidget.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'storybook_article' => array(
      'name' => t('Storybook Article'),
      'base' => 'node_content',
      'description' => t('Publish article for Storybook feature.'),
      'has_title' => '1',
      'title_label' => t('Storybook Article'),
      'help' => '',
    ),
    'storybook_collections' => array(
      'name' => t('Storybook Collections'),
      'base' => 'node_content',
      'description' => t('Publish collections relevant to the Storybook chapter.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'storybook_single_image' => array(
      'name' => t('Storybook Single Image'),
      'base' => 'node_content',
      'description' => t('Publish single image with or without caption.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'storybook_video_intro' => array(
      'name' => t('Storybook Video Intro'),
      'base' => 'node_content',
      'description' => t('Publish video on loop and headings for Storybook page intro.'),
      'has_title' => '1',
      'title_label' => t('Storybook Video Intro Title'),
      'help' => '',
    ),
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
