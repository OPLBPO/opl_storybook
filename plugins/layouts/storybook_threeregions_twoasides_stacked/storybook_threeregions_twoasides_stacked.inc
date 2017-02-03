<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Storybook Three Regions / Two Asides Stacked Layout'),
  'category' => t('OPL Storybook'),
  'icon' => 'twocol_70_30_stacked.png',
  'theme' => 'storybook_threeregions_twoasides_stacked',
  'regions' => array(
    'intro' => t('Intro'),
    'region-1' => t('Region One'),
    'region-2' => t('Region Two'),
    'region-3' => t('Region Three'),
    'aside-1' => t('Aside One'),
    'aside-2' => t('Aside Two'),
    'credits' => t('Credits'),
  ),
);