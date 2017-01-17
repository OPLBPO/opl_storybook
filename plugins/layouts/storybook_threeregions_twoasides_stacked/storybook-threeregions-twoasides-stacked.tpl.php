<main id="oplfla-chapters">  
  <?php if ($content['intro']): ?>
    <section id="page-intro">
      <?php print $content['intro']; ?>
    </section>
  <?php endif ?>


  <?php if ($content['region-1']): ?>

    <section id="region-1" class="oplfla-article animate-region">
      <div class="container clearfix">        
        <?php print $content['region-1']; ?>
      </div>
    </section>

  <?php endif ?>


  <?php if ($content['aside-1']): ?>

    <aside id ="aside-1" class="storybook-aside animate-region">
      <div class="container">
        <?php print $content['aside-1']; ?>
      </div>
    </aside>    

  <?php endif ?>


  <?php if ($content['region-2']): ?>

    <section id="region-2" class="oplfla-article animate-region">
      <div class="container clearfix">
        <?php print $content['region-2']; ?>
      </div>
    </section>      

  <?php endif ?>


  <?php if ($content['aside-2']): ?>

    <aside id="aside-2" class="storybook-aside animate-region">
      <div class="container">
        <?php print $content['aside-2']; ?>
      </div>
    </aside>      

  <?php endif ?>


  <?php if ($content['region-3']): ?>

    <section id="region-3" class="oplfla-article animate-region">
      <div class="container clearfix">
        <?php print $content['region-3']; ?>
      </div>
    </section>      

  <?php endif ?>


  <?php if ($content['footer']): ?>

    <footer id="storybook-footer" class="animate-region">
      <?php print $content['footer']; ?>
    </footer>

  <?php endif ?>

</main>