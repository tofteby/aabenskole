core = 7.x
api = 2

; Libraries
libraries[colorbox][destination] = "libraries"
libraries[colorbox][download][type] = "file"
libraries[colorbox][download][url] = "https://github.com/jackmoore/colorbox/archive/1.x.zip"

libraries[ckeditor][destination] = "libraries"
libraries[ckeditor][download][type] = "file"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.2.1/ckeditor_4.2.1_full.zip"

libraries[ckeditor_tableresize][destination] = "libraries/ckeditor/plugins"
libraries[ckeditor_tableresize][directory_name] = "tableresize"
libraries[ckeditor_tableresize][download][type] = "file"
libraries[ckeditor_tableresize][download][url] = "http://download.ckeditor.com/tableresize/releases/tableresize_4.2.1.zip"

libraries[flexslider][type] = "libraries"
libraries[flexslider][download][type] = "git"
libraries[flexslider][download][url] = "https://github.com/woothemes/FlexSlider.git"
libraries[flexslider][download][branch] = "master"
libraries[flexslider][download][revision] = "version/2.2.2"

libraries[geoPHP][type] = "libraries"
libraries[geoPHP][download][type] = "git"
libraries[geoPHP][download][url] = "https://github.com/phayes/geoPHP.git"
libraries[geoPHP][download][branch] = "master"
libraries[geoPHP][download][revision] = "0aae7c3d35f3a875bf58ff8abfc5fa27c0ca1408"

libraries[plupload][destination] = "libraries"
libraries[plupload][download][type] = "git"
libraries[plupload][download][branch] = "1.x"
libraries[plupload][download][url] = "https://github.com/moxiecode/plupload.git"
libraries[plupload][download][revision] = "d51e6d0c3b91783e6166d3ad8c9f8404b867a9ad"
libraries[plupload][patch][1903850] = "http://drupal.org/files/plupload-1_5_7-rm_examples-1903850-11.patch"

libraries[galleria][type] = "libraries"
libraries[galleria][download][type] = "file"
libraries[galleria][download][url] = "http://galleria.io/static/galleria-1.3.2.zip"

libraries[colorpicker][destination] = "libraries"
libraries[colorpicker][download][type] = "file"
libraries[colorpicker][download][url] = "http://www.eyecon.ro/colorpicker/colorpicker.zip"
libraries[colorpicker][directory_name] = "colorpicker"

libraries[chosen][destination] = "libraries"
libraries[chosen][download][type] = "file"
libraries[chosen][download][url] = "http://github.com/harvesthq/chosen/releases/download/1.0.0/chosen_v1.0.0.zip"


; Modules
projects[addressfield][subdir] = "contrib"
projects[addressfield][version] = "1.0-beta5"

projects[plupload][subdir] = "contrib"
projects[plupload][version] = "1.6"

projects[media_multiselect][type] = "module"
projects[media_multiselect][subdir] = "contrib"
projects[media_multiselect][download][type] = "git"
projects[media_multiselect][download][url] = "http://git.drupal.org/sandbox/fangel/1652676.git"
projects[media_multiselect][download][branch] = "7.x-1.x"
projects[media_multiselect][download][revision] = "1b4fc64bd6665aae92d58d65ea24c32557767738"
projects[media_multiselect][patch][] = "http://drupal.org/files/issues/media-multiselect_remove-button_removes_all_2123385-2.patch"
projects[media_multiselect][patch][] = "http://drupal.org/files/issues/required_validation-media_multiselect-2139271-7.patch"

projects[comment_goodness][subdir] = "contrib"
projects[comment_goodness][version] = "1.4"

projects[services][subdir] = "contrib"
projects[services][version] = "3.7"

projects[token][subdir] = "contrib"
projects[token][version] = "1.6"
projects[token][patch][] = "https://www.drupal.org/files/issues/token-field_description_overwritten-2474403-12-D7.patch"

projects[tablefield][subdir] = "contrib"
projects[tablefield][version]  = "2.2"

projects[maxlength][subdir] = "contrib"
projects[maxlength][version]  = "3.0-beta1"

projects[flexslider][type] = "module"
projects[flexslider][subdir] = "contrib"
projects[flexslider][download][type] = "git"
projects[flexslider][download][url] = "http://git.drupal.org/project/flexslider.git"
projects[flexslider][download][branch] = "7.x-2.x"
projects[flexslider][download][revision] = "9a4244cafdda890df30c36b8c8011d17677b0958"
projects[flexslider][patch][] = "http://drupal.org/files/issues/pause_1_slide-flexslider-2219435-1.patch"

projects[flexslider_views_slideshow][type] = "module"
projects[flexslider_views_slideshow][subdir] = "contrib"
projects[flexslider_views_slideshow][download][type] = "git"
projects[flexslider_views_slideshow][download][url] = "http://git.drupal.org/project/flexslider_views_slideshow.git"
projects[flexslider_views_slideshow][download][branch] = "7.x-2.x"
projects[flexslider_views_slideshow][download][revision] = "0b1f8e7e24c168d1820ccded63c319327d57a97e"

projects[views][subdir] = "contrib"
projects[views][version] = "3.7"
projects[views][patch][] = "http://drupal.org/files/exposed_sort_filters-2037211-2.patch"
projects[views][patch][] = "http://drupal.org/files/ajax_pager_does_not_work_in_view_pane-2065975-1.patch"
projects[views][patch][] = "http://drupal.org/files/views-add-autocomplete-response-alter-hook-2069839-2.patch"

projects[jquery_update][type] = "module"
projects[jquery_update][subdir] = "contrib"
projects[jquery_update][download][type] = "git"
projects[jquery_update][download][url] = "http://git.drupal.org/project/jquery_update.git"
projects[jquery_update][download][branch] = "7.x-2.x"
projects[jquery_update][download][revision] = "5309822b2106366aec51e75196ce3e71d23ad029"

projects[webform][subdir] = "contrib"
projects[webform][version] = "3.20"
projects[webform][patch][] = "http://drupal.org/files/issues/wrap_in_fieldset-2210313-1.patch"

projects[double_field][type] = "module"
projects[double_field][subdir] = "contrib"
projects[double_field][download][type] = "git"
projects[double_field][download][url] = "http://git.drupal.org/project/double_field.git"
projects[double_field][download][branch] = "7.x-2.x"
projects[double_field][download][revision] = "95e94f3c6818d2e37dc3a04105825f04c019f66f"
projects[double_field][patch][] = "http://drupal.org/files/issues/simplify_markup-double_field-2155253-1.patch"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.4"
projects[ctools][patch][2059543] = "http://drupal.org/files/ctools_node_context-add_title.patch"
projects[ctools][patch][] = "http://drupal.org/files/issues/comments-count-pane_2157601_2.patch"
projects[ctools][patch][] = "http://drupal.org/files/issues/node_terms_multiple_vocabularies-ctools-2167847-1.patch"

