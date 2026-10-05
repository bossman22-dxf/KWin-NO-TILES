# Install script for directory: /home/ty/kwin/src/kwin-6.7.5/kconf_update

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.0-delete-desktop-switching-shortcuts" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.0-delete-desktop-switching-shortcuts")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.0-delete-desktop-switching-shortcuts"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin" TYPE EXECUTABLE FILES "/home/ty/kwin/src/build/bin/kwin-6.0-delete-desktop-switching-shortcuts")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.0-delete-desktop-switching-shortcuts" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.0-delete-desktop-switching-shortcuts")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.0-delete-desktop-switching-shortcuts")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/ty/kwin/src/build/kconf_update/CMakeFiles/kwin-6.0-delete-desktop-switching-shortcuts.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.0-reset-active-mouse-screen" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.0-reset-active-mouse-screen")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.0-reset-active-mouse-screen"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin" TYPE EXECUTABLE FILES "/home/ty/kwin/src/build/bin/kwin-6.0-reset-active-mouse-screen")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.0-reset-active-mouse-screen" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.0-reset-active-mouse-screen")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.0-reset-active-mouse-screen")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/ty/kwin/src/build/kconf_update/CMakeFiles/kwin-6.0-reset-active-mouse-screen.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.0-remove-breeze-tabbox-default" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.0-remove-breeze-tabbox-default")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.0-remove-breeze-tabbox-default"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin" TYPE EXECUTABLE FILES "/home/ty/kwin/src/build/bin/kwin-6.0-remove-breeze-tabbox-default")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.0-remove-breeze-tabbox-default" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.0-remove-breeze-tabbox-default")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.0-remove-breeze-tabbox-default")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/ty/kwin/src/build/kconf_update/CMakeFiles/kwin-6.0-remove-breeze-tabbox-default.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.1-remove-gridview-expose-shortcuts" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.1-remove-gridview-expose-shortcuts")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.1-remove-gridview-expose-shortcuts"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin" TYPE EXECUTABLE FILES "/home/ty/kwin/src/build/bin/kwin-6.1-remove-gridview-expose-shortcuts")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.1-remove-gridview-expose-shortcuts" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.1-remove-gridview-expose-shortcuts")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.1-remove-gridview-expose-shortcuts")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/ty/kwin/src/build/kconf_update/CMakeFiles/kwin-6.1-remove-gridview-expose-shortcuts.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.5-showpaint-changes" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.5-showpaint-changes")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.5-showpaint-changes"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin" TYPE EXECUTABLE FILES "/home/ty/kwin/src/build/bin/kwin-6.5-showpaint-changes")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.5-showpaint-changes" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.5-showpaint-changes")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kconf_update_bin/kwin-6.5-showpaint-changes")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/ty/kwin/src/build/kconf_update/CMakeFiles/kwin-6.5-showpaint-changes.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kconf_update" TYPE FILE FILES "/home/ty/kwin/src/kwin-6.7.5/kconf_update/kwin.upd")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/ty/kwin/src/build/kconf_update/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
