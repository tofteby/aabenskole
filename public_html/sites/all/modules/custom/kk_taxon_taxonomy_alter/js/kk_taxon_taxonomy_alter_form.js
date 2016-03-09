/**
 * @file
 * Add readonly and hidden same of the field in taxon taxonomy form.
 */

(function($) {
  Drupal.behaviors.kk_taxon_taxonomy_alter = {
    attach: function(context, settings) {
      var form = $('form#-taxon-taxonomy-admin-form:not(.kk-taxon-processed)').addClass('kk-taxon-processed');
      if (form.length !== 0) {
        form.find('#edit-taxon-taxonomy-taxon-url').attr('readonly', 'readonly');
        form.find('#edit-taxon-taxonomy-taxon-url').attr('disabled', 'disabled');
        form.find('.form-item-taxon-taxonomy-selected-image').css('display', 'none');
        form.find('.form-item-taxon-taxonomy-wait-image').css('display', 'none');
        form.find('.form-item-taxon-taxonomy-not-selected-image').css('display', 'none');
      }
    }
  };
})(jQuery);
