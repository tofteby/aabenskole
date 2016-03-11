core = 7.x
api = 2

projects[drupal][type] = "core"
projects[drupal][download][type] = "get"
projects[drupal][download][url] = "http://ftp.drupal.org/files/projects/drupal-7.26.tar.gz"
projects[drupal][patch][] = "http://drupal.org/files/1708476-increase-file-extension-maxlength.patch"
projects[drupal][patch][] = "http://drupal.org/files/taxonomy-add-alter-hook-for-autocomplete-callback-results-2069967-2.patch"
projects[drupal][patch][] = "http://drupal.org/files/file-repeated-error-message-on-ajax-upload-1792032-15.patch"
projects[drupal][patch][] = "http://drupal.org/files/file-clear-file-input-value-after-failed-extension-validation-2071743-1.patch"

includes[] = https://kkgit.kk.dk/drupal-7-kkms-modules/kkms_profile/raw/dev/contrib.make?private_token=a7rLF5tWAer6DYvCqyBd
includes[] = https://kkgit.kk.dk/drupal-7-kkms-modules/kkms_profile/raw/dev/features.make?private_token=a7rLF5tWAer6DYvCqyBd
includes[] = https://kkgit.kk.dk/drupal-7-kkms-modules/kkms_profile/raw/dev/custom.make?private_token=a7rLF5tWAer6DYvCqyBd

; Profiles
projects[kkms_profile][download][type] = git
projects[kkms_profile][download][url] = git@kkgit.kk.dk:drupal-7-kkms-modules/kkms_profile.git
projects[kkms_profile][download][branch] = dev
projects[kkms_profile][type] = profile
