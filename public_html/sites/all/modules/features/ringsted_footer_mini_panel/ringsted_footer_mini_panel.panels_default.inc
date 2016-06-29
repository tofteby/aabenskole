<?php
/**
 * @file
 * ringsted_footer_mini_panel.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function ringsted_footer_mini_panel_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer_mini_panel';
  $mini->category = 'Header and Footer';
  $mini->admin_title = 'Footer mini panel';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'footer';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 4,
          1 => 1,
          2 => 'main',
          3 => 3,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '25',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'shortcuts',
        ),
        'parent' => 'main',
      ),
      1 => array(
        'type' => 'column',
        'width' => 25,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
        ),
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'contact',
        ),
        'parent' => '1',
        'class' => '',
      ),
      3 => array(
        'type' => 'column',
        'width' => '25',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 6,
        ),
        'class' => '',
      ),
      4 => array(
        'type' => 'column',
        'width' => 25,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 5,
        ),
        'class' => '',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'logo',
        ),
        'parent' => '4',
        'class' => '',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'visit_also',
        ),
        'parent' => '3',
        'class' => '',
      ),
      'logo' => array(
        'type' => 'region',
        'title' => 'Logo',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
      ),
      'contact' => array(
        'type' => 'region',
        'title' => 'Contacts',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'shortcuts' => array(
        'type' => 'region',
        'title' => 'Shortcuts',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'visit_also' => array(
        'type' => 'region',
        'title' => 'Visit also',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'logo' => NULL,
      'contact' => NULL,
      'shortcuts' => NULL,
      'other' => NULL,
      'visit_also' => NULL,
      'header' => NULL,
      'contacts' => NULL,
      'navigation' => NULL,
      'social' => NULL,
      'policy' => NULL,
      'second-contacts' => NULL,
      'nav' => NULL,
      'external-nav' => NULL,
    ),
    'header' => array(
      'style' => 'naked',
    ),
    'contacts' => array(
      'style' => 'naked',
    ),
    'navigation' => array(
      'style' => 'naked',
    ),
    'social' => array(
      'style' => 'naked',
    ),
    'policy' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bc2addea-6e5d-4c57-a41f-53451a10e337';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e6411a80-51f0-478b-95e7-6bb7ee2822a4';
    $pane->panel = 'contacts';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Contacts',
      'title' => 'Contact Ringsted',
      'body' => '<article role="article">
<h2 style="margin-bottom: 10px;">Ringsted Kommune</h2>

<p>Rådhuset<br />
Sct.Bendtsgade 1<br />
4100 Ringsted<br />
CVR: 18957981</p>

<h3><a href="https://maps.google.dk/maps?q=R%C3%A5dhuset+Sct.Bendtsgade+1+4100+Ringsted&amp;hl=da&amp;ie=UTF8&amp;sll=55.445722,11.788504&amp;sspn=0.011039,0.033023&amp;t=h&amp;hq=R%C3%A5dhuset&amp;hnear=Sct+Bendtsgade+1,+4100+Ringsted&amp;z=16" target="_blank">Vis på kort</a></h3>

<p><span class="tel">+45 57 62 62 62</span> <a href="mailto:ringsted@ringsted.dk">ringsted@ringsted.dk</a></p>

<h2 style="margin-bottom: 10px;">Åbningstider</h2>

<p>Man - tors <span class="time">11.00-15.00</span><br />
Fre <span class="time">11.00-13.00</span></p>
</article>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e6411a80-51f0-478b-95e7-6bb7ee2822a4';
    $display->content['new-e6411a80-51f0-478b-95e7-6bb7ee2822a4'] = $pane;
    $display->panels['contacts'][0] = 'new-e6411a80-51f0-478b-95e7-6bb7ee2822a4';
    $pane = new stdClass();
    $pane->pid = 'new-208c7072-690f-4bd3-a0b3-6cd03a7eb762';
    $pane->panel = 'external-nav';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-external-links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '208c7072-690f-4bd3-a0b3-6cd03a7eb762';
    $display->content['new-208c7072-690f-4bd3-a0b3-6cd03a7eb762'] = $pane;
    $display->panels['external-nav'][0] = 'new-208c7072-690f-4bd3-a0b3-6cd03a7eb762';
    $pane = new stdClass();
    $pane->pid = 'new-4a610448-f095-402c-b422-dd35e2d4144d';
    $pane->panel = 'nav';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-internal-links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4a610448-f095-402c-b422-dd35e2d4144d';
    $display->content['new-4a610448-f095-402c-b422-dd35e2d4144d'] = $pane;
    $display->panels['nav'][0] = 'new-4a610448-f095-402c-b422-dd35e2d4144d';
    $pane = new stdClass();
    $pane->pid = 'new-ea10fcdc-10fb-4f45-bd80-a2f5050ebec9';
    $pane->panel = 'second-contacts';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Borgerservice',
      'title' => 'Borgerservice',
      'body' => '<article role="article">
<h2 style="margin-bottom: 10px;">Borgerservice</h2>

<p>Biblioteket<br />
Tvær Allé 1-3<br />
4100 Ringsted<br />
&nbsp;</p>

<h3><a href="https://www.google.dk/maps/place/Ringsted+Borgerservice/@55.4463303,11.7971304,17z/data=!3m1!4b1!4m2!3m1!1s0x465291d5d357d8f3:0xfbf17605e45195e1" target="_blank">Vis på kort</a></h3>

<p><a href="mailto:borgerservice@ringsted.dk" style="font-size: 13.008px; line-height: 1.538em;">Borgerservice@ringsted.dk</a></p>

<h2 style="margin-bottom: 10px;">Åbningstider</h2>

<p>Man <span class="time">11.00-18.00</span><br />
Tir-ons <span class="time">11.00-15.00</span><br />
Tors <span class="time">11.00-18.00</span><br />
Fre <span class="time">11.00-15.00</span><br />
Lør <span class="time">11.00-14.00</span><br />
Søn <span class="time">Lukket</span></p>
</article>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ea10fcdc-10fb-4f45-bd80-a2f5050ebec9';
    $display->content['new-ea10fcdc-10fb-4f45-bd80-a2f5050ebec9'] = $pane;
    $display->panels['second-contacts'][0] = 'new-ea10fcdc-10fb-4f45-bd80-a2f5050ebec9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['footer_mini_panel'] = $mini;

  return $export;
}
