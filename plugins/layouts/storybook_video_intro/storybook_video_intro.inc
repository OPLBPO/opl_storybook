<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Storybook Video Intro Layout'),
  'category' => t('OPL Storybook'),
  'icon' => 'twocol_70_30_stacked.png',
  'theme' => 'storybook_video_intro',
  'regions' => array(
    'main-heading' => t('Main Heading'),
    'secondary-heading' => t('Secondary Heading'),
    'video' => t('Video File'),
  ),
);