<?php

/**
 * @file
 * Build registry with all the solr view panes of all the nodes that have panelizer integration.
 * This registry is to know what channels receivers are set up, to extend basic search to display them.
 *
 * Note: hook_node_insert implementation is not necessary, if there are no view panes in default panel
 */

class ChannelsNodeRegistry {
  protected $nid;

  function __construct($nid) {
    $this->nid = $nid;
  }

  /**
   * Build registry callback
   * Build registry with all the solr view panes of all the nodes that have panelizer integration.
   */
  public function build(stdClass $node) {
    if (empty($node->panelizer['page_manager'])) {
      // no panelizer integration
      return;
    }
    if (!$node->status) {
      // not published
      $this->clear();
      return;
    }
    $object = $node->panelizer['page_manager'];
    $registry = new stdClass();
    foreach ($object->display->content as $pane) {
      if ($channels = $this->buildPaneChannels($pane)) {
        $registry->panes[$pane->pid]->channels = $channels;
      }
    }

    $cleared = $this->clearNodeRegistry();
    if (!empty($registry->panes)) {
      // store receivers info in registry
      $this->updateNodeRegistry($registry);
    }
    if ($cleared || !empty($registry->panes)) {
      Channels::registry()->clear();
    }
  }

  public function clear($only_node_registry = FALSE) {
    if ($this->clearNodeRegistry()) {
      Channels::registry()->clear();
    }
  }

  protected function buildPaneChannels($pane) {
    if ('views_panes' != $pane->type) {
      return array();
    }
    list($name, $display) = explode('-', $pane->subtype);
    $view = views_get_view($name);
    if (empty($view) || empty($view->display[$display])) {
      return array();
    }
    // passed a few checks, but there are more to come
    $conf = $pane->configuration;
    $view->set_display($display);
    $handler = $view->display_handler;
    if (!$this->isLocalContext($conf, $handler->display->display_options)) {
      return array();
    }
    if (!$channels = $this->getChannelFilters($conf, $handler)) {
      return array();
    }
    return array_combine($channels, $channels);
  }

  protected function clearNodeRegistry() {
    $count = db_query('SELECT COUNT(nid) FROM {channels_registry} WHERE nid = :nid',
            array(':nid' => $this->nid))->fetchField();
    if ($count) {
      db_delete('channels_registry')->condition('nid', $this->nid)->execute();
    }
    return $count;
  }

  protected function updateNodeRegistry($registry) {
    // Note - it is possible to do SQL Prepare Statements to optimize
    $channels = array();
    foreach ($registry->panes as $pane) {
      $channels += array_combine($pane->channels, $pane->channels);
    }
    foreach ($channels as $cid) {
      $fields = array('nid' => $this->nid, 'cid' => $cid);
      db_insert('channels_registry')->fields($fields)->execute();
    }
  }

  protected function isLocalContext($conf, $options) {
    $allow = $options['allow'];
    if (!empty($allow['local_context']) && !empty($conf['local_context'])) {
      // allow override, and set to true in pane config
      return TRUE;
    }
    if (empty($allow['local_context']) && !empty($options['local_context'])) {
      // not allowed override, and set to true in display settings
      return TRUE;
    }
    return FALSE;
  }

  /**
   * Helper method - return channel filters if set.
   */
  protected function getChannelFilters($conf, $handler) {
    $allow = $handler->get_option('allow');
    if ($allow['exposed_form'] && !empty($conf['exposed'])) {
      if (!empty($conf['exposed']['im_shared_tax_channels'])) {
        return (array) $conf['exposed']['im_shared_tax_channels'];
      }
    }
    $filters = $handler->get_option('filters');
    if (!empty($filters['im_shared_tax_channels']['value'])) {
      return (array) $filters['im_shared_tax_channels']['value'];
    }
    return array();
  }
}