projects[libraries][subdir] = "contrib"
projects[libraries][version] = "2.1"

projects[multiform][type] = "module"
projects[multiform][subdir] = "contrib"
projects[multiform][download][type] = "git"
projects[multiform][download][url] = "http://git.drupal.org/project/multiform.git"
projects[multiform][download][branch] = "7.x-1.x"
projects[multiform][download][revision] = "326474f29f359beea2235bdcdd89accdaa8c88f9"
projects[multiform][patch][] = "http://drupal.org/files/multiform-1663212_1.patch"
projects[multiform][patch][] = "http://drupal.org/files/issues/multiform-multivalued_select_fields-1463520-17.patch"

projects[jquery_colorpicker][subdir] = "contrib"
projects[jquery_colorpicker][version] = "1.0-rc2"

projects[date][subdir] = "contrib"
projects[date][version] = "2.7"
projects[date][patch][] = "http://drupal.org/files/issues/date-fix-repeat-rule-count-validation-2157469-10.patch"
projects[date][patch][] = "http://drupal.org/files/issues/many_repeats_problem-date-2051033-6.patch"

projects[diff][subdir] = "contrib"
projects[diff][version] = "3.2"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.3"

projects[entityreference][subdir] = "contrib"
projects[entityreference][version] = "1.1"
projects[entityreference][patch][2170253] = "http://drupal.org/files/issues/entityreference-field-title-is-empty-on-validation-2170253-1.patch"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"

projects[mpac][subdir] = "contrib"
projects[mpac][version] = "1.2"

projects[scheduler][subdir] = "contrib"
projects[scheduler][version] = "1.1"

projects[scheduler_workbench][subdir] = "contrib"
projects[scheduler_workbench][version] = "1.2"

projects[site_map][subdir] = "contrib"
projects[site_map][version] = "1.0"

projects[title][subdir] = "contrib"
projects[title][version] = "1.0-alpha7"
projects[title][patch][] = "http://drupal.org/files/issues/field_group-title-ui_problem-1441224-3.diff"
projects[title][patch][] = "http://drupal.org/files/issues/title-undefined-index-field_name-in-title_field_views_data_alter-1779268-8.patch"

projects[panels][subdir] = "contrib"
projects[panels][version] = "3.4"

projects[panelizer][type] = "module"
projects[panelizer][subdir] = "contrib"
projects[panelizer][download][type] = "git"
projects[panelizer][download][url] = "http://git.drupal.org/project/panelizer.git"
projects[panelizer][download][branch] = "7.x-3.x"
projects[panelizer][download][revision] = "5799349b58fc824acc84507e412280e96ac06472"
projects[panelizer][patch][] = "http://drupal.org/files/2061749-1-panelizer-disable_save_as_default.patch"

projects[services_client][type] = "module"
projects[services_client][subdir] = "contrib"
projects[services_client][download][type] = "git"
projects[services_client][download][url] = "http://git.drupal.org/project/services_client.git"
projects[services_client][download][branch] = "7.x-1.x"
projects[services_client][download][revision] = "1f41757509a16fc2d7fecd5d532a52dcf9ddb6e6"
projects[services_client][patch][] = "http://drupal.org/files/issues/csrf_token_support-2140101-2.patch"

projects[services_entity][subdir] = "contrib"
projects[services_entity][version] = "2.0-alpha7"

projects[piwik][subdir] = "contrib"
projects[piwik][version] = "2.4"

projects[piwik_stats][subdir] = "contrib"
projects[piwik_stats][version] = "2.0-beta3"
projects[piwik_stats][patch][] = "http://drupal.org/files/issues/piwik_stats-check-for-credentials-before-connect-2168483-7.patch"

projects[linkit][subdir] = "contrib"
projects[linkit][version] = "2.6"
projects[linkit][patch][] = "http://drupal.org/files/linkit-search-multiple-field-1858050-14.patch"
projects[linkit][patch][] = "http://drupal.org/files/entitylanguages-1793896-19.patch"

projects[linkit_views][subdir] = "contrib"
projects[linkit_views][version] = "1.2"

projects[linkit_panel_pages][subdir] = "contrib"
projects[linkit_panel_pages][version] = "2.0"

projects[workbench][subdir] = "contrib"
projects[workbench][version] = "1.2"

projects[workbench_access][subdir] = "contrib"
projects[workbench_access][version] = "1.2"
projects[workbench_access][patch][] = "http://drupal.org/files/Unknown_column_t.tid-2072661-3.patch"

projects[workbench_media][subdir] = "contrib"
projects[workbench_media][version] = "2.1"

projects[workbench_moderation][type] = "module"
projects[workbench_moderation][subdir] = "contrib"
projects[workbench_moderation][download][type] = "git"
projects[workbench_moderation][download][url] = "http://git.drupal.org/project/workbench_moderation.git"
projects[workbench_moderation][download][branch] = "7.x-1.x-dev"
projects[workbench_moderation][download][revision] = "a90378de5b1aea2b095ff5613eea44f55947f514"
projects[workbench_moderation][patch][] = "http://drupal.org/files/playnicewithpanels-1285090-22.patch"
projects[workbench_moderation][patch][] = "http://drupal.org/files/1436260-workbench_moderation-states-vbo-36.patch"
projects[workbench_moderation][patch][] = "http://drupal.org/files/1825614-compare-original-before-field_attach_update.patch"
projects[workbench_moderation][patch][] = "http://drupal.org/files/1852244-setting_path_to_default_pathauto_value-3.patch"
projects[workbench_moderation][patch][] = "http://drupal.org/files/workbench_moderation-state_labels_translation-1354692-22.patch"
projects[workbench_moderation][patch][] = "http://drupal.org/files/issues/2148021-multiple_moderation_status-1.patch"

projects[views_filters_populate][subdir] = "contrib"
projects[views_filters_populate][version] = "1.1"

projects[elysia_cron][subdir] = "contrib"
projects[elysia_cron][version] = "2.1"

