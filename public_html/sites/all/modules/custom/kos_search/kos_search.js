(function ($) {


  Drupal.behaviors.kos_search = {
    attach: function(context, settings) {
      $("[id^='facetapi-multiselect-form']").siblings('h2.title').each(function(){
        var $this = $(this);
        $this.hide();
        $('select', $this.siblings('form')).not('[data-placeholder]').attr('data-placeholder', $this.text());
      });

      $('#school-event-node-form .tabledrag-toggle-weight-wrapper').hide();
    }
  };

  Drupal.behaviors.kos_events_banner_pane = {

    attach: function(context, settings) {
      if(typeof settings.kos_search === 'undefined' ||
         typeof settings.kos_search.search_button_color === "undefined") {
         var color = "000";
      }else{
        var color = settings.kos_search.search_button_color;
      }
      //flexslider styles
      var selectors = ['.events-banner-pane .flexslider .flex-control-nav li a',
                       '.events-banner-pane .flexslider .flex-direction-nav .flex-prev',
                       '.events-banner-pane .flexslider .flex-direction-nav .flex-next',
                      ];

      $('.flexslider').on('start', function(e) {
        $.each(selectors, function(index, selector){
          $(selector,context).css('background-color','#'+color);
        });

        // play pause button
        $('.flexslider .flex-pauseplay a',context).css('color', "#"+color);
      });
      // search button styles
      $('.events-banner-pane .form-submit').css("background-color","#"+color).css('border','1px solid #'+color);
    }
  };
})(jQuery);
