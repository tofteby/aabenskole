  /**
  * Adjust the heights in various parts
  */
 /*
*/

(function ($, Drupal) {
'use strict';
  var basepath;

  Drupal.behaviors.kosHeights = {
    attach: function (context, settings) {
        // Hack to have a minimum height on pages.
        function fixBodyHeight() {
          $(".sec.sec-content").css('padding-bottom',0);
          var delta = $(window).height() - $('body').height();
          if(delta>0){
            $(".sec.sec-content").css('padding-bottom',delta);
          }
        }

        // Equal heights on school event rows.
        function fixEventHeight() {
          $(".view-school-events-list", context).each(function() {
            $(".list-content-wrapper", $(this)).equalHeights();
            if ($(window).width() > 480) {
              $(".views-row", $(this)).equalHeights();
              $(".views-row").once(function() {
                $(this).css('height', $(".views-row").height() + 40)
              });
            } else {
              $(".views-row").height('auto');
              $(".views-row").css('padding-bottom', '100px');
            }
          });
        }

        $(window).load(function() {
          fixBodyHeight();
          fixEventHeight();
          $(window).trigger('resize');
        });

        $(window).resize(function() {
          fixBodyHeight();
          fixEventHeight();
        });
    }
  };
})(jQuery, Drupal);
