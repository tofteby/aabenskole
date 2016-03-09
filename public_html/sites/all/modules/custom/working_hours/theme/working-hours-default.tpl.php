<?php

/**
 * @var $items array
 *   Data array grouped by record type.
 * 
 * $items = array(
 *   type => array(
 *     0 => array(
 *       date_from => ...
 *       date_to => ...
 *       time_start => ...
 *       time_end => ...
 *       days => ...
 *       notes => ...
 *     ),
 *     ...
 *   ),
 *   ...
 * )
 */
?>
<?php foreach ($items as $type => $rows): ?>
  <h5><?php echo check_plain($type); ?></h5>
  <?php foreach ($rows as $delta => $item): ?>
  <div>
    <span class="dates"><?php echo $item['date_from'] ?> - <?php echo $item['date_to'] ?></span>
    <span class="days"><?PHP echo implode(', ', $item['days']); ?></span>
    <span class="time"><?php echo $item['time_start']; ?> - <?php echo $item['time_end']; ?></span>
  </div>
  <div>
    <span class="notes"><?php echo $item['notes'] ?></span>
  </div>
  <?php endforeach; ?>
<?php endforeach; ?>
