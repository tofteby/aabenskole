jQuery(document).ready(function ()
{
  jQuery("#kos-search-frontpage-events-search-form").on("submit", function(e) {
    e.preventDefault();
    var search_word = jQuery("#kos-search-frontpage-events-search-form #edit-keyword").val();
    var audience = jQuery("#kos-search-frontpage-events-search-form select#edit-category").val();
    var subjects = jQuery("#kos-search-frontpage-events-search-form select#edit-subject").val();
    var url = location.protocol + "//" + location.host+"/search/events/"+encodeURIComponent(encodeURIComponent(search_word));
    var search_params = new Array();
    if(audience && audience != "") search_params.push("f[0]=im_field_audiences:"+encodeURIComponent(audience));
    if(subjects && subjects != "") search_params.push("f[1]=im_field_subjects:"+encodeURIComponent(subjects));
    window.location.href = url + "?" + search_params.join("&");
    return false;
  });
});

