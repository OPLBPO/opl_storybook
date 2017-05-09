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
              1882 => '1882',
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
              1883 => '1883',
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
      'credits' => NULL,
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
  $pane->pid = 'new-2b1a70af-b028-4e96-80e9-e3f807093d04';
  $pane->panel = 'aside-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'fr' => 'fr',
            'default' => 0,
            'en' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'nid' => '48113',
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
  $pane->uuid = '2b1a70af-b028-4e96-80e9-e3f807093d04';
  $display->content['new-2b1a70af-b028-4e96-80e9-e3f807093d04'] = $pane;
  $display->panels['aside-1'][0] = 'new-2b1a70af-b028-4e96-80e9-e3f807093d04';
  $pane = new stdClass();
  $pane->pid = 'new-f5aeb989-594a-47d3-84b7-a2fd048f2aff';
  $pane->panel = 'aside-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'en' => 'en',
            'default' => 0,
            'fr' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'nid' => '48163',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f5aeb989-594a-47d3-84b7-a2fd048f2aff';
  $display->content['new-f5aeb989-594a-47d3-84b7-a2fd048f2aff'] = $pane;
  $display->panels['aside-1'][1] = 'new-f5aeb989-594a-47d3-84b7-a2fd048f2aff';
  $pane = new stdClass();
  $pane->pid = 'new-dcbc9e79-925b-4b97-ba49-502633ab12ca';
  $pane->panel = 'aside-2';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '48115',
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
  $pane->uuid = 'dcbc9e79-925b-4b97-ba49-502633ab12ca';
  $display->content['new-dcbc9e79-925b-4b97-ba49-502633ab12ca'] = $pane;
  $display->panels['aside-2'][0] = 'new-dcbc9e79-925b-4b97-ba49-502633ab12ca';
  $pane = new stdClass();
  $pane->pid = 'new-ab47e259-5f6d-4b26-bdb7-be4c3bfa930f';
  $pane->panel = 'credits';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '48150',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'storybook',
    'link_node_title' => 0,
    'override_title' => 1,
    'override_title_text' => 'Credits',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'bg_fieldset' => array(
        'bg_classes' => 'pane-nobg',
      ),
      'border_fieldset' => array(
        'border_classes' => 'pane-topborder',
      ),
      'border_color_fieldset' => array(
        'border_color_classes' => 'pane-nobordercolor',
      ),
      'width_fieldset' => array(
        'width_classes' => 'pane-width100',
      ),
      'padding_fieldset' => array(
        'padding_classes' => 'pane-topbottompadding',
      ),
      'animation_fieldset' => array(
        'animation_classes' => 'fadeIn',
      ),
    ),
    'style' => 'panestyles',
  );
  $pane->css = array(
    'css_id' => 'credits',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ab47e259-5f6d-4b26-bdb7-be4c3bfa930f';
  $display->content['new-ab47e259-5f6d-4b26-bdb7-be4c3bfa930f'] = $pane;
  $display->panels['credits'][0] = 'new-ab47e259-5f6d-4b26-bdb7-be4c3bfa930f';
  $pane = new stdClass();
  $pane->pid = 'new-7a6db3ce-d05f-4111-916c-08d2a066c167';
  $pane->panel = 'intro';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '48106',
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
  $pane->uuid = '7a6db3ce-d05f-4111-916c-08d2a066c167';
  $display->content['new-7a6db3ce-d05f-4111-916c-08d2a066c167'] = $pane;
  $display->panels['intro'][0] = 'new-7a6db3ce-d05f-4111-916c-08d2a066c167';
  $pane = new stdClass();
  $pane->pid = 'new-64c7c93d-6909-415e-837b-4c0141ffc335';
  $pane->panel = 'region-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '48102',
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
  $pane->uuid = '64c7c93d-6909-415e-837b-4c0141ffc335';
  $display->content['new-64c7c93d-6909-415e-837b-4c0141ffc335'] = $pane;
  $display->panels['region-1'][0] = 'new-64c7c93d-6909-415e-837b-4c0141ffc335';
  $pane = new stdClass();
  $pane->pid = 'new-54736dd3-b8b3-4c7e-9c6a-647400b744e9';
  $pane->panel = 'region-2';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'nid' => '48137',
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
      'padding_fieldset' => array(
        'padding_classes' => 'pane-topbottompadding',
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
  $pane->uuid = '54736dd3-b8b3-4c7e-9c6a-647400b744e9';
  $display->content['new-54736dd3-b8b3-4c7e-9c6a-647400b744e9'] = $pane;
  $display->panels['region-2'][0] = 'new-54736dd3-b8b3-4c7e-9c6a-647400b744e9';
  $pane = new stdClass();
  $pane->pid = 'new-872566fb-7f92-46cf-9e87-5a11c3495783';
  $pane->panel = 'region-2';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '48103',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '872566fb-7f92-46cf-9e87-5a11c3495783';
  $display->content['new-872566fb-7f92-46cf-9e87-5a11c3495783'] = $pane;
  $display->panels['region-2'][1] = 'new-872566fb-7f92-46cf-9e87-5a11c3495783';
  $pane = new stdClass();
  $pane->pid = 'new-5f0297e6-c192-4ad4-813d-91abad483753';
  $pane->panel = 'region-2';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '48112',
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
      'padding_fieldset' => array(
        'padding_classes' => 'pane-topbottompadding',
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
  $pane->uuid = '5f0297e6-c192-4ad4-813d-91abad483753';
  $display->content['new-5f0297e6-c192-4ad4-813d-91abad483753'] = $pane;
  $display->panels['region-2'][2] = 'new-5f0297e6-c192-4ad4-813d-91abad483753';
  $pane = new stdClass();
  $pane->pid = 'new-17745c06-784e-4a84-8761-ca16de3dfdab';
  $pane->panel = 'region-2';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '48104',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '17745c06-784e-4a84-8761-ca16de3dfdab';
  $display->content['new-17745c06-784e-4a84-8761-ca16de3dfdab'] = $pane;
  $display->panels['region-2'][3] = 'new-17745c06-784e-4a84-8761-ca16de3dfdab';
  $pane = new stdClass();
  $pane->pid = 'new-e6f69a18-2cf9-4dd2-9bdc-863f839c8e83';
  $pane->panel = 'region-3';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'en' => 'en',
            'default' => 0,
            'fr' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Return to main food literacy page',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p><a href="/en/food-literacy">Return to main à la carte Food Literacy page</a></p>
',
    'format' => '2',
    'substitute' => 1,
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
        'padding_classes' => 'pane-topbottompadding',
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
  $pane->uuid = 'e6f69a18-2cf9-4dd2-9bdc-863f839c8e83';
  $display->content['new-e6f69a18-2cf9-4dd2-9bdc-863f839c8e83'] = $pane;
  $display->panels['region-3'][0] = 'new-e6f69a18-2cf9-4dd2-9bdc-863f839c8e83';
  $pane = new stdClass();
  $pane->pid = 'new-2aeeaa8d-15eb-47ed-a21f-bf8ec1f1b828';
  $pane->panel = 'region-3';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'fr' => 'fr',
            'default' => 0,
            'en' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Retour à la page d’accueil du projet de littératie alimentaire à la carte',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p><a href="/fr/food-literacy">Retour à la page d’accueil du projet de littératie alimentaire à la carte</a></p>
',
    'format' => '2',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2aeeaa8d-15eb-47ed-a21f-bf8ec1f1b828';
  $display->content['new-2aeeaa8d-15eb-47ed-a21f-bf8ec1f1b828'] = $pane;
  $display->panels['region-3'][1] = 'new-2aeeaa8d-15eb-47ed-a21f-bf8ec1f1b828';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_storybook__food-literacy-food-that-works';
  $handler->task = 'page';
  $handler->subtask = 'storybook';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Food Literacy - Food that Works',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'storybook',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'food-literacy-food-that-works',
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
              1882 => '1882',
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
              1884 => '1884',
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
      'credits' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Storybook';
  $display->uuid = '3c7c5620-9edf-4e0d-ae63-d23a3331e434';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_storybook__food-literacy-food-that-works';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-30bcb257-b7db-48ba-b193-ee3147518275';
  $pane->panel = 'aside-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'en' => 'en',
            'default' => 0,
            'fr' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'nid' => '48234',
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
  $pane->uuid = '30bcb257-b7db-48ba-b193-ee3147518275';
  $display->content['new-30bcb257-b7db-48ba-b193-ee3147518275'] = $pane;
  $display->panels['aside-1'][0] = 'new-30bcb257-b7db-48ba-b193-ee3147518275';
  $pane = new stdClass();
  $pane->pid = 'new-e46ec88f-ff15-40ae-a734-211d689e1099';
  $pane->panel = 'aside-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'fr' => 'fr',
            'default' => 0,
            'en' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'nid' => '48240',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e46ec88f-ff15-40ae-a734-211d689e1099';
  $display->content['new-e46ec88f-ff15-40ae-a734-211d689e1099'] = $pane;
  $display->panels['aside-1'][1] = 'new-e46ec88f-ff15-40ae-a734-211d689e1099';
  $pane = new stdClass();
  $pane->pid = 'new-dcbc9e79-925b-4b97-ba49-502633ab12ca';
  $pane->panel = 'aside-2';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'nid' => '48115',
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
  $pane->uuid = 'dcbc9e79-925b-4b97-ba49-502633ab12ca';
  $display->content['new-dcbc9e79-925b-4b97-ba49-502633ab12ca'] = $pane;
  $display->panels['aside-2'][0] = 'new-dcbc9e79-925b-4b97-ba49-502633ab12ca';
  $pane = new stdClass();
  $pane->pid = 'new-e5ece9e6-8034-405d-aea9-ba8830e3dc07';
  $pane->panel = 'credits';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'en' => 'en',
            'default' => 0,
            'fr' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'nid' => '48264',
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
  $pane->uuid = 'e5ece9e6-8034-405d-aea9-ba8830e3dc07';
  $display->content['new-e5ece9e6-8034-405d-aea9-ba8830e3dc07'] = $pane;
  $display->panels['credits'][0] = 'new-e5ece9e6-8034-405d-aea9-ba8830e3dc07';
  $pane = new stdClass();
  $pane->pid = 'new-a93bb648-e930-44e9-b3c8-a4c009140cf4';
  $pane->panel = 'intro';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'nid' => '48224',
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
  $pane->uuid = 'a93bb648-e930-44e9-b3c8-a4c009140cf4';
  $display->content['new-a93bb648-e930-44e9-b3c8-a4c009140cf4'] = $pane;
  $display->panels['intro'][0] = 'new-a93bb648-e930-44e9-b3c8-a4c009140cf4';
  $pane = new stdClass();
  $pane->pid = 'new-b826d95a-cef3-4b8e-9cca-15a7b3b739ac';
  $pane->panel = 'region-1';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'en' => 'en',
            'default' => 0,
            'fr' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p>Our next chapter, <strong>Food that Works</strong>,<strong> </strong>is coming soon.</p>
',
    'format' => '2',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b826d95a-cef3-4b8e-9cca-15a7b3b739ac';
  $display->content['new-b826d95a-cef3-4b8e-9cca-15a7b3b739ac'] = $pane;
  $display->panels['region-1'][0] = 'new-b826d95a-cef3-4b8e-9cca-15a7b3b739ac';
  $pane = new stdClass();
  $pane->pid = 'new-1f31b06e-2314-4ace-82e7-dd8c8d63b0ce';
  $pane->panel = 'region-1';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'fr' => 'fr',
            'default' => 0,
            'en' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p>Notre prochain chapitre <strong>Gagner son pain</strong> sera bientôt disponible.</p>
',
    'format' => '2',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1f31b06e-2314-4ace-82e7-dd8c8d63b0ce';
  $display->content['new-1f31b06e-2314-4ace-82e7-dd8c8d63b0ce'] = $pane;
  $display->panels['region-1'][1] = 'new-1f31b06e-2314-4ace-82e7-dd8c8d63b0ce';
  $pane = new stdClass();
  $pane->pid = 'new-48e2c704-934b-43dd-ba75-ef2c2c6b27de';
  $pane->panel = 'region-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'nid' => '48221',
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
  $pane->uuid = '48e2c704-934b-43dd-ba75-ef2c2c6b27de';
  $display->content['new-48e2c704-934b-43dd-ba75-ef2c2c6b27de'] = $pane;
  $display->panels['region-1'][2] = 'new-48e2c704-934b-43dd-ba75-ef2c2c6b27de';
  $pane = new stdClass();
  $pane->pid = 'new-713b362d-4ba1-4043-a5ef-c927d30226e5';
  $pane->panel = 'region-2';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'nid' => '48239',
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
      'padding_fieldset' => array(
        'padding_classes' => 'pane-topbottompadding',
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
  $pane->uuid = '713b362d-4ba1-4043-a5ef-c927d30226e5';
  $display->content['new-713b362d-4ba1-4043-a5ef-c927d30226e5'] = $pane;
  $display->panels['region-2'][0] = 'new-713b362d-4ba1-4043-a5ef-c927d30226e5';
  $pane = new stdClass();
  $pane->pid = 'new-6e44d243-92d2-40ad-843c-01ae09e1e869';
  $pane->panel = 'region-2';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'nid' => '48222',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6e44d243-92d2-40ad-843c-01ae09e1e869';
  $display->content['new-6e44d243-92d2-40ad-843c-01ae09e1e869'] = $pane;
  $display->panels['region-2'][1] = 'new-6e44d243-92d2-40ad-843c-01ae09e1e869';
  $pane = new stdClass();
  $pane->pid = 'new-d18d3333-721a-4a93-9f5d-5c3689163781';
  $pane->panel = 'region-2';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'en' => 'en',
            'default' => 0,
            'fr' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'nid' => '48241',
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
      'padding_fieldset' => array(
        'padding_classes' => 'pane-topbottompadding',
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
  $pane->uuid = 'd18d3333-721a-4a93-9f5d-5c3689163781';
  $display->content['new-d18d3333-721a-4a93-9f5d-5c3689163781'] = $pane;
  $display->panels['region-2'][2] = 'new-d18d3333-721a-4a93-9f5d-5c3689163781';
  $pane = new stdClass();
  $pane->pid = 'new-b2bcd6f4-cf42-4e4b-9084-ae10f249df0a';
  $pane->panel = 'region-2';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'nid' => '48242',
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
        'padding_classes' => 'pane-topbottompadding',
      ),
      'animation_fieldset' => array(
        'animation_classes' => 'pane-noanimation',
      ),
    ),
    'style' => 'panestyles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b2bcd6f4-cf42-4e4b-9084-ae10f249df0a';
  $display->content['new-b2bcd6f4-cf42-4e4b-9084-ae10f249df0a'] = $pane;
  $display->panels['region-2'][3] = 'new-b2bcd6f4-cf42-4e4b-9084-ae10f249df0a';
  $pane = new stdClass();
  $pane->pid = 'new-e51d9624-041b-4d6e-96d5-1d8989112b3b';
  $pane->panel = 'region-3';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'fr' => 'fr',
            'default' => 0,
            'en' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'nid' => '48263',
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
        'width_classes' => 'pane-width33left',
      ),
      'padding_fieldset' => array(
        'padding_classes' => 'pane-topbottompadding',
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
  $pane->uuid = 'e51d9624-041b-4d6e-96d5-1d8989112b3b';
  $display->content['new-e51d9624-041b-4d6e-96d5-1d8989112b3b'] = $pane;
  $display->panels['region-3'][0] = 'new-e51d9624-041b-4d6e-96d5-1d8989112b3b';
  $pane = new stdClass();
  $pane->pid = 'new-11d9c514-3be8-4d0d-b675-6637adef99ee';
  $pane->panel = 'region-3';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'nid' => '48223',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '11d9c514-3be8-4d0d-b675-6637adef99ee';
  $display->content['new-11d9c514-3be8-4d0d-b675-6637adef99ee'] = $pane;
  $display->panels['region-3'][1] = 'new-11d9c514-3be8-4d0d-b675-6637adef99ee';
  $pane = new stdClass();
  $pane->pid = 'new-4ded29f4-42ef-4534-ae8f-8666fdf1980e';
  $pane->panel = 'region-3';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'en' => 'en',
            'default' => 0,
            'fr' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'nid' => '48235',
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
        'padding_classes' => 'pane-topbottompadding',
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
  $pane->uuid = '4ded29f4-42ef-4534-ae8f-8666fdf1980e';
  $display->content['new-4ded29f4-42ef-4534-ae8f-8666fdf1980e'] = $pane;
  $display->panels['region-3'][2] = 'new-4ded29f4-42ef-4534-ae8f-8666fdf1980e';
  $pane = new stdClass();
  $pane->pid = 'new-e6f69a18-2cf9-4dd2-9bdc-863f839c8e83';
  $pane->panel = 'region-3';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'en' => 'en',
            'default' => 0,
            'fr' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Return to main food literacy page',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p><a href="/en/food-literacy">Return to main à la carte Food Literacy page</a></p>
',
    'format' => '2',
    'substitute' => 1,
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
        'padding_classes' => 'pane-topbottompadding',
      ),
      'animation_fieldset' => array(
        'animation_classes' => 'pane-noanimation',
      ),
    ),
    'style' => 'panestyles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'e6f69a18-2cf9-4dd2-9bdc-863f839c8e83';
  $display->content['new-e6f69a18-2cf9-4dd2-9bdc-863f839c8e83'] = $pane;
  $display->panels['region-3'][3] = 'new-e6f69a18-2cf9-4dd2-9bdc-863f839c8e83';
  $pane = new stdClass();
  $pane->pid = 'new-2aeeaa8d-15eb-47ed-a21f-bf8ec1f1b828';
  $pane->panel = 'region-3';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'fr' => 'fr',
            'default' => 0,
            'en' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Retour à la page d’accueil du projet de littératie alimentaire à la carte',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p><a href="/fr/food-literacy">Retour à la page d’accueil du projet de littératie alimentaire à la carte</a></p>
',
    'format' => '2',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '2aeeaa8d-15eb-47ed-a21f-bf8ec1f1b828';
  $display->content['new-2aeeaa8d-15eb-47ed-a21f-bf8ec1f1b828'] = $pane;
  $display->panels['region-3'][4] = 'new-2aeeaa8d-15eb-47ed-a21f-bf8ec1f1b828';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_storybook__panel_context_a5306908-2278-47ba-889e-b45296b4be66';
  $handler->task = 'page';
  $handler->subtask = 'storybook';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Food Waste',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'storybook',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'food-waste',
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
              1882 => '1882',
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
              1885 => '1885',
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
      'credits' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Storybook';
  $display->uuid = '3c7c5620-9edf-4e0d-ae63-d23a3331e434';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_storybook__panel_context_a5306908-2278-47ba-889e-b45296b4be66';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3d490295-9962-4273-ac72-0530a4906992';
  $pane->panel = 'aside-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'nid' => '48589',
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
  $pane->uuid = '3d490295-9962-4273-ac72-0530a4906992';
  $display->content['new-3d490295-9962-4273-ac72-0530a4906992'] = $pane;
  $display->panels['aside-1'][0] = 'new-3d490295-9962-4273-ac72-0530a4906992';
  $pane = new stdClass();
  $pane->pid = 'new-dcbc9e79-925b-4b97-ba49-502633ab12ca';
  $pane->panel = 'aside-2';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'nid' => '48115',
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
  $pane->uuid = 'dcbc9e79-925b-4b97-ba49-502633ab12ca';
  $display->content['new-dcbc9e79-925b-4b97-ba49-502633ab12ca'] = $pane;
  $display->panels['aside-2'][0] = 'new-dcbc9e79-925b-4b97-ba49-502633ab12ca';
  $pane = new stdClass();
  $pane->pid = 'new-73c91f96-4fd0-41ea-b423-06741eec1e71';
  $pane->panel = 'credits';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '48613',
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
  $pane->uuid = '73c91f96-4fd0-41ea-b423-06741eec1e71';
  $display->content['new-73c91f96-4fd0-41ea-b423-06741eec1e71'] = $pane;
  $display->panels['credits'][0] = 'new-73c91f96-4fd0-41ea-b423-06741eec1e71';
  $pane = new stdClass();
  $pane->pid = 'new-a3d713f1-9b1f-4983-ab43-ccead8e26b3f';
  $pane->panel = 'intro';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '48593',
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
  $pane->uuid = 'a3d713f1-9b1f-4983-ab43-ccead8e26b3f';
  $display->content['new-a3d713f1-9b1f-4983-ab43-ccead8e26b3f'] = $pane;
  $display->panels['intro'][0] = 'new-a3d713f1-9b1f-4983-ab43-ccead8e26b3f';
  $pane = new stdClass();
  $pane->pid = 'new-0208445e-7dea-4046-9111-7d6a33d3b17e';
  $pane->panel = 'region-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'nid' => '48586',
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
  $pane->uuid = '0208445e-7dea-4046-9111-7d6a33d3b17e';
  $display->content['new-0208445e-7dea-4046-9111-7d6a33d3b17e'] = $pane;
  $display->panels['region-1'][0] = 'new-0208445e-7dea-4046-9111-7d6a33d3b17e';
  $pane = new stdClass();
  $pane->pid = 'new-940011bf-b46a-46dc-a0a4-a11a8b24e192';
  $pane->panel = 'region-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'en' => 'en',
            'default' => 0,
            'fr' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'nid' => '48594',
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
      'padding_fieldset' => array(
        'padding_classes' => 'pane-topbottompadding',
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
  $pane->uuid = '940011bf-b46a-46dc-a0a4-a11a8b24e192';
  $display->content['new-940011bf-b46a-46dc-a0a4-a11a8b24e192'] = $pane;
  $display->panels['region-1'][1] = 'new-940011bf-b46a-46dc-a0a4-a11a8b24e192';
  $pane = new stdClass();
  $pane->pid = 'new-3d4f574e-219e-40d9-b218-20f80a06cc86';
  $pane->panel = 'region-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'nid' => '48603',
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
        'padding_classes' => 'pane-topbottompadding',
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
  $pane->uuid = '3d4f574e-219e-40d9-b218-20f80a06cc86';
  $display->content['new-3d4f574e-219e-40d9-b218-20f80a06cc86'] = $pane;
  $display->panels['region-1'][2] = 'new-3d4f574e-219e-40d9-b218-20f80a06cc86';
  $pane = new stdClass();
  $pane->pid = 'new-89bc40a2-43d0-4c93-bcfa-cb7c45109860';
  $pane->panel = 'region-2';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'nid' => '48587',
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
  $pane->uuid = '89bc40a2-43d0-4c93-bcfa-cb7c45109860';
  $display->content['new-89bc40a2-43d0-4c93-bcfa-cb7c45109860'] = $pane;
  $display->panels['region-2'][0] = 'new-89bc40a2-43d0-4c93-bcfa-cb7c45109860';
  $pane = new stdClass();
  $pane->pid = 'new-09b30233-68f7-43cc-a36c-55e06922f1ac';
  $pane->panel = 'region-3';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'nid' => '48588',
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
  $pane->uuid = '09b30233-68f7-43cc-a36c-55e06922f1ac';
  $display->content['new-09b30233-68f7-43cc-a36c-55e06922f1ac'] = $pane;
  $display->panels['region-3'][0] = 'new-09b30233-68f7-43cc-a36c-55e06922f1ac';
  $pane = new stdClass();
  $pane->pid = 'new-c7a94074-c003-4a06-9239-abc5e52f7a4e';
  $pane->panel = 'region-3';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'en' => 'en',
            'default' => 0,
            'fr' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'nid' => '48601',
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
        'padding_classes' => 'pane-topbottompadding',
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
  $pane->uuid = 'c7a94074-c003-4a06-9239-abc5e52f7a4e';
  $display->content['new-c7a94074-c003-4a06-9239-abc5e52f7a4e'] = $pane;
  $display->panels['region-3'][1] = 'new-c7a94074-c003-4a06-9239-abc5e52f7a4e';
  $pane = new stdClass();
  $pane->pid = 'new-8de38b64-0d02-48b7-bdc7-f6e8954b7465';
  $pane->panel = 'region-3';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'nid' => '48604',
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
        'padding_classes' => 'pane-topbottompadding',
      ),
      'animation_fieldset' => array(
        'animation_classes' => 'fadeIn',
      ),
    ),
    'style' => 'panestyles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '8de38b64-0d02-48b7-bdc7-f6e8954b7465';
  $display->content['new-8de38b64-0d02-48b7-bdc7-f6e8954b7465'] = $pane;
  $display->panels['region-3'][2] = 'new-8de38b64-0d02-48b7-bdc7-f6e8954b7465';
  $pane = new stdClass();
  $pane->pid = 'new-e6f69a18-2cf9-4dd2-9bdc-863f839c8e83';
  $pane->panel = 'region-3';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'en' => 'en',
            'default' => 0,
            'fr' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Return to main food literacy page',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p><a href="/en/food-literacy">Return to main à la carte Food Literacy page</a></p>
