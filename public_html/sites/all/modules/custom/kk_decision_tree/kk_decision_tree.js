(function ($) {
  var processLinks = function ($wrapper, settings) {
    var $links = $('.views-field-title a, a.kk-decision-tree-back', $wrapper);
    $links.once('kk-decision-tree-ajax-processed').click(function (e) {
      e.preventDefault();
      var uri = decodeURIComponent($(this).attr('href'));

      $.ajax({
        url: settings.basePath + settings.pathPrefix + 'kk-decision-tree/pane/ajax',
        type: "GET",
        data: {'tree_url': uri},
        success: function (response) {
          if (typeof response == 'string') {
            response = $.parseJSON(response);
          }
          if (response.node_view) {
            $('.kk-decision-tree-box .node', $wrapper).replaceWith(response.node_view);
            processLinks($wrapper, settings);
          }
        }
      });
    });
  };

  Drupal.behaviors.kk_decision_tree = {
    attach: function (context, settings) {
      var $wrapper = $('.pane-bundle-decision-tree-pane', context);
      processLinks($wrapper, settings);
    }
  };
})(jQuery);