projects[linkchecker][type] = "module"
projects[linkchecker][subdir] = "contrib"
projects[linkchecker][download][type] = "git"
projects[linkchecker][download][url] = "http://git.drupal.org/project/linkchecker.git"
projects[linkchecker][download][branch] = "7.x-1.x"
projects[linkchecker][download][revision] = "82c810a1114715854e2ed06c9013e710af9d01a6"

projects[xmlsitemap][subdir] = "contrib"
projects[xmlsitemap][version] = "2.0-rc2"

projects[better_exposed_filters][type] = "module"
projects[better_exposed_filters][subdir] = "contrib"
projects[better_exposed_filters][download][type] = "git"
projects[better_exposed_filters][download][url] = "http://git.drupal.org/project/better_exposed_filters.git"
projects[better_exposed_filters][download][branch] = "7.x-3.x"
projects[better_exposed_filters][download][revision] = "08f0995d4382ab5577c880583f5d7a0677ed7e2b"

projects[calendar][subdir]  = "contrib"
projects[calendar][version] = "3.4"

projects[context][subdir]  = "contrib"
projects[context][version] = "3.0-beta7"
projects[context][patch][] = "http://drupal.org/files/context-Context-not-respecting-block-language-1320864-22.patch"

projects[apachesolr_stats][subdir]  = "contrib"
projects[apachesolr_stats][version] = "1.0-alpha1"

projects[rules][subdir] = "contrib"
projects[rules][version] = "2.3"

projects[fieldable_panels_panes][subdir] = "contrib"
projects[fieldable_panels_panes][version] = "1.5"
projects[fieldable_panels_panes][patch][] = "http://drupal.org/files/more_characters_in_the_path_field-2074355-4.patch"
projects[fieldable_panels_panes][patch][] = "http://drupal.org/files/issues/FPE-media-problem-fieldable_panels_panes-2101255-2.diff"

projects[remote_stream_wrapper][subdir]  = "contrib"
projects[remote_stream_wrapper][version] = "1.0-beta4"
projects[remote_stream_wrapper][patch][] = "http://drupal.org/files/1926434-4-broken-image-style-7.20.patch"
projects[remote_stream_wrapper][patch][] = "http://drupal.org/files/remote_stream_wrapper-media_browser_submit-1557580-19.patch"

projects[menu_attributes][type] = "module"
projects[menu_attributes][subdir] = "contrib"
projects[menu_attributes][download][type] = "git"
projects[menu_attributes][download][url] = "http://git.drupal.org/project/menu_attributes.git"
projects[menu_attributes][download][branch] = "7.x-1.x"
projects[menu_attributes][download][revision] = "ed7e9aa882e9bb98d4d30aa13eb463498f1756c2"

projects[menu_position][type] = "module"
projects[menu_position][subdir] = "contrib"
projects[menu_position][download][type] = "git"
projects[menu_position][download][url] = "http://git.drupal.org/project/menu_position.git"
projects[menu_position][download][branch] = "7.x-1.x"
projects[menu_position][download][revision] = "b76a5dea1809b54fd5f822c03b2475b1ee679b31"

projects[menu_block][type] = "module"
projects[menu_block][subdir] = "contrib"
projects[menu_block][download][type] = "git"
projects[menu_block][download][url] = "http://git.drupal.org/project/menu_block.git"
projects[menu_block][download][branch] = "7.x-2.x"
projects[menu_block][download][revision] = "8dd19f0372ec23cf54db11ba8a0ba46806c2fcdc"

projects[better_formats][type] = "module"
projects[better_formats][subdir] = "contrib"
projects[better_formats][download][type] = "git"
projects[better_formats][download][url] = "http://git.drupal.org/project/better_formats.git"
projects[better_formats][download][branch] = "7.x-1.x"
projects[better_formats][download][revision] = "3b4a8c92b317add4e218216a002b2bc777fbc736"

projects[devel][type] = "module"
projects[devel][subdir] = "contrib"
projects[devel][download][type] = "git"
projects[devel][download][url] = "http://git.drupal.org/project/devel.git"
projects[devel][download][branch] = "7.x-1.x"
projects[devel][download][revision] = "7164368f298c3facb8711a44ad558a779fb71eea"

projects[features][type] = "module"
projects[features][subdir] = "contrib"
projects[features][download][type] = "git"
projects[features][download][url] = "http://git.drupal.org/project/features.git"
projects[features][download][branch] = "7.x-2.x"
projects[features][download][revision] = "93ff6cd5b51d149494f175e240c25620c6301293"
projects[features][patch][] = "http://drupal.org/files/features-986968-24.patch"

projects[bundle_copy][type] = "module"
projects[bundle_copy][subdir] = "contrib"
projects[bundle_copy][download][type] = "git"
projects[bundle_copy][download][url] = "http://git.drupal.org/project/bundle_copy.git"
projects[bundle_copy][download][branch] = "7.x-2.x"
projects[bundle_copy][download][revision] = "e8b848053e9b16bc553870d2faf56d56ea5f722c"

projects[feeds][type] = "module"
projects[feeds][subdir] = "contrib"
projects[feeds][download][type] = "git"
projects[feeds][download][url] = "http://git.drupal.org/project/feeds.git"
projects[feeds][download][branch] = "7.x-2.x"
projects[feeds][download][revision] = "ddee3f9fcc7ffeef5c64d3e9ecb36a91ac800a9d"

projects[feeds_files][type] = "module"
projects[feeds_files][subdir] = "contrib"
projects[feeds_files][download][type] = "git"
projects[feeds_files][download][url] = "http://git.drupal.org/project/feeds_files.git"
projects[feeds_files][download][branch] = "7.x-1.x"
projects[feeds_files][download][revision] = "a277cd5ef969ff98ff796fdcc47aa0773356ae2a"

projects[feeds_tamper][type] = "module"
projects[feeds_tamper][subdir] = "contrib"
projects[feeds_tamper][download][type] = "git"
projects[feeds_tamper][download][url] = "http://git.drupal.org/project/feeds_tamper.git"
projects[feeds_tamper][download][branch] = "7.x-1.x"
projects[feeds_tamper][download][revision] = "ceaf22182275c5ef3beca41f4aa933bfbf834c05"

projects[feeds_tamper_php][type] = "module"
projects[feeds_tamper_php][subdir] = "contrib"
projects[feeds_tamper_php][download][type] = "git"
projects[feeds_tamper_php][download][url] = "http://git.drupal.org/project/feeds_tamper_php.git"
projects[feeds_tamper_php][download][branch] = "7.x-1.x"
projects[feeds_tamper_php][download][revision] = "ab6e34dcc62acb1f9e45b98ed3564ede4f8bd92b"

