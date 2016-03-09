<?php

class SolrDateEntity extends Entity {
  public function __construct(array $values = array(), $entityType = NULL) {
    parent::__construct($values, 'solrdate');
  }
}
