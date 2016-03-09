
/**
 * @file
 * Attaches the behaviors for the Field Tooltips module.
 */
(function ($) {
  Drupal.behaviors.fieldTooltips = {
    attach: function (context, settings) {
      var selector = '.field-label label, label[for]';
      selector += ':not(.field-multiple-table tr.draggable label)';
      $('.field-tooltips', context).once('tooltips-init').each(function(index, Element) {
        $(Element).tooltip({
          items: selector, // Selector for what has the tooltip behavior.
          show: false, // No fade in.
          hide: false, // No fade out.
          position: { // Position - above.
            my: 'left bottom',
            at: 'left top-5'
          },
          content: function() {
            var element = $( this );
            return $(Element).attr('field_tooltip');
          }
        });
      });
    }
  };
}(jQuery));