projects[feeds_xpathparser][type] = "module"
projects[feeds_xpathparser][subdir] = "contrib"
projects[feeds_xpathparser][download][type] = "git"
projects[feeds_xpathparser][download][url] = "http://git.drupal.org/project/feeds_xpathparser.git"
projects[feeds_xpathparser][download][branch] = "7.x-1.x"
projects[feeds_xpathparser][download][revision] = "11a0f798974a835fe6fbf329add2153d398868e3"
projects[feeds_xpathparser][patch][] = "http://drupal.org/files/feeds_xpathparser-HTML-parser-strip-cdata-1440734-3.patch"

projects[fences][subdir] = "contrib"
projects[fences][version] = "1.0"

projects[field_group][type] = "module"
projects[field_group][subdir] = "contrib"
projects[field_group][download][type] = "git"
projects[field_group][download][url] = "http://git.drupal.org/project/field_group.git"
projects[field_group][download][branch] = "7.x-1.x"
projects[field_group][download][revision] = "1086ed33dd8591e990b10030cc0a759ec81201f8"

projects[field_collection][type] = "module"
projects[field_collection][subdir] = "contrib"
projects[field_collection][download][type] = "git"
projects[field_collection][download][url] = "http://git.drupal.org/project/field_collection.git"
projects[field_collection][download][branch] = "7.x-1.x"
projects[field_collection][download][revision] = "0fd332e7ce5fdd7ba13da059123908befc9d1824"
projects[field_collection][patch][] = "http://drupal.org/files/notice-1822844-16.patch"
projects[field_collection][patch][] = "http://drupal.org/files/field_collection_with_workbench_moderation-1807460-46.patch"
projects[field_collection][patch][] = "http://drupal.org/files/issues/field_collections_revisions_by_parent_node-1031010-10.patch"

projects[field_collection_group][type] = "module"
projects[field_collection_group][subdir] = "contrib"
projects[field_collection_group][download][type] = "git"
projects[field_collection_group][download][url] = "http://git.drupal.org/sandbox/MiroslavBanov/2156531.git"
projects[field_collection_group][download][branch] = "7.x-1.x"
projects[field_collection_group][download][revision] = "8c1ab7fe30a0400f4d1f282e9681ce330e434cab"

projects[file_entity][type] = "module"
projects[file_entity][subdir] = "contrib"
projects[file_entity][download][type] = "git"
projects[file_entity][download][url] = "http://git.drupal.org/project/file_entity.git"
projects[file_entity][download][branch] = "7.x-2.x"
projects[file_entity][download][revision] = "3661d8bbdfa908a0138b86205898ff81735eca61"
projects[file_entity][patch][] = "http://drupal.org/files/file_entity-revert-the-file-types-configurations-2118773-2.patch"

projects[job_scheduler][type] = "module"
projects[job_scheduler][subdir] = "contrib"
projects[job_scheduler][download][type] = "git"
projects[job_scheduler][download][url] = "http://git.drupal.org/project/job_scheduler.git"
projects[job_scheduler][download][branch] = "7.x-2.x"
projects[job_scheduler][download][revision] = "1e4b9bf0002ff50c83ee5ecdad877f3c1ba2a067"

projects[link][type] = "module"
projects[link][subdir] = "contrib"
projects[link][download][type] = "git"
projects[link][download][url] = "http://git.drupal.org/project/link.git"
projects[link][download][branch] = "7.x-1.x"
projects[link][download][revision] = "6ae1ff05d8901677ae99eb73554b497519e00e93"

projects[media][type] = "module"
projects[media][subdir] = "contrib"
projects[media][download][type] = "git"
projects[media][download][url] = "http://git.drupal.org/project/media.git"
projects[media][download][branch] = "7.x-2.x"
projects[media][download][revision] = "2f828ea761103c49197a50aaeac9b98a350a559b"
projects[media][patch][] = "http://drupal.org/files/media-browser-view-library-exposed-form-submit-problem-1319528-24.patch"
projects[media][patch][] = "http://drupal.org/files/issues/media-notice-undefined-index-in-media_pre_render_text_format-line-453-2120307-3.patch"
projects[media][patch][] = "http://drupal.org/files/issues/media_popup_trigger_some_js-2184475-2.patch"

projects[manualcrop][type] = "module"
projects[manualcrop][subdir] = "contrib"
projects[manualcrop][download][type] = "git"
projects[manualcrop][download][url] = "http://git.drupal.org/project/manualcrop.git"
projects[manualcrop][download][branch] = "7.x-1.x"
projects[manualcrop][download][revision] = "8baa1d9af636cf26a4270408909803c65e9d32a6"

projects[media_vimeo][type] = "module"
projects[media_vimeo][subdir] = "contrib"
projects[media_vimeo][download][type] = "git"
projects[media_vimeo][download][url] = "http://git.drupal.org/project/media_vimeo.git"
projects[media_vimeo][download][branch] = "7.x-2.x"
projects[media_vimeo][download][revision] = "26b2eee8b7b62061f2ddadb2cd863fc8e497a8f9"

projects[media_youtube][type] = "module"
projects[media_youtube][subdir] = "contrib"
projects[media_youtube][download][type] = "git"
projects[media_youtube][download][url] = "http://git.drupal.org/project/media_youtube.git"
projects[media_youtube][download][branch] = "7.x-2.x"
projects[media_youtube][download][revision] = "5faa00c1a2f34cb24c273ba7e956172b95eaf262"

projects[module_filter][type] = "module"
projects[module_filter][subdir] = "contrib"
projects[module_filter][download][type] = "git"
projects[module_filter][download][url] = "http://git.drupal.org/project/module_filter.git"
projects[module_filter][download][branch] = "7.x-2.x"
projects[module_filter][download][revision] = "196547b52b873c6887da0d41e9cb62b778d582f6"

projects[admin_theme][type] = "module"
projects[admin_theme][subdir] = "contrib"
projects[admin_theme][download][type] = "git"
projects[admin_theme][download][url] = "http://git.drupal.org/project/admin_theme.git"
projects[admin_theme][download][branch] = "7.x-1.x"
projects[admin_theme][download][revision] = "c0228dfc9639f145007e0eaa604b036afa2196cb"
projects[admin_theme][patch][] = "http://drupal.org/files/content_type_specific_configuration-1516616-2.patch"

projects[colorbox][subdir] = "contrib"
projects[colorbox][version] = "2.4"