',
    'format' => '2',
    'substitute' => 1,
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
        'padding_classes' => 'pane-topbottompadding',
      ),
      'animation_fieldset' => array(
        'animation_classes' => 'pane-noanimation',
      ),
    ),
    'style' => 'panestyles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'e6f69a18-2cf9-4dd2-9bdc-863f839c8e83';
  $display->content['new-e6f69a18-2cf9-4dd2-9bdc-863f839c8e83'] = $pane;
  $display->panels['region-3'][3] = 'new-e6f69a18-2cf9-4dd2-9bdc-863f839c8e83';
  $pane = new stdClass();
  $pane->pid = 'new-2aeeaa8d-15eb-47ed-a21f-bf8ec1f1b828';
  $pane->panel = 'region-3';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'fr' => 'fr',
            'default' => 0,
            'en' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Retour à la page d’accueil du projet de littératie alimentaire à la carte',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p><a href="/fr/food-literacy">Retour à la page d’accueil du projet de littératie alimentaire à la carte</a></p>
',
    'format' => '2',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '2aeeaa8d-15eb-47ed-a21f-bf8ec1f1b828';
  $display->content['new-2aeeaa8d-15eb-47ed-a21f-bf8ec1f1b828'] = $pane;
  $display->panels['region-3'][4] = 'new-2aeeaa8d-15eb-47ed-a21f-bf8ec1f1b828';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_storybook__time-to-grow';
  $handler->task = 'page';
  $handler->subtask = 'storybook';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Time to Grow',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'storybook',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'time-to-grow',
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
              1882 => '1882',
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
              1887 => '1887',
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
      'credits' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Storybook';
  $display->uuid = '3c7c5620-9edf-4e0d-ae63-d23a3331e434';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_storybook__time-to-grow';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a56cfae6-565f-4f88-9cf8-f7af52a50c9a';
  $pane->panel = 'aside-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '49854',
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
  $pane->uuid = 'a56cfae6-565f-4f88-9cf8-f7af52a50c9a';
  $display->content['new-a56cfae6-565f-4f88-9cf8-f7af52a50c9a'] = $pane;
  $display->panels['aside-1'][0] = 'new-a56cfae6-565f-4f88-9cf8-f7af52a50c9a';
  $pane = new stdClass();
  $pane->pid = 'new-dcbc9e79-925b-4b97-ba49-502633ab12ca';
  $pane->panel = 'aside-2';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'nid' => '48115',
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
  $pane->uuid = 'dcbc9e79-925b-4b97-ba49-502633ab12ca';
  $display->content['new-dcbc9e79-925b-4b97-ba49-502633ab12ca'] = $pane;
  $display->panels['aside-2'][0] = 'new-dcbc9e79-925b-4b97-ba49-502633ab12ca';
  $pane = new stdClass();
  $pane->pid = 'new-7fbda033-abeb-45a8-a635-890841ada92b';
  $pane->panel = 'credits';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '49857',
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
  $pane->uuid = '7fbda033-abeb-45a8-a635-890841ada92b';
  $display->content['new-7fbda033-abeb-45a8-a635-890841ada92b'] = $pane;
  $display->panels['credits'][0] = 'new-7fbda033-abeb-45a8-a635-890841ada92b';
  $pane = new stdClass();
  $pane->pid = 'new-dea36920-30fc-4b58-b990-1e7784367eec';
  $pane->panel = 'intro';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '49881',
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
  $pane->uuid = 'dea36920-30fc-4b58-b990-1e7784367eec';
  $display->content['new-dea36920-30fc-4b58-b990-1e7784367eec'] = $pane;
  $display->panels['intro'][0] = 'new-dea36920-30fc-4b58-b990-1e7784367eec';
  $pane = new stdClass();
  $pane->pid = 'new-72fe2361-2d7a-4665-a99e-9fe28041a1f9';
  $pane->panel = 'region-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '49873',
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
        'width_classes' => 'pane-width66right',
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
  $pane->uuid = '72fe2361-2d7a-4665-a99e-9fe28041a1f9';
  $display->content['new-72fe2361-2d7a-4665-a99e-9fe28041a1f9'] = $pane;
  $display->panels['region-1'][0] = 'new-72fe2361-2d7a-4665-a99e-9fe28041a1f9';
  $pane = new stdClass();
  $pane->pid = 'new-db08a8ea-4709-4b0e-b6ab-30ded040402b';
  $pane->panel = 'region-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '49722',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'db08a8ea-4709-4b0e-b6ab-30ded040402b';
  $display->content['new-db08a8ea-4709-4b0e-b6ab-30ded040402b'] = $pane;
  $display->panels['region-1'][1] = 'new-db08a8ea-4709-4b0e-b6ab-30ded040402b';
  $pane = new stdClass();
  $pane->pid = 'new-f7dfadd8-bc4e-4f5b-8e1b-c27fe6c11e6c';
  $pane->panel = 'region-1';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'en' => 'en',
            'default' => 0,
            'fr' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'nid' => '49858',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f7dfadd8-bc4e-4f5b-8e1b-c27fe6c11e6c';
  $display->content['new-f7dfadd8-bc4e-4f5b-8e1b-c27fe6c11e6c'] = $pane;
  $display->panels['region-1'][2] = 'new-f7dfadd8-bc4e-4f5b-8e1b-c27fe6c11e6c';
  $pane = new stdClass();
  $pane->pid = 'new-be1572a3-6657-4a1e-80c6-f37647539d5c';
  $pane->panel = 'region-2';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '49723',
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
  $pane->uuid = 'be1572a3-6657-4a1e-80c6-f37647539d5c';
  $display->content['new-be1572a3-6657-4a1e-80c6-f37647539d5c'] = $pane;
  $display->panels['region-2'][0] = 'new-be1572a3-6657-4a1e-80c6-f37647539d5c';
  $pane = new stdClass();
  $pane->pid = 'new-07ba5d27-5786-4c69-b3b2-601d3a2f8afd';
  $pane->panel = 'region-3';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '49874',
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
        'width_classes' => 'pane-width66right',
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
  $pane->uuid = '07ba5d27-5786-4c69-b3b2-601d3a2f8afd';
  $display->content['new-07ba5d27-5786-4c69-b3b2-601d3a2f8afd'] = $pane;
  $display->panels['region-3'][0] = 'new-07ba5d27-5786-4c69-b3b2-601d3a2f8afd';
  $pane = new stdClass();
  $pane->pid = 'new-5e0b6618-9c0c-4f5b-bd9c-1fdb4da7519f';
  $pane->panel = 'region-3';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '49724',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5e0b6618-9c0c-4f5b-bd9c-1fdb4da7519f';
  $display->content['new-5e0b6618-9c0c-4f5b-bd9c-1fdb4da7519f'] = $pane;
  $display->panels['region-3'][1] = 'new-5e0b6618-9c0c-4f5b-bd9c-1fdb4da7519f';
  $pane = new stdClass();
  $pane->pid = 'new-16374ad3-a681-47ae-96f2-17830fc3973a';
  $pane->panel = 'region-3';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'en' => 'en',
            'default' => 0,
            'fr' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'nid' => '49860',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '16374ad3-a681-47ae-96f2-17830fc3973a';
  $display->content['new-16374ad3-a681-47ae-96f2-17830fc3973a'] = $pane;
  $display->panels['region-3'][2] = 'new-16374ad3-a681-47ae-96f2-17830fc3973a';
  $pane = new stdClass();
  $pane->pid = 'new-0e8f9f34-d49d-48c4-afee-55a715868806';
  $pane->panel = 'region-3';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'fr' => 'fr',
            'default' => 0,
            'en' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'nid' => '49861',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '0e8f9f34-d49d-48c4-afee-55a715868806';
  $display->content['new-0e8f9f34-d49d-48c4-afee-55a715868806'] = $pane;
  $display->panels['region-3'][3] = 'new-0e8f9f34-d49d-48c4-afee-55a715868806';
  $pane = new stdClass();
  $pane->pid = 'new-e6f69a18-2cf9-4dd2-9bdc-863f839c8e83';
  $pane->panel = 'region-3';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'en' => 'en',
            'default' => 0,
            'fr' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Return to main food literacy page',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p><a href="/en/food-literacy">Return to main à la carte Food Literacy page</a></p>
