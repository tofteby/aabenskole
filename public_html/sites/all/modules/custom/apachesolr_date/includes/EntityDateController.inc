<?php

class EntityDateController extends EntityAPIController {
  protected function buildQuery($ids, $conditions = array(), $revision_id = FALSE) {
    $query = parent::buildQuery($ids, $conditions, $revision_id);
    $query->innerJoin('node', 'n', 'n.nid = base.nid');
    $query->addField('n', 'status');
    $query->addField('n', 'type', 'node_type');
    return $query;
  }
}
