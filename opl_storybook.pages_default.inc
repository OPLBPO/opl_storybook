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
  $handler->name = 'entity_panels_node_audio_storybook__panel_context_bda372b9-d602-46ba-ab0e-6f5e9a63f8f7';
  $handler->task = 'entity_panels';
  $handler->subtask = 'node-audio-storybook';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
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
  $display->title = '%node:title_field';
  $display->uuid = 'e75f1d10-2fb1-4562-beb3-cc8298a2cfc2';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'entity_panels_node_audio_storybook__panel_context_bda372b9-d602-46ba-ab0e-6f5e9a63f8f7';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8ee8bc01-fa28-4f76-9097-d9fed1abc392';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:title_field';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_panels_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'audio-title',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8ee8bc01-fa28-4f76-9097-d9fed1abc392';
  $display->content['new-8ee8bc01-fa28-4f76-9097-d9fed1abc392'] = $pane;
  $display->panels['middle'][0] = 'new-8ee8bc01-fa28-4f76-9097-d9fed1abc392';
  $pane = new stdClass();
  $pane->pid = 'new-2595d49b-621e-4054-b474-a0be2f53a703';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_audio_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2595d49b-621e-4054-b474-a0be2f53a703';
  $display->content['new-2595d49b-621e-4054-b474-a0be2f53a703'] = $pane;
  $display->panels['middle'][1] = 'new-2595d49b-621e-4054-b474-a0be2f53a703';
  $pane = new stdClass();
  $pane->pid = 'new-e8da5f23-94c9-4c9e-a710-4ef857ee3e6d';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_audio';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'mediaelement_audio',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'controls' => 1,
      'width' => '300',
      'height' => '30',
      'download_link' => 0,
      'download_text' => 'Download',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e8da5f23-94c9-4c9e-a710-4ef857ee3e6d';
  $display->content['new-e8da5f23-94c9-4c9e-a710-4ef857ee3e6d'] = $pane;
  $display->panels['middle'][2] = 'new-e8da5f23-94c9-4c9e-a710-4ef857ee3e6d';
  $pane = new stdClass();
  $pane->pid = 'new-deefc9dd-d0b8-4288-849a-91b18d21eeb0';
  $pane->panel = 'middle';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:transcription_link_audio';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'deefc9dd-d0b8-4288-849a-91b18d21eeb0';
  $display->content['new-deefc9dd-d0b8-4288-849a-91b18d21eeb0'] = $pane;
  $display->panels['middle'][3] = 'new-deefc9dd-d0b8-4288-849a-91b18d21eeb0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['entity_panels_node_audio_storybook__panel_context_bda372b9-d602-46ba-ab0e-6f5e9a63f8f7'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'entity_panels_node_storybook_article_storybook__panel_context_adac83df-58f7-4d54-bfdb-7d47eaf9e1ad';
  $handler->task = 'entity_panels';
  $handler->subtask = 'node-storybook_article-storybook';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
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
  $display->uuid = '2573d7f0-17b7-4615-a9de-5c8b0cfc9c44';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'entity_panels_node_storybook_article_storybook__panel_context_adac83df-58f7-4d54-bfdb-7d47eaf9e1ad';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d7059cd2-f922-4c7d-8188-f2c0ed6ea5e9';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_article_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_panels_entity_id:node_1',
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
  $pane->uuid = 'd7059cd2-f922-4c7d-8188-f2c0ed6ea5e9';
  $display->content['new-d7059cd2-f922-4c7d-8188-f2c0ed6ea5e9'] = $pane;
  $display->panels['middle'][0] = 'new-d7059cd2-f922-4c7d-8188-f2c0ed6ea5e9';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['entity_panels_node_storybook_article_storybook__panel_context_adac83df-58f7-4d54-bfdb-7d47eaf9e1ad'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'entity_panels_node_storybook_video_intro_storybook__panel_context_aa1b89b6-197a-4079-9e83-430b5096fe77';
  $handler->task = 'entity_panels';
  $handler->subtask = 'node-storybook_video_intro-storybook';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
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
  $display->layout = 'storybook_video_intro';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'main-heading' => NULL,
      'secondary-heading' => NULL,
      'video' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title_field';
  $display->uuid = '486e4e08-a82a-4965-ae34-b9f623f2ef74';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'entity_panels_node_storybook_video_intro_storybook__panel_context_aa1b89b6-197a-4079-9e83-430b5096fe77';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b5fd4575-013a-4086-a8bc-de4cd1048514';
  $pane->panel = 'main-heading';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_main_heading';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->uuid = 'b5fd4575-013a-4086-a8bc-de4cd1048514';
  $display->content['new-b5fd4575-013a-4086-a8bc-de4cd1048514'] = $pane;
  $display->panels['main-heading'][0] = 'new-b5fd4575-013a-4086-a8bc-de4cd1048514';
  $pane = new stdClass();
  $pane->pid = 'new-d70fe310-f01d-4782-bd4e-cc85371cbfac';
  $pane->panel = 'secondary-heading';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_secondary_heading';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->uuid = 'd70fe310-f01d-4782-bd4e-cc85371cbfac';
  $display->content['new-d70fe310-f01d-4782-bd4e-cc85371cbfac'] = $pane;
  $display->panels['secondary-heading'][0] = 'new-d70fe310-f01d-4782-bd4e-cc85371cbfac';
  $pane = new stdClass();
  $pane->pid = 'new-a8a06b97-1782-4130-92e0-33a72a97c108';
  $pane->panel = 'video';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_video';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'videojs',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'autoplay' => 1,
      'loop' => 1,
      'preload' => 'auto',
      'width' => '',
      'height' => '',
      'hidecontrols' => 1,
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
  $pane->uuid = 'a8a06b97-1782-4130-92e0-33a72a97c108';
  $display->content['new-a8a06b97-1782-4130-92e0-33a72a97c108'] = $pane;
  $display->panels['video'][0] = 'new-a8a06b97-1782-4130-92e0-33a72a97c108';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['entity_panels_node_storybook_video_intro_storybook__panel_context_aa1b89b6-197a-4079-9e83-430b5096fe77'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'entity_panels_node_video_storybook__panel_context_207462eb-c14f-42ef-b770-738fdc44cb0a';
  $handler->task = 'entity_panels';
  $handler->subtask = 'node-video-storybook';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
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
  $display->title = '%node:title_field';
  $display->uuid = 'c9daa863-0f61-4ab8-bc7d-9824700e550f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'entity_panels_node_video_storybook__panel_context_207462eb-c14f-42ef-b770-738fdc44cb0a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-91eaeb30-5ad1-4a05-a0f8-c9e5a721841e';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_video_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->uuid = '91eaeb30-5ad1-4a05-a0f8-c9e5a721841e';
  $display->content['new-91eaeb30-5ad1-4a05-a0f8-c9e5a721841e'] = $pane;
  $display->panels['middle'][0] = 'new-91eaeb30-5ad1-4a05-a0f8-c9e5a721841e';
  $pane = new stdClass();
  $pane->pid = 'new-b9f55e98-d24a-4cb4-bf83-55fa7bf4d29c';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_video';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'videojs',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b9f55e98-d24a-4cb4-bf83-55fa7bf4d29c';
  $display->content['new-b9f55e98-d24a-4cb4-bf83-55fa7bf4d29c'] = $pane;
  $display->panels['middle'][1] = 'new-b9f55e98-d24a-4cb4-bf83-55fa7bf4d29c';
  $pane = new stdClass();
  $pane->pid = 'new-083069e5-73a0-4ef9-ac92-c8ab32df648f';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_youtube_video';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'video_embed_field',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '083069e5-73a0-4ef9-ac92-c8ab32df648f';
  $display->content['new-083069e5-73a0-4ef9-ac92-c8ab32df648f'] = $pane;
  $display->panels['middle'][2] = 'new-083069e5-73a0-4ef9-ac92-c8ab32df648f';
  $pane = new stdClass();
  $pane->pid = 'new-56b06e0b-5b83-41ef-a0c4-a3056b541b38';
  $pane->panel = 'middle';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:transcription_link_video';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '56b06e0b-5b83-41ef-a0c4-a3056b541b38';
  $display->content['new-56b06e0b-5b83-41ef-a0c4-a3056b541b38'] = $pane;
  $display->panels['middle'][3] = 'new-56b06e0b-5b83-41ef-a0c4-a3056b541b38';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-91eaeb30-5ad1-4a05-a0f8-c9e5a721841e';
  $handler->conf['display'] = $display;
  $export['entity_panels_node_video_storybook__panel_context_207462eb-c14f-42ef-b770-738fdc44cb0a'] = $handler;

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

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_5f76ac78-f9be-4f15-a472-266016c57125';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 10;
  $handler->conf = array(
    'title' => 'Video Transcription',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'transcription',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'video' => 'video',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->uuid = 'ec58383e-fd62-4d3b-bf2a-95641512bdc5';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_5f76ac78-f9be-4f15-a472-266016c57125';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-63e0dc93-d8b5-47cc-9d7c-e00a2ab7a7cb';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_transcription';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '63e0dc93-d8b5-47cc-9d7c-e00a2ab7a7cb';
  $display->content['new-63e0dc93-d8b5-47cc-9d7c-e00a2ab7a7cb'] = $pane;
  $display->panels['middle'][0] = 'new-63e0dc93-d8b5-47cc-9d7c-e00a2ab7a7cb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-63e0dc93-d8b5-47cc-9d7c-e00a2ab7a7cb';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_5f76ac78-f9be-4f15-a472-266016c57125'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_a1f917bb-92d9-42a8-84c9-4b4eff453c19';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 9;
  $handler->conf = array(
    'title' => 'Audio Transcription',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'transcription',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'audio' => 'audio',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->uuid = 'd1b00ca9-1cdd-4ded-8938-38912db43b7a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_a1f917bb-92d9-42a8-84c9-4b4eff453c19';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-69d835dc-37a5-4b4c-b707-3e53389b7f1d';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_transcription';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '69d835dc-37a5-4b4c-b707-3e53389b7f1d';
  $display->content['new-69d835dc-37a5-4b4c-b707-3e53389b7f1d'] = $pane;
  $display->panels['middle'][0] = 'new-69d835dc-37a5-4b4c-b707-3e53389b7f1d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-69d835dc-37a5-4b4c-b707-3e53389b7f1d';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_a1f917bb-92d9-42a8-84c9-4b4eff453c19'] = $handler;

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
  $page->path = 'storybook/%book/%chapter';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'book' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: book',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vocabularies' => array(
          'storybook' => 'storybook',
        ),
        'breadcrumb' => 1,
        'transform' => 1,
      ),
    ),
    'chapter' => array(
      'id' => 2,
      'identifier' => 'Taxonomy term: chapter',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vocabularies' => array(
          'storybook' => 'storybook',
        ),
        'breadcrumb' => 1,
        'transform' => 1,
      ),
    ),
  );
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
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'argument_term_2',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '55',
            30 => array(),
            52 => array(),
            37 => array(),
            38 => array(),
            40 => array(),
            39 => array(),
            44 => array(),
            46 => array(),
            42 => array(),
            45 => array(),
            43 => array(),
            49 => array(),
            53 => array(),
            50 => array(),
            21 => array(),
            11 => array(),
            47 => array(),
            51 => array(),
            48 => array(),
            55 => array(
              1834 => '1834',
            ),
            54 => array(),
            31 => array(),
            41 => array(),
            27 => array(),
            4 => array(),
            29 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        3 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '55',
            30 => array(),
            52 => array(),
            37 => array(),
            38 => array(),
            40 => array(),
            39 => array(),
            44 => array(),
            46 => array(),
            42 => array(),
            45 => array(),
            43 => array(),
            49 => array(),
            53 => array(),
            50 => array(),
            21 => array(),
            11 => array(),
            47 => array(),
            51 => array(),
            48 => array(),
            55 => array(
              1835 => '1835',
            ),
            54 => array(),
            31 => array(),
            41 => array(),
            27 => array(),
            4 => array(),
            29 => array(),
          ),
          'context' => 'argument_term_2',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $pane->pid = 'new-86bc93ad-80a4-4817-ba0d-605ba0545080';
  $pane->panel = 'aside-1';
  $pane->type = 'views_panes';
  $pane->subtype = 'storybook_video-panel_pane_content_sidebyside';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_term_2',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '86bc93ad-80a4-4817-ba0d-605ba0545080';
  $display->content['new-86bc93ad-80a4-4817-ba0d-605ba0545080'] = $pane;
  $display->panels['aside-1'][0] = 'new-86bc93ad-80a4-4817-ba0d-605ba0545080';
  $pane = new stdClass();
  $pane->pid = 'new-6fa5fe64-93f4-4cb7-b1cf-f86ec5d4eca6';
  $pane->panel = 'aside-2';
  $pane->type = 'views_panes';
  $pane->subtype = 'storybook_audio-panel_pane_content_sidebyside';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_term_2',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6fa5fe64-93f4-4cb7-b1cf-f86ec5d4eca6';
  $display->content['new-6fa5fe64-93f4-4cb7-b1cf-f86ec5d4eca6'] = $pane;
  $display->panels['aside-2'][0] = 'new-6fa5fe64-93f4-4cb7-b1cf-f86ec5d4eca6';
  $pane = new stdClass();
  $pane->pid = 'new-1380921a-08d9-4c0c-8fe1-fb08273e5bbc';
  $pane->panel = 'intro';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '45425',
    'links' => 1,
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
  $pane->uuid = '1380921a-08d9-4c0c-8fe1-fb08273e5bbc';
  $display->content['new-1380921a-08d9-4c0c-8fe1-fb08273e5bbc'] = $pane;
  $display->panels['intro'][0] = 'new-1380921a-08d9-4c0c-8fe1-fb08273e5bbc';
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
        'bg_classes' => 'pane-nobg',
      ),
      'border_fieldset' => array(
        'border_classes' => 'pane-noborder',
      ),
      'border_color_fieldset' => array(
        'border_color_classes' => 'pane-nobordercolor',
      ),
      'width_fieldset' => array(
        'width_classes' => 'pane-width66left',
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
  $pane->pid = 'new-2b2710c2-74cd-4193-9085-9ececc74f29c';
  $pane->panel = 'region-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '45432',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'full',
    'link_node_title' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'bg_fieldset' => array(
        'bg_classes' => 'pane-nobg',
      ),
      'border_fieldset' => array(
        'border_classes' => 'pane-noborder',
      ),
      'border_color_fieldset' => array(
        'border_color_classes' => 'pane-nobordercolor',
      ),
      'width_fieldset' => array(
        'width_classes' => 'pane-width33right',
      ),
      'animation_fieldset' => array(
        'animation_classes' => 'fadeInRight',
      ),
    ),
    'style' => 'panestyles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2b2710c2-74cd-4193-9085-9ececc74f29c';
  $display->content['new-2b2710c2-74cd-4193-9085-9ececc74f29c'] = $pane;
  $display->panels['region-1'][1] = 'new-2b2710c2-74cd-4193-9085-9ececc74f29c';
  $pane = new stdClass();
  $pane->pid = 'new-7cdfb913-0e21-4a5b-bbf5-bd7e620b08b9';
  $pane->panel = 'region-2';
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
        'bg_classes' => 'pane-nobg',
      ),
      'border_fieldset' => array(
        'border_classes' => 'pane-noborder',
      ),
      'border_color_fieldset' => array(
        'border_color_classes' => 'pane-nobordercolor',
      ),
      'width_fieldset' => array(
        'width_classes' => 'pane-width66left',
      ),
      'animation_fieldset' => array(
        'animation_classes' => 'fadeInLeftBig',
      ),
    ),
    'style' => 'panestyles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7cdfb913-0e21-4a5b-bbf5-bd7e620b08b9';
  $display->content['new-7cdfb913-0e21-4a5b-bbf5-bd7e620b08b9'] = $pane;
  $display->panels['region-2'][0] = 'new-7cdfb913-0e21-4a5b-bbf5-bd7e620b08b9';
  $pane = new stdClass();
  $pane->pid = 'new-b743e9c8-5934-4e4a-a232-fd13e629c3bf';
  $pane->panel = 'region-2';
  $pane->type = 'views_panes';
  $pane->subtype = 'storybook_audio-panel_pane_content_stacked';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_term_2',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'bg_fieldset' => array(
        'bg_classes' => 'pane-nobg',
      ),
      'border_fieldset' => array(
        'border_classes' => 'pane-noborder',
      ),
      'border_color_fieldset' => array(
        'border_color_classes' => 'pane-nobordercolor',
      ),
      'width_fieldset' => array(
        'width_classes' => 'pane-width33right',
      ),
      'animation_fieldset' => array(
        'animation_classes' => 'pane-noanimation',
      ),
    ),
    'style' => 'panestyles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b743e9c8-5934-4e4a-a232-fd13e629c3bf';
  $display->content['new-b743e9c8-5934-4e4a-a232-fd13e629c3bf'] = $pane;
  $display->panels['region-2'][1] = 'new-b743e9c8-5934-4e4a-a232-fd13e629c3bf';
  $pane = new stdClass();
  $pane->pid = 'new-b7ec98eb-4b73-4a1b-90df-2b1401851431';
  $pane->panel = 'region-3';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '45423',
    'links' => 1,
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
        'bg_classes' => 'pane-nobg',
      ),
      'border_fieldset' => array(
        'border_classes' => 'pane-noborder',
      ),
      'border_color_fieldset' => array(
        'border_color_classes' => 'pane-nobordercolor',
      ),
      'width_fieldset' => array(
        'width_classes' => 'pane-width66left',
      ),
      'animation_fieldset' => array(
        'animation_classes' => 'pane-noanimation',
      ),
    ),
    'style' => 'panestyles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b7ec98eb-4b73-4a1b-90df-2b1401851431';
  $display->content['new-b7ec98eb-4b73-4a1b-90df-2b1401851431'] = $pane;
  $display->panels['region-3'][0] = 'new-b7ec98eb-4b73-4a1b-90df-2b1401851431';
  $pane = new stdClass();
  $pane->pid = 'new-410ddf18-8e66-486c-a151-c00ba9d3a14c';
  $pane->panel = 'region-3';
  $pane->type = 'views_panes';
  $pane->subtype = 'storybook_video-panel_pane_content_stacked';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_term_2',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'bg_fieldset' => array(
        'bg_classes' => 'pane-nobg',
      ),
      'border_fieldset' => array(
        'border_classes' => 'pane-noborder',
      ),
      'border_color_fieldset' => array(
        'border_color_classes' => 'pane-nobordercolor',
      ),
      'width_fieldset' => array(
        'width_classes' => 'pane-width33right',
      ),
      'animation_fieldset' => array(
        'animation_classes' => 'pane-noanimation',
      ),
    ),
    'style' => 'panestyles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '410ddf18-8e66-486c-a151-c00ba9d3a14c';
  $display->content['new-410ddf18-8e66-486c-a151-c00ba9d3a14c'] = $pane;
  $display->panels['region-3'][1] = 'new-410ddf18-8e66-486c-a151-c00ba9d3a14c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['storybook'] = $page;

  return $pages;

}
