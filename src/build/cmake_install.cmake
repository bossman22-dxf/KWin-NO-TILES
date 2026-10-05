# Install script for directory: /home/ty/kwin/src/kwin-6.7.5

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/ty/kwin/src/build/doc/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ca/kcontrol/desktop" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/ca/docs/kcontrol/desktop/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/ca/docs/kcontrol/desktop/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ca/kcontrol/kwindecoration" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/ca/docs/kcontrol/kwindecoration/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/ca/docs/kcontrol/kwindecoration/index.docbook"
    "/home/ty/kwin/src/kwin-6.7.5/po/ca/docs/kcontrol/kwindecoration/button.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ca/docs/kcontrol/kwindecoration/decoration.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ca/docs/kcontrol/kwindecoration/main.png"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ca/kcontrol/kwineffects" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/ca/docs/kcontrol/kwineffects/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/ca/docs/kcontrol/kwineffects/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ca/kcontrol/kwinscreenedges" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/ca/docs/kcontrol/kwinscreenedges/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/ca/docs/kcontrol/kwinscreenedges/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ca/kcontrol/kwintabbox" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/ca/docs/kcontrol/kwintabbox/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/ca/docs/kcontrol/kwintabbox/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ca/kcontrol/kwintouchscreen" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/ca/docs/kcontrol/kwintouchscreen/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/ca/docs/kcontrol/kwintouchscreen/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ca/kcontrol/kwinvirtualkeyboard" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/ca/docs/kcontrol/kwinvirtualkeyboard/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/ca/docs/kcontrol/kwinvirtualkeyboard/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ca/kcontrol/windowbehaviour" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/ca/docs/kcontrol/windowbehaviour/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/ca/docs/kcontrol/windowbehaviour/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ca/kcontrol/windowspecific" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/ca/docs/kcontrol/windowspecific/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/ca/docs/kcontrol/windowspecific/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/de/kcontrol/desktop" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/de/docs/kcontrol/desktop/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/de/docs/kcontrol/desktop/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/de/kcontrol/kwindecoration" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/de/docs/kcontrol/kwindecoration/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/de/docs/kcontrol/kwindecoration/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/de/kcontrol/kwineffects" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/de/docs/kcontrol/kwineffects/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/de/docs/kcontrol/kwineffects/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/de/kcontrol/kwinscreenedges" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/de/docs/kcontrol/kwinscreenedges/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/de/docs/kcontrol/kwinscreenedges/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/de/kcontrol/kwintabbox" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/de/docs/kcontrol/kwintabbox/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/de/docs/kcontrol/kwintabbox/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/de/kcontrol/kwintouchscreen" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/de/docs/kcontrol/kwintouchscreen/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/de/docs/kcontrol/kwintouchscreen/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/de/kcontrol/kwinvirtualkeyboard" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/de/docs/kcontrol/kwinvirtualkeyboard/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/de/docs/kcontrol/kwinvirtualkeyboard/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/de/kcontrol/windowbehaviour" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/de/docs/kcontrol/windowbehaviour/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/de/docs/kcontrol/windowbehaviour/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/de/kcontrol/windowspecific" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/de/docs/kcontrol/windowspecific/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/de/docs/kcontrol/windowspecific/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/es/kcontrol/desktop" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/es/docs/kcontrol/desktop/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/es/docs/kcontrol/desktop/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/es/kcontrol/kwindecoration" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/es/docs/kcontrol/kwindecoration/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/es/docs/kcontrol/kwindecoration/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/es/kcontrol/kwineffects" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/es/docs/kcontrol/kwineffects/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/es/docs/kcontrol/kwineffects/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/es/kcontrol/kwinscreenedges" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/es/docs/kcontrol/kwinscreenedges/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/es/docs/kcontrol/kwinscreenedges/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/es/kcontrol/kwintouchscreen" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/es/docs/kcontrol/kwintouchscreen/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/es/docs/kcontrol/kwintouchscreen/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/es/kcontrol/kwinvirtualkeyboard" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/es/docs/kcontrol/kwinvirtualkeyboard/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/es/docs/kcontrol/kwinvirtualkeyboard/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/fr/kcontrol/desktop" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/fr/docs/kcontrol/desktop/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/fr/docs/kcontrol/desktop/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/fr/kcontrol/kwindecoration" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/fr/docs/kcontrol/kwindecoration/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/fr/docs/kcontrol/kwindecoration/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/fr/kcontrol/kwinscreenedges" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/fr/docs/kcontrol/kwinscreenedges/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/fr/docs/kcontrol/kwinscreenedges/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/fr/kcontrol/kwintabbox" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/fr/docs/kcontrol/kwintabbox/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/fr/docs/kcontrol/kwintabbox/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/fr/kcontrol/windowspecific" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/fr/docs/kcontrol/windowspecific/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/fr/docs/kcontrol/windowspecific/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/id/kcontrol/desktop" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/id/docs/kcontrol/desktop/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/id/docs/kcontrol/desktop/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/id/kcontrol/kwindecoration" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/id/docs/kcontrol/kwindecoration/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/id/docs/kcontrol/kwindecoration/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/id/kcontrol/kwineffects" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/id/docs/kcontrol/kwineffects/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/id/docs/kcontrol/kwineffects/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/id/kcontrol/kwinscreenedges" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/id/docs/kcontrol/kwinscreenedges/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/id/docs/kcontrol/kwinscreenedges/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/id/kcontrol/kwintabbox" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/id/docs/kcontrol/kwintabbox/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/id/docs/kcontrol/kwintabbox/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/id/kcontrol/windowbehaviour" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/id/docs/kcontrol/windowbehaviour/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/id/docs/kcontrol/windowbehaviour/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/id/kcontrol/windowspecific" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/id/docs/kcontrol/windowspecific/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/id/docs/kcontrol/windowspecific/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/it/kcontrol/desktop" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/it/docs/kcontrol/desktop/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/it/docs/kcontrol/desktop/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/it/kcontrol/kwindecoration" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/it/docs/kcontrol/kwindecoration/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/it/docs/kcontrol/kwindecoration/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/it/kcontrol/kwineffects" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/it/docs/kcontrol/kwineffects/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/it/docs/kcontrol/kwineffects/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/it/kcontrol/kwinscreenedges" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/it/docs/kcontrol/kwinscreenedges/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/it/docs/kcontrol/kwinscreenedges/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/it/kcontrol/kwintabbox" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/it/docs/kcontrol/kwintabbox/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/it/docs/kcontrol/kwintabbox/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/it/kcontrol/kwintouchscreen" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/it/docs/kcontrol/kwintouchscreen/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/it/docs/kcontrol/kwintouchscreen/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/it/kcontrol/kwinvirtualkeyboard" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/it/docs/kcontrol/kwinvirtualkeyboard/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/it/docs/kcontrol/kwinvirtualkeyboard/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/it/kcontrol/windowbehaviour" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/it/docs/kcontrol/windowbehaviour/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/it/docs/kcontrol/windowbehaviour/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/it/kcontrol/windowspecific" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/it/docs/kcontrol/windowspecific/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/it/docs/kcontrol/windowspecific/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/nl/kcontrol/desktop" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/nl/docs/kcontrol/desktop/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/nl/docs/kcontrol/desktop/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/nl/kcontrol/kwindecoration" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/nl/docs/kcontrol/kwindecoration/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/nl/docs/kcontrol/kwindecoration/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/nl/kcontrol/kwineffects" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/nl/docs/kcontrol/kwineffects/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/nl/docs/kcontrol/kwineffects/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/nl/kcontrol/kwinscreenedges" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/nl/docs/kcontrol/kwinscreenedges/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/nl/docs/kcontrol/kwinscreenedges/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/nl/kcontrol/kwintabbox" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/nl/docs/kcontrol/kwintabbox/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/nl/docs/kcontrol/kwintabbox/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/nl/kcontrol/kwintouchscreen" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/nl/docs/kcontrol/kwintouchscreen/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/nl/docs/kcontrol/kwintouchscreen/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/nl/kcontrol/kwinvirtualkeyboard" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/nl/docs/kcontrol/kwinvirtualkeyboard/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/nl/docs/kcontrol/kwinvirtualkeyboard/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/nl/kcontrol/windowbehaviour" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/nl/docs/kcontrol/windowbehaviour/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/nl/docs/kcontrol/windowbehaviour/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/nl/kcontrol/windowspecific" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/nl/docs/kcontrol/windowspecific/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/nl/docs/kcontrol/windowspecific/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/pt/kcontrol/desktop" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/pt/docs/kcontrol/desktop/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/pt/docs/kcontrol/desktop/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/pt/kcontrol/kwindecoration" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/pt/docs/kcontrol/kwindecoration/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/pt/docs/kcontrol/kwindecoration/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/pt/kcontrol/kwineffects" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/pt/docs/kcontrol/kwineffects/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/pt/docs/kcontrol/kwineffects/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/pt/kcontrol/kwinscreenedges" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/pt/docs/kcontrol/kwinscreenedges/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/pt/docs/kcontrol/kwinscreenedges/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/pt/kcontrol/kwintabbox" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/pt/docs/kcontrol/kwintabbox/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/pt/docs/kcontrol/kwintabbox/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/pt/kcontrol/windowbehaviour" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/pt/docs/kcontrol/windowbehaviour/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/pt/docs/kcontrol/windowbehaviour/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/pt/kcontrol/windowspecific" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/pt/docs/kcontrol/windowspecific/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/pt/docs/kcontrol/windowspecific/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/pt_BR/kcontrol/desktop" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/pt_BR/docs/kcontrol/desktop/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/pt_BR/docs/kcontrol/desktop/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/pt_BR/kcontrol/kwindecoration" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/pt_BR/docs/kcontrol/kwindecoration/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/pt_BR/docs/kcontrol/kwindecoration/index.docbook"
    "/home/ty/kwin/src/kwin-6.7.5/po/pt_BR/docs/kcontrol/kwindecoration/configure.png"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/pt_BR/kcontrol/kwineffects" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/pt_BR/docs/kcontrol/kwineffects/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/pt_BR/docs/kcontrol/kwineffects/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/pt_BR/kcontrol/kwinscreenedges" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/pt_BR/docs/kcontrol/kwinscreenedges/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/pt_BR/docs/kcontrol/kwinscreenedges/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/pt_BR/kcontrol/kwintabbox" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/pt_BR/docs/kcontrol/kwintabbox/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/pt_BR/docs/kcontrol/kwintabbox/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/pt_BR/kcontrol/kwintouchscreen" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/pt_BR/docs/kcontrol/kwintouchscreen/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/pt_BR/docs/kcontrol/kwintouchscreen/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/pt_BR/kcontrol/kwinvirtualkeyboard" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/pt_BR/docs/kcontrol/kwinvirtualkeyboard/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/pt_BR/docs/kcontrol/kwinvirtualkeyboard/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/pt_BR/kcontrol/windowbehaviour" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/pt_BR/docs/kcontrol/windowbehaviour/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/pt_BR/docs/kcontrol/windowbehaviour/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/pt_BR/kcontrol/windowspecific" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/pt_BR/docs/kcontrol/windowspecific/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/pt_BR/docs/kcontrol/windowspecific/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ru/kcontrol/desktop" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/ru/docs/kcontrol/desktop/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/desktop/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ru/kcontrol/kwindecoration" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/ru/docs/kcontrol/kwindecoration/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/kwindecoration/index.docbook"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/kwindecoration/button.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/kwindecoration/configure.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/kwindecoration/decoration.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/kwindecoration/main.png"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ru/kcontrol/kwineffects" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/ru/docs/kcontrol/kwineffects/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/kwineffects/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ru/kcontrol/kwinscreenedges" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/ru/docs/kcontrol/kwinscreenedges/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/kwinscreenedges/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ru/kcontrol/kwintabbox" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/ru/docs/kcontrol/kwintabbox/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/kwintabbox/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ru/kcontrol/kwintouchscreen" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/ru/docs/kcontrol/kwintouchscreen/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/kwintouchscreen/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ru/kcontrol/kwinvirtualkeyboard" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/ru/docs/kcontrol/kwinvirtualkeyboard/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/kwinvirtualkeyboard/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ru/kcontrol/windowbehaviour" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/ru/docs/kcontrol/windowbehaviour/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowbehaviour/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/ru/kcontrol/windowspecific" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/ru/docs/kcontrol/windowspecific/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/index.docbook"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/akgregator-info.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/akregator-attributes.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/akregator-fav.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/config-win-behavior.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/emacs-attribute.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/emacs-info.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/focus-stealing-pop2top-attribute.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/knotes-attribute.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/knotes-info.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/kopete-attribute-2.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/kopete-chat-attribute.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/kopete-chat-info.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/kopete-info.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/kwin-detect-window.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/kwin-kopete-rules.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/kwin-rule-editor.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/kwin-rules-main-n-akregator.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/kwin-rules-main.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/kwin-rules-ordering.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/kwin-window-attributes.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/kwin-window-matching.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/tbird-compose-attribute.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/tbird-compose-info.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/tbird-main-attribute.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/tbird-main-info.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/tbird-reminder-attribute-2.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/tbird-reminder-info.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/window-matching-emacs.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/window-matching-init.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/window-matching-knotes.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/window-matching-kopete-chat.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/window-matching-kopete.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/window-matching-ready-akregator.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/window-matching-tbird-compose.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/window-matching-tbird-main.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/ru/docs/kcontrol/windowspecific/window-matching-tbird-reminder.png"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sl/kcontrol/desktop" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/sl/docs/kcontrol/desktop/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/sl/docs/kcontrol/desktop/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sl/kcontrol/kwindecoration" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/sl/docs/kcontrol/kwindecoration/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/sl/docs/kcontrol/kwindecoration/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sl/kcontrol/kwineffects" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/sl/docs/kcontrol/kwineffects/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/sl/docs/kcontrol/kwineffects/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sl/kcontrol/kwinscreenedges" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/sl/docs/kcontrol/kwinscreenedges/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/sl/docs/kcontrol/kwinscreenedges/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sl/kcontrol/kwintabbox" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/sl/docs/kcontrol/kwintabbox/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/sl/docs/kcontrol/kwintabbox/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sl/kcontrol/kwintouchscreen" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/sl/docs/kcontrol/kwintouchscreen/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/sl/docs/kcontrol/kwintouchscreen/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sl/kcontrol/kwinvirtualkeyboard" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/sl/docs/kcontrol/kwinvirtualkeyboard/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/sl/docs/kcontrol/kwinvirtualkeyboard/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sl/kcontrol/windowbehaviour" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/sl/docs/kcontrol/windowbehaviour/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/sl/docs/kcontrol/windowbehaviour/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sl/kcontrol/windowspecific" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/sl/docs/kcontrol/windowspecific/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/sl/docs/kcontrol/windowspecific/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sr/kcontrol/desktop" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/sr/docs/kcontrol/desktop/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/sr/docs/kcontrol/desktop/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sr@latin/kcontrol/desktop" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/sr@latin/docs/kcontrol/desktop/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/sr@latin/docs/kcontrol/desktop/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sv/kcontrol/desktop" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/sv/docs/kcontrol/desktop/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/sv/docs/kcontrol/desktop/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sv/kcontrol/kwindecoration" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/sv/docs/kcontrol/kwindecoration/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/sv/docs/kcontrol/kwindecoration/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sv/kcontrol/kwineffects" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/sv/docs/kcontrol/kwineffects/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/sv/docs/kcontrol/kwineffects/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sv/kcontrol/kwinscreenedges" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/sv/docs/kcontrol/kwinscreenedges/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/sv/docs/kcontrol/kwinscreenedges/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sv/kcontrol/kwintabbox" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/sv/docs/kcontrol/kwintabbox/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/sv/docs/kcontrol/kwintabbox/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sv/kcontrol/kwintouchscreen" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/sv/docs/kcontrol/kwintouchscreen/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/sv/docs/kcontrol/kwintouchscreen/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sv/kcontrol/kwinvirtualkeyboard" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/sv/docs/kcontrol/kwinvirtualkeyboard/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/sv/docs/kcontrol/kwinvirtualkeyboard/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sv/kcontrol/windowbehaviour" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/sv/docs/kcontrol/windowbehaviour/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/sv/docs/kcontrol/windowbehaviour/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/sv/kcontrol/windowspecific" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/sv/docs/kcontrol/windowspecific/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/sv/docs/kcontrol/windowspecific/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/tr/kcontrol/desktop" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/tr/docs/kcontrol/desktop/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/tr/docs/kcontrol/desktop/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/tr/kcontrol/kwindecoration" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/tr/docs/kcontrol/kwindecoration/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/tr/docs/kcontrol/kwindecoration/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/tr/kcontrol/kwineffects" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/tr/docs/kcontrol/kwineffects/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/tr/docs/kcontrol/kwineffects/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/tr/kcontrol/kwinscreenedges" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/tr/docs/kcontrol/kwinscreenedges/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/tr/docs/kcontrol/kwinscreenedges/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/tr/kcontrol/kwintabbox" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/tr/docs/kcontrol/kwintabbox/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/tr/docs/kcontrol/kwintabbox/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/tr/kcontrol/kwintouchscreen" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/tr/docs/kcontrol/kwintouchscreen/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/tr/docs/kcontrol/kwintouchscreen/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/tr/kcontrol/kwinvirtualkeyboard" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/tr/docs/kcontrol/kwinvirtualkeyboard/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/tr/docs/kcontrol/kwinvirtualkeyboard/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/tr/kcontrol/windowbehaviour" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/tr/docs/kcontrol/windowbehaviour/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/tr/docs/kcontrol/windowbehaviour/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/tr/kcontrol/windowspecific" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/tr/docs/kcontrol/windowspecific/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/tr/docs/kcontrol/windowspecific/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/uk/kcontrol/desktop" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/uk/docs/kcontrol/desktop/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/uk/docs/kcontrol/desktop/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/uk/kcontrol/kwindecoration" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/uk/docs/kcontrol/kwindecoration/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/uk/docs/kcontrol/kwindecoration/index.docbook"
    "/home/ty/kwin/src/kwin-6.7.5/po/uk/docs/kcontrol/kwindecoration/button.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/uk/docs/kcontrol/kwindecoration/decoration.png"
    "/home/ty/kwin/src/kwin-6.7.5/po/uk/docs/kcontrol/kwindecoration/main.png"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/uk/kcontrol/kwineffects" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/uk/docs/kcontrol/kwineffects/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/uk/docs/kcontrol/kwineffects/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/uk/kcontrol/kwinscreenedges" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/uk/docs/kcontrol/kwinscreenedges/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/uk/docs/kcontrol/kwinscreenedges/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/uk/kcontrol/kwintabbox" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/uk/docs/kcontrol/kwintabbox/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/uk/docs/kcontrol/kwintabbox/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/uk/kcontrol/kwintouchscreen" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/uk/docs/kcontrol/kwintouchscreen/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/uk/docs/kcontrol/kwintouchscreen/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/uk/kcontrol/kwinvirtualkeyboard" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/uk/docs/kcontrol/kwinvirtualkeyboard/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/uk/docs/kcontrol/kwinvirtualkeyboard/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/uk/kcontrol/windowbehaviour" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/uk/docs/kcontrol/windowbehaviour/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/uk/docs/kcontrol/windowbehaviour/index.docbook"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/uk/kcontrol/windowspecific" TYPE FILE FILES
    "/home/ty/kwin/src/build/po/uk/docs/kcontrol/windowspecific/index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/po/uk/docs/kcontrol/windowspecific/index.docbook"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/ty/kwin/src/build/data/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/ty/kwin/src/build/kconf_update/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/ty/kwin/src/build/src/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KWinDBusInterface" TYPE FILE FILES "/home/ty/kwin/src/build/KWinDBusInterfaceConfig.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KWin" TYPE FILE FILES
    "/home/ty/kwin/src/kwin-6.7.5/cmake/modules/FindLibdrm.cmake"
    "/home/ty/kwin/src/build/KWinConfig.cmake"
    "/home/ty/kwin/src/build/KWinConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KWin/KWinTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KWin/KWinTargets.cmake"
         "/home/ty/kwin/src/build/CMakeFiles/Export/edf268a2c9db1e97cc06ef74cb55af39/KWinTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KWin/KWinTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KWin/KWinTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KWin" TYPE FILE FILES "/home/ty/kwin/src/build/CMakeFiles/Export/edf268a2c9db1e97cc06ef74cb55af39/KWinTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KWin" TYPE FILE FILES "/home/ty/kwin/src/build/CMakeFiles/Export/edf268a2c9db1e97cc06ef74cb55af39/KWinTargets-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/systemd/user" TYPE FILE FILES "/home/ty/kwin/src/build/plasma-kwin_wayland.service")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share" TYPE DIRECTORY FILES "/home/ty/kwin/src/build/locale")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/ty/kwin/src/build/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
if(CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_COMPONENT MATCHES "^[a-zA-Z0-9_.+-]+$")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
  else()
    string(MD5 CMAKE_INST_COMP_HASH "${CMAKE_INSTALL_COMPONENT}")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INST_COMP_HASH}.txt")
    unset(CMAKE_INST_COMP_HASH)
  endif()
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/ty/kwin/src/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