projects[openlayers][subdir] = "contrib"
projects[openlayers][version] = "2.0-beta7"
projects[openlayers][patch][] = "http://drupal.org/files/issues/make_file-2191149-3.patch"

projects[proj4js][subdir] = "contrib"
projects[proj4js][version] = "1.2"

projects[geofield][subdir] = "contrib"
projects[geofield][version] = "2.1"
projects[geofield][patch][] = "http://drupal.org/files/issues/geofield-sql-error-when-using-proximity-filter-through-view-relation-2153025-1.patch"

projects[geophp][subdir] = "contrib"
projects[geophp][version] = "1.7"

projects[nodequeue][type] = "module"
projects[nodequeue][subdir] = "contrib"
projects[nodequeue][download][type] = "git"
projects[nodequeue][download][url] = "http://git.drupal.org/project/nodequeue.git"
projects[nodequeue][download][branch] = "7.x-2.x"
projects[nodequeue][download][revision] = "da058c05241fe6af3fec36c9231be7e1604560c4"
projects[nodequeue][patch][] = "http://drupal.org/files/nodequeue_creation_slow-2037033-1.patch"

projects[nodequeue_reference][type] = "module"
projects[nodequeue_reference][subdir] = "contrib"
projects[nodequeue_reference][download][type] = "git"
projects[nodequeue_reference][download][branch] = "7.x-1.x"
projects[nodequeue_reference][download][revision] = "0e773a0cbdee7a5727a3373d627ffed1870a2739"
projects[nodequeue_reference][patch][] = "http://drupal.org/files/syntax_error-nodequeue_reference-2091045-1.patch"

projects[references_dialog][type] = "module"
projects[references_dialog][subdir] = "contrib"
projects[references_dialog][download][type] = "git"
projects[references_dialog][download][url] = "http://git.drupal.org/project/references_dialog.git"
projects[references_dialog][download][branch] = "7.x-1.x"
projects[references_dialog][download][revision] = "c2457782d07791a2263574c979d0f4b1765a85c2"
projects[references_dialog][patch][] = "http://drupal.org/files/issues/improve_us-2154513-1.patch"

projects[views_datasource][type] = "module"
projects[views_datasource][subdir] = "contrib"
projects[views_datasource][download][type] = "git"
projects[views_datasource][download][url] = "http://git.drupal.org/project/views_datasource.git"
projects[views_datasource][download][branch] = "7.x-1.x"
projects[views_datasource][download][revision] = "3fc7248547db42ca8323353b571f22f1a80d387f"

projects[apachesolr][type] = "module"
projects[apachesolr][subdir] = "contrib"
projects[apachesolr][download][type] = "git"
projects[apachesolr][download][url] = "http://git.drupal.org/project/apachesolr.git"
projects[apachesolr][download][branch] = "7.x-1.x"
projects[apachesolr][download][revision] = "329c47373b1c97d9b0314dee7a6ce51b1afa963c"
projects[apachesolr][patch][] = "http://drupal.org/files/apachesolr_module_file_entity_module-1992050-3.patch"
projects[apachesolr][patch][] = "http://drupal.org/files/issues/dot_access_denied-apachesolr.patch"
projects[apachesolr][patch][] = "http://drupal.org/files/issues/drush_site_install_errors-apachesolr-2194539-1.patch"

projects[apachesolr_file][type] = "module"
projects[apachesolr_file][subdir] = "contrib"
projects[apachesolr_file][download][type] = "git"
projects[apachesolr_file][download][url] = "http://git.drupal.org/project/apachesolr_file.git"
projects[apachesolr_file][download][branch] = "7.x-1.x"
projects[apachesolr_file][download][revision] = "c7c258736d09e6fe00445c6af9141808e9e8a8a0"

projects[apachesolr_views][type] = "module"
projects[apachesolr_views][subdir] = "contrib"
projects[apachesolr_views][download][type] = "git"
projects[apachesolr_views][download][url] = "http://git.drupal.org/project/apachesolr_views.git"
projects[apachesolr_views][download][branch] = "7.x-1.x"
projects[apachesolr_views][download][revision] = "36f14d15efc01dc528a224148ae15d576b7e0901"
projects[apachesolr_views][patch][] = "http://drupal.org/files/set_group_operator-1761432-1.patch"
projects[apachesolr_views][patch][] = "http://drupal.org/files/use_arguments-1750952-13.patch"
projects[apachesolr_views][patch][] = "http://drupal.org/files/1791908.patch"
projects[apachesolr_views][patch][] = "http://drupal.org/files/issues/exposed_multiple_sort-apachesolr_views-2145205-1.patch"
projects[apachesolr_views][patch][] = "http://drupal.org/files/issues/apachesolr_views-1766254-10-do-not-test.patch"
projects[apachesolr_views][patch][] = "http://drupal.org/files/issues/date_filter_relative-apachesolr_views-2191157-1.patch"
projects[apachesolr_views][patch][] = "http://drupal.org/files/issues/drush_site_install_errors-apachesolr_views-2194541-1.patch"
projects[apachesolr_views][patch][] = "http://drupal.org/files/apachesolr_views_decode_entities.patch"

projects[apachesolr_multisitesearch][type] = "module"
projects[apachesolr_multisitesearch][subdir] = "contrib"
projects[apachesolr_multisitesearch][download][type] = "git"
projects[apachesolr_multisitesearch][download][url] = "http://git.drupal.org/project/apachesolr_multisitesearch.git"
projects[apachesolr_multisitesearch][download][branch] = "7.x-1.x"
projects[apachesolr_multisitesearch][download][revision] = "f64671aa384c44219566a68167f88d64bf9385b5"
projects[apachesolr_multisitesearch][patch][] = "http://drupal.org/files/apachesolr_multisitesearch-add-row-params-1145924-6.patch"

projects[apachesolr_exclude_node][subdir] = "contrib"
projects[apachesolr_exclude_node][version] = "1.1"

projects[facetapi][type] = "module"
projects[facetapi][subdir] = "contrib"
projects[facetapi][download][type] = "git"
projects[facetapi][download][url] = "http://git.drupal.org/project/facetapi.git"
projects[facetapi][download][branch] = "7.x-1.x"
projects[facetapi][download][revision] = "77069510977ff502d2d5e10153fff98c96f21c3e"

