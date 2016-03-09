<?php

/**
 * @var $items array
 *   Data array grouped by record type.
 * 
 * $items = array(
 *   days => array(
 *     Monday => array(
 *       time_start => ...
 *       time_end => ...
 *     ),
 *     ...
 *   ),
 *   notes => '...',
 * )
 */
?>
<div>
  <?php foreach ($items['days'] as $name => $day): ?>
  <div class="day">
    <span class="name"><?php echo $name; ?></span>
    <span class="time"><?php echo $day['time_start']; ?> - <?php echo $day['time_end']; ?></span>
  </div>
  <?php endforeach; ?>
  <div class="notes">
  <?php foreach($items['notes'] as $note): ?>
    <div class="note"><?php echo $note; ?></div>
  <?php endforeach; ?>
  </div>
</div>

