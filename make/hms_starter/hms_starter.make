; @file Help Management System profile makefile
; ----------------
core = 7.x
api = 2

; Projects
; --------
projects[ctools][version] = 1.0-rc1
projects[ctools][subdir] = "contrib"

projects[features][version] = 1.0-beta4
projects[features][subdir] = "contrib"

projects[strongarm][version] = 2.0-beta3
projects[strongarm][subdir] = "contrib"

projects[services][version] = 3.1
projects[services][subdir] = "contrib"

projects[media][version] = 1.0-rc2
projects[media][subdir] = "contrib"

projects[wysiwyg][version] = 2.1
projects[wysiwyg][subdir] = "contrib"

projects[goodhelp][download][type] = "git"
projects[goodhelp][download][url] = "http://git.drupal.org/sandbox/grayside/1361976.git"
projects[goodhelp][download]['branch'] = "7.x-1.x"

; Libraries
; ---------
libraries[spyc][type] = "libraries"
libraries[spyc][download][type] = "file"
libraries[spyc][download][url] = "http://spyc.googlecode.com/files/spyc-0.5.zip"
libraries[spyc][destination] = "modules/contrib/services/servers/rest_server/lib"

libraries[ckeditor][type] = "libraries"
libraries[ckeditor][download][type] = "file"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.2/ckeditor_3.6.2.tar.gz"