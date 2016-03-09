/**
 * Prevent autosubmit of certain form.
 * Optionally we could trigger click of correct button here.
 */
(function ($) {
  var selector = 'form .prevent-submit';
  var callback = function(e) { e.preventDefault(); };
  Drupal.behaviors.node_prevent_default_action = {
    attach: function (context) { $(selector, context).bind('click', callback); },
    detach: function (context) { $(selector, context).unbind('click', callback); }
  }
})(jQuery);
