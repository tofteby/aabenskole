(function ($) {  
  Drupal.behaviors.kkms_search = {
    attach: function(context, settings) {
      $("[id^='facetapi-multiselect-form']").siblings('h2.pane-title').each(function(){
        var $this = $(this);
        $this.hide();
        $('select', $this.siblings('form')).not('[data-placeholder]').attr('data-placeholder', $this.text());
      });
    }
  };

})(jQuery);