projects[ckeditor][type] = "module"
projects[ckeditor][subdir] = "contrib"
projects[ckeditor][download][type] = "git"
projects[ckeditor][download][url] = "http://git.drupal.org/project/ckeditor.git"
projects[ckeditor][download][branch] = "7.x-1.x"
projects[ckeditor][download][revision] = "57245a9d6073ad4756cb02387bb640f273a22e33"
projects[ckeditor][patch][] = "http://drupal.org/files/ckeditor-media-plugin-files-1898958-4.patch"
projects[ckeditor][patch][] = "http://drupal.org/files/ckeditor-media-alt-title-1475774-2_0.patch"
projects[ckeditor][patch][] = "http://drupal.org/files/2024149-ckeditor-media-broken-image-ie8-2.patch"
projects[ckeditor][patch][] = "http://drupal.org/files/ckeditor-translation-1203846-17.patch"
projects[ckeditor][patch][] = "http://drupal.org/files/ckeditor-media_ie_fix-1914904-4.patch"

projects[views_php][type] = "module"
projects[views_php][subdir] = "contrib"
projects[views_php][download][type] = "git"
projects[views_php][download][url] = "http://git.drupal.org/project/views_php.git"
projects[views_php][download][branch] = "7.x-1.x"
projects[views_php][download][revision] = "2b5ed52228394ee3c8e8c86be283da957cdfa6f6"

; Add modules for newsletter integration

projects[simplenews][subdir]  = "contrib"
projects[simplenews][version] = "1.1"
projects[simplenews][patch][] = "http://drupal.org/files/issues/simplenews-configurable-category-selection-behavior-2139061-2.patch"

projects[simplenews_content_selection][subdir]  = "contrib"
projects[simplenews_content_selection][version] = "2.0"

projects[mimemail][type] = "module"
projects[mimemail][subdir] = "contrib"
projects[mimemail][download][type] = "git"
projects[mimemail][download][url] = "http://git.drupal.org/project/mimemail.git"
projects[mimemail][download][branch] = "7.x-1.x"
projects[mimemail][download][revision] = "fa49164fdd55c8980f28c49e6b6ddb6994a43004"

projects[mailsystem][subdir]  = "contrib"
projects[mailsystem][version] = "2.34"

projects[queue_mail][subdir]  = "contrib"
projects[queue_mail][version] = "1.2"

projects[views_calc][subdir]  = "contrib"
projects[views_calc][version] = "1.0"
projects[views_calc][patch][] = "http://drupal.org/files/views_calc-typo-1618286-4.patch"

projects[node_clone][type] = "module"
projects[node_clone][subdir] = "contrib"
projects[node_clone][download][type] = "git"
projects[node_clone][download][url] = "http://git.drupal.org/project/node_clone.git"
projects[node_clone][download][branch] = "7.x-1.x"
projects[node_clone][download][revision] = "c5c608122855c0f49cee273a022ff22d5e0b53e3"


projects[views_bulk_operations][subdir]  = "contrib"
projects[views_bulk_operations][version] = "3.1"

projects[coder][subdir] = "contrib"
projects[coder][version] = "2.0"
projects[coder][patch][] = "http://drupal.org/files/php-52-fix.patch"

projects[views_node_access][subdir]  = "contrib"
projects[views_node_access][version] = "1.1"

projects[views_node_access][type] = "module"
projects[views_node_access][subdir] = "contrib"
projects[views_node_access][download][type] = "git"
projects[views_node_access][download][url] = "http://git.drupal.org/project/views_node_access.git"
projects[views_node_access][download][branch] = "7.x-1.x"
projects[views_node_access][download][revision] = "45d7242ba38d0d7e3c1c1ae58551bc56d6d9106d"
projects[views_node_access][patch][] = "http://drupal.org/files/views_node_access-extend-visibility-of-options-1964728-1.patch"

projects[galleria][type] = "module"
projects[galleria][subdir] = "contrib"
projects[galleria][download][type] = "git"
projects[galleria][download][url] = "http://git.drupal.org/project/galleria.git"
projects[galleria][download][branch] = "7.x-1.x"
projects[galleria][download][revision] = "a8989cda34fddaf6e3b4b6373c05a87093d14f6c"
projects[galleria][patch][] = "http://drupal.org/files/add_title_and_alt_attributes-2018801-1.patch"

projects[entity_view_mode][subdir]  = "contrib"
projects[entity_view_mode][version] = "1.0-rc1"

projects[views_rss][subdir]  = "contrib"
projects[views_rss][version] = "2.0-rc3"

; projects[hierarchical_select][type] = "module"
; projects[hierarchical_select][subdir] = "contrib"
; projects[hierarchical_select][download][type] = "git"
; projects[hierarchical_select][download][url] = "http://git.drupal.org/project/hierarchical_select.git"
; projects[hierarchical_select][download][branch] = "7.x-3.x-dev"
; projects[hierarchical_select][download][revision] = "a79c119d8b0b1be458479c2802f552e0e080034c"
; projects[hierarchical_select][patch][] = "http://drupal.org/files/hierarchical_select-machine-name-features-1477292-10.patch"

projects[l10n_update][type] = "module"
projects[l10n_update][subdir] = "contrib"
projects[l10n_update][download][type] = "git"
projects[l10n_update][download][url] = "http://git.drupal.org/project/l10n_update.git"
projects[l10n_update][download][branch] = "7.x-1.x"
projects[l10n_update][download][revision] = "8c85a9fa48206bfb3349eae78d752863bbf142e9"

projects[variable][subdir]  = "contrib"
projects[variable][version] = "2.3"

projects[i18n][subdir]  = "contrib"
projects[i18n][version] = "1.10"
projects[i18n][patch][] = "http://drupal.org/files/i18n_block-Context-not-respecting-block-language-1343044-9.patch"
projects[i18n][patch][] = "http://drupal.org/files/issues/entityreference_label_not_translated-2219465-1.patch"

projects[l10n_client][subdir]  = "contrib"
projects[l10n_client][version] = "1.3"

projects[i18nviews][type] = "module"
projects[i18nviews][subdir] = "contrib"
projects[i18nviews][download][type] = "git"
projects[i18nviews][download][url] = "http://git.drupal.org/project/i18nviews.git"
projects[i18nviews][download][branch] = "7.x-3.x"
projects[i18nviews][download][revision] = "26bd52c4664b0fec8155273f0c0f3ab8a5a2ef66"

projects[translation_helpers][subdir]  = "contrib"
projects[translation_helpers][version] = "1.0"

projects[bean][subdir]  = "contrib"
projects[bean][version] = "1.2"

projects[context_entity_field][subdir]  = "contrib"
projects[context_entity_field][version] = "1.1"

