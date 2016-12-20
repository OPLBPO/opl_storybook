<?php
/**
 * @file
 * opl_storybook.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function opl_storybook_ckeditor_profile_defaults() {
  $data = array(
    'Storybook' => array(
      'name' => 'Storybook',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Format\',\'Bold\',\'Italic\',\'Underline\',\'Subscript\',\'Superscript\',\'Blockquote\',\'NumberedList\',\'BulletedList\',\'Table\',\'Link\',\'Unlink\',\'Image\',\'HorizontalRule\',\'MediaEmbed\',\'JustifyLeft\',\'JustifyBlock\',\'JustifyRight\',\'JustifyCenter\',\'Undo\',\'Redo\']
]',
        'expand' => 't',
        'default' => 'f',
        'show_toggle' => 'f',
        'uicolor' => 'default',
        'uicolor_user' => '#28CACA',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'theme',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 't',
        'html_entities' => 'f',
        'scayt_autoStartup' => 't',
        'theme_config_js' => 'f',
        'js_conf' => '',
        'loadPlugins' => array(
          'drupalbreaks' => array(
            'name' => 'drupalbreaks',
            'desc' => 'Plugin for inserting Drupal teaser and page breaks.',
            'path' => '%plugin_dir%drupalbreaks/',
            'buttons' => array(
              'DrupalBreak' => array(
                'label' => 'DrupalBreak',
                'icon' => 'images/drupalbreak.png',
              ),
            ),
            'default' => 't',
          ),
        ),
      ),
      'input_formats' => array(
        'storybook' => 'Storybook',
      ),
    ),
  );
  return $data;
}
