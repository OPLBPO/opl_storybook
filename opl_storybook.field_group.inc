<?php
/**
 * @file
 * opl_storybook.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function opl_storybook_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video_intro_heading|node|storybook_video_intro|form';
  $field_group->group_name = 'group_video_intro_heading';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'storybook_video_intro';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Video Intro Heading',
    'weight' => '4',
    'children' => array(
      0 => 'field_main_heading',
      1 => 'field_secondary_heading',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Video Intro Heading',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-video-intro-heading field-group-html5 oplfla-header',
        'wrapper' => 'header',
      ),
    ),
  );
  $field_groups['group_video_intro_heading|node|storybook_video_intro|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Video Intro Heading');

  return $field_groups;
}
