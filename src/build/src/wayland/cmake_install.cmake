# Install script for directory: /home/ty/kwin/src/kwin-6.7.5/src/wayland

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
  include("/home/ty/kwin/src/build/src/wayland/tools/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/kwin/wayland" TYPE FILE FILES
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/alphamodifier_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/appmenu.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/backgroundeffect_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/clientconnection.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/colormanagement_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/colorrepresentation_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/compositor.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/contenttype_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/cursorshape_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/datacontroldevice_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/datacontroldevicemanager_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/datacontroloffer_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/datacontrolsource_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/datadevice.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/datadevicemanager.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/dataoffer.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/datasource.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/display.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/dpms.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/drmlease_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/externalbrightness_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/fifo_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/fractionalscale_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/fractionalscale_v2.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/frog_colormanagement_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/idle.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/idleinhibit_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/idlenotify_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/inputmethod_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/keyboard.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/keyboard_shortcuts_inhibit_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/keystate.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/layershell_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/linux_drm_syncobj_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/lockscreen_overlay_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/output.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/output_order_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/outputdevice_v2.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/outputmanagement_v2.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/plasmashell.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/plasmavirtualdesktop.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/plasmawindowmanagement.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/pointer.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/pointerconstraints_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/pointergestures_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/pointerwarp_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/presentationtime.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/primaryselectiondevice_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/primaryselectiondevicemanager_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/primaryselectionoffer_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/primaryselectionsource_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/quirks.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/relativepointer_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/screencast_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/screenedge_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/seat.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/securitycontext_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/server_decoration.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/server_decoration_palette.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/shadow.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/singlepixelbuffer.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/slide.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/subcompositor.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/surface.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/tablet_v2.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/tearingcontrol_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/textinput.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/textinput_v2.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/textinput_v3.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/touch.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/viewporter.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/xdgactivation_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/xdgdecoration_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/xdgdialog_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/xdgforeign_v2.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/xdgoutput_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/xdgsession_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/xdgshell.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/xdgsystembell_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/xdgtoplevelicon_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/xdgtopleveltag_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/xwaylandkeyboardgrab_v1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland/xwaylandshell_v1.h"
    "/home/ty/kwin/src/build/src/wayland/qwayland-server-alpha-modifier-v1.h"
    "/home/ty/kwin/src/build/src/wayland/qwayland-server-color-management-v1.h"
    "/home/ty/kwin/src/build/src/wayland/qwayland-server-color-representation-v1.h"
    "/home/ty/kwin/src/build/src/wayland/qwayland-server-content-type-v1.h"
    "/home/ty/kwin/src/build/src/wayland/qwayland-server-ext-background-effect-v1.h"
    "/home/ty/kwin/src/build/src/wayland/qwayland-server-fifo-v1.h"
    "/home/ty/kwin/src/build/src/wayland/qwayland-server-frog-color-management-v1.h"
    "/home/ty/kwin/src/build/src/wayland/qwayland-server-kde-external-brightness-v1.h"
    "/home/ty/kwin/src/build/src/wayland/qwayland-server-linux-drm-syncobj-v1.h"
    "/home/ty/kwin/src/build/src/wayland/qwayland-server-pointer-warp-v1.h"
    "/home/ty/kwin/src/build/src/wayland/qwayland-server-presentation-time.h"
    "/home/ty/kwin/src/build/src/wayland/qwayland-server-single-pixel-buffer-v1.h"
    "/home/ty/kwin/src/build/src/wayland/qwayland-server-xdg-toplevel-tag-v1.h"
    "/home/ty/kwin/src/build/src/wayland/wayland-alpha-modifier-v1-server-protocol.h"
    "/home/ty/kwin/src/build/src/wayland/wayland-color-management-v1-server-protocol.h"
    "/home/ty/kwin/src/build/src/wayland/wayland-color-representation-v1-server-protocol.h"
    "/home/ty/kwin/src/build/src/wayland/wayland-content-type-v1-server-protocol.h"
    "/home/ty/kwin/src/build/src/wayland/wayland-ext-background-effect-v1-server-protocol.h"
    "/home/ty/kwin/src/build/src/wayland/wayland-fifo-v1-server-protocol.h"
    "/home/ty/kwin/src/build/src/wayland/wayland-frog-color-management-v1-server-protocol.h"
    "/home/ty/kwin/src/build/src/wayland/wayland-kde-external-brightness-v1-server-protocol.h"
    "/home/ty/kwin/src/build/src/wayland/wayland-linux-drm-syncobj-v1-server-protocol.h"
    "/home/ty/kwin/src/build/src/wayland/wayland-pointer-warp-v1-server-protocol.h"
    "/home/ty/kwin/src/build/src/wayland/wayland-presentation-time-server-protocol.h"
    "/home/ty/kwin/src/build/src/wayland/wayland-single-pixel-buffer-v1-server-protocol.h"
    "/home/ty/kwin/src/build/src/wayland/wayland-xdg-toplevel-tag-v1-server-protocol.h"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/ty/kwin/src/build/src/wayland/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