',
    'format' => '2',
    'substitute' => 1,
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
        'padding_classes' => 'pane-topbottompadding',
      ),
      'animation_fieldset' => array(
        'animation_classes' => 'pane-noanimation',
      ),
    ),
    'style' => 'panestyles',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'e6f69a18-2cf9-4dd2-9bdc-863f839c8e83';
  $display->content['new-e6f69a18-2cf9-4dd2-9bdc-863f839c8e83'] = $pane;
  $display->panels['region-3'][4] = 'new-e6f69a18-2cf9-4dd2-9bdc-863f839c8e83';
  $pane = new stdClass();
  $pane->pid = 'new-2aeeaa8d-15eb-47ed-a21f-bf8ec1f1b828';
  $pane->panel = 'region-3';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'fr' => 'fr',
            'default' => 0,
            'en' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Retour à la page d’accueil du projet de littératie alimentaire à la carte',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p><a href="/fr/food-literacy">Retour à la page d’accueil du projet de littératie alimentaire à la carte</a></p>
',
    'format' => '2',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '2aeeaa8d-15eb-47ed-a21f-bf8ec1f1b828';
  $display->content['new-2aeeaa8d-15eb-47ed-a21f-bf8ec1f1b828'] = $pane;
  $display->panels['region-3'][5] = 'new-2aeeaa8d-15eb-47ed-a21f-bf8ec1f1b828';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['storybook'] = $page;

  return $pages;

}
