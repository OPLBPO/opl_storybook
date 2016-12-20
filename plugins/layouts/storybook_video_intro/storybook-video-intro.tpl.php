<div>
  <div class="hsContent" data-160-start="opacity: 1" data-750-start="opacity: 0">
    <header class="oplfla-header">
      <hgroup>
        <?php if ($content['main-heading']): ?>
          <h1><?php print $content['main-heading']; ?></h1>
        <?php endif ?>
        <?php if ($content['secondary-heading']): ?>
          <h2><?php print $content['secondary-heading']; ?></h2>
        <?php endif ?>
      </hgroup>
    </header>
    <div>
      <?php if ($content['video']): ?>
        <?php print $content['video']; ?>
      <?php endif ?>
    </div>
  </div>
</div>