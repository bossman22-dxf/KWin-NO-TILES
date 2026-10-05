/****************************************************************************
** Meta object code from reading C++ file 'options.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/options.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'options.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin7OptionsE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::Options::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin7OptionsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::Options",
        "focusPolicyChanged",
        "",
        "focusPolicyIsResonableChanged",
        "xwaylandCrashPolicyChanged",
        "xwaylandMaxCrashCountChanged",
        "xwaylandEavesdropsChanged",
        "xwaylandEavesdropsMouseChanged",
        "xwaylandEisNoPromptChanged",
        "xwaylandEisNoPromptAppsChanged",
        "nextFocusPrefersMouseChanged",
        "clickRaiseChanged",
        "autoRaiseChanged",
        "autoRaiseIntervalChanged",
        "delayFocusIntervalChanged",
        "separateScreenFocusChanged",
        "placementChanged",
        "activationDesktopPolicyChanged",
        "borderSnapZoneChanged",
        "windowSnapZoneChanged",
        "centerSnapZoneChanged",
        "snapOnlyWhenOverlappingChanged",
        "edgeBarrierChanged",
        "cornerBarrierChanged",
        "rollOverDesktopsChanged",
        "enabled",
        "perOutputVirtualDesktopsChanged",
        "focusStealingPreventionLevelChanged",
        "operationTitlebarDblClickChanged",
        "operationMaxButtonLeftClickChanged",
        "operationMaxButtonRightClickChanged",
        "operationMaxButtonMiddleClickChanged",
        "commandActiveTitlebar1Changed",
        "commandActiveTitlebar2Changed",
        "commandActiveTitlebar3Changed",
        "commandInactiveTitlebar1Changed",
        "commandInactiveTitlebar2Changed",
        "commandInactiveTitlebar3Changed",
        "commandWindow1Changed",
        "commandWindow2Changed",
        "commandWindow3Changed",
        "commandWindowWheelChanged",
        "commandAll1Changed",
        "commandAll2Changed",
        "commandAll3Changed",
        "keyCmdAllModKeyChanged",
        "doubleClickBorderToMaximizeChanged",
        "condensedTitleChanged",
        "electricBorderMaximizeChanged",
        "electricBorderTilingChanged",
        "nativeTilingEnabledChanged",
        "electricBorderCornerRatioChanged",
        "electricBorderAllScreenCornerChanged",
        "borderlessMaximizedWindowsChanged",
        "killPingTimeoutChanged",
        "compositingModeChanged",
        "animationSpeedChanged",
        "configChanged",
        "allowTearingChanged",
        "interactiveWindowMoveEnabledChanged",
        "pictureInPictureHomeCornerChanged",
        "pictureInPictureMarginChanged",
        "overlayVirtualKeyboardOnWindowsChanged",
        "focusPolicy",
        "FocusPolicy",
        "xwaylandCrashPolicy",
        "XwaylandCrashPolicy",
        "xwaylandMaxCrashCount",
        "nextFocusPrefersMouse",
        "clickRaise",
        "autoRaise",
        "autoRaiseInterval",
        "delayFocusInterval",
        "separateScreenFocus",
        "placement",
        "PlacementPolicy",
        "activationDesktopPolicy",
        "ActivationDesktopPolicy",
        "focusPolicyIsReasonable",
        "borderSnapZone",
        "windowSnapZone",
        "centerSnapZone",
        "snapOnlyWhenOverlapping",
        "edgeBarrier",
        "cornerBarrier",
        "rollOverDesktops",
        "perOutputVirtualDesktops",
        "focusStealingPreventionLevel",
        "KWin::FocusStealingPreventionLevel",
        "operationTitlebarDblClick",
        "KWin::Options::WindowOperation",
        "operationMaxButtonLeftClick",
        "operationMaxButtonMiddleClick",
        "operationMaxButtonRightClick",
        "commandActiveTitlebar1",
        "MouseCommand",
        "commandActiveTitlebar2",
        "commandActiveTitlebar3",
        "commandInactiveTitlebar1",
        "commandInactiveTitlebar2",
        "commandInactiveTitlebar3",
        "commandWindow1",
        "commandWindow2",
        "commandWindow3",
        "commandWindowWheel",
        "commandAll1",
        "commandAll2",
        "commandAll3",
        "keyCmdAllModKey",
        "doubleClickBorderToMaximize",
        "condensedTitle",
        "electricBorderMaximize",
        "electricBorderTiling",
        "nativeTilingEnabled",
        "electricBorderAllScreenCorner",
        "electricBorderCornerRatio",
        "borderlessMaximizedWindows",
        "killPingTimeout",
        "compositingMode",
        "allowTearing",
        "interactiveWindowMoveEnabled",
        "pictureInPictureHomeCorner",
        "Qt::Corner",
        "pictureInPictureMargin",
        "overlayVirtualKeyboardOnWindows",
        "ClickToFocus",
        "FocusFollowsMouse",
        "FocusUnderMouse",
        "FocusStrictlyUnderMouse",
        "SwitchToOtherDesktop",
        "BringToCurrentDesktop",
        "DoNothing",
        "WindowOperation",
        "MaximizeOp",
        "UntileOrRestoreOp",
        "MinimizeOp",
        "MoveOp",
        "UnrestrictedMoveOp",
        "ResizeOp",
        "UnrestrictedResizeOp",
        "CloseOp",
        "OnAllDesktopsOp",
        "KeepAboveOp",
        "KeepBelowOp",
        "WindowRulesOp",
        "ToggleStoreSettingsOp",
        "HMaximizeOp",
        "VMaximizeOp",
        "LowerOp",
        "FullScreenOp",
        "NoBorderOp",
        "ExcludeFromCaptureOp",
        "NoOp",
        "SetupWindowShortcutOp",
        "ApplicationRulesOp",
        "MouseRaise",
        "MouseLower",
        "MouseOperationsMenu",
        "MouseToggleRaiseAndLower",
        "MouseActivateAndRaise",
        "MouseActivateAndLower",
        "MouseActivate",
        "MouseActivateRaiseAndPassClick",
        "MouseActivateAndPassClick",
        "MouseMove",
        "MouseUnrestrictedMove",
        "MouseActivateRaiseAndMove",
        "MouseActivateRaiseAndUnrestrictedMove",
        "MouseResize",
        "MouseUnrestrictedResize",
        "MouseMaximize",
        "MouseRestore",
        "MouseMinimize",
        "MouseNextDesktop",
        "MousePreviousDesktop",
        "MouseAbove",
        "MouseBelow",
        "MouseOpacityMore",
        "MouseOpacityLess",
        "MouseClose",
        "MouseNothing",
        "MouseActivateRaiseOnReleaseAndPassClick",
        "MouseWheelCommand",
        "MouseWheelRaiseLower",
        "MouseWheelMaximizeRestore",
        "MouseWheelAboveBelow",
        "MouseWheelPreviousNextDesktop",
        "MouseWheelChangeOpacity",
        "MouseWheelNothing"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'focusPolicyChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'focusPolicyIsResonableChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'xwaylandCrashPolicyChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'xwaylandMaxCrashCountChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'xwaylandEavesdropsChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'xwaylandEavesdropsMouseChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'xwaylandEisNoPromptChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'xwaylandEisNoPromptAppsChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'nextFocusPrefersMouseChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'clickRaiseChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'autoRaiseChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'autoRaiseIntervalChanged'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'delayFocusIntervalChanged'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'separateScreenFocusChanged'
        QtMocHelpers::SignalData<void(bool)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'placementChanged'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activationDesktopPolicyChanged'
        QtMocHelpers::SignalData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'borderSnapZoneChanged'
        QtMocHelpers::SignalData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'windowSnapZoneChanged'
        QtMocHelpers::SignalData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'centerSnapZoneChanged'
        QtMocHelpers::SignalData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'snapOnlyWhenOverlappingChanged'
        QtMocHelpers::SignalData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'edgeBarrierChanged'
        QtMocHelpers::SignalData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'cornerBarrierChanged'
        QtMocHelpers::SignalData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'rollOverDesktopsChanged'
        QtMocHelpers::SignalData<void(bool)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 25 },
        }}),
        // Signal 'perOutputVirtualDesktopsChanged'
        QtMocHelpers::SignalData<void(bool)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 25 },
        }}),
        // Signal 'focusStealingPreventionLevelChanged'
        QtMocHelpers::SignalData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'operationTitlebarDblClickChanged'
        QtMocHelpers::SignalData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'operationMaxButtonLeftClickChanged'
        QtMocHelpers::SignalData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'operationMaxButtonRightClickChanged'
        QtMocHelpers::SignalData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'operationMaxButtonMiddleClickChanged'
        QtMocHelpers::SignalData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'commandActiveTitlebar1Changed'
        QtMocHelpers::SignalData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'commandActiveTitlebar2Changed'
        QtMocHelpers::SignalData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'commandActiveTitlebar3Changed'
        QtMocHelpers::SignalData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'commandInactiveTitlebar1Changed'
        QtMocHelpers::SignalData<void()>(35, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'commandInactiveTitlebar2Changed'
        QtMocHelpers::SignalData<void()>(36, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'commandInactiveTitlebar3Changed'
        QtMocHelpers::SignalData<void()>(37, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'commandWindow1Changed'
        QtMocHelpers::SignalData<void()>(38, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'commandWindow2Changed'
        QtMocHelpers::SignalData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'commandWindow3Changed'
        QtMocHelpers::SignalData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'commandWindowWheelChanged'
        QtMocHelpers::SignalData<void()>(41, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'commandAll1Changed'
        QtMocHelpers::SignalData<void()>(42, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'commandAll2Changed'
        QtMocHelpers::SignalData<void()>(43, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'commandAll3Changed'
        QtMocHelpers::SignalData<void()>(44, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'keyCmdAllModKeyChanged'
        QtMocHelpers::SignalData<void()>(45, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'doubleClickBorderToMaximizeChanged'
        QtMocHelpers::SignalData<void()>(46, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'condensedTitleChanged'
        QtMocHelpers::SignalData<void()>(47, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'electricBorderMaximizeChanged'
        QtMocHelpers::SignalData<void()>(48, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'electricBorderTilingChanged'
        QtMocHelpers::SignalData<void()>(49, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'nativeTilingEnabledChanged'
        QtMocHelpers::SignalData<void()>(50, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'electricBorderCornerRatioChanged'
        QtMocHelpers::SignalData<void()>(51, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'electricBorderAllScreenCornerChanged'
        QtMocHelpers::SignalData<void()>(52, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'borderlessMaximizedWindowsChanged'
        QtMocHelpers::SignalData<void()>(53, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'killPingTimeoutChanged'
        QtMocHelpers::SignalData<void()>(54, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'compositingModeChanged'
        QtMocHelpers::SignalData<void()>(55, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'animationSpeedChanged'
        QtMocHelpers::SignalData<void()>(56, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'configChanged'
        QtMocHelpers::SignalData<void()>(57, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'allowTearingChanged'
        QtMocHelpers::SignalData<void()>(58, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'interactiveWindowMoveEnabledChanged'
        QtMocHelpers::SignalData<void()>(59, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pictureInPictureHomeCornerChanged'
        QtMocHelpers::SignalData<void()>(60, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pictureInPictureMarginChanged'
        QtMocHelpers::SignalData<void()>(61, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'overlayVirtualKeyboardOnWindowsChanged'
        QtMocHelpers::SignalData<void()>(62, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'focusPolicy'
        QtMocHelpers::PropertyData<enum FocusPolicy>(63, 0x80000000 | 64, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'xwaylandCrashPolicy'
        QtMocHelpers::PropertyData<XwaylandCrashPolicy>(65, 0x80000000 | 66, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 2),
        // property 'xwaylandMaxCrashCount'
        QtMocHelpers::PropertyData<int>(67, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'nextFocusPrefersMouse'
        QtMocHelpers::PropertyData<bool>(68, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'clickRaise'
        QtMocHelpers::PropertyData<bool>(69, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
        // property 'autoRaise'
        QtMocHelpers::PropertyData<bool>(70, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
        // property 'autoRaiseInterval'
        QtMocHelpers::PropertyData<int>(71, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 11),
        // property 'delayFocusInterval'
        QtMocHelpers::PropertyData<int>(72, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 12),
        // property 'separateScreenFocus'
        QtMocHelpers::PropertyData<bool>(73, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 13),
        // property 'placement'
        QtMocHelpers::PropertyData<PlacementPolicy>(74, 0x80000000 | 75, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 14),
        // property 'activationDesktopPolicy'
        QtMocHelpers::PropertyData<enum ActivationDesktopPolicy>(76, 0x80000000 | 77, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 15),
        // property 'focusPolicyIsReasonable'
        QtMocHelpers::PropertyData<bool>(78, QMetaType::Bool, QMC::DefaultPropertyFlags, 1),
        // property 'borderSnapZone'
        QtMocHelpers::PropertyData<int>(79, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 16),
        // property 'windowSnapZone'
        QtMocHelpers::PropertyData<int>(80, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 17),
        // property 'centerSnapZone'
        QtMocHelpers::PropertyData<int>(81, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 18),
        // property 'snapOnlyWhenOverlapping'
        QtMocHelpers::PropertyData<bool>(82, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 19),
        // property 'edgeBarrier'
        QtMocHelpers::PropertyData<int>(83, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 20),
        // property 'cornerBarrier'
        QtMocHelpers::PropertyData<int>(84, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 21),
        // property 'rollOverDesktops'
        QtMocHelpers::PropertyData<bool>(85, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 22),
        // property 'perOutputVirtualDesktops'
        QtMocHelpers::PropertyData<bool>(86, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 23),
        // property 'focusStealingPreventionLevel'
        QtMocHelpers::PropertyData<KWin::FocusStealingPreventionLevel>(87, 0x80000000 | 88, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 24),
        // property 'operationTitlebarDblClick'
        QtMocHelpers::PropertyData<KWin::Options::WindowOperation>(89, 0x80000000 | 90, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 25),
        // property 'operationMaxButtonLeftClick'
        QtMocHelpers::PropertyData<KWin::Options::WindowOperation>(91, 0x80000000 | 90, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 26),
        // property 'operationMaxButtonMiddleClick'
        QtMocHelpers::PropertyData<KWin::Options::WindowOperation>(92, 0x80000000 | 90, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 28),
        // property 'operationMaxButtonRightClick'
        QtMocHelpers::PropertyData<KWin::Options::WindowOperation>(93, 0x80000000 | 90, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 27),
        // property 'commandActiveTitlebar1'
        QtMocHelpers::PropertyData<enum MouseCommand>(94, 0x80000000 | 95, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 29),
        // property 'commandActiveTitlebar2'
        QtMocHelpers::PropertyData<enum MouseCommand>(96, 0x80000000 | 95, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 30),
        // property 'commandActiveTitlebar3'
        QtMocHelpers::PropertyData<enum MouseCommand>(97, 0x80000000 | 95, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 31),
        // property 'commandInactiveTitlebar1'
        QtMocHelpers::PropertyData<enum MouseCommand>(98, 0x80000000 | 95, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 32),
        // property 'commandInactiveTitlebar2'
        QtMocHelpers::PropertyData<enum MouseCommand>(99, 0x80000000 | 95, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 33),
        // property 'commandInactiveTitlebar3'
        QtMocHelpers::PropertyData<enum MouseCommand>(100, 0x80000000 | 95, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 34),
        // property 'commandWindow1'
        QtMocHelpers::PropertyData<enum MouseCommand>(101, 0x80000000 | 95, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 35),
        // property 'commandWindow2'
        QtMocHelpers::PropertyData<enum MouseCommand>(102, 0x80000000 | 95, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 36),
        // property 'commandWindow3'
        QtMocHelpers::PropertyData<enum MouseCommand>(103, 0x80000000 | 95, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 37),
        // property 'commandWindowWheel'
        QtMocHelpers::PropertyData<enum MouseCommand>(104, 0x80000000 | 95, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 38),
        // property 'commandAll1'
        QtMocHelpers::PropertyData<enum MouseCommand>(105, 0x80000000 | 95, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 39),
        // property 'commandAll2'
        QtMocHelpers::PropertyData<enum MouseCommand>(106, 0x80000000 | 95, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 40),
        // property 'commandAll3'
        QtMocHelpers::PropertyData<enum MouseCommand>(107, 0x80000000 | 95, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 41),
        // property 'keyCmdAllModKey'
        QtMocHelpers::PropertyData<uint>(108, QMetaType::UInt, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 42),
        // property 'doubleClickBorderToMaximize'
        QtMocHelpers::PropertyData<bool>(109, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 43),
        // property 'condensedTitle'
        QtMocHelpers::PropertyData<bool>(110, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 44),
        // property 'electricBorderMaximize'
        QtMocHelpers::PropertyData<bool>(111, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 45),
        // property 'electricBorderTiling'
        QtMocHelpers::PropertyData<bool>(112, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 46),
        // property 'nativeTilingEnabled'
        QtMocHelpers::PropertyData<bool>(113, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 47),
        // property 'electricBorderAllScreenCorner'
        QtMocHelpers::PropertyData<bool>(114, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 49),
        // property 'electricBorderCornerRatio'
        QtMocHelpers::PropertyData<float>(115, QMetaType::Float, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 48),
        // property 'borderlessMaximizedWindows'
        QtMocHelpers::PropertyData<bool>(116, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 50),
        // property 'killPingTimeout'
        QtMocHelpers::PropertyData<int>(117, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 51),
        // property 'compositingMode'
        QtMocHelpers::PropertyData<int>(118, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 52),
        // property 'allowTearing'
        QtMocHelpers::PropertyData<bool>(119, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 55),
        // property 'interactiveWindowMoveEnabled'
        QtMocHelpers::PropertyData<bool>(120, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 56),
        // property 'pictureInPictureHomeCorner'
        QtMocHelpers::PropertyData<Qt::Corner>(121, 0x80000000 | 122, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 57),
        // property 'pictureInPictureMargin'
        QtMocHelpers::PropertyData<int>(123, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 58),
        // property 'overlayVirtualKeyboardOnWindows'
        QtMocHelpers::PropertyData<bool>(124, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 59),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'FocusPolicy'
        QtMocHelpers::EnumData<enum FocusPolicy>(64, 64, QMC::EnumFlags{}).add({
            {  125, FocusPolicy::ClickToFocus },
            {  126, FocusPolicy::FocusFollowsMouse },
            {  127, FocusPolicy::FocusUnderMouse },
            {  128, FocusPolicy::FocusStrictlyUnderMouse },
        }),
        // enum 'ActivationDesktopPolicy'
        QtMocHelpers::EnumData<enum ActivationDesktopPolicy>(77, 77, QMC::EnumFlags{}).add({
            {  129, ActivationDesktopPolicy::SwitchToOtherDesktop },
            {  130, ActivationDesktopPolicy::BringToCurrentDesktop },
            {  131, ActivationDesktopPolicy::DoNothing },
        }),
        // enum 'WindowOperation'
        QtMocHelpers::EnumData<enum WindowOperation>(132, 132, QMC::EnumFlags{}).add({
            {  133, WindowOperation::MaximizeOp },
            {  134, WindowOperation::UntileOrRestoreOp },
            {  135, WindowOperation::MinimizeOp },
            {  136, WindowOperation::MoveOp },
            {  137, WindowOperation::UnrestrictedMoveOp },
            {  138, WindowOperation::ResizeOp },
            {  139, WindowOperation::UnrestrictedResizeOp },
            {  140, WindowOperation::CloseOp },
            {  141, WindowOperation::OnAllDesktopsOp },
            {  142, WindowOperation::KeepAboveOp },
            {  143, WindowOperation::KeepBelowOp },
            {  144, WindowOperation::WindowRulesOp },
            {  145, WindowOperation::ToggleStoreSettingsOp },
            {  146, WindowOperation::HMaximizeOp },
            {  147, WindowOperation::VMaximizeOp },
            {  148, WindowOperation::LowerOp },
            {  149, WindowOperation::FullScreenOp },
            {  150, WindowOperation::NoBorderOp },
            {  151, WindowOperation::ExcludeFromCaptureOp },
            {  152, WindowOperation::NoOp },
            {  153, WindowOperation::SetupWindowShortcutOp },
            {  154, WindowOperation::ApplicationRulesOp },
        }),
        // enum 'MouseCommand'
        QtMocHelpers::EnumData<enum MouseCommand>(95, 95, QMC::EnumFlags{}).add({
            {  155, MouseCommand::MouseRaise },
            {  156, MouseCommand::MouseLower },
            {  157, MouseCommand::MouseOperationsMenu },
            {  158, MouseCommand::MouseToggleRaiseAndLower },
            {  159, MouseCommand::MouseActivateAndRaise },
            {  160, MouseCommand::MouseActivateAndLower },
            {  161, MouseCommand::MouseActivate },
            {  162, MouseCommand::MouseActivateRaiseAndPassClick },
            {  163, MouseCommand::MouseActivateAndPassClick },
            {  164, MouseCommand::MouseMove },
            {  165, MouseCommand::MouseUnrestrictedMove },
            {  166, MouseCommand::MouseActivateRaiseAndMove },
            {  167, MouseCommand::MouseActivateRaiseAndUnrestrictedMove },
            {  168, MouseCommand::MouseResize },
            {  169, MouseCommand::MouseUnrestrictedResize },
            {  170, MouseCommand::MouseMaximize },
            {  171, MouseCommand::MouseRestore },
            {  172, MouseCommand::MouseMinimize },
            {  173, MouseCommand::MouseNextDesktop },
            {  174, MouseCommand::MousePreviousDesktop },
            {  175, MouseCommand::MouseAbove },
            {  176, MouseCommand::MouseBelow },
            {  177, MouseCommand::MouseOpacityMore },
            {  178, MouseCommand::MouseOpacityLess },
            {  179, MouseCommand::MouseClose },
            {  180, MouseCommand::MouseNothing },
            {  181, MouseCommand::MouseActivateRaiseOnReleaseAndPassClick },
        }),
        // enum 'MouseWheelCommand'
        QtMocHelpers::EnumData<enum MouseWheelCommand>(182, 182, QMC::EnumFlags{}).add({
            {  183, MouseWheelCommand::MouseWheelRaiseLower },
            {  184, MouseWheelCommand::MouseWheelMaximizeRestore },
            {  185, MouseWheelCommand::MouseWheelAboveBelow },
            {  186, MouseWheelCommand::MouseWheelPreviousNextDesktop },
            {  187, MouseWheelCommand::MouseWheelChangeOpacity },
            {  188, MouseWheelCommand::MouseWheelNothing },
        }),
    };
    return QtMocHelpers::metaObjectData<Options, qt_meta_tag_ZN4KWin7OptionsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN4KWin7OptionsE[] = {
    QMetaObject::SuperData::link<KWin::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject KWin::Options::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin7OptionsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin7OptionsE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN4KWin7OptionsE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin7OptionsE_t>.metaTypes,
    nullptr
} };

void KWin::Options::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Options *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->focusPolicyChanged(); break;
        case 1: _t->focusPolicyIsResonableChanged(); break;
        case 2: _t->xwaylandCrashPolicyChanged(); break;
        case 3: _t->xwaylandMaxCrashCountChanged(); break;
        case 4: _t->xwaylandEavesdropsChanged(); break;
        case 5: _t->xwaylandEavesdropsMouseChanged(); break;
        case 6: _t->xwaylandEisNoPromptChanged(); break;
        case 7: _t->xwaylandEisNoPromptAppsChanged(); break;
        case 8: _t->nextFocusPrefersMouseChanged(); break;
        case 9: _t->clickRaiseChanged(); break;
        case 10: _t->autoRaiseChanged(); break;
        case 11: _t->autoRaiseIntervalChanged(); break;
        case 12: _t->delayFocusIntervalChanged(); break;
        case 13: _t->separateScreenFocusChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->placementChanged(); break;
        case 15: _t->activationDesktopPolicyChanged(); break;
        case 16: _t->borderSnapZoneChanged(); break;
        case 17: _t->windowSnapZoneChanged(); break;
        case 18: _t->centerSnapZoneChanged(); break;
        case 19: _t->snapOnlyWhenOverlappingChanged(); break;
        case 20: _t->edgeBarrierChanged(); break;
        case 21: _t->cornerBarrierChanged(); break;
        case 22: _t->rollOverDesktopsChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->perOutputVirtualDesktopsChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 24: _t->focusStealingPreventionLevelChanged(); break;
        case 25: _t->operationTitlebarDblClickChanged(); break;
        case 26: _t->operationMaxButtonLeftClickChanged(); break;
        case 27: _t->operationMaxButtonRightClickChanged(); break;
        case 28: _t->operationMaxButtonMiddleClickChanged(); break;
        case 29: _t->commandActiveTitlebar1Changed(); break;
        case 30: _t->commandActiveTitlebar2Changed(); break;
        case 31: _t->commandActiveTitlebar3Changed(); break;
        case 32: _t->commandInactiveTitlebar1Changed(); break;
        case 33: _t->commandInactiveTitlebar2Changed(); break;
        case 34: _t->commandInactiveTitlebar3Changed(); break;
        case 35: _t->commandWindow1Changed(); break;
        case 36: _t->commandWindow2Changed(); break;
        case 37: _t->commandWindow3Changed(); break;
        case 38: _t->commandWindowWheelChanged(); break;
        case 39: _t->commandAll1Changed(); break;
        case 40: _t->commandAll2Changed(); break;
        case 41: _t->commandAll3Changed(); break;
        case 42: _t->keyCmdAllModKeyChanged(); break;
        case 43: _t->doubleClickBorderToMaximizeChanged(); break;
        case 44: _t->condensedTitleChanged(); break;
        case 45: _t->electricBorderMaximizeChanged(); break;
        case 46: _t->electricBorderTilingChanged(); break;
        case 47: _t->nativeTilingEnabledChanged(); break;
        case 48: _t->electricBorderCornerRatioChanged(); break;
        case 49: _t->electricBorderAllScreenCornerChanged(); break;
        case 50: _t->borderlessMaximizedWindowsChanged(); break;
        case 51: _t->killPingTimeoutChanged(); break;
        case 52: _t->compositingModeChanged(); break;
        case 53: _t->animationSpeedChanged(); break;
        case 54: _t->configChanged(); break;
        case 55: _t->allowTearingChanged(); break;
        case 56: _t->interactiveWindowMoveEnabledChanged(); break;
        case 57: _t->pictureInPictureHomeCornerChanged(); break;
        case 58: _t->pictureInPictureMarginChanged(); break;
        case 59: _t->overlayVirtualKeyboardOnWindowsChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::focusPolicyChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::focusPolicyIsResonableChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::xwaylandCrashPolicyChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::xwaylandMaxCrashCountChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::xwaylandEavesdropsChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::xwaylandEavesdropsMouseChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::xwaylandEisNoPromptChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::xwaylandEisNoPromptAppsChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::nextFocusPrefersMouseChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::clickRaiseChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::autoRaiseChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::autoRaiseIntervalChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::delayFocusIntervalChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)(bool )>(_a, &Options::separateScreenFocusChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::placementChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::activationDesktopPolicyChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::borderSnapZoneChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::windowSnapZoneChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::centerSnapZoneChanged, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::snapOnlyWhenOverlappingChanged, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::edgeBarrierChanged, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::cornerBarrierChanged, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)(bool )>(_a, &Options::rollOverDesktopsChanged, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)(bool )>(_a, &Options::perOutputVirtualDesktopsChanged, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::focusStealingPreventionLevelChanged, 24))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::operationTitlebarDblClickChanged, 25))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::operationMaxButtonLeftClickChanged, 26))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::operationMaxButtonRightClickChanged, 27))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::operationMaxButtonMiddleClickChanged, 28))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::commandActiveTitlebar1Changed, 29))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::commandActiveTitlebar2Changed, 30))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::commandActiveTitlebar3Changed, 31))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::commandInactiveTitlebar1Changed, 32))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::commandInactiveTitlebar2Changed, 33))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::commandInactiveTitlebar3Changed, 34))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::commandWindow1Changed, 35))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::commandWindow2Changed, 36))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::commandWindow3Changed, 37))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::commandWindowWheelChanged, 38))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::commandAll1Changed, 39))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::commandAll2Changed, 40))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::commandAll3Changed, 41))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::keyCmdAllModKeyChanged, 42))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::doubleClickBorderToMaximizeChanged, 43))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::condensedTitleChanged, 44))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::electricBorderMaximizeChanged, 45))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::electricBorderTilingChanged, 46))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::nativeTilingEnabledChanged, 47))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::electricBorderCornerRatioChanged, 48))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::electricBorderAllScreenCornerChanged, 49))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::borderlessMaximizedWindowsChanged, 50))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::killPingTimeoutChanged, 51))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::compositingModeChanged, 52))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::animationSpeedChanged, 53))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::configChanged, 54))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::allowTearingChanged, 55))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::interactiveWindowMoveEnabledChanged, 56))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::pictureInPictureHomeCornerChanged, 57))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::pictureInPictureMarginChanged, 58))
            return;
        if (QtMocHelpers::indexOfMethod<void (Options::*)()>(_a, &Options::overlayVirtualKeyboardOnWindowsChanged, 59))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 24:
        case 23:
        case 22:
        case 21:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KWin::Options::WindowOperation >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<enum FocusPolicy*>(_v) = _t->focusPolicy(); break;
        case 1: *reinterpret_cast<XwaylandCrashPolicy*>(_v) = _t->xwaylandCrashPolicy(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->xwaylandMaxCrashCount(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isNextFocusPrefersMouse(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isClickRaise(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->isAutoRaise(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->autoRaiseInterval(); break;
        case 7: *reinterpret_cast<int*>(_v) = _t->delayFocusInterval(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->isSeparateScreenFocus(); break;
        case 9: *reinterpret_cast<PlacementPolicy*>(_v) = _t->placement(); break;
        case 10: *reinterpret_cast<enum ActivationDesktopPolicy*>(_v) = _t->activationDesktopPolicy(); break;
        case 11: *reinterpret_cast<bool*>(_v) = _t->focusPolicyIsReasonable(); break;
        case 12: *reinterpret_cast<int*>(_v) = _t->borderSnapZone(); break;
        case 13: *reinterpret_cast<int*>(_v) = _t->windowSnapZone(); break;
        case 14: *reinterpret_cast<int*>(_v) = _t->centerSnapZone(); break;
        case 15: *reinterpret_cast<bool*>(_v) = _t->isSnapOnlyWhenOverlapping(); break;
        case 16: *reinterpret_cast<int*>(_v) = _t->edgeBarrier(); break;
        case 17: *reinterpret_cast<int*>(_v) = _t->cornerBarrier(); break;
        case 18: *reinterpret_cast<bool*>(_v) = _t->isRollOverDesktops(); break;
        case 19: *reinterpret_cast<bool*>(_v) = _t->isPerOutputVirtualDesktops(); break;
        case 20: *reinterpret_cast<KWin::FocusStealingPreventionLevel*>(_v) = _t->focusStealingPreventionLevel(); break;
        case 21: *reinterpret_cast<KWin::Options::WindowOperation*>(_v) = _t->operationTitlebarDblClick(); break;
        case 22: *reinterpret_cast<KWin::Options::WindowOperation*>(_v) = _t->operationMaxButtonLeftClick(); break;
        case 23: *reinterpret_cast<KWin::Options::WindowOperation*>(_v) = _t->operationMaxButtonMiddleClick(); break;
        case 24: *reinterpret_cast<KWin::Options::WindowOperation*>(_v) = _t->operationMaxButtonRightClick(); break;
        case 25: *reinterpret_cast<enum MouseCommand*>(_v) = _t->commandActiveTitlebar1(); break;
        case 26: *reinterpret_cast<enum MouseCommand*>(_v) = _t->commandActiveTitlebar2(); break;
        case 27: *reinterpret_cast<enum MouseCommand*>(_v) = _t->commandActiveTitlebar3(); break;
        case 28: *reinterpret_cast<enum MouseCommand*>(_v) = _t->commandInactiveTitlebar1(); break;
        case 29: *reinterpret_cast<enum MouseCommand*>(_v) = _t->commandInactiveTitlebar2(); break;
        case 30: *reinterpret_cast<enum MouseCommand*>(_v) = _t->commandInactiveTitlebar3(); break;
        case 31: *reinterpret_cast<enum MouseCommand*>(_v) = _t->commandWindow1(); break;
        case 32: *reinterpret_cast<enum MouseCommand*>(_v) = _t->commandWindow2(); break;
        case 33: *reinterpret_cast<enum MouseCommand*>(_v) = _t->commandWindow3(); break;
        case 34: *reinterpret_cast<enum MouseCommand*>(_v) = _t->commandWindowWheel(); break;
        case 35: *reinterpret_cast<enum MouseCommand*>(_v) = _t->commandAll1(); break;
        case 36: *reinterpret_cast<enum MouseCommand*>(_v) = _t->commandAll2(); break;
        case 37: *reinterpret_cast<enum MouseCommand*>(_v) = _t->commandAll3(); break;
        case 38: *reinterpret_cast<uint*>(_v) = _t->keyCmdAllModKey(); break;
        case 39: *reinterpret_cast<bool*>(_v) = _t->doubleClickBorderToMaximize(); break;
        case 40: *reinterpret_cast<bool*>(_v) = _t->condensedTitle(); break;
        case 41: *reinterpret_cast<bool*>(_v) = _t->electricBorderMaximize(); break;
        case 42: *reinterpret_cast<bool*>(_v) = _t->electricBorderTiling(); break;
        case 43: *reinterpret_cast<bool*>(_v) = _t->nativeTilingEnabled(); break;
        case 44: *reinterpret_cast<bool*>(_v) = _t->electricBorderAllScreenCorner(); break;
        case 45: *reinterpret_cast<float*>(_v) = _t->electricBorderCornerRatio(); break;
        case 46: *reinterpret_cast<bool*>(_v) = _t->borderlessMaximizedWindows(); break;
        case 47: *reinterpret_cast<int*>(_v) = _t->killPingTimeout(); break;
        case 48: *reinterpret_cast<int*>(_v) = _t->compositingMode(); break;
        case 49: *reinterpret_cast<bool*>(_v) = _t->allowTearing(); break;
        case 50: *reinterpret_cast<bool*>(_v) = _t->interactiveWindowMoveEnabled(); break;
        case 51: *reinterpret_cast<Qt::Corner*>(_v) = _t->pictureInPictureHomeCorner(); break;
        case 52: *reinterpret_cast<int*>(_v) = _t->pictureInPictureMargin(); break;
        case 53: *reinterpret_cast<bool*>(_v) = _t->overlayVirtualKeyboardOnWindows(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFocusPolicy(*reinterpret_cast<enum FocusPolicy*>(_v)); break;
        case 1: _t->setXwaylandCrashPolicy(*reinterpret_cast<XwaylandCrashPolicy*>(_v)); break;
        case 2: _t->setXwaylandMaxCrashCount(*reinterpret_cast<int*>(_v)); break;
        case 3: _t->setNextFocusPrefersMouse(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setClickRaise(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setAutoRaise(*reinterpret_cast<bool*>(_v)); break;
        case 6: _t->setAutoRaiseInterval(*reinterpret_cast<int*>(_v)); break;
        case 7: _t->setDelayFocusInterval(*reinterpret_cast<int*>(_v)); break;
        case 8: _t->setSeparateScreenFocus(*reinterpret_cast<bool*>(_v)); break;
        case 9: _t->setPlacement(*reinterpret_cast<PlacementPolicy*>(_v)); break;
        case 10: _t->setActivationDesktopPolicy(*reinterpret_cast<enum ActivationDesktopPolicy*>(_v)); break;
        case 12: _t->setBorderSnapZone(*reinterpret_cast<int*>(_v)); break;
        case 13: _t->setWindowSnapZone(*reinterpret_cast<int*>(_v)); break;
        case 14: _t->setCenterSnapZone(*reinterpret_cast<int*>(_v)); break;
        case 15: _t->setSnapOnlyWhenOverlapping(*reinterpret_cast<bool*>(_v)); break;
        case 16: _t->setEdgeBarrier(*reinterpret_cast<int*>(_v)); break;
        case 17: _t->setCornerBarrier(*reinterpret_cast<int*>(_v)); break;
        case 18: _t->setRollOverDesktops(*reinterpret_cast<bool*>(_v)); break;
        case 19: _t->setPerOutputVirtualDesktops(*reinterpret_cast<bool*>(_v)); break;
        case 20: _t->setFocusStealingPreventionLevel(*reinterpret_cast<KWin::FocusStealingPreventionLevel*>(_v)); break;
        case 21: _t->setOperationTitlebarDblClick(*reinterpret_cast<KWin::Options::WindowOperation*>(_v)); break;
        case 22: _t->setOperationMaxButtonLeftClick(*reinterpret_cast<KWin::Options::WindowOperation*>(_v)); break;
        case 23: _t->setOperationMaxButtonMiddleClick(*reinterpret_cast<KWin::Options::WindowOperation*>(_v)); break;
        case 24: _t->setOperationMaxButtonRightClick(*reinterpret_cast<KWin::Options::WindowOperation*>(_v)); break;
        case 25: _t->setCommandActiveTitlebar1(*reinterpret_cast<enum MouseCommand*>(_v)); break;
        case 26: _t->setCommandActiveTitlebar2(*reinterpret_cast<enum MouseCommand*>(_v)); break;
        case 27: _t->setCommandActiveTitlebar3(*reinterpret_cast<enum MouseCommand*>(_v)); break;
        case 28: _t->setCommandInactiveTitlebar1(*reinterpret_cast<enum MouseCommand*>(_v)); break;
        case 29: _t->setCommandInactiveTitlebar2(*reinterpret_cast<enum MouseCommand*>(_v)); break;
        case 30: _t->setCommandInactiveTitlebar3(*reinterpret_cast<enum MouseCommand*>(_v)); break;
        case 31: _t->setCommandWindow1(*reinterpret_cast<enum MouseCommand*>(_v)); break;
        case 32: _t->setCommandWindow2(*reinterpret_cast<enum MouseCommand*>(_v)); break;
        case 33: _t->setCommandWindow3(*reinterpret_cast<enum MouseCommand*>(_v)); break;
        case 34: _t->setCommandWindowWheel(*reinterpret_cast<enum MouseCommand*>(_v)); break;
        case 35: _t->setCommandAll1(*reinterpret_cast<enum MouseCommand*>(_v)); break;
        case 36: _t->setCommandAll2(*reinterpret_cast<enum MouseCommand*>(_v)); break;
        case 37: _t->setCommandAll3(*reinterpret_cast<enum MouseCommand*>(_v)); break;
        case 38: _t->setKeyCmdAllModKey(*reinterpret_cast<uint*>(_v)); break;
        case 39: _t->setDoubleClickBorderToMaximize(*reinterpret_cast<bool*>(_v)); break;
        case 40: _t->setCondensedTitle(*reinterpret_cast<bool*>(_v)); break;
        case 41: _t->setElectricBorderMaximize(*reinterpret_cast<bool*>(_v)); break;
        case 42: _t->setElectricBorderTiling(*reinterpret_cast<bool*>(_v)); break;
        case 43: _t->setNativeTilingEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 44: _t->setElectricBorderAllScreenCorner(*reinterpret_cast<bool*>(_v)); break;
        case 45: _t->setElectricBorderCornerRatio(*reinterpret_cast<float*>(_v)); break;
        case 46: _t->setBorderlessMaximizedWindows(*reinterpret_cast<bool*>(_v)); break;
        case 47: _t->setKillPingTimeout(*reinterpret_cast<int*>(_v)); break;
        case 48: _t->setCompositingMode(*reinterpret_cast<int*>(_v)); break;
        case 49: _t->setAllowTearing(*reinterpret_cast<bool*>(_v)); break;
        case 50: _t->setInteractiveWindowMoveEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 51: _t->setPictureInPictureHomeCorner(*reinterpret_cast<Qt::Corner*>(_v)); break;
        case 52: _t->setPictureInPictureMargin(*reinterpret_cast<int*>(_v)); break;
        case 53: _t->setOverlayVirtualKeyboardOnWindows(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::Options::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::Options::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin7OptionsE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::Options::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 60)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 60;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 60)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 60;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    }
    return _id;
}

// SIGNAL 0
void KWin::Options::focusPolicyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::Options::focusPolicyIsResonableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::Options::xwaylandCrashPolicyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::Options::xwaylandMaxCrashCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWin::Options::xwaylandEavesdropsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KWin::Options::xwaylandEavesdropsMouseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KWin::Options::xwaylandEisNoPromptChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void KWin::Options::xwaylandEisNoPromptAppsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void KWin::Options::nextFocusPrefersMouseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void KWin::Options::clickRaiseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void KWin::Options::autoRaiseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void KWin::Options::autoRaiseIntervalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void KWin::Options::delayFocusIntervalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void KWin::Options::separateScreenFocusChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void KWin::Options::placementChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void KWin::Options::activationDesktopPolicyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void KWin::Options::borderSnapZoneChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void KWin::Options::windowSnapZoneChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void KWin::Options::centerSnapZoneChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void KWin::Options::snapOnlyWhenOverlappingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void KWin::Options::edgeBarrierChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void KWin::Options::cornerBarrierChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void KWin::Options::rollOverDesktopsChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 22, nullptr, _t1);
}

// SIGNAL 23
void KWin::Options::perOutputVirtualDesktopsChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 23, nullptr, _t1);
}

// SIGNAL 24
void KWin::Options::focusStealingPreventionLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void KWin::Options::operationTitlebarDblClickChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void KWin::Options::operationMaxButtonLeftClickChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void KWin::Options::operationMaxButtonRightClickChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void KWin::Options::operationMaxButtonMiddleClickChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void KWin::Options::commandActiveTitlebar1Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void KWin::Options::commandActiveTitlebar2Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void KWin::Options::commandActiveTitlebar3Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void KWin::Options::commandInactiveTitlebar1Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void KWin::Options::commandInactiveTitlebar2Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 33, nullptr);
}

// SIGNAL 34
void KWin::Options::commandInactiveTitlebar3Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 34, nullptr);
}

// SIGNAL 35
void KWin::Options::commandWindow1Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void KWin::Options::commandWindow2Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void KWin::Options::commandWindow3Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 37, nullptr);
}

// SIGNAL 38
void KWin::Options::commandWindowWheelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 38, nullptr);
}

// SIGNAL 39
void KWin::Options::commandAll1Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 39, nullptr);
}

// SIGNAL 40
void KWin::Options::commandAll2Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 40, nullptr);
}

// SIGNAL 41
void KWin::Options::commandAll3Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 41, nullptr);
}

// SIGNAL 42
void KWin::Options::keyCmdAllModKeyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 42, nullptr);
}

// SIGNAL 43
void KWin::Options::doubleClickBorderToMaximizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 43, nullptr);
}

// SIGNAL 44
void KWin::Options::condensedTitleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 44, nullptr);
}

// SIGNAL 45
void KWin::Options::electricBorderMaximizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 45, nullptr);
}

// SIGNAL 46
void KWin::Options::electricBorderTilingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 46, nullptr);
}

// SIGNAL 47
void KWin::Options::nativeTilingEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 47, nullptr);
}

// SIGNAL 48
void KWin::Options::electricBorderCornerRatioChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 48, nullptr);
}

// SIGNAL 49
void KWin::Options::electricBorderAllScreenCornerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 49, nullptr);
}

// SIGNAL 50
void KWin::Options::borderlessMaximizedWindowsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 50, nullptr);
}

// SIGNAL 51
void KWin::Options::killPingTimeoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 51, nullptr);
}

// SIGNAL 52
void KWin::Options::compositingModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 52, nullptr);
}

// SIGNAL 53
void KWin::Options::animationSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 53, nullptr);
}

// SIGNAL 54
void KWin::Options::configChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 54, nullptr);
}

// SIGNAL 55
void KWin::Options::allowTearingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 55, nullptr);
}

// SIGNAL 56
void KWin::Options::interactiveWindowMoveEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 56, nullptr);
}

// SIGNAL 57
void KWin::Options::pictureInPictureHomeCornerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 57, nullptr);
}

// SIGNAL 58
void KWin::Options::pictureInPictureMarginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 58, nullptr);
}

// SIGNAL 59
void KWin::Options::overlayVirtualKeyboardOnWindowsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 59, nullptr);
}
QT_WARNING_POP
