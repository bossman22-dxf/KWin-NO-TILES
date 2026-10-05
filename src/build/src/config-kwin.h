#pragma once
#include <QLatin1StringView>

#define KWIN_PLUGIN_VERSION_STRING "6.7.5"
#define PROJECT_VERSION_MAJOR 6
#define PROJECT_VERSION_MINOR 7
#define PROJECT_VERSION_PATCH 5

#define KWIN_BUILD_DECORATIONS 1
#define KWIN_BUILD_KCMS 1
#define KWIN_BUILD_NOTIFICATIONS 1
#define KWIN_BUILD_SCREENLOCKER 1
#define KWIN_BUILD_TABBOX 1
#define KWIN_BUILD_ACTIVITIES 1
#define KWIN_BUILD_GLOBALSHORTCUTS 1
#define KWIN_BUILD_X11 1
#define KWIN_BUILD_QACCESSIBILITYCLIENT 1
constexpr QLatin1StringView KWIN_CONFIG("kwinrc");
constexpr QLatin1StringView KWIN_VERSION_STRING("6.7.5");
constexpr QLatin1StringView XCB_VERSION_STRING("1.17.0");
constexpr QLatin1StringView KWIN_KILLER_BIN("/usr/lib/kwin_killer_helper");
constexpr QLatin1StringView KWIN_DIALOG_BIN("/usr/lib/kwin_dialog_helper");
constexpr QLatin1StringView LIBEXEC_DIR("/usr/lib");
#define HAVE_X11_XCB 1
#define HAVE_X11_XINPUT 1
#define HAVE_GBM_BO_GET_FD_FOR_PLANE 1
#define HAVE_GBM_BO_CREATE_WITH_MODIFIERS2 1
#define HAVE_MEMFD 1
#define HAVE_SCHED_RESET_ON_FORK 1
#define HAVE_XKBCOMMON_NO_SECURE_GETENV 1
#define HAVE_DL_LIBRARY 0
#define HAVE_LIBDRM_FAUX 1
#define HAVE_LIBINPUT_PLUGINS 1

constexpr QLatin1StringView XWAYLAND_SESSION_SCRIPTS("/etc/xdg/Xwayland-session.d");
