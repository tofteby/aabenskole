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

        // Equal heights on news rows.
        $(".view-school-events-list", context).each(function(){
            $(".views-row", $(this)).equalHeights();
            
         });
       
        fixBodyHeight();
        $(window).resize(function() {
            fixBodyHeight();
        });
    }
  };
})(jQuery, Drupal);