
/**
 * @file
 * Add button auto tagging.
 */

(function ($) {
  Drupal.behaviors.kk_taxon_taxonomy_alter = {
    attach: function (context, settings) {
      var use_autotag = settings.taxon_taxonomy_alter.kk_taxon_taxonomy_use_autotag;
      var auto_button_text = settings.taxon_taxonomy_alter.kk_taxon_taxonomy_autotaggin_button_text;
      var taxonomy_tag_name = settings.taxon_taxonomy.field_name;
      var taxonomy_ckeditor_field = settings.taxon_taxonomy.ckeditor_field;
      var taxonomy_name = settings.taxon_taxonomy.taxonomy_name;
      var taxonomy_selected_image = settings.taxon_taxonomy.selected_image;

      // Insert the button, but only once
      var taxon_autotag_button = $('div').find('#taxon-autotag-button');
      if (taxon_autotag_button.length === 0 && use_autotag) {
        var taxon_button = $('#taxon-classify-button');
        if (taxon_button.length !== 0) {
          taxon_button.after("<input style = 'margin-top:10px;' id = 'taxon-autotag-button' class = 'form-submit ajax-processed' type='button' value='" + auto_button_text +"'>" );
        }
        else {
          $(taxonomy_tag_name).after("<input style = 'margin-top:10px;' id = 'taxon-autotag-button' class = 'form-submit ajax-processed' type='button' value='" + auto_button_text +"'>");
        }
      }

      $('#taxon-autotag-button').click(function() {
        $(taxonomy_tag_name).val('');

        CKEDITOR.config.entities = false;
        CKEDITOR.config.entities_latin = false;
        var text = CKEDITOR.instances[taxonomy_ckeditor_field].getData();

        $.ajaxSetup({async:false});
                
        $.post("/taxon-taxonomy", {taxonomy: taxonomy_name, text: text}, function(data) {
          var lines = $.grep(data.split("\n"),function(n){ return (n); });
          $(taxonomy_tag_name).val(lines.join('; '));
          $('#taxon-results img').attr('src', taxonomy_selected_image);
        });
      });
    }
  };
})(jQuery);
