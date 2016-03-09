<?php

/**
 * @file
 * Base plugin definitions. All other plugins should be extended from this set of
 * plugins.
 */

/**
 * Base plugin class
 */
class ServicesClientPlugin {
  /**
   * Connection hook definition
   */
  protected $hook;

  /**
   * Plugin specific configuration
   *
   * @var array
   */
  protected $config;

  public function __construct($hook, $config) {
    // Store configuration and connection definition
    $this->hook = $hook;
    $this->config = $config;
  }

  /**
   * Configuration form options
   */
  public function configForm(&$form, &$form_state) {
    $form['markup'] = array(
      '#type' => 'item',
      '#markup' => t("This plugin doesn't provide any configuration options."),
    );
  }

  public function configFormValidate(&$form, &$form_state) {}

  public function configFormSubmit(&$form, &$form_state) {}

}

/**
 * Base authentication class
 */
class ServicesClientMapping extends ServicesClientPlugin {}

class ServicesClientCondition extends ServicesClientPlugin {}
