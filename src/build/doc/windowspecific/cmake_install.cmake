# Install script for directory: /home/ty/kwin/src/kwin-6.7.5/doc/windowspecific

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/en/kcontrol/windowspecific" TYPE FILE FILES
    "/home/ty/kwin/src/build/doc/windowspecific//index.cache.bz2"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./index.docbook"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./Face-smile.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./akgregator-info.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./akregator-attributes.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./akregator-fav.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./config-win-behavior.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./emacs-attribute.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./emacs-info.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./focus-stealing-pop2top-attribute.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./knotes-attribute.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./knotes-info.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./kopete-attribute-2.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./kopete-chat-attribute.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./kopete-chat-info.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./kopete-info.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./kwin-detect-window.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./kwin-kopete-rules.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./kwin-rule-editor.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./kwin-rules-main-n-akregator.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./kwin-rules-main.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./kwin-rules-ordering.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./kwin-window-attributes.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./kwin-window-matching.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./pager-4-desktops.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./tbird-compose-attribute.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./tbird-compose-info.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./tbird-main-attribute.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./tbird-main-info.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./tbird-reminder-attribute-2.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./tbird-reminder-info.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./window-matching-emacs.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./window-matching-init.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./window-matching-knotes.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./window-matching-kopete-chat.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./window-matching-kopete.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./window-matching-ready-akregator.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./window-matching-tbird-compose.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./window-matching-tbird-main.png"
    "/home/ty/kwin/src/kwin-6.7.5/doc/windowspecific/./window-matching-tbird-reminder.png"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/ty/kwin/src/build/doc/windowspecific/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
