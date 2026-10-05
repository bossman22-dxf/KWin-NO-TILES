/****************************************************************************
** Meta object code from reading C++ file 'workspace.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/workspace.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'workspace.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin9WorkspaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::Workspace::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin9WorkspaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::Workspace",
        "workspaceInitialized",
        "",
        "geometryChanged",
        "currentActivityChanged",
        "currentDesktopChanged",
        "KWin::VirtualDesktop*",
        "previousDesktop",
        "newDesktop",
        "KWin::LogicalOutput*",
        "output",
        "KWin::Window*",
        "currentDesktopChanging",
        "currentDesktop",
        "QPointF",
        "delta",
        "currentDesktopChangingCancelled",
        "windowAdded",
        "windowRemoved",
        "windowActivated",
        "windowMinimizedChanged",
        "groupAdded",
        "KWin::Group*",
        "deletedRemoved",
        "configChanged",
        "showingDesktopChanged",
        "showing",
        "animated",
        "outputOrderChanged",
        "outputAdded",
        "outputRemoved",
        "outputsChanged",
        "activeOutputChanged",
        "stackingOrderChanged",
        "aboutToRearrange",
        "dpmsStateChanged",
        "std::chrono::milliseconds",
        "animationTime",
        "performWindowOperation",
        "window",
        "Options::WindowOperation",
        "op",
        "slotWindowToDesktop",
        "VirtualDesktop*",
        "desktop",
        "slotSwitchToScreen",
        "LogicalOutput*",
        "slotWindowToScreen",
        "slotSwitchToLeftScreen",
        "slotSwitchToRightScreen",
        "slotSwitchToAboveScreen",
        "slotSwitchToBelowScreen",
        "slotSwitchToPrevScreen",
        "slotSwitchToNextScreen",
        "slotWindowToLeftScreen",
        "slotWindowToRightScreen",
        "slotWindowToAboveScreen",
        "slotWindowToBelowScreen",
        "slotWindowToNextScreen",
        "slotWindowToPrevScreen",
        "slotToggleShowDesktop",
        "slotWindowMaximize",
        "slotWindowMaximizeVertical",
        "slotWindowMaximizeHorizontal",
        "slotWindowRestore",
        "slotWindowMinimize",
        "slotWindowRaise",
        "slotWindowLower",
        "slotWindowRaiseOrLower",
        "slotActivateAttentionWindow",
        "slotWindowCenter",
        "slotWindowMoveLeft",
        "slotWindowMoveRight",
        "slotWindowMoveUp",
        "slotWindowMoveDown",
        "slotWindowExpandHorizontal",
        "slotWindowExpandVertical",
        "slotWindowShrinkHorizontal",
        "slotWindowShrinkVertical",
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
        "reconfigure",
        "slotReconfigure",
        "slotKillWindow",
        "slotSetupWindowShortcut",
        "setupWindowShortcutDone",
        "slotEndInteractiveMoveResize",
        "selectWmInputEventMask",
        "delayFocus",
        "slotReloadConfig",
        "updateCurrentActivity",
        "new_activity",
        "slotCurrentDesktopChanged",
        "slotCurrentDesktopChanging",
        "slotCurrentDesktopChangingCancelled",
        "slotDesktopAdded",
        "slotDesktopRemoved",
        "slotOutputBackendOutputsQueried",
        "slotMouseToFocus",
        "slotMouseToCenter"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'workspaceInitialized'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'geometryChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentActivityChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentDesktopChanged'
        QtMocHelpers::SignalData<void(KWin::VirtualDesktop *, KWin::VirtualDesktop *, KWin::LogicalOutput *, KWin::Window *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { 0x80000000 | 6, 8 }, { 0x80000000 | 9, 10 }, { 0x80000000 | 11, 2 },
        }}),
        // Signal 'currentDesktopChanging'
        QtMocHelpers::SignalData<void(KWin::VirtualDesktop *, QPointF, KWin::LogicalOutput *, KWin::Window *)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 13 }, { 0x80000000 | 14, 15 }, { 0x80000000 | 9, 10 }, { 0x80000000 | 11, 2 },
        }}),
        // Signal 'currentDesktopChangingCancelled'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'windowAdded'
        QtMocHelpers::SignalData<void(KWin::Window *)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 2 },
        }}),
        // Signal 'windowRemoved'
        QtMocHelpers::SignalData<void(KWin::Window *)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 2 },
        }}),
        // Signal 'windowActivated'
        QtMocHelpers::SignalData<void(KWin::Window *)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 2 },
        }}),
        // Signal 'windowMinimizedChanged'
        QtMocHelpers::SignalData<void(KWin::Window *)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 2 },
        }}),
        // Signal 'groupAdded'
        QtMocHelpers::SignalData<void(KWin::Group *)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 22, 2 },
        }}),
        // Signal 'deletedRemoved'
        QtMocHelpers::SignalData<void(KWin::Window *)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 2 },
        }}),
        // Signal 'configChanged'
        QtMocHelpers::SignalData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showingDesktopChanged'
        QtMocHelpers::SignalData<void(bool, bool)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 26 }, { QMetaType::Bool, 27 },
        }}),
        // Signal 'outputOrderChanged'
        QtMocHelpers::SignalData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'outputAdded'
        QtMocHelpers::SignalData<void(KWin::LogicalOutput *)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 2 },
        }}),
        // Signal 'outputRemoved'
        QtMocHelpers::SignalData<void(KWin::LogicalOutput *)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 2 },
        }}),
        // Signal 'outputsChanged'
        QtMocHelpers::SignalData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activeOutputChanged'
        QtMocHelpers::SignalData<void(KWin::LogicalOutput *)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 2 },
        }}),
        // Signal 'stackingOrderChanged'
        QtMocHelpers::SignalData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'aboutToRearrange'
        QtMocHelpers::SignalData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dpmsStateChanged'
        QtMocHelpers::SignalData<void(std::chrono::milliseconds)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 36, 37 },
        }}),
        // Slot 'performWindowOperation'
        QtMocHelpers::SlotData<void(KWin::Window *, Options::WindowOperation)>(38, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 39 }, { 0x80000000 | 40, 41 },
        }}),
        // Slot 'slotWindowToDesktop'
        QtMocHelpers::SlotData<void(VirtualDesktop *)>(42, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 43, 44 },
        }}),
        // Slot 'slotSwitchToScreen'
        QtMocHelpers::SlotData<void(LogicalOutput *)>(45, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 46, 10 },
        }}),
        // Slot 'slotWindowToScreen'
        QtMocHelpers::SlotData<void(LogicalOutput *)>(47, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 46, 10 },
        }}),
        // Slot 'slotSwitchToLeftScreen'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotSwitchToRightScreen'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotSwitchToAboveScreen'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotSwitchToBelowScreen'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotSwitchToPrevScreen'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotSwitchToNextScreen'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowToLeftScreen'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowToRightScreen'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowToAboveScreen'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowToBelowScreen'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowToNextScreen'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowToPrevScreen'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotToggleShowDesktop'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowMaximize'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowMaximizeVertical'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowMaximizeHorizontal'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowRestore'
        QtMocHelpers::SlotData<void()>(64, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowMinimize'
        QtMocHelpers::SlotData<void()>(65, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowRaise'
        QtMocHelpers::SlotData<void()>(66, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowLower'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowRaiseOrLower'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotActivateAttentionWindow'
        QtMocHelpers::SlotData<void()>(69, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowCenter'
        QtMocHelpers::SlotData<void()>(70, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowMoveLeft'
        QtMocHelpers::SlotData<void()>(71, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowMoveRight'
        QtMocHelpers::SlotData<void()>(72, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowMoveUp'
        QtMocHelpers::SlotData<void()>(73, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowMoveDown'
        QtMocHelpers::SlotData<void()>(74, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowExpandHorizontal'
        QtMocHelpers::SlotData<void()>(75, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowExpandVertical'
        QtMocHelpers::SlotData<void()>(76, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowShrinkHorizontal'
        QtMocHelpers::SlotData<void()>(77, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowShrinkVertical'
        QtMocHelpers::SlotData<void()>(78, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotIncreaseWindowOpacity'
        QtMocHelpers::SlotData<void()>(79, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotLowerWindowOpacity'
        QtMocHelpers::SlotData<void()>(80, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowOperations'
        QtMocHelpers::SlotData<void()>(81, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowClose'
        QtMocHelpers::SlotData<void()>(82, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowMove'
        QtMocHelpers::SlotData<void()>(83, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowResize'
        QtMocHelpers::SlotData<void()>(84, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowAbove'
        QtMocHelpers::SlotData<void()>(85, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowBelow'
        QtMocHelpers::SlotData<void()>(86, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowOnAllDesktops'
        QtMocHelpers::SlotData<void()>(87, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowFullScreen'
        QtMocHelpers::SlotData<void()>(88, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowNoBorder'
        QtMocHelpers::SlotData<void()>(89, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowExcludeFromCapture'
        QtMocHelpers::SlotData<void()>(90, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowToNextDesktop'
        QtMocHelpers::SlotData<void()>(91, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowToPreviousDesktop'
        QtMocHelpers::SlotData<void()>(92, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowToDesktopRight'
        QtMocHelpers::SlotData<void()>(93, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowToDesktopLeft'
        QtMocHelpers::SlotData<void()>(94, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowToDesktopUp'
        QtMocHelpers::SlotData<void()>(95, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWindowToDesktopDown'
        QtMocHelpers::SlotData<void()>(96, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'reconfigure'
        QtMocHelpers::SlotData<void()>(97, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotReconfigure'
        QtMocHelpers::SlotData<void()>(98, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotKillWindow'
        QtMocHelpers::SlotData<void()>(99, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotSetupWindowShortcut'
        QtMocHelpers::SlotData<void()>(100, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setupWindowShortcutDone'
        QtMocHelpers::SlotData<void(bool)>(101, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'slotEndInteractiveMoveResize'
        QtMocHelpers::SlotData<void()>(102, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'selectWmInputEventMask'
        QtMocHelpers::SlotData<void()>(103, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'delayFocus'
        QtMocHelpers::SlotData<void()>(104, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'slotReloadConfig'
        QtMocHelpers::SlotData<void()>(105, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateCurrentActivity'
        QtMocHelpers::SlotData<void(const QString &)>(106, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 107 },
        }}),
        // Slot 'slotCurrentDesktopChanged'
        QtMocHelpers::SlotData<void(VirtualDesktop *, VirtualDesktop *, LogicalOutput *)>(108, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 43, 7 }, { 0x80000000 | 43, 8 }, { 0x80000000 | 46, 10 },
        }}),
        // Slot 'slotCurrentDesktopChanging'
        QtMocHelpers::SlotData<void(VirtualDesktop *, QPointF, LogicalOutput *)>(109, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 43, 13 }, { 0x80000000 | 14, 15 }, { 0x80000000 | 46, 10 },
        }}),
        // Slot 'slotCurrentDesktopChangingCancelled'
        QtMocHelpers::SlotData<void()>(110, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'slotDesktopAdded'
        QtMocHelpers::SlotData<void(VirtualDesktop *)>(111, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 43, 44 },
        }}),
        // Slot 'slotDesktopRemoved'
        QtMocHelpers::SlotData<void(VirtualDesktop *)>(112, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 43, 44 },
        }}),
        // Slot 'slotOutputBackendOutputsQueried'
        QtMocHelpers::SlotData<void()>(113, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'slotMouseToFocus'
        QtMocHelpers::SlotData<void()>(114, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'slotMouseToCenter'
        QtMocHelpers::SlotData<void()>(115, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Workspace, qt_meta_tag_ZN4KWin9WorkspaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::Workspace::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin9WorkspaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin9WorkspaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin9WorkspaceE_t>.metaTypes,
    nullptr
} };

void KWin::Workspace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Workspace *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->workspaceInitialized(); break;
        case 1: _t->geometryChanged(); break;
        case 2: _t->currentActivityChanged(); break;
        case 3: _t->currentDesktopChanged((*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<KWin::LogicalOutput*>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<KWin::Window*>>(_a[4]))); break;
        case 4: _t->currentDesktopChanging((*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<KWin::LogicalOutput*>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<KWin::Window*>>(_a[4]))); break;
        case 5: _t->currentDesktopChangingCancelled(); break;
        case 6: _t->windowAdded((*reinterpret_cast<std::add_pointer_t<KWin::Window*>>(_a[1]))); break;
        case 7: _t->windowRemoved((*reinterpret_cast<std::add_pointer_t<KWin::Window*>>(_a[1]))); break;
        case 8: _t->windowActivated((*reinterpret_cast<std::add_pointer_t<KWin::Window*>>(_a[1]))); break;
        case 9: _t->windowMinimizedChanged((*reinterpret_cast<std::add_pointer_t<KWin::Window*>>(_a[1]))); break;
        case 10: _t->groupAdded((*reinterpret_cast<std::add_pointer_t<KWin::Group*>>(_a[1]))); break;
        case 11: _t->deletedRemoved((*reinterpret_cast<std::add_pointer_t<KWin::Window*>>(_a[1]))); break;
        case 12: _t->configChanged(); break;
        case 13: _t->showingDesktopChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 14: _t->outputOrderChanged(); break;
        case 15: _t->outputAdded((*reinterpret_cast<std::add_pointer_t<KWin::LogicalOutput*>>(_a[1]))); break;
        case 16: _t->outputRemoved((*reinterpret_cast<std::add_pointer_t<KWin::LogicalOutput*>>(_a[1]))); break;
        case 17: _t->outputsChanged(); break;
        case 18: _t->activeOutputChanged((*reinterpret_cast<std::add_pointer_t<KWin::LogicalOutput*>>(_a[1]))); break;
        case 19: _t->stackingOrderChanged(); break;
        case 20: _t->aboutToRearrange(); break;
        case 21: _t->dpmsStateChanged((*reinterpret_cast<std::add_pointer_t<std::chrono::milliseconds>>(_a[1]))); break;
        case 22: _t->performWindowOperation((*reinterpret_cast<std::add_pointer_t<KWin::Window*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Options::WindowOperation>>(_a[2]))); break;
        case 23: _t->slotWindowToDesktop((*reinterpret_cast<std::add_pointer_t<VirtualDesktop*>>(_a[1]))); break;
        case 24: _t->slotSwitchToScreen((*reinterpret_cast<std::add_pointer_t<LogicalOutput*>>(_a[1]))); break;
        case 25: _t->slotWindowToScreen((*reinterpret_cast<std::add_pointer_t<LogicalOutput*>>(_a[1]))); break;
        case 26: _t->slotSwitchToLeftScreen(); break;
        case 27: _t->slotSwitchToRightScreen(); break;
        case 28: _t->slotSwitchToAboveScreen(); break;
        case 29: _t->slotSwitchToBelowScreen(); break;
        case 30: _t->slotSwitchToPrevScreen(); break;
        case 31: _t->slotSwitchToNextScreen(); break;
        case 32: _t->slotWindowToLeftScreen(); break;
        case 33: _t->slotWindowToRightScreen(); break;
        case 34: _t->slotWindowToAboveScreen(); break;
        case 35: _t->slotWindowToBelowScreen(); break;
        case 36: _t->slotWindowToNextScreen(); break;
        case 37: _t->slotWindowToPrevScreen(); break;
        case 38: _t->slotToggleShowDesktop(); break;
        case 39: _t->slotWindowMaximize(); break;
        case 40: _t->slotWindowMaximizeVertical(); break;
        case 41: _t->slotWindowMaximizeHorizontal(); break;
        case 42: _t->slotWindowRestore(); break;
        case 43: _t->slotWindowMinimize(); break;
        case 44: _t->slotWindowRaise(); break;
        case 45: _t->slotWindowLower(); break;
        case 46: _t->slotWindowRaiseOrLower(); break;
        case 47: _t->slotActivateAttentionWindow(); break;
        case 48: _t->slotWindowCenter(); break;
        case 49: _t->slotWindowMoveLeft(); break;
        case 50: _t->slotWindowMoveRight(); break;
        case 51: _t->slotWindowMoveUp(); break;
        case 52: _t->slotWindowMoveDown(); break;
        case 53: _t->slotWindowExpandHorizontal(); break;
        case 54: _t->slotWindowExpandVertical(); break;
        case 55: _t->slotWindowShrinkHorizontal(); break;
        case 56: _t->slotWindowShrinkVertical(); break;
        case 57: _t->slotIncreaseWindowOpacity(); break;
        case 58: _t->slotLowerWindowOpacity(); break;
        case 59: _t->slotWindowOperations(); break;
        case 60: _t->slotWindowClose(); break;
        case 61: _t->slotWindowMove(); break;
        case 62: _t->slotWindowResize(); break;
        case 63: _t->slotWindowAbove(); break;
        case 64: _t->slotWindowBelow(); break;
        case 65: _t->slotWindowOnAllDesktops(); break;
        case 66: _t->slotWindowFullScreen(); break;
        case 67: _t->slotWindowNoBorder(); break;
        case 68: _t->slotWindowExcludeFromCapture(); break;
        case 69: _t->slotWindowToNextDesktop(); break;
        case 70: _t->slotWindowToPreviousDesktop(); break;
        case 71: _t->slotWindowToDesktopRight(); break;
        case 72: _t->slotWindowToDesktopLeft(); break;
        case 73: _t->slotWindowToDesktopUp(); break;
        case 74: _t->slotWindowToDesktopDown(); break;
        case 75: _t->reconfigure(); break;
        case 76: _t->slotReconfigure(); break;
        case 77: _t->slotKillWindow(); break;
        case 78: _t->slotSetupWindowShortcut(); break;
        case 79: _t->setupWindowShortcutDone((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 80: _t->slotEndInteractiveMoveResize(); break;
        case 81: _t->selectWmInputEventMask(); break;
        case 82: _t->delayFocus(); break;
        case 83: _t->slotReloadConfig(); break;
        case 84: _t->updateCurrentActivity((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 85: _t->slotCurrentDesktopChanged((*reinterpret_cast<std::add_pointer_t<VirtualDesktop*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<VirtualDesktop*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<LogicalOutput*>>(_a[3]))); break;
        case 86: _t->slotCurrentDesktopChanging((*reinterpret_cast<std::add_pointer_t<VirtualDesktop*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<LogicalOutput*>>(_a[3]))); break;
        case 87: _t->slotCurrentDesktopChangingCancelled(); break;
        case 88: _t->slotDesktopAdded((*reinterpret_cast<std::add_pointer_t<VirtualDesktop*>>(_a[1]))); break;
        case 89: _t->slotDesktopRemoved((*reinterpret_cast<std::add_pointer_t<VirtualDesktop*>>(_a[1]))); break;
        case 90: _t->slotOutputBackendOutputsQueried(); break;
        case 91: _t->slotMouseToFocus(); break;
        case 92: _t->slotMouseToCenter(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Workspace::*)()>(_a, &Workspace::workspaceInitialized, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Workspace::*)()>(_a, &Workspace::geometryChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Workspace::*)()>(_a, &Workspace::currentActivityChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Workspace::*)(KWin::VirtualDesktop * , KWin::VirtualDesktop * , KWin::LogicalOutput * , KWin::Window * )>(_a, &Workspace::currentDesktopChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Workspace::*)(KWin::VirtualDesktop * , QPointF , KWin::LogicalOutput * , KWin::Window * )>(_a, &Workspace::currentDesktopChanging, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Workspace::*)()>(_a, &Workspace::currentDesktopChangingCancelled, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Workspace::*)(KWin::Window * )>(_a, &Workspace::windowAdded, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Workspace::*)(KWin::Window * )>(_a, &Workspace::windowRemoved, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (Workspace::*)(KWin::Window * )>(_a, &Workspace::windowActivated, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (Workspace::*)(KWin::Window * )>(_a, &Workspace::windowMinimizedChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (Workspace::*)(KWin::Group * )>(_a, &Workspace::groupAdded, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (Workspace::*)(KWin::Window * )>(_a, &Workspace::deletedRemoved, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (Workspace::*)()>(_a, &Workspace::configChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (Workspace::*)(bool , bool )>(_a, &Workspace::showingDesktopChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (Workspace::*)()>(_a, &Workspace::outputOrderChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (Workspace::*)(KWin::LogicalOutput * )>(_a, &Workspace::outputAdded, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (Workspace::*)(KWin::LogicalOutput * )>(_a, &Workspace::outputRemoved, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (Workspace::*)()>(_a, &Workspace::outputsChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (Workspace::*)(KWin::LogicalOutput * )>(_a, &Workspace::activeOutputChanged, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (Workspace::*)()>(_a, &Workspace::stackingOrderChanged, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (Workspace::*)()>(_a, &Workspace::aboutToRearrange, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (Workspace::*)(std::chrono::milliseconds )>(_a, &Workspace::dpmsStateChanged, 21))
            return;
    }
}

const QMetaObject *KWin::Workspace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::Workspace::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin9WorkspaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::Workspace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 93)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 93;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 93)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 93;
    }
    return _id;
}

// SIGNAL 0
void KWin::Workspace::workspaceInitialized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::Workspace::geometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::Workspace::currentActivityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::Workspace::currentDesktopChanged(KWin::VirtualDesktop * _t1, KWin::VirtualDesktop * _t2, KWin::LogicalOutput * _t3, KWin::Window * _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 4
void KWin::Workspace::currentDesktopChanging(KWin::VirtualDesktop * _t1, QPointF _t2, KWin::LogicalOutput * _t3, KWin::Window * _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 5
void KWin::Workspace::currentDesktopChangingCancelled()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KWin::Workspace::windowAdded(KWin::Window * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void KWin::Workspace::windowRemoved(KWin::Window * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void KWin::Workspace::windowActivated(KWin::Window * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void KWin::Workspace::windowMinimizedChanged(KWin::Window * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void KWin::Workspace::groupAdded(KWin::Group * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void KWin::Workspace::deletedRemoved(KWin::Window * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void KWin::Workspace::configChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void KWin::Workspace::showingDesktopChanged(bool _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1, _t2);
}

// SIGNAL 14
void KWin::Workspace::outputOrderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void KWin::Workspace::outputAdded(KWin::LogicalOutput * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}

// SIGNAL 16
void KWin::Workspace::outputRemoved(KWin::LogicalOutput * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1);
}

// SIGNAL 17
void KWin::Workspace::outputsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void KWin::Workspace::activeOutputChanged(KWin::LogicalOutput * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 18, nullptr, _t1);
}

// SIGNAL 19
void KWin::Workspace::stackingOrderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void KWin::Workspace::aboutToRearrange()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void KWin::Workspace::dpmsStateChanged(std::chrono::milliseconds _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 21, nullptr, _t1);
}
QT_WARNING_POP
