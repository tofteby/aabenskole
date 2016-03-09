core = "7.x"
api = "2"

; KKMS inheritance
includes[] = "https://kkgit.kk.dk/drupal-7-kkms-modules/kkms_profile/raw/7.x-1.5/release.make?private_token=a7rLF5tWAer6DYvCqyBd"

; KKMS-OS includes
includes[] = "https://kkgit.kk.dk/drupal-7-kkms-os/kkms_os_profile/raw/dev/contrib.make?private_token=a7rLF5tWAer6DYvCqyBd"
includes[] = "https://kkgit.kk.dk/drupal-7-kkms-os/kkms_os_profile/raw/dev/features.make?private_token=a7rLF5tWAer6DYvCqyBd"
includes[] = "https://kkgit.kk.dk/drupal-7-kkms-os/kkms_os_profile/raw/dev/custom.make?private_token=a7rLF5tWAer6DYvCqyBd"

; Profiles
projects[kos_profile][download][type] = git
projects[kos_profile][download][url] = git@kkgit.kk.dk:drupal-7-kkms-os/kkms_os_profile.git
projects[kos_profile][download][branch] = dev
projects[kos_profile][type] = profile
