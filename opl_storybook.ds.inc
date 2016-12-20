<?php
/**
 * @file
 * opl_storybook.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function opl_storybook_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'storybook';
  $ds_view_mode->label = 'Storybook';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['storybook'] = $ds_view_mode;

  return $export;
}