projects[features_extra][subdir]  = "contrib"
projects[features_extra][version] = "1.0-beta1"

projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = "1.2"

projects[globalredirect][subdir] = "contrib"
projects[globalredirect][version] = "1.5"

projects[redirect][subdir] = "contrib"
projects[redirect][version] = "1.0-rc1"

projects[views_slideshow][subdir] = "contrib"
projects[views_slideshow][version] = "3.0"

projects[apachesolr_workbench_moderation][subdir] = "contrib"
projects[apachesolr_workbench_moderation][version] = "1.1"

projects[token_tweaks][type] = "module"
projects[token_tweaks][subdir] = "contrib"
projects[token_tweaks][download][type] = "git"
projects[token_tweaks][download][url] = "http://git.drupal.org/project/token_tweaks.git"
projects[token_tweaks][download][branch] = "7.x-1.x"
projects[token_tweaks][download][revision] = "d41e30f0a3f256337d2e9f0bdd0cead8fdb85f08"

projects[content_taxonomy][subdir] = "contrib"
projects[content_taxonomy][version] = "1.0-beta2"

projects[nagios][subdir] = "contrib"
projects[nagios][version] = "1.2"

projects[filter_perms][subdir] = "contrib"
projects[filter_perms][version] = "1.0"

projects[administerusersbyrole][type] = "module"
projects[administerusersbyrole][subdir] = "contrib"
projects[administerusersbyrole][download][type] = "git"
projects[administerusersbyrole][download][url] = "http://git.drupal.org/project/administerusersbyrole.git"
projects[administerusersbyrole][download][branch] = "7.x-1.x"
projects[administerusersbyrole][download][revision] = "9a4ee4a3ed9d8bc9c8f51b1e1257eb8a0aa784c2"

projects[role_delegation][subdir] = "contrib"
projects[role_delegation][version] = "1.1"

projects[memcache][type] = "module"
projects[memcache][subdir] = "contrib"
projects[memcache][download][type] = "git"
projects[memcache][download][url] = "http://git.drupal.org/project/memcache.git"
projects[memcache][download][branch] = "7.x-1.x"
projects[memcache][download][revision] = "7.x-1.1-beta1"

projects[varnish][type] = "module"
projects[varnish][subdir] = "contrib"
projects[varnish][download][type] = "git"
projects[varnish][download][url] = "http://git.drupal.org/project/varnish.git"
projects[varnish][download][branch] = "7.x-1.x"
projects[varnish][download][revision] = "d4cddfed72855199be9dd0047f5d80183c723ac0"
projects[varnish][patch][] = "http://drupal.org/files/issues/varnish-fix-hook_flush_caches-running-2160451.patch"

projects[taxonomy_orphanage][subdir] = "contrib"
projects[taxonomy_orphanage][version] = "1.1"

projects[lang_dropdown][type] = "module"
projects[lang_dropdown][subdir] = "contrib"
projects[lang_dropdown][download][type] = "git"
projects[lang_dropdown][download][url] = "http://git.drupal.org/project/lang_dropdown.git"
projects[lang_dropdown][download][branch] = "7.x-1.x"
projects[lang_dropdown][download][revision] = "7a0e470a303997deeaa4067ac36c95e2ddc1f190"

projects[languageicons][type] = "module"
projects[languageicons][subdir] = "contrib"
projects[languageicons][download][type] = "git"
projects[languageicons][download][url] = "http://git.drupal.org/project/languageicons.git"
projects[languageicons][download][branch] = "7.x-1.x"
projects[languageicons][download][revision] = "192075299dfdb0a023924e7089a1ba49366ef06e"

projects[media_23video][type] = "module"
projects[media_23video][subdir] = "contrib"
projects[media_23video][download][type] = "git"
projects[media_23video][download][url] = "http://git.drupal.org/project/media_23video.git"
projects[media_23video][download][branch] = "7.x-1.x"
projects[media_23video][download][revision] = "b2b4e970eaa7c179f326a77b13ee7d0137816beb"

projects[field_group_panels][type] = "module"
projects[field_group_panels][subdir] = "contrib"
projects[field_group_panels][download][type] = "git"
projects[field_group_panels][download][url] = "http://git.drupal.org/sandbox/Hydra/1608256.git"
projects[field_group_panels][download][branch] = "7.x-1.x"
projects[field_group_panels][download][revision] = "4b092fa8ff14498e333edda5d37a4f0cbbb6ec87"

projects[email][subdir] = "contrib"
projects[email][version] = "1.2"
projects[email][patch][] = "http://drupal.org/files/issues/edit_link_and_title_text-1346102-12.patch"
projects[email][patch][] = "http://drupal.org/files/callback-1372310-1.patch"

projects[phone][type] = "module"
projects[phone][subdir] = "contrib"
projects[phone][download][type] = "git"
projects[phone][download][url] = "http://git.drupal.org/project/phone.git"
projects[phone][download][branch] = "7.x-1.x"
projects[phone][download][revision] = "173dd71fc755c61ed7757f3ea5d7e12ce970e5d9"
projects[phone][patch][] = "http://drupal.org/files/issues/phone-international-2108707-1.patch"

projects[nodehierarchy][type] = "module"
projects[nodehierarchy][subdir] = "contrib"
projects[nodehierarchy][download][type] = "git"
projects[nodehierarchy][download][url] = "http://git.drupal.org/project/nodehierarchy.git"
projects[nodehierarchy][download][branch] = "7.x-2.x"
projects[nodehierarchy][download][revision] = "6c31c17cb39303e58b4b1f9fe973f942a93fea16"
projects[nodehierarchy][patch][] = "http://drupal.org/files/issues/node_successor-2134293-3.patch"
projects[nodehierarchy][patch][] = "http://drupal.org/files/issues/notice_undefined_offset-2136639-1.patch"
projects[nodehierarchy][patch][] = "http://drupal.org/files/issues/nodehierarchy-view-building-problem-2169549-1.patch"

projects[services_views][type] = "module"
projects[services_views][subdir] = "contrib"
projects[services_views][download][type] = "git"
projects[services_views][download][url] = "http://git.drupal.org/project/services_views.git"
projects[services_views][download][branch] = "7.x-1.x"
projects[services_views][download][revision] = "e30674c31c07ec11b530bc2741f8ef677d4ae9d2"
projects[services_views][patch][] = "http://drupal.org/files/issues/notice-2133041-1.patch"

projects[tipsy][subdir] = "contrib"
projects[tipsy][version] = "1.0-rc1"

