<?php
/**
 * @file panestyles-pane.tpl.php
 * template file for pane styles defined in panestyles plugin
 *
 * Variables available:
 * - $settings['my_pane_classes']: CSS Classes for Panes
 * - $settings['heading_classes']: CSS Classes for Headings
 * - $content->title: The title of the panel pane
 * - $content: An object containing the actual content of the pane
 * - $links: Any links associated with the content
 * - $more: An optional 'more' link (destination only)
 * - $admin_links: Administrative links associated with the content
 * - $feeds: Any feed icons or associated with the content
 * - $display: The complete panels display object containing all kinds of
 *   data including the contexts and all of the other panes being displayed.
 */

?>

<div class="panel-pane <?php print $classes; ?> <?php print (isset($settings['bg_fieldset']['bg_classes'])) ? $settings['bg_fieldset']['bg_classes'] : 'pane-nobg';?> <?php print (isset($settings['border_fieldset']['border_classes'])) ? $settings['border_fieldset']['border_classes'] : 'pane-noborder';?> <?php print (isset($settings['border_color_fieldset']['border_color_classes'])) ? $settings['border_color_fieldset']['border_color_classes'] : 'pane-nobordercolor';?> <?php print (isset($settings['width_fieldset']['width_classes'])) ? $settings['width_fieldset']['width_classes'] : 'pane-width100';?> <?php print (isset($settings['animation_fieldset']['animation_classes'])) ? $settings['animation_fieldset']['animation_classes'] : 'pane-noanimation';?>">

  <div class="pane-content">
    <?php print render($content->content); ?>
  </div>

</div>