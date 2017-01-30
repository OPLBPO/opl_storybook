<?php
/**
* Defines a style plugin
*
*  - panestyles: corresponds to directory name of plugin
*  - render pane: the suffix of the theme function for the pane (without "theme_").
*     - Example: If the function name is "theme_panestyles_render_pane",
*       the value of "render pane" is "panestyles_render_pane".
*  - render region: the suffix of the theme function for the region (without "theme_").
*     - Example: If the function name is "theme_panestyles_render_region",
*       the value of "render region" is "panestyles_render_region".
*  - pane settings form: name of function that returns a settings form
*  - hook theme: array of hook theme information
*    - define an array for pane and region. The key must match the first parameter of the returned theme() in the 
*       corresponding theme_ function.
*       Example: 'hook theme' => 'panestyles_theme_pane' => array();
*        In function theme_panestyles_render_pane:
*          return theme('panestyles_theme_pane'...) [truncated]
*      - template: corresponds to name of tpl.php for pane, i.e. panestyles-pane.tpl.php
*      - path: the path where the template file lives
*      - variables: an array of variables to add to the $variables array in the theme function
*
*/

$plugin =  array(
  'panestyles' => array(
    'title' => t('Storybook Custom Pane Styles'),
    'description'   => t('Simple styles that highlight sections of your page.'),
    'render pane' => 'panestyles_render_pane',
    'render region' => 'panestyles_render_region',
    'pane settings form' => 'panestyles_settings_form',
    'hook theme'    => array(
      'panestyles_theme_pane' => array(
        'template' => 'panestyles-pane',
         'path' => drupal_get_path('module', 'opl_storybook') . '/plugins/styles/panestyles',
         'variables' => array(
           'content' => NULL,
           'settings' => NULL,
         ),
       ),
      'panestyles_theme_region' => array(
        'template' => 'panestyles-region',
         'path' => drupal_get_path('module', 'opl_storybook') .'/plugins/styles/panestyles',
         'variables' => array(
           'content' => NULL,
         ),
       ),
    ),
  ),
);

function theme_panestyles_render_pane($vars) {
  $settings = $vars['settings'];
  $content = $vars['content'];

  return theme('panestyles_theme_pane', array('content' => $content, 'settings' => $settings));
}

function theme_panestyles_render_region($vars) {
  $content = '';

  foreach ($vars['panes'] as $pane_id => $pane_output) {
    $content .= $pane_output;
  }
  if (empty($content)) {
    return;
  }
  return theme('panestyles_theme_region', array('content' => $content));
}

