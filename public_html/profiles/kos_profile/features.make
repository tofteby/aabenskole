core = "7.x"
api = "2"

; Override KKMS features destination firectory.
projects[kkms_features][subdir] = "features"
projects[kkms_features][directory_name] = "kkms_features"

; Add custom features definitions here.
projects[kos_features][download][type] = "git"
projects[kos_features][download][url] = "git@kkgit.kk.dk:drupal-7-kkms-os/kos_features.git"
projects[kos_features][download][branch] = "dev"
projects[kos_features][type] = "module"
projects[kos_features][subdir] = "features"
projects[kos_features][directory_name] = "kos_features"
