<?php

/**
 *
 * Wrapper class of the core services connection class
 * @see ServicesClientConnection
 *
 * @author boyan
 *
 */
class PullContentServicesClientConnection extends ServicesClientConnection {
  public function getNodeById($nid) {
    return $this->getCheckEmpty('node', $nid);
  }

  public function getCollectionById($item_id) {
    return $this->getCheckEmpty('entity_field_collection_item', $item_id);
  }

  public function getFileById($fid) {
    return $this->getCheckEmpty('file', $fid);
  }

  public function getTermById($tid) {
    return $this->getCheckEmpty('taxonomy_term', $tid);
  }

  public function getNodeView($nid, $display = 'full', $language = NULL) {
    $lang = $GLOBALS['language']->language;
    if ($language) {
      $lang = $language;
    }

    return $this->getCheckEmpty('node_view', $nid, array('display' => $display, 'language' => $lang));
  }

  public function getConnectionDomain() {
    return 'http://' . parse_url($this->connection->endpoint,  PHP_URL_HOST);
  }

  /**
   *
   * Return latest modified nodes after provided timestamp.
   * @param string $time - format Y-m-d h:i:s T (ex. 2013-11-22 07:41:47 UTC)
   */
  public function getLatestModifiedNodes($time) {
    // Use normal get, because it is not an error to get empty result.
    return $this->get('pull-content-feed', NULL, array('updated' => $time));
  }

  /**
   *
   * Return latest deleted nodes after provided timestamp.
   * @param string $time - format Y-m-d h:i:s T (ex. 2013-11-22 07:41:47 UTC)
   */
  public function getLatestDeletedNodes($time) {
    // Use regular get method, because it is OK to get emty result.
    return $this->get('pull-content-feed-deleted', NULL, array('deleted' => $time));
  }

  public function getCheckEmpty($resource, $id = NULL, $data = array()) {
    $data = $this->get($resource, $id, $data);
    if (empty($data)) {
      // This is a check that the resulting data is empty, which happens when for example
      // requesting a node that doesn't exist, but there are other (legitimate) reasons to
      // get empty data, so logging response to diagnose potential false postitives.
      watchdog('PullContentServicesClientConnection', 'Empty result data: <pre>!data</pre>', array(
        '!data' => print_r($this->getDebug(), TRUE),
      ));
      throw new UnexpectedValueException(t('Resource not found'), 404);
    }
    return $data;
  }
}
