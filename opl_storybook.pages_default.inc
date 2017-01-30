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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'audio-description',
  );
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'audio-player',
  );
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
  $handler->name = 'entity_panels_node_instagram_feed_storybook__panel_context_7e9b9d5c-bd1a-423e-a93f-8282480a9bbf';
  $handler->task = 'entity_panels';
  $handler->subtask = 'node-instagram_feed-storybook';
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
  $display->uuid = 'b1c41a63-a221-4132-a11b-a309d33b6e62';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'entity_panels_node_instagram_feed_storybook__panel_context_7e9b9d5c-bd1a-423e-a93f-8282480a9bbf';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8924006f-62ef-4744-92ae-f6208d4ec8cc';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_instagram_account';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'follow-us-instagram',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8924006f-62ef-4744-92ae-f6208d4ec8cc';
  $display->content['new-8924006f-62ef-4744-92ae-f6208d4ec8cc'] = $pane;
  $display->panels['middle'][0] = 'new-8924006f-62ef-4744-92ae-f6208d4ec8cc';
  $pane = new stdClass();
  $pane->pid = 'new-69d30521-28e6-47b6-83e3-cebe264be59b';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'follow-us-instagram-acct',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '69d30521-28e6-47b6-83e3-cebe264be59b';
  $display->content['new-69d30521-28e6-47b6-83e3-cebe264be59b'] = $pane;
  $display->panels['middle'][1] = 'new-69d30521-28e6-47b6-83e3-cebe264be59b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-8924006f-62ef-4744-92ae-f6208d4ec8cc';
  $handler->conf['display'] = $display;
  $export['entity_panels_node_instagram_feed_storybook__panel_context_7e9b9d5c-bd1a-423e-a93f-8282480a9bbf'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'entity_panels_node_recipe_storybook__panel_context_8b8843ff-0cba-40fc-b0f0-30cd25f3ba1b';
  $handler->task = 'entity_panels';
  $handler->subtask = 'node-recipe-storybook';
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
  $display->uuid = '57b982ca-37c6-4019-a0f0-fa35d6b8227c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'entity_panels_node_recipe_storybook__panel_context_8b8843ff-0cba-40fc-b0f0-30cd25f3ba1b';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6813ae51-0526-4089-b69e-723607666096';
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
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'recipe-title',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6813ae51-0526-4089-b69e-723607666096';
  $display->content['new-6813ae51-0526-4089-b69e-723607666096'] = $pane;
  $display->panels['middle'][0] = 'new-6813ae51-0526-4089-b69e-723607666096';
  $pane = new stdClass();
  $pane->pid = 'new-1b3ff83f-4212-4356-a2a2-9dbd50325bad';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_recipe_photo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'large',
      'image_link' => '',
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
  $pane->uuid = '1b3ff83f-4212-4356-a2a2-9dbd50325bad';
  $display->content['new-1b3ff83f-4212-4356-a2a2-9dbd50325bad'] = $pane;
  $display->panels['middle'][1] = 'new-1b3ff83f-4212-4356-a2a2-9dbd50325bad';
  $pane = new stdClass();
  $pane->pid = 'new-ec6050ef-b803-410a-80b6-8c2cb7de6891';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_yield';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'recipe-servings',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ec6050ef-b803-410a-80b6-8c2cb7de6891';
  $display->content['new-ec6050ef-b803-410a-80b6-8c2cb7de6891'] = $pane;
  $display->panels['middle'][2] = 'new-ec6050ef-b803-410a-80b6-8c2cb7de6891';
  $pane = new stdClass();
  $pane->pid = 'new-5c194fe9-789f-4985-b59d-d8e42fb5efc1';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_total_preparation_time';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'recipe-time',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '5c194fe9-789f-4985-b59d-d8e42fb5efc1';
  $display->content['new-5c194fe9-789f-4985-b59d-d8e42fb5efc1'] = $pane;
  $display->panels['middle'][3] = 'new-5c194fe9-789f-4985-b59d-d8e42fb5efc1';
  $pane = new stdClass();
  $pane->pid = 'new-6766bdf5-97df-4784-96d0-a35b4fa80813';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ingredients';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'recipe-ingredients',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '6766bdf5-97df-4784-96d0-a35b4fa80813';
  $display->content['new-6766bdf5-97df-4784-96d0-a35b4fa80813'] = $pane;
  $display->panels['middle'][4] = 'new-6766bdf5-97df-4784-96d0-a35b4fa80813';
  $pane = new stdClass();
  $pane->pid = 'new-e6a7a9d6-8dff-468c-ad60-3c4c55db2637';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'recipe-instructions',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'e6a7a9d6-8dff-468c-ad60-3c4c55db2637';
  $display->content['new-e6a7a9d6-8dff-468c-ad60-3c4c55db2637'] = $pane;
  $display->panels['middle'][5] = 'new-e6a7a9d6-8dff-468c-ad60-3c4c55db2637';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-6813ae51-0526-4089-b69e-723607666096';
  $handler->conf['display'] = $display;
  $export['entity_panels_node_recipe_storybook__panel_context_8b8843ff-0cba-40fc-b0f0-30cd25f3ba1b'] = $handler;

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
  $handler->name = 'entity_panels_node_storybook_collections_storybook__panel_context_3f3094fd-db33-45b9-9be1-6752be2eb98b';
  $handler->task = 'entity_panels';
  $handler->subtask = 'node-storybook_collections-storybook';
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
  $display->uuid = '4adb720d-86e6-4534-b14a-61aecb939235';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'entity_panels_node_storybook_collections_storybook__panel_context_3f3094fd-db33-45b9-9be1-6752be2eb98b';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-77dc8c2f-901a-4e1f-8206-dec479c565e1';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_embed_bibliocommons';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'bclist_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
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
  $pane->uuid = '77dc8c2f-901a-4e1f-8206-dec479c565e1';
  $display->content['new-77dc8c2f-901a-4e1f-8206-dec479c565e1'] = $pane;
  $display->panels['middle'][0] = 'new-77dc8c2f-901a-4e1f-8206-dec479c565e1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-77dc8c2f-901a-4e1f-8206-dec479c565e1';
  $handler->conf['display'] = $display;
  $export['entity_panels_node_storybook_collections_storybook__panel_context_3f3094fd-db33-45b9-9be1-6752be2eb98b'] = $handler;

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
    'title' => 'Food Literacy - Comfort Food',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'storybook',
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
              1881 => '1881',
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
              1882 => '1882',
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
      'region-1' => NULL,
      'region-2' => NULL,
      'region-3' => NULL,
      'aside-1' => NULL,
      'aside-2' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Storybook';
  $display->uuid = '3c7c5620-9edf-4e0d-ae63-d23a3331e434';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_storybook__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-40f3c812-1b34-4ce3-b18d-e1b5063e62c7';
  $pane->panel = 'aside-1';
  $pane->type = 'views_panes';
  $pane->subtype = 'clone_of_events_on_front_page-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '40f3c812-1b34-4ce3-b18d-e1b5063e62c7';
  $display->content['new-40f3c812-1b34-4ce3-b18d-e1b5063e62c7'] = $pane;
  $display->panels['aside-1'][0] = 'new-40f3c812-1b34-4ce3-b18d-e1b5063e62c7';
  $pane = new stdClass();
  $pane->pid = 'new-580af23a-4c5b-4a3f-9bb4-c981b34f0481';
  $pane->panel = 'aside-2';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '46851',
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
  $pane->uuid = '580af23a-4c5b-4a3f-9bb4-c981b34f0481';
  $display->content['new-580af23a-4c5b-4a3f-9bb4-c981b34f0481'] = $pane;
  $display->panels['aside-2'][0] = 'new-580af23a-4c5b-4a3f-9bb4-c981b34f0481';
  $pane = new stdClass();
  $pane->pid = 'new-72200722-2885-480f-b6f1-56880db4945d';
  $pane->panel = 'intro';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '46843',
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
  $pane->uuid = '72200722-2885-480f-b6f1-56880db4945d';
  $display->content['new-72200722-2885-480f-b6f1-56880db4945d'] = $pane;
  $display->panels['intro'][0] = 'new-72200722-2885-480f-b6f1-56880db4945d';
  $pane = new stdClass();
  $pane->pid = 'new-c94f1f45-f975-4004-8721-7863db2540de';
  $pane->panel = 'region-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '46842',
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
        'width_classes' => 'pane-width100',
      ),
      'padding_fieldset' => array(
        'padding_classes' => 'pane-nopadding',
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
  $pane->uuid = 'c94f1f45-f975-4004-8721-7863db2540de';
  $display->content['new-c94f1f45-f975-4004-8721-7863db2540de'] = $pane;
  $display->panels['region-1'][0] = 'new-c94f1f45-f975-4004-8721-7863db2540de';
  $pane = new stdClass();
  $pane->pid = 'new-1f7699b0-fd4b-4493-a32a-773e8d730b35';
  $pane->panel = 'region-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '46844',
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
        'border_color_classes' => 'pane-borderlightgrey',
      ),
      'width_fieldset' => array(
        'width_classes' => 'pane-width100',
      ),
      'padding_fieldset' => array(
        'padding_classes' => 'pane-nopadding',
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
  $pane->uuid = '1f7699b0-fd4b-4493-a32a-773e8d730b35';
  $display->content['new-1f7699b0-fd4b-4493-a32a-773e8d730b35'] = $pane;
  $display->panels['region-1'][1] = 'new-1f7699b0-fd4b-4493-a32a-773e8d730b35';
  $pane = new stdClass();
  $pane->pid = 'new-e7ea3821-3d26-4376-aecd-d579bcae5801';
  $pane->panel = 'region-2';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '46845',
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
        'border_classes' => 'pane-bottomborder',
      ),
      'border_color_fieldset' => array(
        'border_color_classes' => 'pane-borderlightgrey',
      ),
      'width_fieldset' => array(
        'width_classes' => 'pane-width100',
      ),
      'padding_fieldset' => array(
        'padding_classes' => 'pane-bottompadding',
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
  $pane->uuid = 'e7ea3821-3d26-4376-aecd-d579bcae5801';
  $display->content['new-e7ea3821-3d26-4376-aecd-d579bcae5801'] = $pane;
  $display->panels['region-2'][0] = 'new-e7ea3821-3d26-4376-aecd-d579bcae5801';
  $pane = new stdClass();
  $pane->pid = 'new-76e6fd3a-e795-4613-af9f-b765cb83e2cc';
  $pane->panel = 'region-2';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '46847',
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
      'padding_fieldset' => array(
        'padding_classes' => 'pane-toppadding',
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
  $pane->uuid = '76e6fd3a-e795-4613-af9f-b765cb83e2cc';
  $display->content['new-76e6fd3a-e795-4613-af9f-b765cb83e2cc'] = $pane;
  $display->panels['region-2'][1] = 'new-76e6fd3a-e795-4613-af9f-b765cb83e2cc';
  $pane = new stdClass();
  $pane->pid = 'new-daf1c7dd-346d-4f48-abf1-2bc1dd611a71';
  $pane->panel = 'region-3';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '46846',
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
        'animation_classes' => 'pane-noanimation',
      ),
    ),
    'style' => 'panestyles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'daf1c7dd-346d-4f48-abf1-2bc1dd611a71';
  $display->content['new-daf1c7dd-346d-4f48-abf1-2bc1dd611a71'] = $pane;
  $display->panels['region-3'][0] = 'new-daf1c7dd-346d-4f48-abf1-2bc1dd611a71';
  $pane = new stdClass();
  $pane->pid = 'new-1609c15e-d6dd-4b3f-981e-c46b41e94490';
  $pane->panel = 'region-3';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '46850',
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
        'width_classes' => 'pane-width33right',
      ),
      'padding_fieldset' => array(
        'padding_classes' => 'pane-bottompadding',
      ),
      'animation_fieldset' => array(
        'animation_classes' => 'pane-noanimation',
      ),
    ),
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1609c15e-d6dd-4b3f-981e-c46b41e94490';
  $display->content['new-1609c15e-d6dd-4b3f-981e-c46b41e94490'] = $pane;
  $display->panels['region-3'][1] = 'new-1609c15e-d6dd-4b3f-981e-c46b41e94490';
  $pane = new stdClass();
  $pane->pid = 'new-86a9b2cf-4a0a-4bb1-bccb-64cd7325379b';
  $pane->panel = 'region-3';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '46849',
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
        'border_classes' => 'pane-topborder',
      ),
      'border_color_fieldset' => array(
        'border_color_classes' => 'pane-borderlightgrey',
      ),
      'width_fieldset' => array(
        'width_classes' => 'pane-width100',
      ),
      'padding_fieldset' => array(
        'padding_classes' => 'pane-toppadding',
      ),
      'animation_fieldset' => array(
        'animation_classes' => 'pane-noanimation',
      ),
    ),
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '86a9b2cf-4a0a-4bb1-bccb-64cd7325379b';
  $display->content['new-86a9b2cf-4a0a-4bb1-bccb-64cd7325379b'] = $pane;
  $display->panels['region-3'][2] = 'new-86a9b2cf-4a0a-4bb1-bccb-64cd7325379b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_storybook__february';
  $handler->task = 'page';
  $handler->subtask = 'storybook';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Food Literacy - Waste Not Want Not',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'storybook',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'february',
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
            54 => array(),
            50 => array(),
            21 => array(),
            11 => array(),
            47 => array(),
            51 => array(),
            48 => array(),
            55 => array(
              1671 => '1671',
            ),
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
            54 => array(),
            50 => array(),
            21 => array(),
            11 => array(),
            47 => array(),
            51 => array(),
            48 => array(),
            55 => array(
              1673 => '1673',
            ),
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
      'region-1' => NULL,
      'region-2' => NULL,
      'region-3' => NULL,
      'aside-1' => NULL,
      'aside-2' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Storybook';
  $display->uuid = '3c7c5620-9edf-4e0d-ae63-d23a3331e434';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_storybook__february';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b25233ec-3d72-4c59-aa5f-3b1c3ccf12f3';
  $pane->panel = 'aside-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '35015',
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
  $pane->uuid = 'b25233ec-3d72-4c59-aa5f-3b1c3ccf12f3';
  $display->content['new-b25233ec-3d72-4c59-aa5f-3b1c3ccf12f3'] = $pane;
  $display->panels['aside-1'][0] = 'new-b25233ec-3d72-4c59-aa5f-3b1c3ccf12f3';
  $pane = new stdClass();
  $pane->pid = 'new-68bdb5e1-36b4-445a-8153-ffc9ab2a85f7';
  $pane->panel = 'aside-2';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '35014',
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
  $pane->uuid = '68bdb5e1-36b4-445a-8153-ffc9ab2a85f7';
  $display->content['new-68bdb5e1-36b4-445a-8153-ffc9ab2a85f7'] = $pane;
  $display->panels['aside-2'][0] = 'new-68bdb5e1-36b4-445a-8153-ffc9ab2a85f7';
  $pane = new stdClass();
  $pane->pid = 'new-9c7b6137-3a2e-4e0d-90ce-898b61d37985';
  $pane->panel = 'intro';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '35007',
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
  $pane->uuid = '9c7b6137-3a2e-4e0d-90ce-898b61d37985';
  $display->content['new-9c7b6137-3a2e-4e0d-90ce-898b61d37985'] = $pane;
  $display->panels['intro'][0] = 'new-9c7b6137-3a2e-4e0d-90ce-898b61d37985';
  $pane = new stdClass();
  $pane->pid = 'new-e38937ad-1a30-4f62-b513-fdaef174d65c';
  $pane->panel = 'region-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '35008',
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
        'width_classes' => 'pane-width100',
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
  $pane->uuid = 'e38937ad-1a30-4f62-b513-fdaef174d65c';
  $display->content['new-e38937ad-1a30-4f62-b513-fdaef174d65c'] = $pane;
  $display->panels['region-1'][0] = 'new-e38937ad-1a30-4f62-b513-fdaef174d65c';
  $pane = new stdClass();
  $pane->pid = 'new-b791546f-cabc-4d9e-991f-91640e1c48ee';
  $pane->panel = 'region-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '35009',
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
        'animation_classes' => 'pane-noanimation',
      ),
    ),
    'style' => 'panestyles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b791546f-cabc-4d9e-991f-91640e1c48ee';
  $display->content['new-b791546f-cabc-4d9e-991f-91640e1c48ee'] = $pane;
  $display->panels['region-1'][1] = 'new-b791546f-cabc-4d9e-991f-91640e1c48ee';
  $pane = new stdClass();
  $pane->pid = 'new-75746022-a865-4542-8482-7ea75985d63a';
  $pane->panel = 'region-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '35012',
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
    'settings' => array(
      'bg_fieldset' => array(
        'bg_classes' => 'pane-bglightgrey',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '75746022-a865-4542-8482-7ea75985d63a';
  $display->content['new-75746022-a865-4542-8482-7ea75985d63a'] = $pane;
  $display->panels['region-1'][2] = 'new-75746022-a865-4542-8482-7ea75985d63a';
  $pane = new stdClass();
  $pane->pid = 'new-b15d92b0-9734-4186-9dda-82ba5011c76c';
  $pane->panel = 'region-2';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '35010',
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
        'width_classes' => 'pane-width100',
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
  $pane->uuid = 'b15d92b0-9734-4186-9dda-82ba5011c76c';
  $display->content['new-b15d92b0-9734-4186-9dda-82ba5011c76c'] = $pane;
  $display->panels['region-2'][0] = 'new-b15d92b0-9734-4186-9dda-82ba5011c76c';
  $pane = new stdClass();
  $pane->pid = 'new-b3980147-2654-4584-8948-60430cf2a2ee';
  $pane->panel = 'region-3';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '35011',
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
        'animation_classes' => 'pane-noanimation',
      ),
    ),
    'style' => 'panestyles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b3980147-2654-4584-8948-60430cf2a2ee';
  $display->content['new-b3980147-2654-4584-8948-60430cf2a2ee'] = $pane;
  $display->panels['region-3'][0] = 'new-b3980147-2654-4584-8948-60430cf2a2ee';
  $pane = new stdClass();
  $pane->pid = 'new-fe8654d8-5ec1-4233-8fa4-5e0b5bbc44d6';
  $pane->panel = 'region-3';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '35013',
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
  $pane->uuid = 'fe8654d8-5ec1-4233-8fa4-5e0b5bbc44d6';
  $display->content['new-fe8654d8-5ec1-4233-8fa4-5e0b5bbc44d6'] = $pane;
  $display->panels['region-3'][1] = 'new-fe8654d8-5ec1-4233-8fa4-5e0b5bbc44d6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_storybook__march';
  $handler->task = 'page';
  $handler->subtask = 'storybook';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Food Literacy - Food Works',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'storybook',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'march',
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
            54 => array(),
            50 => array(),
            21 => array(),
            11 => array(),
            47 => array(),
            51 => array(),
            48 => array(),
            55 => array(
              1671 => '1671',
            ),
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
            54 => array(),
            50 => array(),
            21 => array(),
            11 => array(),
            47 => array(),
            51 => array(),
            48 => array(),
            55 => array(
              1674 => '1674',
            ),
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
      'region-1' => NULL,
      'region-2' => NULL,
      'region-3' => NULL,
      'aside-1' => NULL,
      'aside-2' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Storybook';
  $display->uuid = '3c7c5620-9edf-4e0d-ae63-d23a3331e434';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_storybook__march';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b25233ec-3d72-4c59-aa5f-3b1c3ccf12f3';
  $pane->panel = 'aside-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '35015',
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
  $pane->uuid = 'b25233ec-3d72-4c59-aa5f-3b1c3ccf12f3';
  $display->content['new-b25233ec-3d72-4c59-aa5f-3b1c3ccf12f3'] = $pane;
  $display->panels['aside-1'][0] = 'new-b25233ec-3d72-4c59-aa5f-3b1c3ccf12f3';
  $pane = new stdClass();
  $pane->pid = 'new-68bdb5e1-36b4-445a-8153-ffc9ab2a85f7';
  $pane->panel = 'aside-2';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '35014',
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
  $pane->uuid = '68bdb5e1-36b4-445a-8153-ffc9ab2a85f7';
  $display->content['new-68bdb5e1-36b4-445a-8153-ffc9ab2a85f7'] = $pane;
  $display->panels['aside-2'][0] = 'new-68bdb5e1-36b4-445a-8153-ffc9ab2a85f7';
  $pane = new stdClass();
  $pane->pid = 'new-9c7b6137-3a2e-4e0d-90ce-898b61d37985';
  $pane->panel = 'intro';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '35007',
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
  $pane->uuid = '9c7b6137-3a2e-4e0d-90ce-898b61d37985';
  $display->content['new-9c7b6137-3a2e-4e0d-90ce-898b61d37985'] = $pane;
  $display->panels['intro'][0] = 'new-9c7b6137-3a2e-4e0d-90ce-898b61d37985';
  $pane = new stdClass();
  $pane->pid = 'new-e38937ad-1a30-4f62-b513-fdaef174d65c';
  $pane->panel = 'region-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '35008',
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
        'width_classes' => 'pane-width100',
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
  $pane->uuid = 'e38937ad-1a30-4f62-b513-fdaef174d65c';
  $display->content['new-e38937ad-1a30-4f62-b513-fdaef174d65c'] = $pane;
  $display->panels['region-1'][0] = 'new-e38937ad-1a30-4f62-b513-fdaef174d65c';
  $pane = new stdClass();
  $pane->pid = 'new-b791546f-cabc-4d9e-991f-91640e1c48ee';
  $pane->panel = 'region-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '35009',
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
        'animation_classes' => 'pane-noanimation',
      ),
    ),
    'style' => 'panestyles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b791546f-cabc-4d9e-991f-91640e1c48ee';
  $display->content['new-b791546f-cabc-4d9e-991f-91640e1c48ee'] = $pane;
  $display->panels['region-1'][1] = 'new-b791546f-cabc-4d9e-991f-91640e1c48ee';
  $pane = new stdClass();
  $pane->pid = 'new-75746022-a865-4542-8482-7ea75985d63a';
  $pane->panel = 'region-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '35012',
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
    'settings' => array(
      'bg_fieldset' => array(
        'bg_classes' => 'pane-bglightgrey',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '75746022-a865-4542-8482-7ea75985d63a';
  $display->content['new-75746022-a865-4542-8482-7ea75985d63a'] = $pane;
  $display->panels['region-1'][2] = 'new-75746022-a865-4542-8482-7ea75985d63a';
  $pane = new stdClass();
  $pane->pid = 'new-b15d92b0-9734-4186-9dda-82ba5011c76c';
  $pane->panel = 'region-2';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '35010',
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
        'width_classes' => 'pane-width100',
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
  $pane->uuid = 'b15d92b0-9734-4186-9dda-82ba5011c76c';
  $display->content['new-b15d92b0-9734-4186-9dda-82ba5011c76c'] = $pane;
  $display->panels['region-2'][0] = 'new-b15d92b0-9734-4186-9dda-82ba5011c76c';
  $pane = new stdClass();
  $pane->pid = 'new-b3980147-2654-4584-8948-60430cf2a2ee';
  $pane->panel = 'region-3';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '35011',
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
        'animation_classes' => 'pane-noanimation',
      ),
    ),
    'style' => 'panestyles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b3980147-2654-4584-8948-60430cf2a2ee';
  $display->content['new-b3980147-2654-4584-8948-60430cf2a2ee'] = $pane;
  $display->panels['region-3'][0] = 'new-b3980147-2654-4584-8948-60430cf2a2ee';
  $pane = new stdClass();
  $pane->pid = 'new-fe8654d8-5ec1-4233-8fa4-5e0b5bbc44d6';
  $pane->panel = 'region-3';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '35013',
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
  $pane->uuid = 'fe8654d8-5ec1-4233-8fa4-5e0b5bbc44d6';
  $display->content['new-fe8654d8-5ec1-4233-8fa4-5e0b5bbc44d6'] = $pane;
  $display->panels['region-3'][1] = 'new-fe8654d8-5ec1-4233-8fa4-5e0b5bbc44d6';
  $pane = new stdClass();
  $pane->pid = 'new-8fa171d1-7ee0-4811-80d2-130becba2afa';
  $pane->panel = 'region-3';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '35017',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '8fa171d1-7ee0-4811-80d2-130becba2afa';
  $display->content['new-8fa171d1-7ee0-4811-80d2-130becba2afa'] = $pane;
  $display->panels['region-3'][2] = 'new-8fa171d1-7ee0-4811-80d2-130becba2afa';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['storybook'] = $page;

  return $pages;

}