function panestyles_settings_form($style_settings, $display, $pid, $type, $form_state) {
  $form = array();

  $bg_options = array(
    'pane-nobg' => t('No background'),
    'pane-bglightgrey' => t('Light Grey'),
    'pane-bgmedgrey' => t('Medium Grey'),
    'pane-bgdarkgrey' => t('Dark Grey'),
    'pane-bgorange' => t('Orange'),
    'pane-bggreen' => t('Green'),
    'pane-bgblue' => t('Blue'),
    'pane-bgyellow' => t('Yellow')
  );

  $border_options = array(
    'pane-noborder' => t('No border'),
    'pane-topbottomborder' => t('Border top and bottom'),
    'pane-topborder' => t('Border top'),
    'pane-bottomborder' => t('Border bottom')
  );

  $border_color_options = array(
    'pane-nobordercolor' => t('No border color'),
    'pane-borderlightgrey' => t('Light Grey'),
    'pane-bordermedgrey' => t('Medium Grey'),
    'pane-borderdarkgrey' => t('Dark Grey'),
    'pane-borderorange' => t('Orange'),
    'pane-bordergreen' => t('Green'),
    'pane-borderblue' => t('Blue'),
    'pane-borderyellow' => t('Yellow')
  );

  $padding_options = array(
    'pane-nopadding' => t('No padding'),
    'pane-topbottompadding' => t('Top and bottom padding'),
    'pane-toppadding' => t('Top padding'),
    'pane-bottompadding' => t('Bottom padding')
  );

  $width_options = array(
    'pane-width100' => t('Width: 100%'),
    'pane-width66left' => t('Width: 2/3 of page on left'),
    'pane-width66right' => t('Width: 2/3 of page on right'),
    'pane-width33left' => t('Width: 1/3 of page on left'),
    'pane-width33right' => t('Width: 1/3 of page on right')
  );

  $animation_options = array(
    'pane-noanimation' => t('No animation'),
    'fadeIn' => t('Fade in'),
    'fadeInLeft' => t('Slide and fade in from left'),
    'fadeInLeftBig' => t('Slide and fade in from left (off page)'),
    'fadeInRight' => t('Slide and fade in from right'),
    'fadeInRightBig' => t('Slide and fade in from right (off page)'),
    'zoomIn' => t('Zoom in'),
    'zoomInDown' => t('Zoom in from above'),
    'zoomInLeft' => t('Zoom in from left'),
    'zoomInRight' => t('Zoom in from right'),
    'zoomInUp' => t('Zoom in from below')
  );

  $form['bg_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => t('Background Color'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['bg_fieldset']['bg_classes'] = array(
    '#type' => 'radios',
    '#description' => t('Choose a background color for your panel pane.'),
    '#options' => $bg_options,
    '#required' => FALSE,
    '#default_value' => (isset($style_settings['bg_fieldset']['bg_classes'])) ? $style_settings['bg_fieldset']['bg_classes'] : 'pane-nobg',
  ); 

  $form['border_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => t('Border Styles'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  ); 

  $form['border_fieldset']['border_classes'] = array(
    '#type' => 'radios',
    '#description' => t('Choose a border style for your panel pane.'),
    '#options' => $border_options,
    '#required' => FALSE,
    '#default_value' => (isset($style_settings['border_fieldset']['border_classes'])) ? $style_settings['border_fieldset']['border_classes'] : 'pane-noborder',
  );

  $form['border_color_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => t('Border Color'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['border_color_fieldset']['border_color_classes'] = array(
    '#type' => 'radios',
    '#description' => t('Choose a border color for your panel pane if you have selected a border above.'),
    '#options' => $border_color_options,
    '#required' => FALSE,
    '#default_value' => (isset($style_settings['border_color_fieldset']['border_color_classes'])) ? $style_settings['border_color_fieldset']['border_color_classes'] : 'pane-nobordercolor',
  );

  $form['width_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => t('Width'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
 
  $form['width_fieldset']['width_classes'] = array(
    '#type' => 'radios',
    '#description' => t('Choose a width for your panel pane.'),
    '#options' => $width_options,
    '#required' => FALSE,
    '#default_value' => (isset($style_settings['width_fieldset']['width_classes'])) ? $style_settings['width_fieldset']['width_classes'] : 'pane-width100',
  );

  $form['padding_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => t('Padding'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
 
  $form['padding_fieldset']['padding_classes'] = array(
    '#type' => 'radios',
    '#description' => t('Choose a padding for your panel pane.'),
    '#options' => $padding_options,
    '#required' => FALSE,
    '#default_value' => (isset($style_settings['padding_fieldset']['padding_classes'])) ? $style_settings['padding_fieldset']['padding_classes'] : 'pane-nopadding',
  );

  $form['animation_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => t('Animations'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
 
  $form['animation_fieldset']['animation_classes'] = array(
    '#type' => 'radios',
    '#description' => t('Choose an animation for your panel pane.'),
    '#options' => $animation_options,
    '#required' => FALSE,
    '#default_value' => (isset($style_settings['animation_fieldset']['animation_classes'])) ? $style_settings['animation_fieldset']['animation_classes'] : 'pane-noanimation',
  );

  return $form;
}
