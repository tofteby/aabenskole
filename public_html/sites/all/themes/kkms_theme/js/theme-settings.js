/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
(function ($) {

  $(document).ready(function($){

    $('#edit-col-scheme').find('.form-radio').each(function(index,element){
      var currentcolor;
      var colors = $(element).val().split(':');
      //console.log(colors.length);
      var scheme = "<div class=\"scheme\">";
      for(var i = 0; i < colors.length; i = i + 1){

        if(colors[i].indexOf('$') >= 0){
          currentcolor = colors[i].substring(1);
        }
        else{
          currentcolor = '#' + colors[i];
        }

        scheme = scheme.concat("<div class=\"scheme-color\" style=\"background-color: " + currentcolor + '"></div>');

        //console.log(colors[i]);
      }
      scheme = scheme.concat("</div>");
      //console.log(scheme);
      $(element).parent().append(scheme);
    });

  });

})(jQuery);
