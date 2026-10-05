# Install script for directory: /home/ty/kwin/src/kwin-6.7.5/src

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
  include("/home/ty/kwin/src/build/src/helpers/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/ty/kwin/src/build/src/qml/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/ty/kwin/src/build/src/kcms/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/ty/kwin/src/build/src/backends/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/ty/kwin/src/build/src/plugins/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/ty/kwin/src/build/src/utils/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/ty/kwin/src/build/src/wayland/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/ty/kwin/src/build/src/wayland-client/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/ty/kwin/src/build/src/xwayland/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/ty/kwin/src/build/src/tabbox/switchers/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libkwin.so.6.7.5"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libkwin.so.6"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ty/kwin/src/build/bin/libkwin.so.6.7.5"
    "/home/ty/kwin/src/build/bin/libkwin.so.6"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libkwin.so.6.7.5"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libkwin.so.6"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ty/kwin/src/build/bin/libkwin.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/kwin_wayland" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/kwin_wayland")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/kwin_wayland"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/ty/kwin/src/build/bin/kwin_wayland")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/kwin_wayland" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/kwin_wayland")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/kwin_wayland"
         OLD_RPATH "/home/ty/kwin/src/build/bin:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/kwin_wayland")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/config.kcfg" TYPE FILE FILES "/home/ty/kwin/src/kwin-6.7.5/src/kwin.kcfg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/knotifications6" TYPE FILE FILES "/home/ty/kwin/src/kwin-6.7.5/src/kwin.notifyrc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dbus-1/interfaces" TYPE FILE FILES
    "/home/ty/kwin/src/kwin-6.7.5/src/org.kde.KWin.VirtualDesktopManager.xml"
    "/home/ty/kwin/src/kwin-6.7.5/src/org.kde.KWin.xml"
    "/home/ty/kwin/src/kwin-6.7.5/src/org.kde.kwin.Compositing.xml"
    "/home/ty/kwin/src/kwin-6.7.5/src/org.kde.kwin.Effects.xml"
    "/home/ty/kwin/src/kwin-6.7.5/src/org.kde.KWin.Plugins.xml"
    "/home/ty/kwin/src/build/src/org.kde.kwin.VirtualKeyboard.xml"
    "/home/ty/kwin/src/build/src/org.kde.KWin.TabletModeManager.xml"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWin" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KWin/KWinTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/KWin/KWinTargets.cmake"
         "/home/ty/kwin/src/build/src/CMakeFiles/Export/edf268a2c9db1e97cc06ef74cb55af39/KWinTargets.cmake")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KWin" TYPE FILE FILES "/home/ty/kwin/src/build/src/CMakeFiles/Export/edf268a2c9db1e97cc06ef74cb55af39/KWinTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/KWin" TYPE FILE FILES "/home/ty/kwin/src/build/src/CMakeFiles/Export/edf268a2c9db1e97cc06ef74cb55af39/KWinTargets-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/kwin" TYPE FILE FILES "/home/ty/kwin/src/kwin-6.7.5/src/atoms.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/kwin" TYPE FILE FILES
    "/home/ty/kwin/src/build/src/config-kwin.h"
    "/home/ty/kwin/src/build/src/kwin_export.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/a11ykeyboardmonitor.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/activities.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/appmenu.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/client_machine.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/compositor.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/cursor.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/cursorsource.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/dbusinterface.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/debug_console.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/focuschain.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/ftrace.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/gestures.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/globalshortcuts.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/group.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/idle_inhibition.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/idledetector.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/input.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/input_event.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/input_event_spy.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/inputmethod.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/inputpanelv1integration.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/inputpanelv1window.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/internalwindow.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/keyboard_input.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/keyboard_layout.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/keyboard_layout_switching.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/keyboard_repeat.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/killwindow.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/kscreenintegration.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/layershellv1integration.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/layershellv1window.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/lidswitchtracker.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/main.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/mousebuttons.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/multigpuswapchain.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/netinfo.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/onscreennotification.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/options.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/osd.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/outline.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/outputconfigurationstore.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/placeholderoutput.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/placement.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/placementtracker.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/plugin.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/pluginmanager.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/pointer_input.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/rulebooksettings.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/rules.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/screenedge.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/screenedgegestures.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/shadow.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/sm.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/tablet_input.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/tabletmodemanager.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/touch_input.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/useractions.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/virtualdesktops.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/virtualdesktopsdbustypes.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/virtualkeyboard_dbus.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/wayland_server.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/waylandshellintegration.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/waylandwindow.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/window.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/workspace.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/x11eventfilter.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/x11window.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/xdgactivationv1.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/xdgshellintegration.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/xdgshellwindow.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/xkb.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/kwin/core" TYPE FILE FILES
    "/home/ty/kwin/src/kwin-6.7.5/src/core/backendoutput.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/colorlut3d.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/colorpipeline.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/colorpipelinestage.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/colorspace.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/colortransformation.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/drm_formats.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/drmdevice.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/gbmgraphicsbufferallocator.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/gpumanager.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/graphicsbuffer.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/graphicsbufferallocator.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/graphicsbufferview.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/iccprofile.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/inputbackend.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/inputdevice.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/output.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/outputbackend.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/outputconfiguration.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/outputlayer.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/pixelgrid.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/rect.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/region.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/renderbackend.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/renderdevice.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/renderjournal.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/renderloop.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/renderloop_p.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/rendertarget.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/renderviewport.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/session.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/session_consolekit.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/session_logind.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/session_noop.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/core/shmgraphicsbufferallocator.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/kwin/utils" TYPE FILE FILES
    "/home/ty/kwin/src/kwin-6.7.5/src/utils/c_ptr.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/utils/common.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/utils/cursortheme.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/utils/damagejournal.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/utils/edid.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/utils/executable_path.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/utils/filedescriptor.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/utils/gravity.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/utils/kernel.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/utils/memorymap.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/utils/orientationsensor.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/utils/ramfile.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/utils/realtime.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/utils/resource.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/utils/serial.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/utils/serviceutils.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/utils/softwarevsyncmonitor.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/utils/subsurfacemonitor.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/utils/udev.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/utils/version.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/utils/vsyncmonitor.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/utils/xcbutils.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/kwin/effect" TYPE FILE FILES
    "/home/ty/kwin/src/kwin-6.7.5/src/effect/animationeffect.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/effect/effect.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/effect/effecthandler.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/effect/effecttogglablestate.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/effect/effectwindow.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/effect/globals.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/effect/offscreeneffect.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/effect/offscreenquickview.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/effect/quickeffect.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/effect/timeline.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/effect/xcb.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/kwin/opengl" TYPE FILE FILES
    "/home/ty/kwin/src/kwin-6.7.5/src/opengl/abstract_opengl_context_attribute_builder.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/opengl/egl_context_attribute_builder.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/opengl/eglcontext.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/opengl/egldisplay.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/opengl/eglimagetexture.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/opengl/eglnativefence.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/opengl/eglswapchain.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/opengl/eglutils_p.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/opengl/glframebuffer.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/opengl/gllut.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/opengl/gllut3D.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/opengl/glplatform.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/opengl/glrendertimequery.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/opengl/glshader.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/opengl/glshadermanager.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/opengl/gltexture.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/opengl/gltexture_p.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/opengl/glutils.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/opengl/glvertexbuffer.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/kwin/scene" TYPE FILE FILES
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/atlas.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/backgroundeffectitem.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/borderoutline.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/borderradius.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/cursoritem.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/decorationitem.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/dndiconitem.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/imageitem.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/item.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/itemgeometry.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/itemrenderer.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/itemrenderer_opengl.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/itemrenderer_qpainter.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/ninepatch.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/opengl/atlas.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/opengl/ninepatch.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/opengl/texture.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/outlinedborderitem.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/qpainter/atlas.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/qpainter/texture.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/rootitem.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/scene.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/shadowitem.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/surfaceitem.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/surfaceitem_internal.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/surfaceitem_wayland.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/texture.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/windowitem.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/scene/workspacescene.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/kwin/vulkan" TYPE FILE FILES
    "/home/ty/kwin/src/kwin-6.7.5/src/vulkan/vulkan_device.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/vulkan/vulkan_logging.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/vulkan/vulkan_render_time_query.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/vulkan/vulkan_swapchain.h"
    "/home/ty/kwin/src/kwin-6.7.5/src/vulkan/vulkan_texture.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "_install_html_docs_kwin")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/doc/qt6/kwin/")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/doc/qt6/kwin" TYPE DIRECTORY FILES "/home/ty/kwin/src/build/.doc/kwin/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "_install_qch_docs_kwin")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/doc/qt6/kwin.qch")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/share/doc/qt6" TYPE FILE FILES "/home/ty/kwin/src/build/.doc/kwin.qch")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/ty/kwin/src/build/src/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
