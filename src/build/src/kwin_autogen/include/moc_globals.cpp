/****************************************************************************
** Meta object code from reading C++ file 'globals.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/effect/globals.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'globals.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWinE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::qt_create_metaobjectdata<qt_meta_tag_ZN4KWinE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin",
        "MaximizeMode",
        "MaximizeRestore",
        "MaximizeVertical",
        "MaximizeHorizontal",
        "MaximizeFull",
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
        "ElectricNone",
        "SessionState",
        "Normal",
        "Saving",
        "Quitting",
        "LEDs",
        "LED",
        "NumLock",
        "CapsLock",
        "ScrollLock",
        "Compose",
        "Kana",
        "Layer",
        "UnknownLayer",
        "FirstLayer",
        "DesktopLayer",
        "BelowLayer",
        "NormalLayer",
        "AboveLayer",
        "NotificationLayer",
        "ActiveLayer",
        "PopupLayer",
        "CriticalNotificationLayer",
        "OnScreenDisplayLayer",
        "OverlayLayer",
        "NumLayers",
        "QuickTileFlag",
        "None",
        "Left",
        "Right",
        "Top",
        "Bottom",
        "Custom",
        "Horizontal",
        "Vertical",
        "PresentationMode",
        "VSync",
        "AdaptiveSync",
        "Async",
        "AdaptiveAsync",
        "ContentType",
        "Photo",
        "Video",
        "Game",
        "VrrPolicy",
        "Never",
        "Always",
        "Automatic",
        "PresentationModeHint",
        "WindowType",
        "Undefined",
        "Unknown",
        "Desktop",
        "Dock",
        "Toolbar",
        "Menu",
        "Dialog",
        "Override",
        "TopMenu",
        "Utility",
        "Splash",
        "DropdownMenu",
        "PopupMenu",
        "Tooltip",
        "Notification",
        "ComboBox",
        "DNDIcon",
        "OnScreenDisplay",
        "CriticalNotification",
        "AppletPopup"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'MaximizeMode'
        QtMocHelpers::EnumData<MaximizeMode>(1, 1, QMC::EnumFlags{}).add({
            {    2, MaximizeMode::MaximizeRestore },
            {    3, MaximizeMode::MaximizeVertical },
            {    4, MaximizeMode::MaximizeHorizontal },
            {    5, MaximizeMode::MaximizeFull },
        }),
        // enum 'ElectricBorder'
        QtMocHelpers::EnumData<ElectricBorder>(6, 6, QMC::EnumFlags{}).add({
            {    7, ElectricBorder::ElectricTop },
            {    8, ElectricBorder::ElectricTopRight },
            {    9, ElectricBorder::ElectricRight },
            {   10, ElectricBorder::ElectricBottomRight },
            {   11, ElectricBorder::ElectricBottom },
            {   12, ElectricBorder::ElectricBottomLeft },
            {   13, ElectricBorder::ElectricLeft },
            {   14, ElectricBorder::ElectricTopLeft },
            {   15, ElectricBorder::ELECTRIC_COUNT },
            {   16, ElectricBorder::ElectricNone },
        }),
        // enum 'SessionState'
        QtMocHelpers::EnumData<SessionState>(17, 17, QMC::EnumIsScoped).add({
            {   18, SessionState::Normal },
            {   19, SessionState::Saving },
            {   20, SessionState::Quitting },
        }),
        // flag 'LEDs'
        QtMocHelpers::EnumData<LEDs>(21, 22, QMC::EnumIsFlag | QMC::EnumIsScoped).add({
            {   23, LED::NumLock },
            {   24, LED::CapsLock },
            {   25, LED::ScrollLock },
            {   26, LED::Compose },
            {   27, LED::Kana },
        }),
        // enum 'Layer'
        QtMocHelpers::EnumData<Layer>(28, 28, QMC::EnumFlags{}).add({
            {   29, Layer::UnknownLayer },
            {   30, Layer::FirstLayer },
            {   31, Layer::DesktopLayer },
            {   32, Layer::BelowLayer },
            {   33, Layer::NormalLayer },
            {   34, Layer::AboveLayer },
            {   35, Layer::NotificationLayer },
            {   36, Layer::ActiveLayer },
            {   37, Layer::PopupLayer },
            {   38, Layer::CriticalNotificationLayer },
            {   39, Layer::OnScreenDisplayLayer },
            {   40, Layer::OverlayLayer },
            {   41, Layer::NumLayers },
        }),
        // enum 'QuickTileFlag'
        QtMocHelpers::EnumData<QuickTileFlag>(42, 42, QMC::EnumIsScoped).add({
            {   43, QuickTileFlag::None },
            {   44, QuickTileFlag::Left },
            {   45, QuickTileFlag::Right },
            {   46, QuickTileFlag::Top },
            {   47, QuickTileFlag::Bottom },
            {   48, QuickTileFlag::Custom },
            {   49, QuickTileFlag::Horizontal },
            {   50, QuickTileFlag::Vertical },
        }),
        // enum 'PresentationMode'
        QtMocHelpers::EnumData<PresentationMode>(51, 51, QMC::EnumIsScoped).add({
            {   52, PresentationMode::VSync },
            {   53, PresentationMode::AdaptiveSync },
            {   54, PresentationMode::Async },
            {   55, PresentationMode::AdaptiveAsync },
        }),
        // enum 'ContentType'
        QtMocHelpers::EnumData<ContentType>(56, 56, QMC::EnumIsScoped).add({
            {   43, ContentType::None },
            {   57, ContentType::Photo },
            {   58, ContentType::Video },
            {   59, ContentType::Game },
        }),
        // enum 'VrrPolicy'
        QtMocHelpers::EnumData<VrrPolicy>(60, 60, QMC::EnumIsScoped).add({
            {   61, VrrPolicy::Never },
            {   62, VrrPolicy::Always },
            {   63, VrrPolicy::Automatic },
        }),
        // enum 'PresentationModeHint'
        QtMocHelpers::EnumData<PresentationModeHint>(64, 64, QMC::EnumIsScoped).add({
            {   52, PresentationModeHint::VSync },
            {   54, PresentationModeHint::Async },
        }),
        // enum 'WindowType'
        QtMocHelpers::EnumData<WindowType>(65, 65, QMC::EnumIsScoped).add({
            {   66, WindowType::Undefined },
            {   67, WindowType::Unknown },
            {   18, WindowType::Normal },
            {   68, WindowType::Desktop },
            {   69, WindowType::Dock },
            {   70, WindowType::Toolbar },
            {   71, WindowType::Menu },
            {   72, WindowType::Dialog },
            {   73, WindowType::Override },
            {   74, WindowType::TopMenu },
            {   75, WindowType::Utility },
            {   76, WindowType::Splash },
            {   77, WindowType::DropdownMenu },
            {   78, WindowType::PopupMenu },
            {   79, WindowType::Tooltip },
            {   80, WindowType::Notification },
            {   81, WindowType::ComboBox },
            {   82, WindowType::DNDIcon },
            {   83, WindowType::OnScreenDisplay },
            {   84, WindowType::CriticalNotification },
            {   85, WindowType::AppletPopup },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN4KWinE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN4KWinE =
    KWin::qt_create_metaobjectdata<qt_meta_tag_ZN4KWinE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN4KWinE =
    qt_staticMetaObjectContent_ZN4KWinE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN4KWinE =
    qt_staticMetaObjectContent_ZN4KWinE.relocatingData;

Q_CONSTINIT const QMetaObject KWin::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN4KWinE.stringdata,
    qt_staticMetaObjectStaticContent_ZN4KWinE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN4KWinE.metaTypes,
    nullptr
} };

QT_WARNING_POP
