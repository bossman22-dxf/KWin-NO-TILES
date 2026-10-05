/****************************************************************************
** Meta object code from reading C++ file 'workspace_wrapper.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/scripting/workspace_wrapper.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'workspace_wrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN4KWin16WorkspaceWrapperE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::WorkspaceWrapper::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin16WorkspaceWrapperE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::WorkspaceWrapper",
        "windowAdded",
        "",
        "KWin::Window*",
        "window",
        "windowRemoved",
        "windowActivated",
        "desktopsChanged",
        "desktopLayoutChanged",
        "screensChanged",
        "screenOrderChanged",
        "currentActivityChanged",
        "id",
        "activitiesChanged",
        "activityAdded",
        "activityRemoved",
        "virtualScreenSizeChanged",
        "virtualScreenGeometryChanged",
        "currentDesktopChanged",
        "KWin::VirtualDesktop*",
        "previous",
        "current",
        "KWin::LogicalOutput*",
        "output",
        "virtualDesktopNavigationWrapsAroundChanged",
        "cursorPosChanged",
        "slotSwitchDesktopNext",
        "slotSwitchDesktopPrevious",
        "slotSwitchDesktopRight",
        "slotSwitchDesktopLeft",
        "slotSwitchDesktopUp",
        "slotSwitchDesktopDown",
        "slotSwitchToNextScreen",
        "slotSwitchToPrevScreen",
        "slotSwitchToRightScreen",
        "slotSwitchToLeftScreen",
        "slotSwitchToAboveScreen",
        "slotSwitchToBelowScreen",
        "slotWindowToNextScreen",
        "slotWindowToPrevScreen",
        "slotWindowToRightScreen",
        "slotWindowToLeftScreen",
        "slotWindowToAboveScreen",
        "slotWindowToBelowScreen",
        "slotToggleShowDesktop",
        "slotWindowMaximize",
        "slotWindowMaximizeVertical",
        "slotWindowMaximizeHorizontal",
        "slotWindowMinimize",
        "slotWindowRaise",
        "slotWindowLower",
        "slotWindowRaiseOrLower",
        "slotActivateAttentionWindow",
        "slotWindowMoveLeft",
        "slotWindowMoveRight",
        "slotWindowMoveUp",
        "slotWindowMoveDown",
        "slotWindowExpandHorizontal",
        "slotWindowExpandVertical",
        "slotWindowShrinkHorizontal",
        "slotWindowShrinkVertical",
        "slotWindowQuickTileLeft",
        "slotWindowQuickTileRight",
        "slotWindowQuickTileTop",
        "slotWindowQuickTileBottom",
        "slotWindowQuickTileTopLeft",
        "slotWindowQuickTileTopRight",
        "slotWindowQuickTileBottomLeft",
        "slotWindowQuickTileBottomRight",
        "slotSwitchWindowUp",
        "slotSwitchWindowDown",
        "slotSwitchWindowRight",
        "slotSwitchWindowLeft",
        "slotIncreaseWindowOpacity",
        "slotLowerWindowOpacity",
        "slotWindowOperations",
        "slotWindowClose",
        "slotWindowMove",
        "slotWindowResize",
        "slotWindowAbove",
        "slotWindowBelow",
        "slotWindowOnAllDesktops",
        "slotWindowFullScreen",
        "slotWindowNoBorder",
        "slotWindowExcludeFromCapture",
        "slotWindowToNextDesktop",
        "slotWindowToPreviousDesktop",
        "slotWindowToDesktopRight",
        "slotWindowToDesktopLeft",
        "slotWindowToDesktopUp",
        "slotWindowToDesktopDown",
        "sendClientToScreen",
        "client",
        "showOutline",
        "QRect",
        "geometry",
        "x",
        "y",
        "width",
        "height",
        "hideOutline",
        "currentDesktopForScreen",
        "setCurrentDesktopForScreen",
        "desktop",
        "screenAt",
        "QPointF",
        "pos",
        "tilingForScreen",
        "KWin::TileManager*",
        "screenName",
        "rootTile",
        "KWin::Tile*",
        "clientArea",
        "QRectF",
        "ClientAreaOption",
        "option",
        "const KWin::Window*",
        "createDesktop",
        "position",
        "name",
        "removeDesktop",
        "moveDesktop",
        "supportInformation",
        "raiseWindow",
        "getClient",
        "windowId",
        "windowAt",
        "QList<KWin::Window*>",
        "count",
        "isEffectActive",
        "pluginId",
        "constrain",
        "below",
        "above",
        "unconstrain",
        "desktops",
        "QList<KWin::VirtualDesktop*>",
        "currentDesktop",
        "virtualDesktopNavigationWrapsAround",
        "activeWindow",
        "desktopGridSize",
        "QSize",
        "desktopGridWidth",
        "desktopGridHeight",
        "workspaceWidth",
        "workspaceHeight",
        "workspaceSize",
        "activeScreen",
        "screens",
        "QList<KWin::LogicalOutput*>",
        "screenOrder",
        "currentActivity",
        "activities",
        "virtualScreenSize",
        "virtualScreenGeometry",
        "stackingOrder",
        "cursorPos",
        "QPoint",
        "PlacementArea",
        "MovementArea",
        "MaximizeArea",
        "MaximizeFullArea",
        "FullScreenArea",
        "WorkArea",
        "FullArea",
        "ScreenArea",
        "ElectricBorder",
        "ElectricTop",
        "ElectricTopRight",
        "ElectricRight",
        "ElectricBottomRight",
        "ElectricBottom",
        "ElectricBottomLeft",
        "ElectricLeft",
        "ElectricTopLeft",
        "ELECTRIC_COUNT",
        "ElectricNone"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'windowAdded'
        QtMocHelpers::SignalData<void(KWin::Window *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'windowRemoved'
        QtMocHelpers::SignalData<void(KWin::Window *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'windowActivated'
        QtMocHelpers::SignalData<void(KWin::Window *)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'desktopsChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'desktopLayoutChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'screensChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'screenOrderChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentActivityChanged'
        QtMocHelpers::SignalData<void(const QString &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 12 },
        }}),
        // Signal 'activitiesChanged'
        QtMocHelpers::SignalData<void(const QString &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 12 },
        }}),
        // Signal 'activityAdded'
        QtMocHelpers::SignalData<void(const QString &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 12 },
        }}),
        // Signal 'activityRemoved'
        QtMocHelpers::SignalData<void(const QString &)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 12 },
        }}),
        // Signal 'virtualScreenSizeChanged'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'virtualScreenGeometryChanged'
        QtMocHelpers::SignalData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentDesktopChanged'
        QtMocHelpers::SignalData<void(KWin::VirtualDesktop *, KWin::VirtualDesktop *, KWin::LogicalOutput *)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 20 }, { 0x80000000 | 19, 21 }, { 0x80000000 | 22, 23 },
        }}),
        // Signal 'virtualDesktopNavigationWrapsAroundChanged'
        QtMocHelpers::SignalData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'cursorPosChanged'
        QtMocHelpers::SignalData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotSwitchDesktopNext'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotSwitchDesktopPrevious'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotSwitchDesktopRight'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotSwitchDesktopLeft'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotSwitchDesktopUp'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotSwitchDesktopDown'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotSwitchToNextScreen'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotSwitchToPrevScreen'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotSwitchToRightScreen'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotSwitchToLeftScreen'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotSwitchToAboveScreen'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotSwitchToBelowScreen'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowToNextScreen'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowToPrevScreen'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowToRightScreen'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowToLeftScreen'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowToAboveScreen'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowToBelowScreen'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotToggleShowDesktop'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowMaximize'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowMaximizeVertical'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowMaximizeHorizontal'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowMinimize'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowRaise'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowLower'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowRaiseOrLower'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotActivateAttentionWindow'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowMoveLeft'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowMoveRight'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowMoveUp'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowMoveDown'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowExpandHorizontal'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowExpandVertical'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowShrinkHorizontal'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowShrinkVertical'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowQuickTileLeft'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowQuickTileRight'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowQuickTileTop'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowQuickTileBottom'
        QtMocHelpers::SlotData<void()>(64, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowQuickTileTopLeft'
        QtMocHelpers::SlotData<void()>(65, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowQuickTileTopRight'
        QtMocHelpers::SlotData<void()>(66, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowQuickTileBottomLeft'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowQuickTileBottomRight'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotSwitchWindowUp'
        QtMocHelpers::SlotData<void()>(69, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotSwitchWindowDown'
        QtMocHelpers::SlotData<void()>(70, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotSwitchWindowRight'
        QtMocHelpers::SlotData<void()>(71, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotSwitchWindowLeft'
        QtMocHelpers::SlotData<void()>(72, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotIncreaseWindowOpacity'
        QtMocHelpers::SlotData<void()>(73, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotLowerWindowOpacity'
        QtMocHelpers::SlotData<void()>(74, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowOperations'
        QtMocHelpers::SlotData<void()>(75, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowClose'
        QtMocHelpers::SlotData<void()>(76, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowMove'
        QtMocHelpers::SlotData<void()>(77, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowResize'
        QtMocHelpers::SlotData<void()>(78, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowAbove'
        QtMocHelpers::SlotData<void()>(79, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowBelow'
        QtMocHelpers::SlotData<void()>(80, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowOnAllDesktops'
        QtMocHelpers::SlotData<void()>(81, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowFullScreen'
        QtMocHelpers::SlotData<void()>(82, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowNoBorder'
        QtMocHelpers::SlotData<void()>(83, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowExcludeFromCapture'
        QtMocHelpers::SlotData<void()>(84, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowToNextDesktop'
        QtMocHelpers::SlotData<void()>(85, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowToPreviousDesktop'
        QtMocHelpers::SlotData<void()>(86, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowToDesktopRight'
        QtMocHelpers::SlotData<void()>(87, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowToDesktopLeft'
        QtMocHelpers::SlotData<void()>(88, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowToDesktopUp'
        QtMocHelpers::SlotData<void()>(89, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowToDesktopDown'
        QtMocHelpers::SlotData<void()>(90, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'sendClientToScreen'
        QtMocHelpers::SlotData<void(KWin::Window *, KWin::LogicalOutput *)>(91, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 92 }, { 0x80000000 | 22, 23 },
        }}),
        // Slot 'showOutline'
        QtMocHelpers::SlotData<void(const QRect &)>(93, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 94, 95 },
        }}),
        // Slot 'showOutline'
        QtMocHelpers::SlotData<void(int, int, int, int)>(93, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 96 }, { QMetaType::Int, 97 }, { QMetaType::Int, 98 }, { QMetaType::Int, 99 },
        }}),
        // Slot 'hideOutline'
        QtMocHelpers::SlotData<void()>(100, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'currentDesktopForScreen'
        QtMocHelpers::MethodData<KWin::VirtualDesktop *(KWin::LogicalOutput *) const>(101, 2, QMC::AccessPublic, 0x80000000 | 19, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Method 'setCurrentDesktopForScreen'
        QtMocHelpers::MethodData<void(KWin::VirtualDesktop *, KWin::LogicalOutput *)>(102, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 103 }, { 0x80000000 | 22, 23 },
        }}),
        // Method 'screenAt'
        QtMocHelpers::MethodData<KWin::LogicalOutput *(const QPointF &) const>(104, 2, QMC::AccessPublic, 0x80000000 | 22, {{
            { 0x80000000 | 105, 106 },
        }}),
        // Method 'tilingForScreen'
        QtMocHelpers::MethodData<KWin::TileManager *(const QString &) const>(107, 2, QMC::AccessPublic, 0x80000000 | 108, {{
            { QMetaType::QString, 109 },
        }}),
        // Method 'tilingForScreen'
        QtMocHelpers::MethodData<KWin::TileManager *(KWin::LogicalOutput *) const>(107, 2, QMC::AccessPublic, 0x80000000 | 108, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Method 'rootTile'
        QtMocHelpers::MethodData<KWin::Tile *(KWin::LogicalOutput *, KWin::VirtualDesktop *) const>(110, 2, QMC::AccessPublic, 0x80000000 | 111, {{
            { 0x80000000 | 22, 23 }, { 0x80000000 | 19, 103 },
        }}),
        // Method 'clientArea'
        QtMocHelpers::MethodData<QRectF(enum ClientAreaOption, KWin::LogicalOutput *, KWin::VirtualDesktop *) const>(112, 2, QMC::AccessPublic | QMC::MethodScriptable, 0x80000000 | 113, {{
            { 0x80000000 | 114, 115 }, { 0x80000000 | 22, 23 }, { 0x80000000 | 19, 103 },
        }}),
        // Method 'clientArea'
        QtMocHelpers::MethodData<QRectF(enum ClientAreaOption, KWin::Window *) const>(112, 2, QMC::AccessPublic | QMC::MethodScriptable, 0x80000000 | 113, {{
            { 0x80000000 | 114, 115 }, { 0x80000000 | 3, 92 },
        }}),
        // Method 'clientArea'
        QtMocHelpers::MethodData<QRectF(enum ClientAreaOption, const KWin::Window *) const>(112, 2, QMC::AccessPublic | QMC::MethodScriptable, 0x80000000 | 113, {{
            { 0x80000000 | 114, 115 }, { 0x80000000 | 116, 92 },
        }}),
        // Method 'createDesktop'
        QtMocHelpers::MethodData<void(int, const QString &) const>(117, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Int, 118 }, { QMetaType::QString, 119 },
        }}),
        // Method 'removeDesktop'
        QtMocHelpers::MethodData<void(KWin::VirtualDesktop *) const>(120, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { 0x80000000 | 19, 103 },
        }}),
        // Method 'moveDesktop'
        QtMocHelpers::MethodData<void(KWin::VirtualDesktop *, int)>(121, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { 0x80000000 | 19, 103 }, { QMetaType::Int, 118 },
        }}),
        // Method 'supportInformation'
        QtMocHelpers::MethodData<QString() const>(122, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QString),
        // Method 'raiseWindow'
        QtMocHelpers::MethodData<void(KWin::Window *)>(123, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Method 'getClient'
        QtMocHelpers::MethodData<KWin::Window *(qulonglong)>(124, 2, QMC::AccessPublic | QMC::MethodScriptable, 0x80000000 | 3, {{
            { QMetaType::ULongLong, 125 },
        }}),
        // Method 'windowAt'
        QtMocHelpers::MethodData<QList<KWin::Window*>(const QPointF &, int) const>(126, 2, QMC::AccessPublic, 0x80000000 | 127, {{
            { 0x80000000 | 105, 106 }, { QMetaType::Int, 128 },
        }}),
        // Method 'windowAt'
        QtMocHelpers::MethodData<QList<KWin::Window*>(const QPointF &) const>(126, 2, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 127, {{
            { 0x80000000 | 105, 106 },
        }}),
        // Method 'isEffectActive'
        QtMocHelpers::MethodData<bool(const QString &) const>(129, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 130 },
        }}),
        // Method 'constrain'
        QtMocHelpers::MethodData<void(KWin::Window *, KWin::Window *)>(131, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 132 }, { 0x80000000 | 3, 133 },
        }}),
        // Method 'unconstrain'
        QtMocHelpers::MethodData<void(KWin::Window *, KWin::Window *)>(134, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 132 }, { 0x80000000 | 3, 133 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'desktops'
        QtMocHelpers::PropertyData<QList<KWin::VirtualDesktop*>>(135, 0x80000000 | 136, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 3),
        // property 'currentDesktop'
        QtMocHelpers::PropertyData<KWin::VirtualDesktop*>(137, 0x80000000 | 19, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 13),
        // property 'virtualDesktopNavigationWrapsAround'
        QtMocHelpers::PropertyData<bool>(138, QMetaType::Bool, QMC::DefaultPropertyFlags, 14),
        // property 'activeWindow'
        QtMocHelpers::PropertyData<KWin::Window*>(139, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 2),
        // property 'desktopGridSize'
        QtMocHelpers::PropertyData<QSize>(140, 0x80000000 | 141, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 4),
        // property 'desktopGridWidth'
        QtMocHelpers::PropertyData<int>(142, QMetaType::Int, QMC::DefaultPropertyFlags, 4),
        // property 'desktopGridHeight'
        QtMocHelpers::PropertyData<int>(143, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'workspaceWidth'
        QtMocHelpers::PropertyData<int>(144, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'workspaceHeight'
        QtMocHelpers::PropertyData<int>(145, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'workspaceSize'
        QtMocHelpers::PropertyData<QSize>(146, 0x80000000 | 141, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'activeScreen'
        QtMocHelpers::PropertyData<KWin::LogicalOutput*>(147, 0x80000000 | 22, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'screens'
        QtMocHelpers::PropertyData<QList<KWin::LogicalOutput*>>(148, 0x80000000 | 149, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 5),
        // property 'screenOrder'
        QtMocHelpers::PropertyData<QList<KWin::LogicalOutput*>>(150, 0x80000000 | 149, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 6),
        // property 'currentActivity'
        QtMocHelpers::PropertyData<QString>(151, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'activities'
        QtMocHelpers::PropertyData<QStringList>(152, QMetaType::QStringList, QMC::DefaultPropertyFlags, 8),
        // property 'virtualScreenSize'
        QtMocHelpers::PropertyData<QSize>(153, 0x80000000 | 141, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 11),
        // property 'virtualScreenGeometry'
        QtMocHelpers::PropertyData<QRect>(154, 0x80000000 | 94, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 12),
        // property 'stackingOrder'
        QtMocHelpers::PropertyData<QList<KWin::Window*>>(155, 0x80000000 | 127, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'cursorPos'
        QtMocHelpers::PropertyData<QPoint>(156, 0x80000000 | 157, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 15),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ClientAreaOption'
        QtMocHelpers::EnumData<enum ClientAreaOption>(114, 114, QMC::EnumFlags{}).add({
            {  158, ClientAreaOption::PlacementArea },
            {  159, ClientAreaOption::MovementArea },
            {  160, ClientAreaOption::MaximizeArea },
            {  161, ClientAreaOption::MaximizeFullArea },
            {  162, ClientAreaOption::FullScreenArea },
            {  163, ClientAreaOption::WorkArea },
            {  164, ClientAreaOption::FullArea },
            {  165, ClientAreaOption::ScreenArea },
        }),
        // enum 'ElectricBorder'
        QtMocHelpers::EnumData<enum ElectricBorder>(166, 166, QMC::EnumFlags{}).add({
            {  167, ElectricBorder::ElectricTop },
            {  168, ElectricBorder::ElectricTopRight },
            {  169, ElectricBorder::ElectricRight },
            {  170, ElectricBorder::ElectricBottomRight },
            {  171, ElectricBorder::ElectricBottom },
            {  172, ElectricBorder::ElectricBottomLeft },
            {  173, ElectricBorder::ElectricLeft },
            {  174, ElectricBorder::ElectricTopLeft },
            {  175, ElectricBorder::ELECTRIC_COUNT },
            {  176, ElectricBorder::ElectricNone },
        }),
    };
    return QtMocHelpers::metaObjectData<WorkspaceWrapper, qt_meta_tag_ZN4KWin16WorkspaceWrapperE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::WorkspaceWrapper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin16WorkspaceWrapperE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin16WorkspaceWrapperE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin16WorkspaceWrapperE_t>.metaTypes,
    nullptr
} };

void KWin::WorkspaceWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WorkspaceWrapper *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->windowAdded((*reinterpret_cast<std::add_pointer_t<KWin::Window*>>(_a[1]))); break;
        case 1: _t->windowRemoved((*reinterpret_cast<std::add_pointer_t<KWin::Window*>>(_a[1]))); break;
        case 2: _t->windowActivated((*reinterpret_cast<std::add_pointer_t<KWin::Window*>>(_a[1]))); break;
        case 3: _t->desktopsChanged(); break;
        case 4: _t->desktopLayoutChanged(); break;
        case 5: _t->screensChanged(); break;
        case 6: _t->screenOrderChanged(); break;
        case 7: _t->currentActivityChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->activitiesChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->activityAdded((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->activityRemoved((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->virtualScreenSizeChanged(); break;
        case 12: _t->virtualScreenGeometryChanged(); break;
        case 13: _t->currentDesktopChanged((*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<KWin::LogicalOutput*>>(_a[3]))); break;
        case 14: _t->virtualDesktopNavigationWrapsAroundChanged(); break;
        case 15: _t->cursorPosChanged(); break;
        case 16: _t->slotSwitchDesktopNext(); break;
        case 17: _t->slotSwitchDesktopPrevious(); break;
        case 18: _t->slotSwitchDesktopRight(); break;
        case 19: _t->slotSwitchDesktopLeft(); break;
        case 20: _t->slotSwitchDesktopUp(); break;
        case 21: _t->slotSwitchDesktopDown(); break;
        case 22: _t->slotSwitchToNextScreen(); break;
        case 23: _t->slotSwitchToPrevScreen(); break;
        case 24: _t->slotSwitchToRightScreen(); break;
        case 25: _t->slotSwitchToLeftScreen(); break;
        case 26: _t->slotSwitchToAboveScreen(); break;
        case 27: _t->slotSwitchToBelowScreen(); break;
        case 28: _t->slotWindowToNextScreen(); break;
        case 29: _t->slotWindowToPrevScreen(); break;
        case 30: _t->slotWindowToRightScreen(); break;
        case 31: _t->slotWindowToLeftScreen(); break;
        case 32: _t->slotWindowToAboveScreen(); break;
        case 33: _t->slotWindowToBelowScreen(); break;
        case 34: _t->slotToggleShowDesktop(); break;
        case 35: _t->slotWindowMaximize(); break;
        case 36: _t->slotWindowMaximizeVertical(); break;
        case 37: _t->slotWindowMaximizeHorizontal(); break;
        case 38: _t->slotWindowMinimize(); break;
        case 39: _t->slotWindowRaise(); break;
        case 40: _t->slotWindowLower(); break;
        case 41: _t->slotWindowRaiseOrLower(); break;
        case 42: _t->slotActivateAttentionWindow(); break;
        case 43: _t->slotWindowMoveLeft(); break;
        case 44: _t->slotWindowMoveRight(); break;
        case 45: _t->slotWindowMoveUp(); break;
        case 46: _t->slotWindowMoveDown(); break;
        case 47: _t->slotWindowExpandHorizontal(); break;
        case 48: _t->slotWindowExpandVertical(); break;
        case 49: _t->slotWindowShrinkHorizontal(); break;
        case 50: _t->slotWindowShrinkVertical(); break;
        case 51: _t->slotWindowQuickTileLeft(); break;
        case 52: _t->slotWindowQuickTileRight(); break;
        case 53: _t->slotWindowQuickTileTop(); break;
        case 54: _t->slotWindowQuickTileBottom(); break;
        case 55: _t->slotWindowQuickTileTopLeft(); break;
        case 56: _t->slotWindowQuickTileTopRight(); break;
        case 57: _t->slotWindowQuickTileBottomLeft(); break;
        case 58: _t->slotWindowQuickTileBottomRight(); break;
        case 59: _t->slotSwitchWindowUp(); break;
        case 60: _t->slotSwitchWindowDown(); break;
        case 61: _t->slotSwitchWindowRight(); break;
        case 62: _t->slotSwitchWindowLeft(); break;
        case 63: _t->slotIncreaseWindowOpacity(); break;
        case 64: _t->slotLowerWindowOpacity(); break;
        case 65: _t->slotWindowOperations(); break;
        case 66: _t->slotWindowClose(); break;
        case 67: _t->slotWindowMove(); break;
        case 68: _t->slotWindowResize(); break;
        case 69: _t->slotWindowAbove(); break;
        case 70: _t->slotWindowBelow(); break;
        case 71: _t->slotWindowOnAllDesktops(); break;
        case 72: _t->slotWindowFullScreen(); break;
        case 73: _t->slotWindowNoBorder(); break;
        case 74: _t->slotWindowExcludeFromCapture(); break;
        case 75: _t->slotWindowToNextDesktop(); break;
        case 76: _t->slotWindowToPreviousDesktop(); break;
        case 77: _t->slotWindowToDesktopRight(); break;
        case 78: _t->slotWindowToDesktopLeft(); break;
        case 79: _t->slotWindowToDesktopUp(); break;
        case 80: _t->slotWindowToDesktopDown(); break;
        case 81: _t->sendClientToScreen((*reinterpret_cast<std::add_pointer_t<KWin::Window*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<KWin::LogicalOutput*>>(_a[2]))); break;
        case 82: _t->showOutline((*reinterpret_cast<std::add_pointer_t<QRect>>(_a[1]))); break;
        case 83: _t->showOutline((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 84: _t->hideOutline(); break;
        case 85: { KWin::VirtualDesktop* _r = _t->currentDesktopForScreen((*reinterpret_cast<std::add_pointer_t<KWin::LogicalOutput*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<KWin::VirtualDesktop**>(_a[0]) = std::move(_r); }  break;
        case 86: _t->setCurrentDesktopForScreen((*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<KWin::LogicalOutput*>>(_a[2]))); break;
        case 87: { KWin::LogicalOutput* _r = _t->screenAt((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1])));
            if (_a[0]) *reinterpret_cast<KWin::LogicalOutput**>(_a[0]) = std::move(_r); }  break;
        case 88: { KWin::TileManager* _r = _t->tilingForScreen((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<KWin::TileManager**>(_a[0]) = std::move(_r); }  break;
        case 89: { KWin::TileManager* _r = _t->tilingForScreen((*reinterpret_cast<std::add_pointer_t<KWin::LogicalOutput*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<KWin::TileManager**>(_a[0]) = std::move(_r); }  break;
        case 90: { KWin::Tile* _r = _t->rootTile((*reinterpret_cast<std::add_pointer_t<KWin::LogicalOutput*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[2])));
            if (_a[0]) *reinterpret_cast<KWin::Tile**>(_a[0]) = std::move(_r); }  break;
        case 91: { QRectF _r = _t->clientArea((*reinterpret_cast<std::add_pointer_t<enum ClientAreaOption>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<KWin::LogicalOutput*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QRectF*>(_a[0]) = std::move(_r); }  break;
        case 92: { QRectF _r = _t->clientArea((*reinterpret_cast<std::add_pointer_t<enum ClientAreaOption>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<KWin::Window*>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QRectF*>(_a[0]) = std::move(_r); }  break;
        case 93: { QRectF _r = _t->clientArea((*reinterpret_cast<std::add_pointer_t<enum ClientAreaOption>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<const KWin::Window*>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QRectF*>(_a[0]) = std::move(_r); }  break;
        case 94: _t->createDesktop((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 95: _t->removeDesktop((*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[1]))); break;
        case 96: _t->moveDesktop((*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 97: { QString _r = _t->supportInformation();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 98: _t->raiseWindow((*reinterpret_cast<std::add_pointer_t<KWin::Window*>>(_a[1]))); break;
        case 99: { KWin::Window* _r = _t->getClient((*reinterpret_cast<std::add_pointer_t<qulonglong>>(_a[1])));
            if (_a[0]) *reinterpret_cast<KWin::Window**>(_a[0]) = std::move(_r); }  break;
        case 100: { QList<KWin::Window*> _r = _t->windowAt((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QList<KWin::Window*>*>(_a[0]) = std::move(_r); }  break;
        case 101: { QList<KWin::Window*> _r = _t->windowAt((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QList<KWin::Window*>*>(_a[0]) = std::move(_r); }  break;
        case 102: { bool _r = _t->isEffectActive((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 103: _t->constrain((*reinterpret_cast<std::add_pointer_t<KWin::Window*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<KWin::Window*>>(_a[2]))); break;
        case 104: _t->unconstrain((*reinterpret_cast<std::add_pointer_t<KWin::Window*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<KWin::Window*>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (WorkspaceWrapper::*)(KWin::Window * )>(_a, &WorkspaceWrapper::windowAdded, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (WorkspaceWrapper::*)(KWin::Window * )>(_a, &WorkspaceWrapper::windowRemoved, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (WorkspaceWrapper::*)(KWin::Window * )>(_a, &WorkspaceWrapper::windowActivated, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (WorkspaceWrapper::*)()>(_a, &WorkspaceWrapper::desktopsChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (WorkspaceWrapper::*)()>(_a, &WorkspaceWrapper::desktopLayoutChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (WorkspaceWrapper::*)()>(_a, &WorkspaceWrapper::screensChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (WorkspaceWrapper::*)()>(_a, &WorkspaceWrapper::screenOrderChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (WorkspaceWrapper::*)(const QString & )>(_a, &WorkspaceWrapper::currentActivityChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (WorkspaceWrapper::*)(const QString & )>(_a, &WorkspaceWrapper::activitiesChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (WorkspaceWrapper::*)(const QString & )>(_a, &WorkspaceWrapper::activityAdded, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (WorkspaceWrapper::*)(const QString & )>(_a, &WorkspaceWrapper::activityRemoved, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (WorkspaceWrapper::*)()>(_a, &WorkspaceWrapper::virtualScreenSizeChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (WorkspaceWrapper::*)()>(_a, &WorkspaceWrapper::virtualScreenGeometryChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (WorkspaceWrapper::*)(KWin::VirtualDesktop * , KWin::VirtualDesktop * , KWin::LogicalOutput * )>(_a, &WorkspaceWrapper::currentDesktopChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (WorkspaceWrapper::*)()>(_a, &WorkspaceWrapper::virtualDesktopNavigationWrapsAroundChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (WorkspaceWrapper::*)()>(_a, &WorkspaceWrapper::cursorPosChanged, 15))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QList<KWin::VirtualDesktop*>*>(_v) = _t->desktops(); break;
        case 1: *reinterpret_cast<KWin::VirtualDesktop**>(_v) = _t->currentDesktop(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->virtualDesktopNavigationWrapsAround(); break;
        case 3: *reinterpret_cast<KWin::Window**>(_v) = _t->activeWindow(); break;
        case 4: *reinterpret_cast<QSize*>(_v) = _t->desktopGridSize(); break;
        case 5: *reinterpret_cast<int*>(_v) = _t->desktopGridWidth(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->desktopGridHeight(); break;
        case 7: *reinterpret_cast<int*>(_v) = _t->workspaceWidth(); break;
        case 8: *reinterpret_cast<int*>(_v) = _t->workspaceHeight(); break;
        case 9: *reinterpret_cast<QSize*>(_v) = _t->workspaceSize(); break;
        case 10: *reinterpret_cast<KWin::LogicalOutput**>(_v) = _t->activeScreen(); break;
        case 11: *reinterpret_cast<QList<KWin::LogicalOutput*>*>(_v) = _t->screens(); break;
        case 12: *reinterpret_cast<QList<KWin::LogicalOutput*>*>(_v) = _t->screenOrder(); break;
        case 13: *reinterpret_cast<QString*>(_v) = _t->currentActivity(); break;
        case 14: *reinterpret_cast<QStringList*>(_v) = _t->activityList(); break;
        case 15: *reinterpret_cast<QSize*>(_v) = _t->virtualScreenSize(); break;
        case 16: *reinterpret_cast<QRect*>(_v) = _t->virtualScreenGeometry(); break;
        case 17: *reinterpret_cast<QList<KWin::Window*>*>(_v) = _t->stackingOrder(); break;
        case 18: *reinterpret_cast<QPoint*>(_v) = _t->cursorPos(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setCurrentDesktop(*reinterpret_cast<KWin::VirtualDesktop**>(_v)); break;
        case 3: _t->setActiveWindow(*reinterpret_cast<KWin::Window**>(_v)); break;
        case 6: _t->setDesktopGridHeight(*reinterpret_cast<int*>(_v)); break;
        case 13: _t->setCurrentActivity(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::WorkspaceWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::WorkspaceWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin16WorkspaceWrapperE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::WorkspaceWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 105)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 105;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 105)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 105;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void KWin::WorkspaceWrapper::windowAdded(KWin::Window * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void KWin::WorkspaceWrapper::windowRemoved(KWin::Window * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void KWin::WorkspaceWrapper::windowActivated(KWin::Window * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void KWin::WorkspaceWrapper::desktopsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWin::WorkspaceWrapper::desktopLayoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KWin::WorkspaceWrapper::screensChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KWin::WorkspaceWrapper::screenOrderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void KWin::WorkspaceWrapper::currentActivityChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void KWin::WorkspaceWrapper::activitiesChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void KWin::WorkspaceWrapper::activityAdded(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void KWin::WorkspaceWrapper::activityRemoved(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void KWin::WorkspaceWrapper::virtualScreenSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void KWin::WorkspaceWrapper::virtualScreenGeometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void KWin::WorkspaceWrapper::currentDesktopChanged(KWin::VirtualDesktop * _t1, KWin::VirtualDesktop * _t2, KWin::LogicalOutput * _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1, _t2, _t3);
}

// SIGNAL 14
void KWin::WorkspaceWrapper::virtualDesktopNavigationWrapsAroundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void KWin::WorkspaceWrapper::cursorPosChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}
namespace {
struct qt_meta_tag_ZN4KWin24QtScriptWorkspaceWrapperE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::QtScriptWorkspaceWrapper::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin24QtScriptWorkspaceWrapperE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::QtScriptWorkspaceWrapper",
        "windowList",
        "QList<KWin::Window*>",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'windowList'
        QtMocHelpers::MethodData<QList<KWin::Window*>() const>(1, 3, QMC::AccessPublic, 0x80000000 | 2),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtScriptWorkspaceWrapper, qt_meta_tag_ZN4KWin24QtScriptWorkspaceWrapperE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::QtScriptWorkspaceWrapper::staticMetaObject = { {
    QMetaObject::SuperData::link<WorkspaceWrapper::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin24QtScriptWorkspaceWrapperE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin24QtScriptWorkspaceWrapperE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin24QtScriptWorkspaceWrapperE_t>.metaTypes,
    nullptr
} };

void KWin::QtScriptWorkspaceWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtScriptWorkspaceWrapper *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QList<KWin::Window*> _r = _t->windowList();
            if (_a[0]) *reinterpret_cast<QList<KWin::Window*>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *KWin::QtScriptWorkspaceWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::QtScriptWorkspaceWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin24QtScriptWorkspaceWrapperE_t>.strings))
        return static_cast<void*>(this);
    return WorkspaceWrapper::qt_metacast(_clname);
}

int KWin::QtScriptWorkspaceWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WorkspaceWrapper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin33DeclarativeScriptWorkspaceWrapperE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::DeclarativeScriptWorkspaceWrapper::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin33DeclarativeScriptWorkspaceWrapperE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::DeclarativeScriptWorkspaceWrapper",
        "windows",
        "QQmlListProperty<KWin::Window>"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'windows'
        QtMocHelpers::PropertyData<QQmlListProperty<KWin::Window>>(1, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DeclarativeScriptWorkspaceWrapper, qt_meta_tag_ZN4KWin33DeclarativeScriptWorkspaceWrapperE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::DeclarativeScriptWorkspaceWrapper::staticMetaObject = { {
    QMetaObject::SuperData::link<WorkspaceWrapper::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin33DeclarativeScriptWorkspaceWrapperE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin33DeclarativeScriptWorkspaceWrapperE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin33DeclarativeScriptWorkspaceWrapperE_t>.metaTypes,
    nullptr
} };

void KWin::DeclarativeScriptWorkspaceWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DeclarativeScriptWorkspaceWrapper *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QQmlListProperty<KWin::Window>*>(_v) = _t->windows(); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::DeclarativeScriptWorkspaceWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::DeclarativeScriptWorkspaceWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin33DeclarativeScriptWorkspaceWrapperE_t>.strings))
        return static_cast<void*>(this);
    return WorkspaceWrapper::qt_metacast(_clname);
}

int KWin::DeclarativeScriptWorkspaceWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WorkspaceWrapper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
