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
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['required'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_field_1']['id'] = 'name_field_1';
  $handler->display->display_options['fields']['name_field_1']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field_1']['field'] = 'name_field';
  $handler->display->display_options['fields']['name_field_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_field_1']['label'] = '';
  $handler->display->display_options['fields']['name_field_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_field_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_field_1']['alter']['text'] = '<button>[name_field_1]</button>';
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
    t('<button>[name_field_1]</button>'),
  );
  $export['storybook_terms'] = $view;

  return $export;
}
