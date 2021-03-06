<?php

/**
 * @file
 *
 */

/**
 * Widget that renders facets as a list of clickable links.
 */
class FacetapiCollapsible extends FacetapiWidgetLinks {


  /**
   * Renders the links.
   */
  public function execute() {
    $element = &$this->build[$this->facet['field alias']];

    // Sets each item's theme hook, builds item list.
    $this->setThemeHooks($element);
    $settings = $this->settings->settings;
    $keep_open = isset($settings['keep_open']) ? $settings['keep_open'] : 0;
    $expand = isset($settings['expand']) ? $settings['expand'] : 1;
    $collapsible_children = isset($settings['collapsible_children']) ? $settings['collapsible_children'] : 0;
    $element = array(
      '#theme' => 'item_list',
      '#items' => $this->buildListItems($element),
      '#prefix' => '<div class="facet-collapsible-wrapper" id="facet-collapsible-' . str_replace('_', '-', $this->facet['field alias']) . '">',
      '#suffix' => '</div>',
      '#attributes' => array_merge_recursive($this->build['#attributes'], array('class' => array('facetapi-collapsible'))),
      '#attached' => array(
        'library' => array(
          array('system', 'jquery.cookie'),
        ),
        'js' => array(
          drupal_get_path('module', 'facetapi_collapsible') .'/facetapi_collapsible.js',
          array('data' =>
            array(
              'facetapi_collapsible' => array(
                $this->facet['field alias'] => array(
                  'keep_open' => $keep_open,
                  'expand' => $expand,
                  'collapsible_children' => $collapsible_children))), 'type' => 'setting'),
          ),
        'css' => array(drupal_get_path('module', 'facetapi_collapsible') .'/facetapi_collapsible.css'),
      ),
    );
  }

  /**
   * Adds option to keep facets open.
   */
  function settingsForm(&$form, &$form_state) {
    parent::settingsForm($form, $form_state);
    $settings = $this->settings->settings;
    $form['widget']['widget_settings']['collapsible_links'][$this->id] = array(
      'keep_open' => array(
        '#type' => 'checkbox',
        '#title' => t('Keep open'),
        '#default_value' => isset($settings['keep_open']) ? $settings['keep_open'] : 0,
        '#description' => t('If checked, facets that are already expanded will stay expanded when you click on another facet, otherwise they will close.'),
        '#states' => array(
          'visible' => array(
            'select[name="widget"]' => array('value' => $this->id),
          ),
        ),
      ),
      'expand' => array(
        '#type' => 'checkbox',
        '#title' => t('Expand'),
        '#default_value' => isset($settings['expand']) ? $settings['expand'] : 1,
        '#description' => t('If checked, this facet will automatically expand.'),
        '#states' => array(
          'visible' => array(
            'select[name="widget"]' => array('value' => $this->id),
          ),
        ),
      ),
      'collapsible_children' => array(
        '#type' => 'checkbox',
        '#title' => t('Collapsible children'),
        '#default_value' => isset($settings['collapsible_children']) ? $settings['collapsible_children'] : 0,
        '#description' => t('If checked, this facet\'s children will be collapsible as well.'),
        '#states' => array(
          'visible' => array(
            'select[name="widget"]' => array('value' => $this->id),
          ),
        ),
      ),
    );
  }
}

/**
 * Widget that renders facets as a list of collapsible clickable checkboxes.
 */
class FacetapiCollapsibleCheckboxes extends FacetapiCollapsible {

  protected $prefix = 'collapsible_checkboxes';
  /**
   * Overrides FacetapiWidgetLinks::init().
   *
   * Adds additional JavaScript settings and CSS.
   */
  public function init() {
    parent::init();
    $this->jsSettings['makeCheckboxes'] = 1;
    drupal_add_css(drupal_get_path('module', 'facetapi') . '/facetapi.css');
  }

/**
 * Adds a settings form to our class.
 */
  function settingsForm(&$form, &$form_state) {
    parent::settingsForm($form, $form_state);
    $settings = $this->settings->settings;
    $prefix = $this->prefix;
    $collapsible_checkboxes = array();
    foreach ($form['widget']['widget_settings']['collapsible_links'][$prefix] as $name => $element) {
      $collapsible_checkboxes[$prefix . '_' . $name] = $element;
      if(isset($settings[$prefix . '_' . $name])) {
        $collapsible_checkboxes[$prefix . '_' . $name]['#default_value'] = $settings[$prefix . '_' . $name];
      }
    }
    $form['widget']['widget_settings']['collapsible_links'][$prefix] = $collapsible_checkboxes;
  }

  /*
   * Overrides FacetapiWidgetLinks::getItemClasses().
   *
   * Sets the base class for checkbox facet items.
   */
  public function getItemClasses() {
    return array('facetapi-checkbox');
  }

  public function execute() {
    $settings = $this->settings->settings;
    foreach ($this->settings->settings as $name => $setting) {
      if (preg_match("@^{$this->prefix}_([a-z_]+)@", $name, $match) && isset($match[1])) {
        $settings[$match[1]] = $setting;
      }
    }
    $this->settings->settings = $settings;
    parent::execute();
  }
}
