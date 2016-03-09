core = "7.x"
api = "2"

; Add custom module definitions and overrides here.

; Themes
projects[kos_theme][download][type] = git
projects[kos_theme][download][url] = "git@kkgit.kk.dk:drupal-7-kkms-os/kos_theme.git"
projects[kos_theme][download][branch] = dev
projects[kos_theme][type] = theme

; Modules
projects[kos_search][download][type] = "git"
projects[kos_search][download][url] = "git@kkgit.kk.dk:drupal-7-kkms-os/kos_search.git"
projects[kos_search][download][branch] = "dev"
projects[kos_search][type] = "module"
projects[kos_search][subdir] = "custom"
