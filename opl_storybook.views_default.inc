<?php
/**
 * @file
 * opl_storybook.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function opl_storybook_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'storybook_audio';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Storybook Audio';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'storybook-audio-view-3-stacked';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'storybook';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Storybook and Chapter (field_storybook_and_chapter) */
  $handler->display->display_options['arguments']['field_storybook_and_chapter_target_id']['id'] = 'field_storybook_and_chapter_target_id';
  $handler->display->display_options['arguments']['field_storybook_and_chapter_target_id']['table'] = 'field_data_field_storybook_and_chapter';
  $handler->display->display_options['arguments']['field_storybook_and_chapter_target_id']['field'] = 'field_storybook_and_chapter_target_id';
  $handler->display->display_options['arguments']['field_storybook_and_chapter_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_storybook_and_chapter_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_storybook_and_chapter_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_storybook_and_chapter_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_storybook_and_chapter_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'audio' => 'audio',
  );

  /* Display: Audio - side by side */
  $handler = $view->new_display('panel_pane', 'Audio - side by side', 'panel_pane_content_sidebyside');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'storybook-view-sidebyside';
  $handler->display->display_options['display_description'] = 'Recent audio posts displayed side by side.';
  $handler->display->display_options['pane_category']['name'] = 'Storybook';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_storybook_and_chapter_target_id' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Storybook and Chapter (field_storybook_and_chapter)',
    ),
  );

  /* Display: Audio - stacked */
  $handler = $view->new_display('panel_pane', 'Audio - stacked', 'panel_pane_content_stacked');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'storybook-view-stacked';
  $handler->display->display_options['display_description'] = 'Recent audio posts displayed one under another.';
  $handler->display->display_options['pane_category']['name'] = 'Storybook';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_storybook_and_chapter_target_id' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Storybook and Chapter (field_storybook_and_chapter)',
    ),
  );
  $translatables['storybook_audio'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Audio - side by side'),
    t('Recent audio posts displayed side by side.'),
    t('Storybook'),
    t('Audio - stacked'),
    t('Recent audio posts displayed one under another.'),
  );
  $export['storybook_audio'] = $view;

  $view = new view();
  $view->name = 'storybook_terms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Storybook terms';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name_field_1',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'dropdown-menu chapter-nav-slider';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name_field_1' => 'name_field_1',
    'field_image' => 'field_image',
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['required'] = TRUE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'parent';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_field_1']['id'] = 'name_field_1';
  $handler->display->display_options['fields']['name_field_1']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field_1']['field'] = 'name_field';
  $handler->display->display_options['fields']['name_field_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_field_1']['label'] = '';
  $handler->display->display_options['fields']['name_field_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_field_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_field_1']['alter']['text'] = '<button>[field_image] [name_field_1]</button>';
  $handler->display->display_options['fields']['name_field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_field_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name_field_1']['link_to_entity'] = 0;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_field']['id'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field']['field'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['label'] = '';
  $handler->display->display_options['fields']['name_field']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name_field']['alter']['path'] = 'storybook/[name_field_1]/[name_field]';
  $handler->display->display_options['fields']['name_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_field']['link_to_entity'] = 0;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'parent';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'storybook' => 'storybook',
  );
  /* Filter criterion: Taxonomy term: Publish (field_publish) */
  $handler->display->display_options['filters']['field_publish_value']['id'] = 'field_publish_value';
  $handler->display->display_options['filters']['field_publish_value']['table'] = 'field_data_field_publish';
  $handler->display->display_options['filters']['field_publish_value']['field'] = 'field_publish_value';
  $handler->display->display_options['filters']['field_publish_value']['value'] = array(
    1 => '1',
  );
  $translatables['storybook_terms'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Parent'),
    t('<button>[field_image] [name_field_1]</button>'),
  );
  $export['storybook_terms'] = $view;

  $view = new view();
  $view->name = 'storybook_video';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Storybook Video';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'storybook';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Storybook and Chapter (field_storybook_and_chapter) */
  $handler->display->display_options['arguments']['field_storybook_and_chapter_target_id']['id'] = 'field_storybook_and_chapter_target_id';
  $handler->display->display_options['arguments']['field_storybook_and_chapter_target_id']['table'] = 'field_data_field_storybook_and_chapter';
  $handler->display->display_options['arguments']['field_storybook_and_chapter_target_id']['field'] = 'field_storybook_and_chapter_target_id';
  $handler->display->display_options['arguments']['field_storybook_and_chapter_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_storybook_and_chapter_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_storybook_and_chapter_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_storybook_and_chapter_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_storybook_and_chapter_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );

  /* Display: Video - side by side */
  $handler = $view->new_display('panel_pane', 'Video - side by side', 'panel_pane_content_sidebyside');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'storybook-view-sidebyside';
  $handler->display->display_options['display_description'] = 'Recent video posts displayed side by side.';
  $handler->display->display_options['pane_category']['name'] = 'Storybook';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_storybook_and_chapter_target_id' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Storybook and Chapter (field_storybook_and_chapter)',
    ),
  );

  /* Display: Video - stacked */
  $handler = $view->new_display('panel_pane', 'Video - stacked', 'panel_pane_content_stacked');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'storybook-view-stacked';
  $handler->display->display_options['display_description'] = 'Recent video posts displayed one under another.';
  $handler->display->display_options['pane_category']['name'] = 'Storybook';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_storybook_and_chapter_target_id' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Storybook and Chapter (field_storybook_and_chapter)',
    ),
  );
  $translatables['storybook_video'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Video - side by side'),
    t('Recent video posts displayed side by side.'),
    t('Storybook'),
    t('Video - stacked'),
    t('Recent video posts displayed one under another.'),
  );
  $export['storybook_video'] = $view;

  return $export;
}
