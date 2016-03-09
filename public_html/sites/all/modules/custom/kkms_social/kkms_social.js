(function ($) {  
  Drupal.behaviors.kkms_social = {
    attach: function(context, settings) {
      $('.kkms-social-share-item', context).not("[data-service='email']").once('kkms-social-share-item-processed').click(function (e) {
        window.open($(this).data('share-url'), 'kkms_social_share', "height=300,width=800").focus();
        return false;
      });
      $(".kkms-social-share-item[data-service='email']", context).once('kkms-social-share-email-item-processed').click(function (e) {
        window.open($(this).data('share-url'), '_blank').focus();
        return false;
      });
      $("a.print-this-page").once('print-this-page-processed').click(function(e){
        e.preventDefault();
        window.print();
        return false;
      });
    }
  };

})(jQuery);
