<?php

/**
 * Channels class to handle channels registry stuff
 */
class Channels {
  static protected $instances = array();
  protected $channels;
  protected $records;
  protected function __clone() {}
  protected function __construct() {}

  public static function registry($instance = 'default') {
    if (!isset(self::$instances[$instance])) {
      self::$instances[$instance] = new self;
    }
    return self::$instances[$instance];
  }

  public function get() {
    if (!isset($this->channels)) {
      if ($cache = cache_get('site_channels')) {
        $this->channels = $cache->data;
      }
      else {
        $this->channels = $this->fetchChannels();
        cache_set('site_channels', $this->channels);
      }
    }
    return $this->channels;
  }

  public function clear() {
    $this->channels = NULL;
    cache_clear_all('site_channels', 'cache');
  }

  protected function fetchChannels() {
    $query = db_select('node', 'n');
    $query->innerJoin('channels_registry', 'cr', 'cr.nid = n.nid');
    $query->addField('cr', 'cid');
    // Since result is cached, we cant do access tag checks
    $query->condition('n.status', NODE_PUBLISHED);
    $query->distinct();
    $result = $query->execute();
    $channels = array();
    foreach ($result as $row) {
      $channels[] = $row->cid;
    }
    return $channels;
  }
}
