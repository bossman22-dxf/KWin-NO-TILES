/****************************************************************************
** Meta object code from reading C++ file 'effecthandler.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/effect/effecthandler.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'effecthandler.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin14EffectsHandlerE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::EffectsHandler::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin14EffectsHandlerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::EffectsHandler",
        "D-Bus Interface",
        "org.kde.kwin.Effects",
        "screenAdded",
        "",
        "KWin::LogicalOutput*",
        "screen",
        "screenRemoved",
        "desktopChanged",
        "KWin::VirtualDesktop*",
        "oldDesktop",
        "newDesktop",
        "KWin::EffectWindow*",
        "with",
        "output",
        "desktopChanging",
        "currentDesktop",
        "QPointF",
        "offset",
        "desktopChangingCancelled",
        "desktopAdded",
        "desktop",
        "desktopRemoved",
        "desktopMoved",
        "position",
        "desktopGridSizeChanged",
        "QSize",
        "size",
        "desktopGridWidthChanged",
        "width",
        "desktopGridHeightChanged",
        "height",
        "showingDesktopChanged",
        "windowAdded",
        "w",
        "windowClosed",
        "windowActivated",
        "windowDeleted",
        "tabBoxAdded",
        "mode",
        "tabBoxClosed",
        "tabBoxUpdated",
        "tabBoxKeyEvent",
        "QKeyEvent*",
        "event",
        "mouseChanged",
        "pos",
        "oldpos",
        "Qt::MouseButtons",
        "buttons",
        "oldbuttons",
        "Qt::KeyboardModifiers",
        "modifiers",
        "oldmodifiers",
        "cursorShapeChanged",
        "propertyNotify",
        "atom",
        "currentActivityAboutToChange",
        "currentActivityChanged",
        "id",
        "activityAdded",
        "activityRemoved",
        "screenLockingChanged",
        "locked",
        "screenAboutToLock",
        "stackingOrderChanged",
        "screenEdgeApproaching",
        "ElectricBorder",
        "border",
        "factor",
        "KWin::Rect",
        "geometry",
        "virtualScreenSizeChanged",
        "virtualScreenGeometryChanged",
        "windowDataChanged",
        "role",
        "xcbConnectionChanged",
        "activeFullScreenEffectChanged",
        "hasActiveFullScreenEffectChanged",
        "colorPickerActiveChanged",
        "sessionStateChanged",
        "startupAdded",
        "QIcon",
        "icon",
        "startupChanged",
        "startupRemoved",
        "inputPanelChanged",
        "viewRemoved",
        "RenderView*",
        "view",
        "reconfigureEffect",
        "name",
        "loadEffect",
        "toggleEffect",
        "unloadEffect",
        "isEffectLoaded",
        "isEffectSupported",
        "areEffectsSupported",
        "QList<bool>",
        "names",
        "supportInformation",
        "debug",
        "parameter",
        "moveWindow",
        "QPoint",
        "snap",
        "snapAdjust",
        "windowToDesktops",
        "QList<KWin::VirtualDesktop*>",
        "desktops",
        "windowToScreen",
        "LogicalOutput*",
        "desktopAbove",
        "wrap",
        "desktopToRight",
        "desktopBelow",
        "desktopToLeft",
        "desktopName",
        "findWindow",
        "WId",
        "SurfaceInterface*",
        "surf",
        "QWindow*",
        "QUuid",
        "setElevatedWindow",
        "set",
        "addRepaintFull",
        "addRepaint",
        "RectF",
        "logicalRegion",
        "Rect",
        "Region",
        "x",
        "y",
        "h",
        "activeEffects",
        "loadedEffects",
        "listOfEffects",
        "currentActivity",
        "activeWindow",
        "desktopGridSize",
        "desktopGridWidth",
        "desktopGridHeight",
        "workspaceWidth",
        "workspaceHeight",
        "optionRollOverDesktops",
        "activeScreen",
        "animationTimeFactor",
        "stackingOrder",
        "QList<EffectWindow*>",
        "decorationsHaveAlpha",
        "compositingType",
        "CompositingType",
        "cursorPos",
        "virtualScreenSize",
        "virtualScreenGeometry",
        "hasActiveFullScreenEffect",
        "colorPickerActive",
        "sessionState",
        "KWin::SessionState",
        "inputPanel"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'screenAdded'
        QtMocHelpers::SignalData<void(KWin::LogicalOutput *)>(3, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'screenRemoved'
        QtMocHelpers::SignalData<void(KWin::LogicalOutput *)>(7, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'desktopChanged'
        QtMocHelpers::SignalData<void(KWin::VirtualDesktop *, KWin::VirtualDesktop *, KWin::EffectWindow *, KWin::LogicalOutput *)>(8, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 }, { 0x80000000 | 9, 11 }, { 0x80000000 | 12, 13 }, { 0x80000000 | 5, 14 },
        }}),
        // Signal 'desktopChanging'
        QtMocHelpers::SignalData<void(KWin::VirtualDesktop *, QPointF, KWin::EffectWindow *, KWin::LogicalOutput *)>(15, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 16 }, { 0x80000000 | 17, 18 }, { 0x80000000 | 12, 13 }, { 0x80000000 | 5, 14 },
        }}),
        // Signal 'desktopChangingCancelled'
        QtMocHelpers::SignalData<void()>(19, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'desktopAdded'
        QtMocHelpers::SignalData<void(KWin::VirtualDesktop *)>(20, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 21 },
        }}),
        // Signal 'desktopRemoved'
        QtMocHelpers::SignalData<void(KWin::VirtualDesktop *)>(22, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 21 },
        }}),
        // Signal 'desktopMoved'
        QtMocHelpers::SignalData<void(KWin::VirtualDesktop *, int)>(23, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 21 }, { QMetaType::Int, 24 },
        }}),
        // Signal 'desktopGridSizeChanged'
        QtMocHelpers::SignalData<void(const QSize &)>(25, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 26, 27 },
        }}),
        // Signal 'desktopGridWidthChanged'
        QtMocHelpers::SignalData<void(int)>(28, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 29 },
        }}),
        // Signal 'desktopGridHeightChanged'
        QtMocHelpers::SignalData<void(int)>(30, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 31 },
        }}),
        // Signal 'showingDesktopChanged'
        QtMocHelpers::SignalData<void(bool)>(32, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'windowAdded'
        QtMocHelpers::SignalData<void(KWin::EffectWindow *)>(33, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 34 },
        }}),
        // Signal 'windowClosed'
        QtMocHelpers::SignalData<void(KWin::EffectWindow *)>(35, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 34 },
        }}),
        // Signal 'windowActivated'
        QtMocHelpers::SignalData<void(KWin::EffectWindow *)>(36, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 34 },
        }}),
        // Signal 'windowDeleted'
        QtMocHelpers::SignalData<void(KWin::EffectWindow *)>(37, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 34 },
        }}),
        // Signal 'tabBoxAdded'
        QtMocHelpers::SignalData<void(int)>(38, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 39 },
        }}),
        // Signal 'tabBoxClosed'
        QtMocHelpers::SignalData<void()>(40, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'tabBoxUpdated'
        QtMocHelpers::SignalData<void()>(41, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'tabBoxKeyEvent'
        QtMocHelpers::SignalData<void(QKeyEvent *)>(42, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 43, 44 },
        }}),
        // Signal 'mouseChanged'
        QtMocHelpers::SignalData<void(const QPointF &, const QPointF &, Qt::MouseButtons, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::KeyboardModifiers)>(45, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 46 }, { 0x80000000 | 17, 47 }, { 0x80000000 | 48, 49 }, { 0x80000000 | 48, 50 },
            { 0x80000000 | 51, 52 }, { 0x80000000 | 51, 53 },
        }}),
        // Signal 'cursorShapeChanged'
        QtMocHelpers::SignalData<void()>(54, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'propertyNotify'
        QtMocHelpers::SignalData<void(KWin::EffectWindow *, long)>(55, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 34 }, { QMetaType::Long, 56 },
        }}),
        // Signal 'currentActivityAboutToChange'
        QtMocHelpers::SignalData<void()>(57, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentActivityChanged'
        QtMocHelpers::SignalData<void(const QString &)>(58, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 59 },
        }}),
        // Signal 'activityAdded'
        QtMocHelpers::SignalData<void(const QString &)>(60, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 59 },
        }}),
        // Signal 'activityRemoved'
        QtMocHelpers::SignalData<void(const QString &)>(61, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 59 },
        }}),
        // Signal 'screenLockingChanged'
        QtMocHelpers::SignalData<void(bool)>(62, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 63 },
        }}),
        // Signal 'screenAboutToLock'
        QtMocHelpers::SignalData<void()>(64, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'stackingOrderChanged'
        QtMocHelpers::SignalData<void()>(65, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'screenEdgeApproaching'
        QtMocHelpers::SignalData<void(ElectricBorder, qreal, const KWin::Rect &)>(66, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 67, 68 }, { QMetaType::QReal, 69 }, { 0x80000000 | 70, 71 },
        }}),
        // Signal 'virtualScreenSizeChanged'
        QtMocHelpers::SignalData<void()>(72, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'virtualScreenGeometryChanged'
        QtMocHelpers::SignalData<void()>(73, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'windowDataChanged'
        QtMocHelpers::SignalData<void(KWin::EffectWindow *, int)>(74, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 34 }, { QMetaType::Int, 75 },
        }}),
        // Signal 'xcbConnectionChanged'
        QtMocHelpers::SignalData<void()>(76, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activeFullScreenEffectChanged'
        QtMocHelpers::SignalData<void()>(77, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hasActiveFullScreenEffectChanged'
        QtMocHelpers::SignalData<void()>(78, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'colorPickerActiveChanged'
        QtMocHelpers::SignalData<void()>(79, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sessionStateChanged'
        QtMocHelpers::SignalData<void()>(80, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'startupAdded'
        QtMocHelpers::SignalData<void(const QString &, const QIcon &)>(81, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 59 }, { 0x80000000 | 82, 83 },
        }}),
        // Signal 'startupChanged'
        QtMocHelpers::SignalData<void(const QString &, const QIcon &)>(84, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 59 }, { 0x80000000 | 82, 83 },
        }}),
        // Signal 'startupRemoved'
        QtMocHelpers::SignalData<void(const QString &)>(85, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 59 },
        }}),
        // Signal 'inputPanelChanged'
        QtMocHelpers::SignalData<void()>(86, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'viewRemoved'
        QtMocHelpers::SignalData<void(RenderView *)>(87, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 88, 89 },
        }}),
        // Slot 'reconfigureEffect'
        QtMocHelpers::SlotData<void(const QString &)>(90, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::QString, 91 },
        }}),
        // Slot 'loadEffect'
        QtMocHelpers::SlotData<bool(const QString &)>(92, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { QMetaType::QString, 91 },
        }}),
        // Slot 'toggleEffect'
        QtMocHelpers::SlotData<void(const QString &)>(93, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::QString, 91 },
        }}),
        // Slot 'unloadEffect'
        QtMocHelpers::SlotData<void(const QString &)>(94, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::QString, 91 },
        }}),
        // Slot 'isEffectLoaded'
        QtMocHelpers::SlotData<bool(const QString &) const>(95, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { QMetaType::QString, 91 },
        }}),
        // Slot 'isEffectSupported'
        QtMocHelpers::SlotData<bool(const QString &)>(96, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { QMetaType::QString, 91 },
        }}),
        // Slot 'areEffectsSupported'
        QtMocHelpers::SlotData<QList<bool>(const QStringList &)>(97, 4, QMC::AccessPublic | QMC::MethodScriptable, 0x80000000 | 98, {{
            { QMetaType::QStringList, 99 },
        }}),
        // Slot 'supportInformation'
        QtMocHelpers::SlotData<QString(const QString &) const>(100, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QString, {{
            { QMetaType::QString, 91 },
        }}),
        // Slot 'debug'
        QtMocHelpers::SlotData<QString(const QString &, const QString &) const>(101, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QString, {{
            { QMetaType::QString, 91 }, { QMetaType::QString, 102 },
        }}),
        // Slot 'debug'
        QtMocHelpers::SlotData<QString(const QString &) const>(101, 4, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::QString, {{
            { QMetaType::QString, 91 },
        }}),
        // Method 'moveWindow'
        QtMocHelpers::MethodData<void(KWin::EffectWindow *, const QPoint &, bool, double)>(103, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { 0x80000000 | 12, 34 }, { 0x80000000 | 104, 46 }, { QMetaType::Bool, 105 }, { QMetaType::Double, 106 },
        }}),
        // Method 'moveWindow'
        QtMocHelpers::MethodData<void(KWin::EffectWindow *, const QPoint &, bool)>(103, 4, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::Void, {{
            { 0x80000000 | 12, 34 }, { 0x80000000 | 104, 46 }, { QMetaType::Bool, 105 },
        }}),
        // Method 'moveWindow'
        QtMocHelpers::MethodData<void(KWin::EffectWindow *, const QPoint &)>(103, 4, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::Void, {{
            { 0x80000000 | 12, 34 }, { 0x80000000 | 104, 46 },
        }}),
        // Method 'windowToDesktops'
        QtMocHelpers::MethodData<void(KWin::EffectWindow *, const QList<KWin::VirtualDesktop*> &)>(107, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { 0x80000000 | 12, 34 }, { 0x80000000 | 108, 109 },
        }}),
        // Method 'windowToScreen'
        QtMocHelpers::MethodData<void(KWin::EffectWindow *, LogicalOutput *)>(110, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { 0x80000000 | 12, 34 }, { 0x80000000 | 111, 6 },
        }}),
        // Method 'desktopAbove'
        QtMocHelpers::MethodData<KWin::VirtualDesktop *(KWin::VirtualDesktop *, bool) const>(112, 4, QMC::AccessPublic | QMC::MethodScriptable, 0x80000000 | 9, {{
            { 0x80000000 | 9, 21 }, { QMetaType::Bool, 113 },
        }}),
        // Method 'desktopAbove'
        QtMocHelpers::MethodData<KWin::VirtualDesktop *(KWin::VirtualDesktop *) const>(112, 4, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, 0x80000000 | 9, {{
            { 0x80000000 | 9, 21 },
        }}),
        // Method 'desktopAbove'
        QtMocHelpers::MethodData<KWin::VirtualDesktop *() const>(112, 4, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, 0x80000000 | 9),
        // Method 'desktopToRight'
        QtMocHelpers::MethodData<KWin::VirtualDesktop *(KWin::VirtualDesktop *, bool) const>(114, 4, QMC::AccessPublic | QMC::MethodScriptable, 0x80000000 | 9, {{
            { 0x80000000 | 9, 21 }, { QMetaType::Bool, 113 },
        }}),
        // Method 'desktopToRight'
        QtMocHelpers::MethodData<KWin::VirtualDesktop *(KWin::VirtualDesktop *) const>(114, 4, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, 0x80000000 | 9, {{
            { 0x80000000 | 9, 21 },
        }}),
        // Method 'desktopToRight'
        QtMocHelpers::MethodData<KWin::VirtualDesktop *() const>(114, 4, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, 0x80000000 | 9),
        // Method 'desktopBelow'
        QtMocHelpers::MethodData<KWin::VirtualDesktop *(KWin::VirtualDesktop *, bool) const>(115, 4, QMC::AccessPublic | QMC::MethodScriptable, 0x80000000 | 9, {{
            { 0x80000000 | 9, 21 }, { QMetaType::Bool, 113 },
        }}),
        // Method 'desktopBelow'
        QtMocHelpers::MethodData<KWin::VirtualDesktop *(KWin::VirtualDesktop *) const>(115, 4, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, 0x80000000 | 9, {{
            { 0x80000000 | 9, 21 },
        }}),
        // Method 'desktopBelow'
        QtMocHelpers::MethodData<KWin::VirtualDesktop *() const>(115, 4, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, 0x80000000 | 9),
        // Method 'desktopToLeft'
        QtMocHelpers::MethodData<KWin::VirtualDesktop *(KWin::VirtualDesktop *, bool) const>(116, 4, QMC::AccessPublic | QMC::MethodScriptable, 0x80000000 | 9, {{
            { 0x80000000 | 9, 21 }, { QMetaType::Bool, 113 },
        }}),
        // Method 'desktopToLeft'
        QtMocHelpers::MethodData<KWin::VirtualDesktop *(KWin::VirtualDesktop *) const>(116, 4, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, 0x80000000 | 9, {{
            { 0x80000000 | 9, 21 },
        }}),
        // Method 'desktopToLeft'
        QtMocHelpers::MethodData<KWin::VirtualDesktop *() const>(116, 4, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, 0x80000000 | 9),
        // Method 'desktopName'
        QtMocHelpers::MethodData<QString(KWin::VirtualDesktop *) const>(117, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QString, {{
            { 0x80000000 | 9, 21 },
        }}),
        // Method 'findWindow'
        QtMocHelpers::MethodData<KWin::EffectWindow *(WId) const>(118, 4, QMC::AccessPublic | QMC::MethodScriptable, 0x80000000 | 12, {{
            { 0x80000000 | 119, 59 },
        }}),
        // Method 'findWindow'
        QtMocHelpers::MethodData<KWin::EffectWindow *(SurfaceInterface *) const>(118, 4, QMC::AccessPublic | QMC::MethodScriptable, 0x80000000 | 12, {{
            { 0x80000000 | 120, 121 },
        }}),
        // Method 'findWindow'
        QtMocHelpers::MethodData<KWin::EffectWindow *(QWindow *) const>(118, 4, QMC::AccessPublic | QMC::MethodScriptable, 0x80000000 | 12, {{
            { 0x80000000 | 122, 34 },
        }}),
        // Method 'findWindow'
        QtMocHelpers::MethodData<KWin::EffectWindow *(const QUuid &) const>(118, 4, QMC::AccessPublic | QMC::MethodScriptable, 0x80000000 | 12, {{
            { 0x80000000 | 123, 59 },
        }}),
        // Method 'setElevatedWindow'
        QtMocHelpers::MethodData<void(KWin::EffectWindow *, bool)>(124, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { 0x80000000 | 12, 34 }, { QMetaType::Bool, 125 },
        }}),
        // Method 'addRepaintFull'
        QtMocHelpers::MethodData<void()>(126, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Method 'addRepaint'
        QtMocHelpers::MethodData<void(const RectF &)>(127, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { 0x80000000 | 128, 129 },
        }}),
        // Method 'addRepaint'
        QtMocHelpers::MethodData<void(const Rect &)>(127, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { 0x80000000 | 130, 129 },
        }}),
        // Method 'addRepaint'
        QtMocHelpers::MethodData<void(const Region &)>(127, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { 0x80000000 | 131, 129 },
        }}),
        // Method 'addRepaint'
        QtMocHelpers::MethodData<void(int, int, int, int)>(127, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Int, 132 }, { QMetaType::Int, 133 }, { QMetaType::Int, 34 }, { QMetaType::Int, 134 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'activeEffects'
        QtMocHelpers::PropertyData<QStringList>(135, QMetaType::QStringList, QMC::DefaultPropertyFlags),
        // property 'loadedEffects'
        QtMocHelpers::PropertyData<QStringList>(136, QMetaType::QStringList, QMC::DefaultPropertyFlags),
        // property 'listOfEffects'
        QtMocHelpers::PropertyData<QStringList>(137, QMetaType::QStringList, QMC::DefaultPropertyFlags),
        // property 'currentDesktop'
        QtMocHelpers::PropertyData<KWin::VirtualDesktop*>(16, 0x80000000 | 9, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 2),
        // property 'currentActivity'
        QtMocHelpers::PropertyData<QString>(138, QMetaType::QString, QMC::DefaultPropertyFlags, 24),
        // property 'activeWindow'
        QtMocHelpers::PropertyData<KWin::EffectWindow*>(139, 0x80000000 | 12, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag, 14),
        // property 'desktopGridSize'
        QtMocHelpers::PropertyData<QSize>(140, 0x80000000 | 26, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 8),
        // property 'desktopGridWidth'
        QtMocHelpers::PropertyData<int>(141, QMetaType::Int, QMC::DefaultPropertyFlags, 9),
        // property 'desktopGridHeight'
        QtMocHelpers::PropertyData<int>(142, QMetaType::Int, QMC::DefaultPropertyFlags, 10),
        // property 'workspaceWidth'
        QtMocHelpers::PropertyData<int>(143, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'workspaceHeight'
        QtMocHelpers::PropertyData<int>(144, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'desktops'
        QtMocHelpers::PropertyData<QList<KWin::VirtualDesktop*>>(109, 0x80000000 | 108, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'optionRollOverDesktops'
        QtMocHelpers::PropertyData<bool>(145, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'activeScreen'
        QtMocHelpers::PropertyData<KWin::LogicalOutput*>(146, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'animationTimeFactor'
        QtMocHelpers::PropertyData<qreal>(147, QMetaType::QReal, QMC::DefaultPropertyFlags),
        // property 'stackingOrder'
        QtMocHelpers::PropertyData<QList<EffectWindow*>>(148, 0x80000000 | 149, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'decorationsHaveAlpha'
        QtMocHelpers::PropertyData<bool>(150, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'compositingType'
        QtMocHelpers::PropertyData<CompositingType>(151, 0x80000000 | 152, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'cursorPos'
        QtMocHelpers::PropertyData<QPointF>(153, 0x80000000 | 17, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'virtualScreenSize'
        QtMocHelpers::PropertyData<QSize>(154, 0x80000000 | 26, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 31),
        // property 'virtualScreenGeometry'
        QtMocHelpers::PropertyData<KWin::Rect>(155, 0x80000000 | 70, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 32),
        // property 'hasActiveFullScreenEffect'
        QtMocHelpers::PropertyData<bool>(156, QMetaType::Bool, QMC::DefaultPropertyFlags, 36),
        // property 'colorPickerActive'
        QtMocHelpers::PropertyData<bool>(157, QMetaType::Bool, QMC::DefaultPropertyFlags, 37),
        // property 'sessionState'
        QtMocHelpers::PropertyData<KWin::SessionState>(158, 0x80000000 | 159, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 38),
        // property 'inputPanel'
        QtMocHelpers::PropertyData<KWin::EffectWindow*>(160, 0x80000000 | 12, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 42),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<EffectsHandler, qt_meta_tag_ZN4KWin14EffectsHandlerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN4KWin14EffectsHandlerE[] = {
    QMetaObject::SuperData::link<KWin::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject KWin::EffectsHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin14EffectsHandlerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin14EffectsHandlerE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN4KWin14EffectsHandlerE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin14EffectsHandlerE_t>.metaTypes,
    nullptr
} };

void KWin::EffectsHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EffectsHandler *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->screenAdded((*reinterpret_cast<std::add_pointer_t<KWin::LogicalOutput*>>(_a[1]))); break;
        case 1: _t->screenRemoved((*reinterpret_cast<std::add_pointer_t<KWin::LogicalOutput*>>(_a[1]))); break;
        case 2: _t->desktopChanged((*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<KWin::LogicalOutput*>>(_a[4]))); break;
        case 3: _t->desktopChanging((*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<KWin::LogicalOutput*>>(_a[4]))); break;
        case 4: _t->desktopChangingCancelled(); break;
        case 5: _t->desktopAdded((*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[1]))); break;
        case 6: _t->desktopRemoved((*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[1]))); break;
        case 7: _t->desktopMoved((*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 8: _t->desktopGridSizeChanged((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 9: _t->desktopGridWidthChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->desktopGridHeightChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->showingDesktopChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->windowAdded((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 13: _t->windowClosed((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 14: _t->windowActivated((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 15: _t->windowDeleted((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 16: _t->tabBoxAdded((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->tabBoxClosed(); break;
        case 18: _t->tabBoxUpdated(); break;
        case 19: _t->tabBoxKeyEvent((*reinterpret_cast<std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 20: _t->mouseChanged((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<Qt::MouseButtons>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<Qt::MouseButtons>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<Qt::KeyboardModifiers>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<Qt::KeyboardModifiers>>(_a[6]))); break;
        case 21: _t->cursorShapeChanged(); break;
        case 22: _t->propertyNotify((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<long>>(_a[2]))); break;
        case 23: _t->currentActivityAboutToChange(); break;
        case 24: _t->currentActivityChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 25: _t->activityAdded((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 26: _t->activityRemoved((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 27: _t->screenLockingChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 28: _t->screenAboutToLock(); break;
        case 29: _t->stackingOrderChanged(); break;
        case 30: _t->screenEdgeApproaching((*reinterpret_cast<std::add_pointer_t<ElectricBorder>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<KWin::Rect>>(_a[3]))); break;
        case 31: _t->virtualScreenSizeChanged(); break;
        case 32: _t->virtualScreenGeometryChanged(); break;
        case 33: _t->windowDataChanged((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 34: _t->xcbConnectionChanged(); break;
        case 35: _t->activeFullScreenEffectChanged(); break;
        case 36: _t->hasActiveFullScreenEffectChanged(); break;
        case 37: _t->colorPickerActiveChanged(); break;
        case 38: _t->sessionStateChanged(); break;
        case 39: _t->startupAdded((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[2]))); break;
        case 40: _t->startupChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[2]))); break;
        case 41: _t->startupRemoved((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 42: _t->inputPanelChanged(); break;
        case 43: _t->viewRemoved((*reinterpret_cast<std::add_pointer_t<RenderView*>>(_a[1]))); break;
        case 44: _t->reconfigureEffect((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 45: { bool _r = _t->loadEffect((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 46: _t->toggleEffect((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 47: _t->unloadEffect((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 48: { bool _r = _t->isEffectLoaded((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 49: { bool _r = _t->isEffectSupported((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 50: { QList<bool> _r = _t->areEffectsSupported((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QList<bool>*>(_a[0]) = std::move(_r); }  break;
        case 51: { QString _r = _t->supportInformation((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 52: { QString _r = _t->debug((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 53: { QString _r = _t->debug((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 54: _t->moveWindow((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[4]))); break;
        case 55: _t->moveWindow((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); break;
        case 56: _t->moveWindow((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[2]))); break;
        case 57: _t->windowToDesktops((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QList<KWin::VirtualDesktop*>>>(_a[2]))); break;
        case 58: _t->windowToScreen((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<LogicalOutput*>>(_a[2]))); break;
        case 59: { KWin::VirtualDesktop* _r = _t->desktopAbove((*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast<KWin::VirtualDesktop**>(_a[0]) = std::move(_r); }  break;
        case 60: { KWin::VirtualDesktop* _r = _t->desktopAbove((*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<KWin::VirtualDesktop**>(_a[0]) = std::move(_r); }  break;
        case 61: { KWin::VirtualDesktop* _r = _t->desktopAbove();
            if (_a[0]) *reinterpret_cast<KWin::VirtualDesktop**>(_a[0]) = std::move(_r); }  break;
        case 62: { KWin::VirtualDesktop* _r = _t->desktopToRight((*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast<KWin::VirtualDesktop**>(_a[0]) = std::move(_r); }  break;
        case 63: { KWin::VirtualDesktop* _r = _t->desktopToRight((*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<KWin::VirtualDesktop**>(_a[0]) = std::move(_r); }  break;
        case 64: { KWin::VirtualDesktop* _r = _t->desktopToRight();
            if (_a[0]) *reinterpret_cast<KWin::VirtualDesktop**>(_a[0]) = std::move(_r); }  break;
        case 65: { KWin::VirtualDesktop* _r = _t->desktopBelow((*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast<KWin::VirtualDesktop**>(_a[0]) = std::move(_r); }  break;
        case 66: { KWin::VirtualDesktop* _r = _t->desktopBelow((*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<KWin::VirtualDesktop**>(_a[0]) = std::move(_r); }  break;
        case 67: { KWin::VirtualDesktop* _r = _t->desktopBelow();
            if (_a[0]) *reinterpret_cast<KWin::VirtualDesktop**>(_a[0]) = std::move(_r); }  break;
        case 68: { KWin::VirtualDesktop* _r = _t->desktopToLeft((*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast<KWin::VirtualDesktop**>(_a[0]) = std::move(_r); }  break;
        case 69: { KWin::VirtualDesktop* _r = _t->desktopToLeft((*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<KWin::VirtualDesktop**>(_a[0]) = std::move(_r); }  break;
        case 70: { KWin::VirtualDesktop* _r = _t->desktopToLeft();
            if (_a[0]) *reinterpret_cast<KWin::VirtualDesktop**>(_a[0]) = std::move(_r); }  break;
        case 71: { QString _r = _t->desktopName((*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 72: { KWin::EffectWindow* _r = _t->findWindow((*reinterpret_cast<std::add_pointer_t<WId>>(_a[1])));
            if (_a[0]) *reinterpret_cast<KWin::EffectWindow**>(_a[0]) = std::move(_r); }  break;
        case 73: { KWin::EffectWindow* _r = _t->findWindow((*reinterpret_cast<std::add_pointer_t<SurfaceInterface*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<KWin::EffectWindow**>(_a[0]) = std::move(_r); }  break;
        case 74: { KWin::EffectWindow* _r = _t->findWindow((*reinterpret_cast<std::add_pointer_t<QWindow*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<KWin::EffectWindow**>(_a[0]) = std::move(_r); }  break;
        case 75: { KWin::EffectWindow* _r = _t->findWindow((*reinterpret_cast<std::add_pointer_t<QUuid>>(_a[1])));
            if (_a[0]) *reinterpret_cast<KWin::EffectWindow**>(_a[0]) = std::move(_r); }  break;
        case 76: _t->setElevatedWindow((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 77: _t->addRepaintFull(); break;
        case 78: _t->addRepaint((*reinterpret_cast<std::add_pointer_t<RectF>>(_a[1]))); break;
        case 79: _t->addRepaint((*reinterpret_cast<std::add_pointer_t<Rect>>(_a[1]))); break;
        case 80: _t->addRepaint((*reinterpret_cast<std::add_pointer_t<Region>>(_a[1]))); break;
        case 81: _t->addRepaint((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::LogicalOutput* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::LogicalOutput* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::LogicalOutput* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::LogicalOutput* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            }
            break;
        case 54:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            }
            break;
        case 55:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            }
            break;
        case 56:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            }
            break;
        case 57:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            }
            break;
        case 58:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LogicalOutput* >(); break;
            }
            break;
        case 74:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWindow* >(); break;
            }
            break;
        case 76:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(KWin::LogicalOutput * )>(_a, &EffectsHandler::screenAdded, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(KWin::LogicalOutput * )>(_a, &EffectsHandler::screenRemoved, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(KWin::VirtualDesktop * , KWin::VirtualDesktop * , KWin::EffectWindow * , KWin::LogicalOutput * )>(_a, &EffectsHandler::desktopChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(KWin::VirtualDesktop * , QPointF , KWin::EffectWindow * , KWin::LogicalOutput * )>(_a, &EffectsHandler::desktopChanging, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)()>(_a, &EffectsHandler::desktopChangingCancelled, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(KWin::VirtualDesktop * )>(_a, &EffectsHandler::desktopAdded, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(KWin::VirtualDesktop * )>(_a, &EffectsHandler::desktopRemoved, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(KWin::VirtualDesktop * , int )>(_a, &EffectsHandler::desktopMoved, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(const QSize & )>(_a, &EffectsHandler::desktopGridSizeChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(int )>(_a, &EffectsHandler::desktopGridWidthChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(int )>(_a, &EffectsHandler::desktopGridHeightChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(bool )>(_a, &EffectsHandler::showingDesktopChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(KWin::EffectWindow * )>(_a, &EffectsHandler::windowAdded, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(KWin::EffectWindow * )>(_a, &EffectsHandler::windowClosed, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(KWin::EffectWindow * )>(_a, &EffectsHandler::windowActivated, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(KWin::EffectWindow * )>(_a, &EffectsHandler::windowDeleted, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(int )>(_a, &EffectsHandler::tabBoxAdded, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)()>(_a, &EffectsHandler::tabBoxClosed, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)()>(_a, &EffectsHandler::tabBoxUpdated, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(QKeyEvent * )>(_a, &EffectsHandler::tabBoxKeyEvent, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(const QPointF & , const QPointF & , Qt::MouseButtons , Qt::MouseButtons , Qt::KeyboardModifiers , Qt::KeyboardModifiers )>(_a, &EffectsHandler::mouseChanged, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)()>(_a, &EffectsHandler::cursorShapeChanged, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(KWin::EffectWindow * , long )>(_a, &EffectsHandler::propertyNotify, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)()>(_a, &EffectsHandler::currentActivityAboutToChange, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(const QString & )>(_a, &EffectsHandler::currentActivityChanged, 24))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(const QString & )>(_a, &EffectsHandler::activityAdded, 25))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(const QString & )>(_a, &EffectsHandler::activityRemoved, 26))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(bool )>(_a, &EffectsHandler::screenLockingChanged, 27))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)()>(_a, &EffectsHandler::screenAboutToLock, 28))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)()>(_a, &EffectsHandler::stackingOrderChanged, 29))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(ElectricBorder , qreal , const KWin::Rect & )>(_a, &EffectsHandler::screenEdgeApproaching, 30))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)()>(_a, &EffectsHandler::virtualScreenSizeChanged, 31))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)()>(_a, &EffectsHandler::virtualScreenGeometryChanged, 32))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(KWin::EffectWindow * , int )>(_a, &EffectsHandler::windowDataChanged, 33))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)()>(_a, &EffectsHandler::xcbConnectionChanged, 34))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)()>(_a, &EffectsHandler::activeFullScreenEffectChanged, 35))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)()>(_a, &EffectsHandler::hasActiveFullScreenEffectChanged, 36))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)()>(_a, &EffectsHandler::colorPickerActiveChanged, 37))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)()>(_a, &EffectsHandler::sessionStateChanged, 38))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(const QString & , const QIcon & )>(_a, &EffectsHandler::startupAdded, 39))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(const QString & , const QIcon & )>(_a, &EffectsHandler::startupChanged, 40))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(const QString & )>(_a, &EffectsHandler::startupRemoved, 41))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)()>(_a, &EffectsHandler::inputPanelChanged, 42))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectsHandler::*)(RenderView * )>(_a, &EffectsHandler::viewRemoved, 43))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 24:
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KWin::EffectWindow* >(); break;
        case 13:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KWin::LogicalOutput* >(); break;
        case 15:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<EffectWindow*> >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QStringList*>(_v) = _t->activeEffects(); break;
        case 1: *reinterpret_cast<QStringList*>(_v) = _t->loadedEffects(); break;
        case 2: *reinterpret_cast<QStringList*>(_v) = _t->listOfEffects(); break;
        case 3: *reinterpret_cast<KWin::VirtualDesktop**>(_v) = _t->currentDesktop(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->currentActivity(); break;
        case 5: *reinterpret_cast<KWin::EffectWindow**>(_v) = _t->activeWindow(); break;
        case 6: *reinterpret_cast<QSize*>(_v) = _t->desktopGridSize(); break;
        case 7: *reinterpret_cast<int*>(_v) = _t->desktopGridWidth(); break;
        case 8: *reinterpret_cast<int*>(_v) = _t->desktopGridHeight(); break;
        case 9: *reinterpret_cast<int*>(_v) = _t->workspaceWidth(); break;
        case 10: *reinterpret_cast<int*>(_v) = _t->workspaceHeight(); break;
        case 11: *reinterpret_cast<QList<KWin::VirtualDesktop*>*>(_v) = _t->desktops(); break;
        case 12: *reinterpret_cast<bool*>(_v) = _t->optionRollOverDesktops(); break;
        case 13: *reinterpret_cast<KWin::LogicalOutput**>(_v) = _t->activeScreen(); break;
        case 14: *reinterpret_cast<qreal*>(_v) = _t->animationTimeFactor(); break;
        case 15: *reinterpret_cast<QList<EffectWindow*>*>(_v) = _t->stackingOrder(); break;
        case 16: *reinterpret_cast<bool*>(_v) = _t->decorationsHaveAlpha(); break;
        case 17: *reinterpret_cast<CompositingType*>(_v) = _t->compositingType(); break;
        case 18: *reinterpret_cast<QPointF*>(_v) = _t->cursorPos(); break;
        case 19: *reinterpret_cast<QSize*>(_v) = _t->virtualScreenSize(); break;
        case 20: *reinterpret_cast<KWin::Rect*>(_v) = _t->virtualScreenGeometry(); break;
        case 21: *reinterpret_cast<bool*>(_v) = _t->hasActiveFullScreenEffect(); break;
        case 22: *reinterpret_cast<bool*>(_v) = _t->isColorPickerActive(); break;
        case 23: *reinterpret_cast<KWin::SessionState*>(_v) = _t->sessionState(); break;
        case 24: *reinterpret_cast<KWin::EffectWindow**>(_v) = _t->inputPanel(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setCurrentDesktop(*reinterpret_cast<KWin::VirtualDesktop**>(_v)); break;
        case 5: _t->activateWindow(*reinterpret_cast<KWin::EffectWindow**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::EffectsHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::EffectsHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin14EffectsHandlerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::EffectsHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 82)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 82;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 82)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 82;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void KWin::EffectsHandler::screenAdded(KWin::LogicalOutput * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void KWin::EffectsHandler::screenRemoved(KWin::LogicalOutput * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void KWin::EffectsHandler::desktopChanged(KWin::VirtualDesktop * _t1, KWin::VirtualDesktop * _t2, KWin::EffectWindow * _t3, KWin::LogicalOutput * _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 3
void KWin::EffectsHandler::desktopChanging(KWin::VirtualDesktop * _t1, QPointF _t2, KWin::EffectWindow * _t3, KWin::LogicalOutput * _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 4
void KWin::EffectsHandler::desktopChangingCancelled()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KWin::EffectsHandler::desktopAdded(KWin::VirtualDesktop * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void KWin::EffectsHandler::desktopRemoved(KWin::VirtualDesktop * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void KWin::EffectsHandler::desktopMoved(KWin::VirtualDesktop * _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1, _t2);
}

// SIGNAL 8
void KWin::EffectsHandler::desktopGridSizeChanged(const QSize & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void KWin::EffectsHandler::desktopGridWidthChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void KWin::EffectsHandler::desktopGridHeightChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void KWin::EffectsHandler::showingDesktopChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void KWin::EffectsHandler::windowAdded(KWin::EffectWindow * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void KWin::EffectsHandler::windowClosed(KWin::EffectWindow * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void KWin::EffectsHandler::windowActivated(KWin::EffectWindow * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1);
}

// SIGNAL 15
void KWin::EffectsHandler::windowDeleted(KWin::EffectWindow * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}

// SIGNAL 16
void KWin::EffectsHandler::tabBoxAdded(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1);
}

// SIGNAL 17
void KWin::EffectsHandler::tabBoxClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void KWin::EffectsHandler::tabBoxUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void KWin::EffectsHandler::tabBoxKeyEvent(QKeyEvent * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 19, nullptr, _t1);
}

// SIGNAL 20
void KWin::EffectsHandler::mouseChanged(const QPointF & _t1, const QPointF & _t2, Qt::MouseButtons _t3, Qt::MouseButtons _t4, Qt::KeyboardModifiers _t5, Qt::KeyboardModifiers _t6)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 20, nullptr, _t1, _t2, _t3, _t4, _t5, _t6);
}

// SIGNAL 21
void KWin::EffectsHandler::cursorShapeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void KWin::EffectsHandler::propertyNotify(KWin::EffectWindow * _t1, long _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 22, nullptr, _t1, _t2);
}

// SIGNAL 23
void KWin::EffectsHandler::currentActivityAboutToChange()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void KWin::EffectsHandler::currentActivityChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 24, nullptr, _t1);
}

// SIGNAL 25
void KWin::EffectsHandler::activityAdded(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 25, nullptr, _t1);
}

// SIGNAL 26
void KWin::EffectsHandler::activityRemoved(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 26, nullptr, _t1);
}

// SIGNAL 27
void KWin::EffectsHandler::screenLockingChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 27, nullptr, _t1);
}

// SIGNAL 28
void KWin::EffectsHandler::screenAboutToLock()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void KWin::EffectsHandler::stackingOrderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void KWin::EffectsHandler::screenEdgeApproaching(ElectricBorder _t1, qreal _t2, const KWin::Rect & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 30, nullptr, _t1, _t2, _t3);
}

// SIGNAL 31
void KWin::EffectsHandler::virtualScreenSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void KWin::EffectsHandler::virtualScreenGeometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void KWin::EffectsHandler::windowDataChanged(KWin::EffectWindow * _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 33, nullptr, _t1, _t2);
}

// SIGNAL 34
void KWin::EffectsHandler::xcbConnectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 34, nullptr);
}

// SIGNAL 35
void KWin::EffectsHandler::activeFullScreenEffectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void KWin::EffectsHandler::hasActiveFullScreenEffectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void KWin::EffectsHandler::colorPickerActiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 37, nullptr);
}

// SIGNAL 38
void KWin::EffectsHandler::sessionStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 38, nullptr);
}

// SIGNAL 39
void KWin::EffectsHandler::startupAdded(const QString & _t1, const QIcon & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 39, nullptr, _t1, _t2);
}

// SIGNAL 40
void KWin::EffectsHandler::startupChanged(const QString & _t1, const QIcon & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 40, nullptr, _t1, _t2);
}

// SIGNAL 41
void KWin::EffectsHandler::startupRemoved(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 41, nullptr, _t1);
}

// SIGNAL 42
void KWin::EffectsHandler::inputPanelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 42, nullptr);
}

// SIGNAL 43
void KWin::EffectsHandler::viewRemoved(RenderView * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 43, nullptr, _t1);
}
QT_WARNING_POP
