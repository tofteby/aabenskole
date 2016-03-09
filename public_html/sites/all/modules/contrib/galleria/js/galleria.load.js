(function ($) {

// Load the theme once on page load
$(function () {
  Galleria.loadTheme(Drupal.settings.galleria.themepath);
});

// Behavior to load Galleria
Drupal.behaviors.galleria = {
  attach: function(context, settings) {
    $('.galleria-content', context).once('galleria', function() {
      $(this).each(function() {
        var $this = $(this);
        var id = $this.attr('id');
        var optionset = settings.galleria.instances[id];
        if (optionset) {
          $this.galleria(settings.galleria.optionsets[optionset]);
        }
        else {
          $this.galleria();
        }
        // add Title, Alt for Thumbnails and Images
        Galleria.ready(function() {
          this.bind('thumbnail', function(e) {
            e.thumbTarget.alt = e.galleriaData.original.alt? e.galleriaData.original.alt: '';
            e.thumbTarget.title = e.galleriaData.original.title? e.galleriaData.original.title: '';
          });
          this.bind('loadfinish', function(e) {
            e.imageTarget.alt = e.galleriaData.original.alt? e.galleriaData.original.alt: '';
            e.imageTarget.title = e.galleriaData.original.title? e.galleriaData.original.title: '';
          });
        });
      });
    });
  }
};

}(jQuery));
