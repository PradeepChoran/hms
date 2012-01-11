; @file Help Management System makefile
; ----------------

core = 7.x
api = 2

; Core project
; ------------
; Use pressflow instead of Drupal core:
projects[pressflow][type] = "core"
projects[pressflow][download][type] = "git"
projects[pressflow][download][url] = "git://github.com/pressflow/7.git"

; Projects
; --------
projects[ctools][version] = 1.0-rc1
projects[ctools][type] = "module"
projects[ctools][subdir] = "contrib"

projects[features][version] = 1.0-beta4
projects[features][type] = "module"
projects[features][subdir] = "contrib"

projects[strongarm][version] = 2.0-beta3
projects[strongarm][type] = "module"
projects[strongarm][subdir] = "contrib"

projects[services][version] = 3.1
projects[services][type] = "module"
projects[services][subdir] = "contrib"

projects[media][version] = 1.0-rc2
projects[media][type] = "module"
projects[media][subdir] = "contrib"

projects[wysiwyg][version] = 2.1
projects[wysiwyg][type] = "module"
projects[wysiwyg][subdir] = "contrib"

projects[goodhelp][type] = "module"
projects[goodhelp][download][type] = "git"
projects[goodhelp][download][url] = "http://git.drupal.org/sandbox/grayside/1361976.git"
projects[goodhelp][download]['branch'] = "6.x-1.x"

; Libraries
; ---------
libraries[spyc][type] = "libraries"
libraries[spyc][download][type] = "file"
libraries[spyc][download][url] = "http://spyc.googlecode.com/files/spyc-0.5.zip"
libraries[spyc][destination] = "modules/contrib/services/servers/rest_server/lib"

libraries[ckeditor][type] = "libraries"
libraries[ckeditor][download][type] = "file"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.2/ckeditor_3.6.2.tar.gz"
