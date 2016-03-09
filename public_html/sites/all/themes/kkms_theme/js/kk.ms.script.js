// Placeholder for theme script.
(function ($, Drupal) {
'use strict';
  var basepath;

 /**
  * Setup media query listeners.
  *
  * Adapt website to different screen sizes.
  * Use enquire.js to trigger js based on mediaqueries.
  */
  var adaptContent = (function() {

    function initialize () {
      /* global enquire: true */
      if (Modernizr.mq('only all')) {
        // Register enguire
        enquire.register('screen and (max-width: 50em)', {

          // REQUIRED
          // Triggered when the media query transitions
          // from *unmatched* to *matched*
          match : function() {
          },

          // OPTIONAL
          // Triggered when the media query transitions
          // from a *matched* to *unmatched*
          unmatch : function() {
          },

          // OPTIONAL
          // Triggered once immediately upon registration of handler
          setup : function() {
          },

          // OPTIONAL
          // Defaults to false
          // If true, defers execution of the setup function
          // until the first media query is matched (still just once)
          deferSetup : true
        });
      }
    }

    // Move content from target to destination. Add identifier class for easy retrieval.
    function moveContent (target, destination, identifier, relation) {
      // Cache jquery object
      var $target = $(target);
      var $destination = $(destination);

      // Move sidebar info to main content
      if (identifier) {
        $target.addClass(identifier);
      }
      if (relation == 'after') {
        $destination.after($target);
      } else {
        $destination.append($target);
      }
    }

    return {
      move: moveContent,
      init: initialize
    };

  }());


 /**
  * Initialized fitVids for media videos
  */
  var responsiveMagic = (function() {
    function fitVideo () {
      $('.bl-video').fitVids({customSelector: "iframe[src*='23video.com']"});
      $('.field-name-field-script').fitVids({customSelector: "iframe"});
      $('.file-video').fitVids({customSelector: "iframe[src*='youtube.com']"});
      $('.file-video').fitVids({customSelector: "iframe[src*='youtube-nocookie.com']"});
      $('.file-video').fitVids({customSelector: "iframe[src*='player.vimeo.com']"});
      $('.file-video').fitVids({customSelector: "iframe[src*='23video.com']"});
    }

    function fitText () {
      $('.text-callout').fitText(1.2, {
        minFontSize: '20px',
        maxFontSize: '46px'
      });
    }

    return {
      vids: fitVideo,
      text: fitText
    };
  }());


  /**
  * Toogle classes on radio buttons.
  */
  Drupal.behaviors.kkmsSocialIcons = {
    attach: function (context, settings) {
      // Add toggle link.
      function addToggle(icons) {
        var $e,
            $icons = $(icons);


        $e = $('<a />', {
            'href'   : '#',
            'class'  : 'ic-share toggle collapsible',
            'title'  : Drupal.t('Share')
          });

        $e.prepend(
          $('<span />', {
            'text'   : Drupal.t('Share'),
            'class'  : 'tx-ic'
          }));

        $e.on('click', function(event) {
          event.preventDefault();
          $icons.fadeToggle();
        });

        $icons.before($e);
      }

      // Create functions to toggle.


      // Hide content.

      // Initialize once().
      $('.bl-shareicons', context).once('shareblock', function() {
        addToggle(this);
        $(this).hide();
      });
    }
  };

  /**
   * Run functions on document ready.
   */
  $(document).ready(function() {
    var basepath = '/sites/all/themes/kkms_theme/';

    if (!Modernizr.mq('only all')) {
      $('html').addClass('no-mq');
    }

    // Use Modernizr to conditionally load and call function on load.
    Modernizr.load([
      /*{
        test: Modernizr.mq('only all'),
        nope: basepath + 'css/nv2013.nomq.css'
      },
      {
        // Test for mediaqueries
        test : window.matchMedia,
        nope : [basepath + 'js/libs/matchMedia.js' , basepath + 'js/libs/matchMedia.addListener.js']
      },
      {
        // Load enguire.js
        test: Modernizr.mq('only all'),
        yep: basepath + 'js/libs/enquire.min.js',
        callback : adaptContent.init
      },*/
      {
        // Load fitvids.js
        load: basepath + 'js/libraries/jquery.fitvids.js',
        callback : responsiveMagic.vids
      }
    ]);
    
    if (navigator.userAgent.match(/(iPad|iPhone|iPod)/i)) {
      $('html').addClass('ios');
    }
  });


  /**
  * Adjust the heights in various parts
  */
  Drupal.behaviors.kkmsHeights = {
    attach: function (context, settings) {
        // Hack to have a minimum height on pages.
        function fixBodyHeight() {
            $(".sec.sec-content").css('padding-bottom',0);
            var delta = $(window).height() - $('body').height();
            if(delta>0){
                $(".sec.sec-content").css('padding-bottom',delta);
            }
        }

        // Equal heights on news rows.
        $(".view-list-with-see-more .views-row").equalHeights();

        $(".view-content-shared-to-channels.view-display-id-panel_pane_3,\n\
           .view-content-shared-to-this-site.view-display-id-panel_pane_3,\n\
           .view-list-local-content.view-display-id-panel_pane_4", context).each(function(){

            $(".views-row", $(this)).equalHeights();
         });
       
        $(".view-content-shared-to-channels.view-display-id-panel_pane_4,\n\
           .view-content-shared-to-this-site.view-display-id-panel_pane_4", context).each(function(){

            $(".views-row", $(this)).each(function() {
              $("> div:not([class*='views-field-sm-thumb-'])", $(this)).wrapAll("<div class='views-row-custom' />")
            });
            $(".views-row-custom", $(this)).equalHeights();
         });

        $(".view-list-local-content.view-display-id-panel_pane_5", context).each(function(){
            $(".views-row", $(this)).each(function() {
              $("> div:not([class*='views-field-field-image'])", $(this)).wrapAll("<div class='views-row-custom' />")
            });
            $(".views-row-custom", $(this)).equalHeights();
         });
      
    
        // Equal heights on event grid rows.
        //$(".page-events-grid .search-results .search-result").equalHeights(); 


        fixBodyHeight();
        $(window).resize(function() {
            fixBodyHeight();
        });
        $(".view-list-with-see-more .views-row").resize(function() {
            //$(".view-list-with-see-more .views-row").equalHeights();
        });
    }
  };

    /**
     * Misc small adjustments
     */
    Drupal.behaviors.kkmsMisc = {
        attach: function (context, settings) {

            // Add support for closing Drupal messages.
            $('.messages-icon').live('click',function() {
                $(".messages").remove();
            });

            // Add a class to event rows in order to style them correctly in IE8, see KKMN-822
            $(".page-events-grid .search-results .search-result:nth-child(3n+1)").addClass("first");
            $(".page-events-grid .search-results .search-result:nth-child(3n+2)").addClass("second");
            $(".page-events-grid .search-results .search-result:nth-child(3n)").addClass("third");
            
            $(".page-events-grid .search-results .search-result:nth-child(2n+1)").addClass("odd");
            $(".page-events-grid .search-results .search-result:nth-child(2n)").addClass("even");

            // Add a class to event rows in order to style them correctly in IE8, see KKMN-854
            $(".reg-middle-3-col .reg-inner .reg-inner-regions .panel-pane:nth-child(3n+1)").addClass("first");
            $(".reg-middle-3-col .reg-inner .reg-inner-regions .panel-pane:nth-child(3n+2)").addClass("second");
            $(".reg-middle-3-col .reg-inner .reg-inner-regions .panel-pane:nth-child(3n)").addClass("third");
            
            $(".reg-middle-3-col .reg-inner .reg-inner-regions .panel-pane:nth-child(2n+1)").addClass("odd");
            $(".reg-middle-3-col .reg-inner .reg-inner-regions .panel-pane:nth-child(2n)").addClass("even");
            
            $(".reg-middle-3-col .panels-ipe-sort-container .panels-ipe-portlet-wrapper:nth-child(3n+1)").addClass("first");
            $(".reg-middle-3-col .panels-ipe-sort-container .panels-ipe-portlet-wrapper:nth-child(3n+2)").addClass("second");
            $(".reg-middle-3-col .panels-ipe-sort-container .panels-ipe-portlet-wrapper:nth-child(3n)").addClass("third");
            
            $(".reg-middle-3-col .panels-ipe-sort-container .panels-ipe-portlet-wrapper:nth-child(2n+1)").addClass("odd");
            $(".reg-middle-3-col .panels-ipe-sort-container .panels-ipe-portlet-wrapper:nth-child(2n)").addClass("even");
            
            $(".sec-footer .bl-footer:nth-child(3n+1)").addClass("first");
            $(".sec-footer .bl-footer:nth-child(3n+2)").addClass("second");
            $(".sec-footer .bl-footer:nth-child(3n)").addClass("third");
            
            $(".sec-footer .bl-footer:nth-child(2n+1)").addClass("odd");
            $(".sec-footer .bl-footer:nth-child(2n)").addClass("even");
            
            $(".node-factbox-card-info .field-name-field-card-info:nth-child(3n+2)").addClass("first");
            $(".node-factbox-card-info .field-name-field-card-info:nth-child(3n)").addClass("second");
            $(".node-factbox-card-info .field-name-field-card-info:nth-child(3n+1)").addClass("third");
            
            $(".node-factbox-card-info .field-name-field-card-info:nth-child(2n)").addClass("odd");
            $(".node-factbox-card-info .field-name-field-card-info:nth-child(2n+1)").addClass("even");
            
            
            $(".pane-bundle-nodes-pane .fieldable-panels-pane .node:nth-child(3n+1)").addClass("first");
            $(".pane-bundle-nodes-pane .fieldable-panels-pane .node:nth-child(3n+2)").addClass("second");
            $(".pane-bundle-nodes-pane .fieldable-panels-pane .node:nth-child(3n)").addClass("third");

            // Taken from http://www.hagenburger.net/BLOG/HTML5-Input-Placeholder-Fix-With-jQuery.html
            $('[placeholder]').focus(function() {
                var input = $(this);
                if (input.val() == input.attr('placeholder')) {
                    input.val('');
                    input.removeClass('placeholder');
                }

            }).blur(function() {
                var input = $(this);
                if (input.val() == '' || input.val() == input.attr('placeholder')) {
                    input.addClass('placeholder');
                    input.val(input.attr('placeholder'));
                }
            }).blur();

            $('[placeholder]').parents('form').submit(function() {
                $(this).find('[placeholder]').each(function() {
                    var input = $(this);
                    if (input.val() == input.attr('placeholder')) {
                        input.val('');
                    }
                })
                    });

        }
    };
    
 /**
  * Menu mobile behavior
  */
  Drupal.behaviors.kkmsMobileBehavior = {
    attach: function (context, settings) {
      var menu_section = $('.sec-menu .sec-inner', context);
      var main_menu = $('#main-menu', menu_section);
      var search_block = $('#block-search-form', menu_section);
      var ie_version = getInternetExplorerVersion();
      
      menu_section.once('menu-section-addings', function(){
        if(search_block.length) {
          menu_section.prepend('<div id="block-search-form-trigger" class="mobile-trigger search-block-trigger ic-search2"></div>');
        }
        if (main_menu.length) {
          menu_section.prepend('<div id="main-menu-trigger" class="mobile-trigger menu-main-trigger ic-list"></div>');
        }
      });      

      $('.mobile-trigger', menu_section).once('navigation-click').click(function(){
         var active_elm_id = this.id.slice(0, -8);
         if (active_elm_id == 'main-menu') {
           search_block.removeClass('active');
           main_menu.toggleClass('active');
         }
         else if (active_elm_id == 'block-search-form'){
           main_menu.removeClass('active');
           search_block.toggleClass('active');
         }
         
         $('.mobile-trigger', context).not($(this)).removeClass('active');
         $(this).toggleClass('active');
         
         if (ie_version != -1) {
            // IE8: ui does not repaint when css class changes
            setTimeout(function(){document.getElementsByTagName('body')[0].className+='';},200);
         }
       });
       
       $('.menu-serv', context).wrapAll("<div class='menu-serv-outer-wrapper'><div class='menu-serv-wrapper'><div class='menu-serv-inner-wrapper' /></div></div>")
     
       $('#block-locale-language li.active', context).once('change-language').click(function(event){
         if ($('#block-locale-language:not(.change-language)').length) {
           var change_language = $('#block-locale-language');
           change_language.addClass('change-language');
           $('.menu-serv-wrapper').addClass('change-language-wrapper');
           
           event.preventDefault();
           event.stopPropagation();
         }         
       });
       
       $('body').once('change-language-remove').click(function(event){
         var change_language = $('.change-language');
         if(change_language.length) {
           change_language.removeClass('change-language');  
           $('.menu-serv-wrapper').removeClass('change-language-wrapper');
         }
       });
    }
  };
  
  /**
  * Second level menu behavior
  */
  Drupal.behaviors.kkmsSecondMenuBehavior = {
    attach: function (context, settings) {
      var second_menu = $('.menu-block-second_level');
      
      if (second_menu.length) {
        var counter = 0;
        var second_menu_region_class;
        var second_menu_region;
        second_menu.each(function(){
          $(this).once('second-menu-block', function(){
            counter++;
            second_menu_region_class = 'second-menu-region-' + counter;
            $('#main-content').after('<div class="sec-second-menu-mobile ' + second_menu_region_class + '"><div class="sec-inner"><div class="second-menu-mobile" /></div></div>');

            second_menu_region = $('.sec-second-menu-mobile.' + second_menu_region_class + ' .second-menu-mobile');

            $('> h2', $(this).parent()).clone().appendTo(second_menu_region);
            $(this).clone().appendTo(second_menu_region);

            $('> h2', second_menu_region).once('second-menu-title').click(function(){
              $(this).parent().toggleClass('second-menu-active');
            });
          });
        });
				
      }
    }
  };

  
  function getInternetExplorerVersion()
  // Returns the version of Internet Explorer or a -1
  // (indicating the use of another browser).
  {
    var rv = -1; // Default value assumes failure. 
    var ua = navigator.userAgent;

    // If user agent string contains "MSIE x.y", assume
    // Internet Explorer and use "x.y" to determine the
    // version.

    var re  = new RegExp("MSIE ([0-9]{1,}[\.0-9]{0,})");
    if (re.exec(ua) != null) 
      rv = parseFloat( RegExp.$1 );
    return rv;

  }
  
  /**
    * Misc small adjustments
    */
   Drupal.behaviors.noChosenBehavior = {
       attach: function (context, settings) {
         $('select.facetapi-multiselect:visible').once('no-chosen-behavior').each(function(){
           var data_placeholder = $(this).attr('data-placeholder');
           $(this).before('<span class="no-chosen-label">' + data_placeholder + '</span>');
         });
       }
   };

})(jQuery, Drupal);
