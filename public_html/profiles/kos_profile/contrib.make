core = "7.x"
api = "2"

; Place contributed module overrides here.
projects[phplot_api][patch][] = "http://drupal.org/files/issues/phplot_api-make-file-causing-warnings-2241253-1.patch"
projects[quail_api][patch][] = "http://drupal.org/files/issues/quail_api-make-file-genreates-warnings-2241239-1.patch"

; New contributed modules.
projects[themekey][subdir] = "contrib"
projects[themekey][version] = "3.1"

projects[profile2][subdir] = "contrib"
projects[profile2][version] = "1.3"

projects[facetapi_select][subdir] = "contrib"
projects[facetapi_select][download][type] = "git"
projects[facetapi_select][download][branch] = "7.x-1.x"
projects[facetapi_select][download][revision] = "730ec031168153b21922f8b651f7b4ca5cee3f81"

projects[xhprof][subdir] = "contrib"
projects[xhprof][version] = "1.0-beta3"

projects[facetapi_multiselect][type] = "module"
projects[facetapi_multiselect][subdir] = "contrib"
projects[facetapi_multiselect][download][type] = "git"
projects[facetapi_multiselect][download][url] = "http://git.drupal.org/project/facetapi_multiselect.git"
projects[facetapi_multiselect][download][branch] = "7.x-1.x"
projects[facetapi_multiselect][download][revision] = "0ba5a1a882a479cc0920a1e6904fd3205f4b8c18"
projects[facetapi_multiselect][patch][0] = "http://drupal.org/files/issues/facetapi_multiselect-new_features-1806344-22.patch"
projects[facetapi_multiselect][patch][1] = "http://drupal.org/files/issues/broken_pagination-2150749-2.patch"

projects[override_node_options][subdir] = "contrib"
projects[override_node_options][version] = "1.12"

