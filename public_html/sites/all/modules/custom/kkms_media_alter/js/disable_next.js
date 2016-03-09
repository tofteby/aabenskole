/**
 * Implemented to fix the multysubmit issue for the next button in media module.
 * Disabling the submit event handling for 2 seconds after the first click.
 */
(function ($) {
  namespace('Drupal.media.browser');

  Drupal.behaviors.MediaBrowserAlter = {
    attach: function() {
      var enableSubmit = true;
      $('form#file-entity-add-upload-multiple:not(.media-alter-processed)').addClass('media-alter-processed').submit(function(event){
        if (!enableSubmit) {
          event.preventDefault();
          return false;
        }
        enableSubmit = false;
        setTimeout(function(){ enableSubmit = true; }, 2000);
      });
    }
  };
})(jQuery);
