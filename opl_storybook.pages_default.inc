<?php
/**
 * @file
 * opl_storybook.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function opl_storybook_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'entity_panels_node_video_teaser__panel_context_ae0f4184-b969-4019-9ff2-7d081472b3db';
  $handler->task = 'entity_panels';
  $handler->subtask = 'node-video-teaser';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Video file',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '651a49eb-04ff-4279-9fdf-bb5048ba5a11';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'entity_panels_node_video_teaser__panel_context_ae0f4184-b969-4019-9ff2-7d081472b3db';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b96b9612-6d19-4ce2-93a7-82efe6d86de0';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_video';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'videojs',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'autoplay' => 0,
      'loop' => 0,
      'preload' => 'auto',
      'width' => '',
      'height' => '',
      'hidecontrols' => 0,
    ),
    'context' => 'argument_entity_panels_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b96b9612-6d19-4ce2-93a7-82efe6d86de0';
  $display->content['new-b96b9612-6d19-4ce2-93a7-82efe6d86de0'] = $pane;
  $display->panels['middle'][0] = 'new-b96b9612-6d19-4ce2-93a7-82efe6d86de0';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-b96b9612-6d19-4ce2-93a7-82efe6d86de0';
  $handler->conf['display'] = $display;
  $export['entity_panels_node_video_teaser__panel_context_ae0f4184-b969-4019-9ff2-7d081472b3db'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'entity_panels_node_video_teaser__panel_context_de0b32a9-1ef5-4a24-8477-d25ea0e61ac0';
  $handler->task = 'entity_panels';
  $handler->subtask = 'node-video-teaser';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'YouTube',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c69bcaea-28e9-4cce-82fb-eb04f78db148';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'entity_panels_node_video_teaser__panel_context_de0b32a9-1ef5-4a24-8477-d25ea0e61ac0';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-eed0168e-c46f-4e4f-ada9-2c0393048272';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_youtube_video';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'video_embed_field',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'video_style' => 'normal',
    ),
    'context' => 'argument_entity_panels_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'eed0168e-c46f-4e4f-ada9-2c0393048272';
  $display->content['new-eed0168e-c46f-4e4f-ada9-2c0393048272'] = $pane;
  $display->panels['middle'][0] = 'new-eed0168e-c46f-4e4f-ada9-2c0393048272';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['entity_panels_node_video_teaser__panel_context_de0b32a9-1ef5-4a24-8477-d25ea0e61ac0'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function opl_storybook_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'storybook';
  $page->task = 'page';
  $page->admin_title = 'Storybook';
  $page->admin_description = '';
  $page->path = 'storybook';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_storybook__panel';
  $handler->task = 'page';
  $handler->subtask = 'storybook';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'storybook fade-in-regions',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'storybook_threeregions_twoasides_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'intro' => NULL,
      'region-2' => NULL,
      'region-3' => NULL,
      'aside-1' => NULL,
      'aside-2' => NULL,
      'footer' => NULL,
      'region-1' => NULL,
    ),
    'region-1' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '68e9dd83-2061-45cd-9946-1e4cb53ff1bc';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_storybook__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8649534a-1ce0-4a06-8b68-9d0d5a66ab73';
  $pane->panel = 'aside-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '45421',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'storybook',
    'link_node_title' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8649534a-1ce0-4a06-8b68-9d0d5a66ab73';
  $display->content['new-8649534a-1ce0-4a06-8b68-9d0d5a66ab73'] = $pane;
  $display->panels['aside-1'][0] = 'new-8649534a-1ce0-4a06-8b68-9d0d5a66ab73';
  $pane = new stdClass();
  $pane->pid = 'new-12c45100-d04a-4f7b-9b60-302f2cbf4bef';
  $pane->panel = 'region-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '45423',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'storybook',
    'link_node_title' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'panestyles',
    'settings' => array(
      'bg_fieldset' => array(
        'bg_classes' => 'pane-bglightgrey',
      ),
      'border_fieldset' => array(
        'border_classes' => 'pane-topbottomborder',
      ),
      'border_color_fieldset' => array(
        'border_color_classes' => 'pane-borderorange',
      ),
      'width_fieldset' => array(
        'width_classes' => 'pane-width100',
      ),
      'animation_fieldset' => array(
        'animation_classes' => 'zoomIn',
      ),
    ),
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '12c45100-d04a-4f7b-9b60-302f2cbf4bef';
  $display->content['new-12c45100-d04a-4f7b-9b60-302f2cbf4bef'] = $pane;
  $display->panels['region-1'][0] = 'new-12c45100-d04a-4f7b-9b60-302f2cbf4bef';
  $pane = new stdClass();
  $pane->pid = 'new-7cdfb913-0e21-4a5b-bbf5-bd7e620b08b9';
  $pane->panel = 'region-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '45424',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'storybook',
    'link_node_title' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'bg_fieldset' => array(
        'bg_classes' => 'pane-bgorange',
      ),
      'border_fieldset' => array(
        'border_classes' => 'pane-topbottomborder',
      ),
      'border_color_fieldset' => array(
        'border_color_classes' => 'pane-bordergreen',
      ),
      'width_fieldset' => array(
        'width_classes' => 'pane-width33right',
      ),
      'animation_fieldset' => array(
        'animation_classes' => 'fadeInLeftBig',
      ),
    ),
    'style' => 'panestyles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7cdfb913-0e21-4a5b-bbf5-bd7e620b08b9';
  $display->content['new-7cdfb913-0e21-4a5b-bbf5-bd7e620b08b9'] = $pane;
  $display->panels['region-1'][1] = 'new-7cdfb913-0e21-4a5b-bbf5-bd7e620b08b9';
  $pane = new stdClass();
  $pane->pid = 'new-d5b3d18f-3243-4f04-a587-8d0f97ccd721';
  $pane->panel = 'region-2';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '45422',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'storybook',
    'link_node_title' => 0,
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd5b3d18f-3243-4f04-a587-8d0f97ccd721';
  $display->content['new-d5b3d18f-3243-4f04-a587-8d0f97ccd721'] = $pane;
  $display->panels['region-2'][0] = 'new-d5b3d18f-3243-4f04-a587-8d0f97ccd721';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['storybook'] = $page;

  return $pages;

}
