<?php
/**
 * @file
 * opl_storybook.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function opl_storybook_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-audio-body'.
  $field_instances['node-audio-body'] = array(
    'bundle' => 'audio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'An audio file. The audio file could be used for adding music, podcasts, or audio clips to your site.',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'trim_length' => 600,
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => TRUE,
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-audio-field_audio'.
  $field_instances['node-audio-field_audio'] = array(
    'bundle' => 'audio',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'mediaelement',
        'settings' => array(
          'controls' => 1,
          'download_link' => 1,
          'download_text' => 'Download',
          'height' => 30,
          'width' => 300,
        ),
        'type' => 'mediaelement_audio',
        'weight' => 4,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'mediaelement',
        'settings' => array(
          'controls' => TRUE,
          'download_link' => FALSE,
          'download_text' => 'Download',
          'height' => 30,
          'width' => 300,
        ),
        'type' => 'mediaelement_audio',
        'weight' => 0,
      ),
      'transcription' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_audio',
    'label' => 'Audio',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'entity_translation_sync' => 0,
      'file_directory' => 'media_uploads',
      'file_extensions' => 'mpeg ogg wav mp3',
      'max_filesize' => '6 MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'colorbox__banner' => 0,
          'colorbox__blog_event_card_image' => 0,
          'colorbox__blog_teaser_image' => 0,
          'colorbox__contact_icons' => 0,
          'colorbox__event' => 0,
          'colorbox__event_image' => 0,
          'colorbox__event_series_image' => 0,
          'colorbox__event_subject_for_browse' => 0,
          'colorbox__flexslider_full' => 0,
          'colorbox__flexslider_thumbnail' => 0,
          'colorbox__large' => 0,
          'colorbox__media_thumbnail' => 0,
          'colorbox__medium' => 0,
          'colorbox__newtitle' => 0,
          'colorbox__opl_about_the_branch__308_x_180_' => 0,
          'colorbox__opl_carousel_or_featured_image__350px_x_240px_' => 0,
          'colorbox__single_event_blog_' => 0,
          'colorbox__square_thumbnail' => 0,
          'colorbox__thumbnail' => 0,
          'icon_link' => 0,
          'image' => 0,
          'image_banner' => 0,
          'image_blog_event_card_image' => 0,
          'image_blog_teaser_image' => 0,
          'image_contact_icons' => 0,
          'image_event' => 0,
          'image_event_image' => 0,
          'image_event_series_image' => 0,
          'image_event_subject_for_browse' => 0,
          'image_flexslider_full' => 0,
          'image_flexslider_thumbnail' => 0,
          'image_large' => 0,
          'image_media_thumbnail' => 0,
          'image_medium' => 0,
          'image_newtitle' => 0,
          'image_opl_about_the_branch__308_x_180_' => 0,
          'image_opl_carousel_or_featured_image__350px_x_240px_' => 0,
          'image_single_event_blog_' => 0,
          'image_square_thumbnail' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-audio-field_audio_description'.
  $field_instances['node-audio-field_audio_description'] = array(
    'bundle' => 'audio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 0,
      ),
      'transcription' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_audio_description',
    'label' => 'Audio Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          9 => 9,
          10 => 10,
          'blog_teaser_field' => 'blog_teaser_field',
          'image_only' => 'image_only',
          'newcomers_full_html' => 'newcomers_full_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -8,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -7,
            ),
            4 => array(
              'weight' => -6,
            ),
            5 => array(
              'weight' => -5,
            ),
            9 => array(
              'weight' => -4,
            ),
            10 => array(
              'weight' => -3,
            ),
            'blog_teaser_field' => array(
              'weight' => 0,
            ),
            'image_only' => array(
              'weight' => -9,
            ),
            'newcomers_full_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-audio-field_storybook_and_chapter'.
  $field_instances['node-audio-field_storybook_and_chapter'] = array(
    'bundle' => 'audio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'transcription' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_storybook_and_chapter',
    'label' => 'Storybook and Chapter',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-audio-field_transcription'.
  $field_instances['node-audio-field_transcription'] = array(
    'bundle' => 'audio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 0,
      ),
      'transcription' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_transcription',
    'label' => 'Transcription',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          9 => 9,
          10 => 10,
          'blog_teaser_field' => 'blog_teaser_field',
          'image_only' => 'image_only',
          'newcomers_full_html' => 'newcomers_full_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -8,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -7,
            ),
            4 => array(
              'weight' => -6,
            ),
            5 => array(
              'weight' => -5,
            ),
            9 => array(
              'weight' => -4,
            ),
            10 => array(
              'weight' => -3,
            ),
            'blog_teaser_field' => array(
              'weight' => 0,
            ),
            'image_only' => array(
              'weight' => -9,
            ),
            'newcomers_full_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-audio-title_field'.
  $field_instances['node-audio-title_field'] = array(
    'bundle' => 'audio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'transcription' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => TRUE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 0,
        'page' => 0,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -5,
    ),
  );

  // Exported field_instance: 'node-instagram_feed-body'.
  $field_instances['node-instagram_feed-body'] = array(
    'bundle' => 'instagram_feed',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 0,
          2 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          9 => 0,
          10 => 0,
          'blog_teaser_field' => 0,
          'full_html_no_editor_' => 0,
          'image_only' => 0,
          'newcomers_full_html' => 'newcomers_full_html',
          'storybook' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -8,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -7,
            ),
            4 => array(
              'weight' => -6,
            ),
            5 => array(
              'weight' => -5,
            ),
            9 => array(
              'weight' => -4,
            ),
            10 => array(
              'weight' => -3,
            ),
            'blog_teaser_field' => array(
              'weight' => 0,
            ),
            'full_html_no_editor_' => array(
              'weight' => 0,
            ),
            'image_only' => array(
              'weight' => -9,
            ),
            'newcomers_full_html' => array(
              'weight' => 0,
            ),
            'storybook' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'display_summary' => 0,
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-instagram_feed-field_instagram_account'.
  $field_instances['node-instagram_feed-field_instagram_account'] = array(
    'bundle' => 'instagram_feed',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_instagram_account',
    'label' => 'Follow us on Instagram',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          9 => 9,
          10 => 10,
          'blog_teaser_field' => 'blog_teaser_field',
          'full_html_no_editor_' => 'full_html_no_editor_',
          'image_only' => 'image_only',
          'newcomers_full_html' => 'newcomers_full_html',
          'storybook' => 'storybook',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -8,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -7,
            ),
            4 => array(
              'weight' => -6,
            ),
            5 => array(
              'weight' => -5,
            ),
            9 => array(
              'weight' => -4,
            ),
            10 => array(
              'weight' => -3,
            ),
            'blog_teaser_field' => array(
              'weight' => 0,
            ),
            'full_html_no_editor_' => array(
              'weight' => 0,
            ),
            'image_only' => array(
              'weight' => -9,
            ),
            'newcomers_full_html' => array(
              'weight' => 0,
            ),
            'storybook' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-instagram_feed-title_field'.
  $field_instances['node-instagram_feed-title_field'] = array(
    'bundle' => 'instagram_feed',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => TRUE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 0,
        'page' => 0,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -5,
    ),
  );

  // Exported field_instance: 'node-recipe-body'.
  $field_instances['node-recipe-body'] = array(
    'bundle' => 'recipe',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please describe how to prepare this dish with step-by-step instructions. ',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Preparation',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          9 => 9,
          10 => 10,
          'blog_teaser_field' => 'blog_teaser_field',
          'full_html_no_editor_' => 'full_html_no_editor_',
          'image_only' => 'image_only',
          'newcomers_full_html' => 'newcomers_full_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -8,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -7,
            ),
            4 => array(
              'weight' => -6,
            ),
            5 => array(
              'weight' => -5,
            ),
            9 => array(
              'weight' => -4,
            ),
            10 => array(
              'weight' => -3,
            ),
            'blog_teaser_field' => array(
              'weight' => 0,
            ),
            'full_html_no_editor_' => array(
              'weight' => 0,
            ),
            'image_only' => array(
              'weight' => -9,
            ),
            'newcomers_full_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'display_summary' => 0,
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-recipe-field_ingredients'.
  $field_instances['node-recipe-field_ingredients'] = array(
    'bundle' => 'recipe',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter each ingredient separately, including a quantity and measurement (either metric or imperial is fine, but please be consistent). You may add as many ingredients as you need.',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_ingredients',
    'label' => 'Ingredients',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          9 => 9,
          10 => 10,
          'blog_teaser_field' => 'blog_teaser_field',
          'full_html_no_editor_' => 'full_html_no_editor_',
          'image_only' => 'image_only',
          'newcomers_full_html' => 'newcomers_full_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -8,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -7,
            ),
            4 => array(
              'weight' => -6,
            ),
            5 => array(
              'weight' => -5,
            ),
            9 => array(
              'weight' => -4,
            ),
            10 => array(
              'weight' => -3,
            ),
            'blog_teaser_field' => array(
              'weight' => 0,
            ),
            'full_html_no_editor_' => array(
              'weight' => 0,
            ),
            'image_only' => array(
              'weight' => -9,
            ),
            'newcomers_full_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-recipe-field_recipe_photo'.
  $field_instances['node-recipe-field_recipe_photo'] = array(
    'bundle' => 'recipe',
    'deleted' => 0,
    'description' => 'If you have a photo of the finished product, you may upload it here. ',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 5,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_recipe_photo',
    'label' => 'Photo of completed recipe',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => 'recipe_photos',
      'file_extensions' => 'png gif jpg jpeg',
      'image_field_caption' => 0,
      'max_filesize' => '2 MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'colorbox__banner' => 0,
          'colorbox__blog_event_card_image' => 0,
          'colorbox__blog_teaser_image' => 0,
          'colorbox__contact_icons' => 0,
          'colorbox__event' => 0,
          'colorbox__event_image' => 0,
          'colorbox__event_series_image' => 0,
          'colorbox__event_subject_for_browse' => 0,
          'colorbox__flexslider_full' => 0,
          'colorbox__flexslider_thumbnail' => 0,
          'colorbox__large' => 0,
          'colorbox__media_thumbnail' => 0,
          'colorbox__medium' => 0,
          'colorbox__newtitle' => 0,
          'colorbox__opl_about_the_branch__308_x_180_' => 0,
          'colorbox__opl_carousel_or_featured_image__350px_x_240px_' => 0,
          'colorbox__thumbnail' => 0,
          'icon_link' => 0,
          'image' => 0,
          'image_banner' => 0,
          'image_blog_event_card_image' => 0,
          'image_blog_teaser_image' => 0,
          'image_contact_icons' => 0,
          'image_event' => 0,
          'image_event_image' => 0,
          'image_event_series_image' => 0,
          'image_event_subject_for_browse' => 0,
          'image_flexslider_full' => 0,
          'image_flexslider_thumbnail' => 0,
          'image_large' => 0,
          'image_media_thumbnail' => 0,
          'image_medium' => 0,
          'image_newtitle' => 0,
          'image_opl_about_the_branch__308_x_180_' => 0,
          'image_opl_carousel_or_featured_image__350px_x_240px_' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-recipe-field_total_preparation_time'.
  $field_instances['node-recipe-field_total_preparation_time'] = array(
    'bundle' => 'recipe',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please indicate the total preparation and cooking time in minutes or hours, as appropriate.',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_total_preparation_time',
    'label' => 'Total time required',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          9 => 9,
          10 => 10,
          'blog_teaser_field' => 'blog_teaser_field',
          'full_html_no_editor_' => 'full_html_no_editor_',
          'image_only' => 'image_only',
          'newcomers_full_html' => 'newcomers_full_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -8,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -7,
            ),
            4 => array(
              'weight' => -6,
            ),
            5 => array(
              'weight' => -5,
            ),
            9 => array(
              'weight' => -4,
            ),
            10 => array(
              'weight' => -3,
            ),
            'blog_teaser_field' => array(
              'weight' => 0,
            ),
            'full_html_no_editor_' => array(
              'weight' => 0,
            ),
            'image_only' => array(
              'weight' => -9,
            ),
            'newcomers_full_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 50,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-recipe-field_yield'.
  $field_instances['node-recipe-field_yield'] = array(
    'bundle' => 'recipe',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter an amount, such as "12 muffins" or "4 servings."',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_yield',
    'label' => 'Yield',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          9 => 9,
          10 => 10,
          'blog_teaser_field' => 'blog_teaser_field',
          'full_html_no_editor_' => 'full_html_no_editor_',
          'image_only' => 'image_only',
          'newcomers_full_html' => 'newcomers_full_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -8,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -7,
            ),
            4 => array(
              'weight' => -6,
            ),
            5 => array(
              'weight' => -5,
            ),
            9 => array(
              'weight' => -4,
            ),
            10 => array(
              'weight' => -3,
            ),
            'blog_teaser_field' => array(
              'weight' => 0,
            ),
            'full_html_no_editor_' => array(
              'weight' => 0,
            ),
            'image_only' => array(
              'weight' => -9,
            ),
            'newcomers_full_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-recipe-title_field'.
  $field_instances['node-recipe-title_field'] = array(
    'bundle' => 'recipe',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => TRUE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 0,
        'page' => 0,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-storybook_article-field_article_content'.
  $field_instances['node-storybook_article-field_article_content'] = array(
    'bundle' => 'storybook_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_article_content',
    'label' => 'Article Content',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          9 => 9,
          10 => 10,
          'blog_teaser_field' => 'blog_teaser_field',
          'image_only' => 'image_only',
          'newcomers_full_html' => 'newcomers_full_html',
          'storybook' => 0,
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -8,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -7,
            ),
            4 => array(
              'weight' => -6,
            ),
            5 => array(
              'weight' => -5,
            ),
            9 => array(
              'weight' => -4,
            ),
            10 => array(
              'weight' => -3,
            ),
            'blog_teaser_field' => array(
              'weight' => 0,
            ),
            'image_only' => array(
              'weight' => -9,
            ),
            'newcomers_full_html' => array(
              'weight' => 0,
            ),
            'storybook' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'display_summary' => 1,
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-storybook_article-title_field'.
  $field_instances['node-storybook_article-title_field'] = array(
    'bundle' => 'storybook_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => TRUE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 0,
        'page' => 0,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -5,
    ),
  );

  // Exported field_instance:
  // 'node-storybook_collections-field_embed_bibliocommons'.
  $field_instances['node-storybook_collections-field_embed_bibliocommons'] = array(
    'bundle' => 'storybook_collections',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'field_bclist',
        'settings' => array(),
        'type' => 'bclist_default',
        'weight' => 1,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_embed_bibliocommons',
    'label' => 'Insert a BiblioCommons item or list',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_bclist',
      'settings' => array(
        'behaviors' => array(
          'default value' => 2,
          'multiple values' => 2,
        ),
      ),
      'type' => 'bclist_field',
      'weight' => 33,
    ),
  );

  // Exported field_instance:
  // 'node-storybook_collections-field_storybook_and_chapter'.
  $field_instances['node-storybook_collections-field_storybook_and_chapter'] = array(
    'bundle' => 'storybook_collections',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_storybook_and_chapter',
    'label' => 'Storybook and Chapter',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 35,
    ),
  );

  // Exported field_instance:
  // 'node-storybook_single_image-field_storybook_image'.
  $field_instances['node-storybook_single_image-field_storybook_image'] = array(
    'bundle' => 'storybook_single_image',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_storybook_image',
    'label' => 'Storybook Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'entity_translation_sync' => 0,
      'file_directory' => 'media_uploads',
      'file_extensions' => 'png gif jpg jpeg',
      'image_field_caption' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 1,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'colorbox__banner' => 0,
          'colorbox__blog_event_card_image' => 0,
          'colorbox__blog_teaser_image' => 0,
          'colorbox__contact_icons' => 0,
          'colorbox__event' => 0,
          'colorbox__event_image' => 0,
          'colorbox__event_series_image' => 0,
          'colorbox__event_subject_for_browse' => 0,
          'colorbox__flexslider_full' => 0,
          'colorbox__flexslider_thumbnail' => 0,
          'colorbox__large' => 0,
          'colorbox__media_thumbnail' => 0,
          'colorbox__medium' => 0,
          'colorbox__newtitle' => 0,
          'colorbox__opl_about_the_branch__308_x_180_' => 0,
          'colorbox__opl_carousel_or_featured_image__350px_x_240px_' => 0,
          'colorbox__single_event_blog_' => 0,
          'colorbox__square_thumbnail' => 0,
          'colorbox__thumbnail' => 0,
          'icon_link' => 0,
          'image' => 'image',
          'image_banner' => 0,
          'image_blog_event_card_image' => 0,
          'image_blog_teaser_image' => 0,
          'image_contact_icons' => 0,
          'image_event' => 0,
          'image_event_image' => 0,
          'image_event_series_image' => 0,
          'image_event_subject_for_browse' => 0,
          'image_flexslider_full' => 0,
          'image_flexslider_thumbnail' => 0,
          'image_large' => 'image_large',
          'image_media_thumbnail' => 0,
          'image_medium' => 'image_medium',
          'image_newtitle' => 0,
          'image_opl_about_the_branch__308_x_180_' => 0,
          'image_opl_carousel_or_featured_image__350px_x_240px_' => 0,
          'image_single_event_blog_' => 0,
          'image_square_thumbnail' => 0,
          'image_thumbnail' => 'image_thumbnail',
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-storybook_single_image-title_field'.
  $field_instances['node-storybook_single_image-title_field'] = array(
    'bundle' => 'storybook_single_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => TRUE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 0,
        'page' => 0,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -5,
    ),
  );

  // Exported field_instance: 'node-storybook_video_intro-field_main_heading'.
  $field_instances['node-storybook_video_intro-field_main_heading'] = array(
    'bundle' => 'storybook_video_intro',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_main_heading',
    'label' => 'Main Heading',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          9 => 9,
          10 => 10,
          'blog_teaser_field' => 'blog_teaser_field',
          'image_only' => 'image_only',
          'newcomers_full_html' => 'newcomers_full_html',
          'storybook' => 'storybook',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -8,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -7,
            ),
            4 => array(
              'weight' => -6,
            ),
            5 => array(
              'weight' => -5,
            ),
            9 => array(
              'weight' => -4,
            ),
            10 => array(
              'weight' => -3,
            ),
            'blog_teaser_field' => array(
              'weight' => 0,
            ),
            'image_only' => array(
              'weight' => -9,
            ),
            'newcomers_full_html' => array(
              'weight' => 0,
            ),
            'storybook' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'node-storybook_video_intro-field_secondary_heading'.
  $field_instances['node-storybook_video_intro-field_secondary_heading'] = array(
    'bundle' => 'storybook_video_intro',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_secondary_heading',
    'label' => 'Secondary Heading',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          9 => 9,
          10 => 10,
          'blog_teaser_field' => 'blog_teaser_field',
          'image_only' => 'image_only',
          'newcomers_full_html' => 'newcomers_full_html',
          'storybook' => 'storybook',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -8,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -7,
            ),
            4 => array(
              'weight' => -6,
            ),
            5 => array(
              'weight' => -5,
            ),
            9 => array(
              'weight' => -4,
            ),
            10 => array(
              'weight' => -3,
            ),
            'blog_teaser_field' => array(
              'weight' => 0,
            ),
            'image_only' => array(
              'weight' => -9,
            ),
            'newcomers_full_html' => array(
              'weight' => 0,
            ),
            'storybook' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-storybook_video_intro-field_video'.
  $field_instances['node-storybook_video_intro-field_video'] = array(
    'bundle' => 'storybook_video_intro',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 3,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_video',
    'label' => 'Video',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'entity_translation_sync' => 0,
      'file_directory' => 'media_uploads',
      'file_extensions' => 'mp4 ogv flv webm',
      'max_filesize' => '8 MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'colorbox__banner' => 0,
          'colorbox__blog_event_card_image' => 0,
          'colorbox__blog_teaser_image' => 0,
          'colorbox__contact_icons' => 0,
          'colorbox__event' => 0,
          'colorbox__event_image' => 0,
          'colorbox__event_series_image' => 0,
          'colorbox__event_subject_for_browse' => 0,
          'colorbox__flexslider_full' => 0,
          'colorbox__flexslider_thumbnail' => 0,
          'colorbox__juicebox_large' => 0,
          'colorbox__juicebox_medium' => 0,
          'colorbox__juicebox_small' => 0,
          'colorbox__juicebox_square_thumbnail' => 0,
          'colorbox__large' => 0,
          'colorbox__media_thumbnail' => 0,
          'colorbox__medium' => 0,
          'colorbox__newtitle' => 0,
          'colorbox__opl_about_the_branch__308_x_180_' => 0,
          'colorbox__opl_carousel_or_featured_image__350px_x_240px_' => 0,
          'colorbox__thumbnail' => 0,
          'icon_link' => 0,
          'image' => 0,
          'image_banner' => 0,
          'image_blog_event_card_image' => 0,
          'image_blog_teaser_image' => 0,
          'image_contact_icons' => 0,
          'image_event' => 0,
          'image_event_image' => 0,
          'image_event_series_image' => 0,
          'image_event_subject_for_browse' => 0,
          'image_flexslider_full' => 0,
          'image_flexslider_thumbnail' => 0,
          'image_juicebox_large' => 0,
          'image_juicebox_medium' => 0,
          'image_juicebox_small' => 0,
          'image_juicebox_square_thumbnail' => 0,
          'image_large' => 0,
          'image_media_thumbnail' => 0,
          'image_medium' => 0,
          'image_newtitle' => 0,
          'image_opl_about_the_branch__308_x_180_' => 0,
          'image_opl_carousel_or_featured_image__350px_x_240px_' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-storybook_video_intro-title_field'.
  $field_instances['node-storybook_video_intro-title_field'] = array(
    'bundle' => 'storybook_video_intro',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => TRUE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 0,
        'page' => 0,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-video-field_storybook_and_chapter'.
  $field_instances['node-video-field_storybook_and_chapter'] = array(
    'bundle' => 'video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_storybook_and_chapter',
    'label' => 'Storybook and Chapter',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-video-field_transcription'.
  $field_instances['node-video-field_transcription'] = array(
    'bundle' => 'video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_transcription',
    'label' => 'Transcription',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          9 => 9,
          10 => 10,
          'blog_teaser_field' => 'blog_teaser_field',
          'image_only' => 'image_only',
          'newcomers_full_html' => 'newcomers_full_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -8,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -7,
            ),
            4 => array(
              'weight' => -6,
            ),
            5 => array(
              'weight' => -5,
            ),
            9 => array(
              'weight' => -4,
            ),
            10 => array(
              'weight' => -3,
            ),
            'blog_teaser_field' => array(
              'weight' => 0,
            ),
            'image_only' => array(
              'weight' => -9,
            ),
            'newcomers_full_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-video-field_video'.
  $field_instances['node-video-field_video'] = array(
    'bundle' => 'video',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'videojs',
        'settings' => array(
          'autoplay' => FALSE,
          'height' => NULL,
          'hidecontrols' => FALSE,
          'loop' => FALSE,
          'posterimage_field' => NULL,
          'posterimage_style' => NULL,
          'preload' => 'auto',
          'width' => NULL,
        ),
        'type' => 'videojs',
        'weight' => 1,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'videojs',
        'settings' => array(
          'autoplay' => NULL,
          'height' => NULL,
          'hidecontrols' => NULL,
          'loop' => NULL,
          'posterimage_field' => NULL,
          'posterimage_style' => NULL,
          'preload' => NULL,
          'width' => NULL,
        ),
        'type' => 'videojs',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_video',
    'label' => 'Video',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'entity_translation_sync' => 0,
      'file_directory' => 'media_uploads',
      'file_extensions' => 'mp4 ogv flv webm',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'colorbox__banner' => 0,
          'colorbox__blog_event_card_image' => 0,
          'colorbox__blog_teaser_image' => 0,
          'colorbox__contact_icons' => 0,
          'colorbox__event' => 0,
          'colorbox__event_image' => 0,
          'colorbox__event_series_image' => 0,
          'colorbox__event_subject_for_browse' => 0,
          'colorbox__flexslider_full' => 0,
          'colorbox__flexslider_thumbnail' => 0,
          'colorbox__large' => 0,
          'colorbox__media_thumbnail' => 0,
          'colorbox__medium' => 0,
          'colorbox__newtitle' => 0,
          'colorbox__opl_about_the_branch__308_x_180_' => 0,
          'colorbox__opl_carousel_or_featured_image__350px_x_240px_' => 0,
          'colorbox__thumbnail' => 0,
          'icon_link' => 0,
          'image' => 0,
          'image_banner' => 0,
          'image_blog_event_card_image' => 0,
          'image_blog_teaser_image' => 0,
          'image_contact_icons' => 0,
          'image_event' => 0,
          'image_event_image' => 0,
          'image_event_series_image' => 0,
          'image_event_subject_for_browse' => 0,
          'image_flexslider_full' => 0,
          'image_flexslider_thumbnail' => 0,
          'image_large' => 0,
          'image_media_thumbnail' => 0,
          'image_medium' => 0,
          'image_newtitle' => 0,
          'image_opl_about_the_branch__308_x_180_' => 0,
          'image_opl_carousel_or_featured_image__350px_x_240px_' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-video-field_video_description'.
  $field_instances['node-video-field_video_description'] = array(
    'bundle' => 'video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_video_description',
    'label' => 'Video Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          9 => 9,
          10 => 10,
          'blog_teaser_field' => 'blog_teaser_field',
          'image_only' => 'image_only',
          'newcomers_full_html' => 'newcomers_full_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -8,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -7,
            ),
            4 => array(
              'weight' => -6,
            ),
            5 => array(
              'weight' => -5,
            ),
            9 => array(
              'weight' => -4,
            ),
            10 => array(
              'weight' => -3,
            ),
            'blog_teaser_field' => array(
              'weight' => 0,
            ),
            'image_only' => array(
              'weight' => -9,
            ),
            'newcomers_full_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-video-field_youtube_video'.
  $field_instances['node-video-field_youtube_video'] = array(
    'bundle' => 'video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'video_embed_field',
        'settings' => array(
          'description' => 1,
          'description_position' => 'bottom',
          'video_style' => 'normal',
        ),
        'type' => 'video_embed_field',
        'weight' => 2,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'video_embed_field',
        'settings' => array(
          'description' => 1,
          'description_position' => 'bottom',
          'video_style' => 'normal',
        ),
        'type' => 'video_embed_field',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_youtube_video',
    'label' => 'YouTube Video',
    'required' => 0,
    'settings' => array(
      'allowed_providers' => array(
        'vimeo' => 0,
        'youtube' => 'youtube',
      ),
      'description_field' => 0,
      'description_length' => 128,
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'video_embed_field',
      'settings' => array(),
      'type' => 'video_embed_field_video',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-video-title_field'.
  $field_instances['node-video-title_field'] = array(
    'bundle' => 'video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'featured_event' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'storybook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => TRUE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 0,
        'page' => 0,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'taxonomy_term-storybook-field_image'.
  $field_instances['taxonomy_term-storybook-field_image'] = array(
    'bundle' => 'storybook',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg svg',
      'image_field_caption' => 0,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          'image' => 'image',
        ),
        'browser_plugins' => array(),
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'colorbox__banner' => 0,
          'colorbox__blog_event_card_image' => 0,
          'colorbox__blog_teaser_image' => 0,
          'colorbox__contact_icons' => 0,
          'colorbox__event' => 0,
          'colorbox__event_image' => 0,
          'colorbox__event_series_image' => 0,
          'colorbox__event_subject_for_browse' => 0,
          'colorbox__flexslider_full' => 0,
          'colorbox__flexslider_thumbnail' => 0,
          'colorbox__large' => 0,
          'colorbox__media_thumbnail' => 0,
          'colorbox__medium' => 0,
          'colorbox__newtitle' => 0,
          'colorbox__opl_about_the_branch__308_x_180_' => 0,
          'colorbox__opl_carousel_or_featured_image__350px_x_240px_' => 0,
          'colorbox__thumbnail' => 0,
          'icon_link' => 0,
          'image' => 0,
          'image_banner' => 0,
          'image_blog_event_card_image' => 0,
          'image_blog_teaser_image' => 0,
          'image_contact_icons' => 0,
          'image_event' => 0,
          'image_event_image' => 0,
          'image_event_series_image' => 0,
          'image_event_subject_for_browse' => 0,
          'image_flexslider_full' => 0,
          'image_flexslider_thumbnail' => 0,
          'image_large' => 0,
          'image_media_thumbnail' => 0,
          'image_medium' => 0,
          'image_newtitle' => 0,
          'image_opl_about_the_branch__308_x_180_' => 0,
          'image_opl_carousel_or_featured_image__350px_x_240px_' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'taxonomy_term-storybook-field_publish'.
  $field_instances['taxonomy_term-storybook-field_publish'] = array(
    'bundle' => 'storybook',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Select publish when you are ready to add the chapter to the menu. ',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_publish',
    'label' => 'Publish',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'taxonomy_term-storybook-name_field'.
  $field_instances['taxonomy_term-storybook-name_field'] = array(
    'bundle' => 'storybook',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'name_field',
    'label' => 'Name',
    'required' => TRUE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 0,
        'page' => 0,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('An audio file. The audio file could be used for adding music, podcasts, or audio clips to your site.');
  t('Article Content');
  t('Audio');
  t('Audio Description');
  t('Body');
  t('Follow us on Instagram');
  t('If you have a photo of the finished product, you may upload it here. ');
  t('Image');
  t('Ingredients');
  t('Insert a BiblioCommons item or list');
  t('Main Heading');
  t('Name');
  t('Photo of completed recipe');
  t('Please describe how to prepare this dish with step-by-step instructions. ');
  t('Please enter an amount, such as "12 muffins" or "4 servings."');
  t('Please enter each ingredient separately, including a quantity and measurement (either metric or imperial is fine, but please be consistent). You may add as many ingredients as you need.');
  t('Please indicate the total preparation and cooking time in minutes or hours, as appropriate.');
  t('Preparation');
  t('Publish');
  t('Secondary Heading');
  t('Select publish when you are ready to add the chapter to the menu. ');
  t('Storybook Image');
  t('Storybook and Chapter');
  t('Title');
  t('Total time required');
  t('Transcription');
  t('Video');
  t('Video Description');
  t('Yield');
  t('YouTube Video');

  return $field_instances;
}