; Accessibility

projects[node_accessibility][subdir] = "contrib"
projects[node_accessibility][version] = "1.3"

projects[node_accessibility_statistics][subdir] = "contrib"
projects[node_accessibility_statistics][version] = "1.2"

projects[quail_api][subdir] = "contrib"
projects[quail_api][version] = "1.2"
projects[quail_api][patch][] = "http://drupal.org/files/quail_api-7.x-1.x-issue_2101559-1.patch"

projects[phplot_api][subdir] = "contrib"
projects[phplot_api][version] = "1.2"

projects[cf][subdir] = "contrib"
projects[cf][version] = "2.0"

projects[queue_ui][subdir] = "contrib"
projects[queue_ui][version] = "2.0-rc1"

projects[uuid][subdir] = "contrib"
projects[uuid][version] = "1.0-alpha5"

projects[follow][subdir] = "contrib"
projects[follow][version] = "2.0-alpha1"

projects[twitter_block][subdir] = "contrib"
projects[twitter_block][version] = "2.1"

projects[instagram_block][subdir] = "contrib"
projects[instagram_block][version] = "1.0"

projects[fb_social][subdir] = "contrib"
projects[fb_social][version] = "2.0-beta4"

projects[password_policy][subdir] = "contrib"
projects[password_policy][version] = "1.5"

projects[login_security][subdir] = "contrib"
projects[login_security][version] = "1.8"

projects[security_review][subdir] = "contrib"
projects[security_review][version] = "1.1"

projects[google_analytics][subdir] = "contrib"
projects[google_analytics][version] = "1.4"

projects[metatag][subdir] = "contrib"
projects[metatag][version] = "1.0-beta7"

projects[eu-cookie-compliance][subdir] = "contrib"
projects[eu-cookie-compliance][version] = "1.12"

projects[facebook_comments][type] = "module"
projects[facebook_comments][subdir] = "contrib"
projects[facebook_comments][download][type] = "git"
projects[facebook_comments][download][url] = "http://git.drupal.org/project/facebook_comments.git"
projects[facebook_comments][download][branch] = "7.x-1.x"
projects[facebook_comments][download][revision] = "5ce57607adab692fe25c610ff0b423cbfbc37f87"
projects[facebook_comments][patch][] = "http://drupal.org/files/issues/default_disabled_per_node_type-facebook_comments-2152987-1.patch"


projects[node_edit_protection][type] = "module"
projects[node_edit_protection][subdir] = "contrib"
projects[node_edit_protection][download][type] = "git"
projects[node_edit_protection][download][url] = "http://git.drupal.org/project/node_edit_protection.git"
projects[node_edit_protection][download][branch] = "7.x-1.x"
projects[node_edit_protection][download][revision] = "0fdeb7263ea603767bb427868dd3509a798c85d6"

projects[captcha][subdir] = "contrib"
projects[captcha][version] = "1.0"

projects[recaptcha][subdir] = "contrib"
projects[recaptcha][version] = "1.10"

projects[forward][subdir] = "contrib"
projects[forward][version] = "2.0"

projects[pathologic][subdir] = "contrib"
projects[pathologic][version] = "2.12"

projects[feedback_simple][type] = "module"
projects[feedback_simple][subdir] = "contrib"
projects[feedback_simple][download][type] = "git"
projects[feedback_simple][download][url] = "http://git.drupal.org/project/feedback_simple.git"
projects[feedback_simple][download][branch] = "7.x-1.x"
projects[feedback_simple][download][revision] = "43bed1b166355ece5b7eb93358211d4f39d40a26"

projects[apachesolr_panels][type] = "module"
projects[apachesolr_panels][subdir] = "contrib"
projects[apachesolr_panels][download][type] = "git"
projects[apachesolr_panels][download][url] = "http://git.drupal.org/project/apachesolr_panels.git"
projects[apachesolr_panels][download][branch] = "7.x-1.x"
projects[apachesolr_panels][download][revision] = "7b49e370f22866283d8fe2c88bb66e8421d65516"
projects[apachesolr_panels][patch][] = "http://drupal.org/files/issues/search-information_2159125_1.patch"
projects[apachesolr_panels][patch][] = "http://drupal.org/files/issues/search-results_2159151_1.patch"

projects[chosen][type] = "module"
projects[chosen][subdir] = "contrib"
projects[chosen][download][type] = "git"
projects[chosen][download][url] = "http://git.drupal.org/project/chosen.git"
projects[chosen][download][branch] = "7.x-2.x"
projects[chosen][download][revision] = "a8e1cca8573a3757ec683f4dd571c62bc482aa5e"
projects[chosen][patch][] = "http://drupal.org/files/chosen-translation_of_default_text-1591908-12.patch"

projects[facetapi_multiselect][type] = "module"
projects[facetapi_multiselect][subdir] = "contrib"
projects[facetapi_multiselect][download][type] = "git"
projects[facetapi_multiselect][download][url] = "http://git.drupal.org/project/facetapi_multiselect.git"
projects[facetapi_multiselect][download][branch] = "7.x-1.x"
projects[facetapi_multiselect][download][revision] = "0ba5a1a882a479cc0920a1e6904fd3205f4b8c18"
projects[facetapi_multiselect][patch][] = "http://drupal.org/files/issues/1806344.13.count_autosubmit_removeSelected_0.patch"
projects[facetapi_multiselect][patch][] = "http://drupal.org/files/issues/broken_pagination-2150749-2.patch"

projects[facetapi_collapsible][type] = "module"
projects[facetapi_collapsible][subdir] = "contrib"
projects[facetapi_collapsible][download][type] = "git"
projects[facetapi_collapsible][download][url] = "http://git.drupal.org/project/facetapi_collapsible.git"
projects[facetapi_collapsible][download][branch] = "7.x-1.x"
projects[facetapi_collapsible][download][revision] = "88d15496926e1f9aa599e6b09afe09377a413482"
projects[facetapi_collapsible][patch][] = "http://drupal.org/files/issues/1985648_facetapi_collapsible_checkboxes_3.patch"

projects[expire][type] = "module"
projects[expire][subdir] = "contrib"
projects[expire][download][type] = "git"
projects[expire][download][url] = "http://git.drupal.org/project/expire.git"
projects[expire][download][branch] = "7.x-2.x"
projects[expire][download][revision] = "31278181ee43cbb063885b130751053887d52411"
projects[expire][patch][] = "http://drupal.org/files/issues/support_for_entity_references-1854156-4.patch"

