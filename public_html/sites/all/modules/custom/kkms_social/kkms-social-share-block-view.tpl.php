<?php if ($links || $social_links): ?>
  <ul>
    <?php foreach ($links as $link):?>
      <li><?php echo render($link)?></li>
    <?php endforeach;?>

    <?php if($social_links):?>
      <li>
        <ul class="bl-shareicons">
          <?php foreach ($social_links as $link):?>
            <li><?php echo render($link)?></li>
          <?php endforeach;?>
        </ul>
      </li>
    <?php endif;?>

  </ul>
<?php endif; ?>
