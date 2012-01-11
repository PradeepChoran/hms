; @file Help Management System makefile stub
; ----------------
core = 7.x
api = 2

; Core project
; ------------
; Use pressflow instead of Drupal core:
projects[pressflow][type] = "core"
projects[pressflow][download][type] = "git"
projects[pressflow][download][url] = "git://github.com/pressflow/7.git"