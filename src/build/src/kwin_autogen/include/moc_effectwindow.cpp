/****************************************************************************
** Meta object code from reading C++ file 'effectwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/effect/effectwindow.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'effectwindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin12EffectWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::EffectWindow::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin12EffectWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::EffectWindow",
        "windowStartUserMovedResized",
        "",
        "KWin::EffectWindow*",
        "w",
        "windowStepUserMovedResized",
        "KWin::RectF",
        "geometry",
        "windowFinishUserMovedResized",
        "windowMaximizedStateChanged",
        "horizontal",
        "vertical",
        "windowMaximizedStateAboutToChange",
        "windowFrameGeometryChanged",
        "window",
        "oldGeometry",
        "windowFrameGeometryAboutToChange",
        "windowOpacityChanged",
        "oldOpacity",
        "newOpacity",
        "minimizedChanged",
        "windowModalityChanged",
        "windowUnresponsiveChanged",
        "unresponsive",
        "windowDamaged",
        "windowKeepAboveChanged",
        "windowKeepBelowChanged",
        "windowFullScreenChanged",
        "windowDecorationChanged",
        "windowExpandedGeometryChanged",
        "windowDesktopsChanged",
        "windowHiddenChanged",
        "isOnActivity",
        "id",
        "isOnDesktop",
        "KWin::VirtualDesktop*",
        "desktop",
        "findModal",
        "transientFor",
        "mainWindows",
        "QList<KWin::EffectWindow*>",
        "closeWindow",
        "setData",
        "role",
        "QVariant",
        "data",
        "expandedGeometry",
        "height",
        "opacity",
        "pos",
        "QPointF",
        "screen",
        "KWin::LogicalOutput*",
        "size",
        "QSizeF",
        "width",
        "x",
        "y",
        "desktops",
        "QList<KWin::VirtualDesktop*>",
        "onAllDesktops",
        "onCurrentDesktop",
        "rect",
        "windowClass",
        "windowRole",
        "desktopWindow",
        "dock",
        "toolbar",
        "menu",
        "normalWindow",
        "dialog",
        "splash",
        "utility",
        "dropdownMenu",
        "popupMenu",
        "tooltip",
        "notification",
        "criticalNotification",
        "onScreenDisplay",
        "comboBox",
        "dndIcon",
        "windowType",
        "managed",
        "deleted",
        "caption",
        "keepAbove",
        "keepBelow",
        "minimized",
        "modal",
        "moveable",
        "moveableAcrossScreens",
        "move",
        "resize",
        "iconGeometry",
        "specialWindow",
        "icon",
        "QIcon",
        "skipSwitcher",
        "contentsRect",
        "hasDecoration",
        "activities",
        "onCurrentActivity",
        "onAllActivities",
        "decorationHasAlpha",
        "visible",
        "skipsCloseAnimation",
        "fullScreen",
        "waylandClient",
        "x11Client",
        "popupWindow",
        "internalWindow",
        "QWindow*",
        "outline",
        "pid",
        "pid_t",
        "lockScreen",
        "appletPopup",
        "hiddenByShowDesktop",
        "tag"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'windowStartUserMovedResized'
        QtMocHelpers::SignalData<void(KWin::EffectWindow *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'windowStepUserMovedResized'
        QtMocHelpers::SignalData<void(KWin::EffectWindow *, const KWin::RectF &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 6, 7 },
        }}),
        // Signal 'windowFinishUserMovedResized'
        QtMocHelpers::SignalData<void(KWin::EffectWindow *)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'windowMaximizedStateChanged'
        QtMocHelpers::SignalData<void(KWin::EffectWindow *, bool, bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Bool, 10 }, { QMetaType::Bool, 11 },
        }}),
        // Signal 'windowMaximizedStateAboutToChange'
        QtMocHelpers::SignalData<void(KWin::EffectWindow *, bool, bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Bool, 10 }, { QMetaType::Bool, 11 },
        }}),
        // Signal 'windowFrameGeometryChanged'
        QtMocHelpers::SignalData<void(KWin::EffectWindow *, const KWin::RectF &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 14 }, { 0x80000000 | 6, 15 },
        }}),
        // Signal 'windowFrameGeometryAboutToChange'
        QtMocHelpers::SignalData<void(KWin::EffectWindow *)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 14 },
        }}),
        // Signal 'windowOpacityChanged'
        QtMocHelpers::SignalData<void(KWin::EffectWindow *, qreal, qreal)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QReal, 18 }, { QMetaType::QReal, 19 },
        }}),
        // Signal 'minimizedChanged'
        QtMocHelpers::SignalData<void(KWin::EffectWindow *)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'windowModalityChanged'
        QtMocHelpers::SignalData<void(KWin::EffectWindow *)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'windowUnresponsiveChanged'
        QtMocHelpers::SignalData<void(KWin::EffectWindow *, bool)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Bool, 23 },
        }}),
        // Signal 'windowDamaged'
        QtMocHelpers::SignalData<void(KWin::EffectWindow *)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'windowKeepAboveChanged'
        QtMocHelpers::SignalData<void(KWin::EffectWindow *)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'windowKeepBelowChanged'
        QtMocHelpers::SignalData<void(KWin::EffectWindow *)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'windowFullScreenChanged'
        QtMocHelpers::SignalData<void(KWin::EffectWindow *)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'windowDecorationChanged'
        QtMocHelpers::SignalData<void(KWin::EffectWindow *)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 14 },
        }}),
        // Signal 'windowExpandedGeometryChanged'
        QtMocHelpers::SignalData<void(KWin::EffectWindow *)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 14 },
        }}),
        // Signal 'windowDesktopsChanged'
        QtMocHelpers::SignalData<void(KWin::EffectWindow *)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 14 },
        }}),
        // Signal 'windowHiddenChanged'
        QtMocHelpers::SignalData<void(KWin::EffectWindow *)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 14 },
        }}),
        // Method 'isOnActivity'
        QtMocHelpers::MethodData<bool(const QString &) const>(32, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { QMetaType::QString, 33 },
        }}),
        // Method 'isOnDesktop'
        QtMocHelpers::MethodData<bool(KWin::VirtualDesktop *) const>(34, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { 0x80000000 | 35, 36 },
        }}),
        // Method 'findModal'
        QtMocHelpers::MethodData<KWin::EffectWindow *()>(37, 2, QMC::AccessPublic | QMC::MethodScriptable, 0x80000000 | 3),
        // Method 'transientFor'
        QtMocHelpers::MethodData<KWin::EffectWindow *()>(38, 2, QMC::AccessPublic | QMC::MethodScriptable, 0x80000000 | 3),
        // Method 'mainWindows'
        QtMocHelpers::MethodData<QList<KWin::EffectWindow*>() const>(39, 2, QMC::AccessPublic | QMC::MethodScriptable, 0x80000000 | 40),
        // Method 'closeWindow'
        QtMocHelpers::MethodData<void()>(41, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Method 'setData'
        QtMocHelpers::MethodData<void(int, const QVariant &)>(42, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Int, 43 }, { 0x80000000 | 44, 45 },
        }}),
        // Method 'data'
        QtMocHelpers::MethodData<QVariant(int) const>(45, 2, QMC::AccessPublic | QMC::MethodScriptable, 0x80000000 | 44, {{
            { QMetaType::Int, 43 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'geometry'
        QtMocHelpers::PropertyData<KWin::RectF>(7, 0x80000000 | 6, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'expandedGeometry'
        QtMocHelpers::PropertyData<KWin::RectF>(46, 0x80000000 | 6, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'height'
        QtMocHelpers::PropertyData<qreal>(47, QMetaType::QReal, QMC::DefaultPropertyFlags),
        // property 'opacity'
        QtMocHelpers::PropertyData<qreal>(48, QMetaType::QReal, QMC::DefaultPropertyFlags),
        // property 'pos'
        QtMocHelpers::PropertyData<QPointF>(49, 0x80000000 | 50, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'screen'
        QtMocHelpers::PropertyData<KWin::LogicalOutput*>(51, 0x80000000 | 52, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'size'
        QtMocHelpers::PropertyData<QSizeF>(53, 0x80000000 | 54, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'width'
        QtMocHelpers::PropertyData<qreal>(55, QMetaType::QReal, QMC::DefaultPropertyFlags),
        // property 'x'
        QtMocHelpers::PropertyData<qreal>(56, QMetaType::QReal, QMC::DefaultPropertyFlags),
        // property 'y'
        QtMocHelpers::PropertyData<qreal>(57, QMetaType::QReal, QMC::DefaultPropertyFlags),
        // property 'desktops'
        QtMocHelpers::PropertyData<QList<KWin::VirtualDesktop*>>(58, 0x80000000 | 59, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'onAllDesktops'
        QtMocHelpers::PropertyData<bool>(60, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'onCurrentDesktop'
        QtMocHelpers::PropertyData<bool>(61, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'rect'
        QtMocHelpers::PropertyData<KWin::RectF>(62, 0x80000000 | 6, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'windowClass'
        QtMocHelpers::PropertyData<QString>(63, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'windowRole'
        QtMocHelpers::PropertyData<QString>(64, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'desktopWindow'
        QtMocHelpers::PropertyData<bool>(65, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'dock'
        QtMocHelpers::PropertyData<bool>(66, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'toolbar'
        QtMocHelpers::PropertyData<bool>(67, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'menu'
        QtMocHelpers::PropertyData<bool>(68, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'normalWindow'
        QtMocHelpers::PropertyData<bool>(69, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'dialog'
        QtMocHelpers::PropertyData<bool>(70, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'splash'
        QtMocHelpers::PropertyData<bool>(71, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'utility'
        QtMocHelpers::PropertyData<bool>(72, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'dropdownMenu'
        QtMocHelpers::PropertyData<bool>(73, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'popupMenu'
        QtMocHelpers::PropertyData<bool>(74, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'tooltip'
        QtMocHelpers::PropertyData<bool>(75, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'notification'
        QtMocHelpers::PropertyData<bool>(76, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'criticalNotification'
        QtMocHelpers::PropertyData<bool>(77, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'onScreenDisplay'
        QtMocHelpers::PropertyData<bool>(78, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'comboBox'
        QtMocHelpers::PropertyData<bool>(79, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'dndIcon'
        QtMocHelpers::PropertyData<bool>(80, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'windowType'
        QtMocHelpers::PropertyData<int>(81, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'managed'
        QtMocHelpers::PropertyData<bool>(82, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'deleted'
        QtMocHelpers::PropertyData<bool>(83, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'caption'
        QtMocHelpers::PropertyData<QString>(84, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'keepAbove'
        QtMocHelpers::PropertyData<bool>(85, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'keepBelow'
        QtMocHelpers::PropertyData<bool>(86, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'minimized'
        QtMocHelpers::PropertyData<bool>(87, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'modal'
        QtMocHelpers::PropertyData<bool>(88, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'moveable'
        QtMocHelpers::PropertyData<bool>(89, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'moveableAcrossScreens'
        QtMocHelpers::PropertyData<bool>(90, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'move'
        QtMocHelpers::PropertyData<bool>(91, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'resize'
        QtMocHelpers::PropertyData<bool>(92, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'iconGeometry'
        QtMocHelpers::PropertyData<KWin::RectF>(93, 0x80000000 | 6, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'specialWindow'
        QtMocHelpers::PropertyData<bool>(94, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'icon'
        QtMocHelpers::PropertyData<QIcon>(95, 0x80000000 | 96, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'skipSwitcher'
        QtMocHelpers::PropertyData<bool>(97, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'contentsRect'
        QtMocHelpers::PropertyData<KWin::RectF>(98, 0x80000000 | 6, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'hasDecoration'
        QtMocHelpers::PropertyData<bool>(99, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'activities'
        QtMocHelpers::PropertyData<QStringList>(100, QMetaType::QStringList, QMC::DefaultPropertyFlags),
        // property 'onCurrentActivity'
        QtMocHelpers::PropertyData<bool>(101, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'onAllActivities'
        QtMocHelpers::PropertyData<bool>(102, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'decorationHasAlpha'
        QtMocHelpers::PropertyData<bool>(103, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'visible'
        QtMocHelpers::PropertyData<bool>(104, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'skipsCloseAnimation'
        QtMocHelpers::PropertyData<bool>(105, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'fullScreen'
        QtMocHelpers::PropertyData<bool>(106, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'unresponsive'
        QtMocHelpers::PropertyData<bool>(23, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'waylandClient'
        QtMocHelpers::PropertyData<bool>(107, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'x11Client'
        QtMocHelpers::PropertyData<bool>(108, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'popupWindow'
        QtMocHelpers::PropertyData<bool>(109, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'internalWindow'
        QtMocHelpers::PropertyData<QWindow*>(110, 0x80000000 | 111, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'outline'
        QtMocHelpers::PropertyData<bool>(112, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'pid'
        QtMocHelpers::PropertyData<pid_t>(113, 0x80000000 | 114, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'lockScreen'
        QtMocHelpers::PropertyData<bool>(115, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'appletPopup'
        QtMocHelpers::PropertyData<bool>(116, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'hiddenByShowDesktop'
        QtMocHelpers::PropertyData<bool>(117, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'tag'
        QtMocHelpers::PropertyData<QString>(118, QMetaType::QString, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EffectWindow, qt_meta_tag_ZN4KWin12EffectWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN4KWin12EffectWindowE[] = {
    QMetaObject::SuperData::link<KWin::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject KWin::EffectWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin12EffectWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin12EffectWindowE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN4KWin12EffectWindowE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin12EffectWindowE_t>.metaTypes,
    nullptr
} };

void KWin::EffectWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EffectWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->windowStartUserMovedResized((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 1: _t->windowStepUserMovedResized((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<KWin::RectF>>(_a[2]))); break;
        case 2: _t->windowFinishUserMovedResized((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 3: _t->windowMaximizedStateChanged((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); break;
        case 4: _t->windowMaximizedStateAboutToChange((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); break;
        case 5: _t->windowFrameGeometryChanged((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<KWin::RectF>>(_a[2]))); break;
        case 6: _t->windowFrameGeometryAboutToChange((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 7: _t->windowOpacityChanged((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[3]))); break;
        case 8: _t->minimizedChanged((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 9: _t->windowModalityChanged((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 10: _t->windowUnresponsiveChanged((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 11: _t->windowDamaged((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 12: _t->windowKeepAboveChanged((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 13: _t->windowKeepBelowChanged((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 14: _t->windowFullScreenChanged((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 15: _t->windowDecorationChanged((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 16: _t->windowExpandedGeometryChanged((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 17: _t->windowDesktopsChanged((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 18: _t->windowHiddenChanged((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 19: { bool _r = _t->isOnActivity((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 20: { bool _r = _t->isOnDesktop((*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 21: { KWin::EffectWindow* _r = _t->findModal();
            if (_a[0]) *reinterpret_cast<KWin::EffectWindow**>(_a[0]) = std::move(_r); }  break;
        case 22: { KWin::EffectWindow* _r = _t->transientFor();
            if (_a[0]) *reinterpret_cast<KWin::EffectWindow**>(_a[0]) = std::move(_r); }  break;
        case 23: { QList<KWin::EffectWindow*> _r = _t->mainWindows();
            if (_a[0]) *reinterpret_cast<QList<KWin::EffectWindow*>*>(_a[0]) = std::move(_r); }  break;
        case 24: _t->closeWindow(); break;
        case 25: _t->setData((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 26: { QVariant _r = _t->data((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariant*>(_a[0]) = std::move(_r); }  break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
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
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::EffectWindow* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (EffectWindow::*)(KWin::EffectWindow * )>(_a, &EffectWindow::windowStartUserMovedResized, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectWindow::*)(KWin::EffectWindow * , const KWin::RectF & )>(_a, &EffectWindow::windowStepUserMovedResized, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectWindow::*)(KWin::EffectWindow * )>(_a, &EffectWindow::windowFinishUserMovedResized, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectWindow::*)(KWin::EffectWindow * , bool , bool )>(_a, &EffectWindow::windowMaximizedStateChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectWindow::*)(KWin::EffectWindow * , bool , bool )>(_a, &EffectWindow::windowMaximizedStateAboutToChange, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectWindow::*)(KWin::EffectWindow * , const KWin::RectF & )>(_a, &EffectWindow::windowFrameGeometryChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectWindow::*)(KWin::EffectWindow * )>(_a, &EffectWindow::windowFrameGeometryAboutToChange, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectWindow::*)(KWin::EffectWindow * , qreal , qreal )>(_a, &EffectWindow::windowOpacityChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectWindow::*)(KWin::EffectWindow * )>(_a, &EffectWindow::minimizedChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectWindow::*)(KWin::EffectWindow * )>(_a, &EffectWindow::windowModalityChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectWindow::*)(KWin::EffectWindow * , bool )>(_a, &EffectWindow::windowUnresponsiveChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectWindow::*)(KWin::EffectWindow * )>(_a, &EffectWindow::windowDamaged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectWindow::*)(KWin::EffectWindow * )>(_a, &EffectWindow::windowKeepAboveChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectWindow::*)(KWin::EffectWindow * )>(_a, &EffectWindow::windowKeepBelowChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectWindow::*)(KWin::EffectWindow * )>(_a, &EffectWindow::windowFullScreenChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectWindow::*)(KWin::EffectWindow * )>(_a, &EffectWindow::windowDecorationChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectWindow::*)(KWin::EffectWindow * )>(_a, &EffectWindow::windowExpandedGeometryChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectWindow::*)(KWin::EffectWindow * )>(_a, &EffectWindow::windowDesktopsChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectWindow::*)(KWin::EffectWindow * )>(_a, &EffectWindow::windowHiddenChanged, 18))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KWin::LogicalOutput* >(); break;
        case 61:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWindow* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<KWin::RectF*>(_v) = _t->frameGeometry(); break;
        case 1: *reinterpret_cast<KWin::RectF*>(_v) = _t->expandedGeometry(); break;
        case 2: *reinterpret_cast<qreal*>(_v) = _t->height(); break;
        case 3: *reinterpret_cast<qreal*>(_v) = _t->opacity(); break;
        case 4: *reinterpret_cast<QPointF*>(_v) = _t->pos(); break;
        case 5: *reinterpret_cast<KWin::LogicalOutput**>(_v) = _t->screen(); break;
        case 6: *reinterpret_cast<QSizeF*>(_v) = _t->size(); break;
        case 7: *reinterpret_cast<qreal*>(_v) = _t->width(); break;
        case 8: *reinterpret_cast<qreal*>(_v) = _t->x(); break;
        case 9: *reinterpret_cast<qreal*>(_v) = _t->y(); break;
        case 10: *reinterpret_cast<QList<KWin::VirtualDesktop*>*>(_v) = _t->desktops(); break;
        case 11: *reinterpret_cast<bool*>(_v) = _t->isOnAllDesktops(); break;
        case 12: *reinterpret_cast<bool*>(_v) = _t->isOnCurrentDesktop(); break;
        case 13: *reinterpret_cast<KWin::RectF*>(_v) = _t->rect(); break;
        case 14: *reinterpret_cast<QString*>(_v) = _t->windowClass(); break;
        case 15: *reinterpret_cast<QString*>(_v) = _t->windowRole(); break;
        case 16: *reinterpret_cast<bool*>(_v) = _t->isDesktop(); break;
        case 17: *reinterpret_cast<bool*>(_v) = _t->isDock(); break;
        case 18: *reinterpret_cast<bool*>(_v) = _t->isToolbar(); break;
        case 19: *reinterpret_cast<bool*>(_v) = _t->isMenu(); break;
        case 20: *reinterpret_cast<bool*>(_v) = _t->isNormalWindow(); break;
        case 21: *reinterpret_cast<bool*>(_v) = _t->isDialog(); break;
        case 22: *reinterpret_cast<bool*>(_v) = _t->isSplash(); break;
        case 23: *reinterpret_cast<bool*>(_v) = _t->isUtility(); break;
        case 24: *reinterpret_cast<bool*>(_v) = _t->isDropdownMenu(); break;
        case 25: *reinterpret_cast<bool*>(_v) = _t->isPopupMenu(); break;
        case 26: *reinterpret_cast<bool*>(_v) = _t->isTooltip(); break;
        case 27: *reinterpret_cast<bool*>(_v) = _t->isNotification(); break;
        case 28: *reinterpret_cast<bool*>(_v) = _t->isCriticalNotification(); break;
        case 29: *reinterpret_cast<bool*>(_v) = _t->isOnScreenDisplay(); break;
        case 30: *reinterpret_cast<bool*>(_v) = _t->isComboBox(); break;
        case 31: *reinterpret_cast<bool*>(_v) = _t->isDNDIcon(); break;
        case 32: *reinterpret_cast<int*>(_v) = _t->windowTypeInt(); break;
        case 33: *reinterpret_cast<bool*>(_v) = _t->isManaged(); break;
        case 34: *reinterpret_cast<bool*>(_v) = _t->isDeleted(); break;
        case 35: *reinterpret_cast<QString*>(_v) = _t->caption(); break;
        case 36: *reinterpret_cast<bool*>(_v) = _t->keepAbove(); break;
        case 37: *reinterpret_cast<bool*>(_v) = _t->keepBelow(); break;
        case 38: *reinterpret_cast<bool*>(_v) = _t->isMinimized(); break;
        case 39: *reinterpret_cast<bool*>(_v) = _t->isModal(); break;
        case 40: *reinterpret_cast<bool*>(_v) = _t->isMovable(); break;
        case 41: *reinterpret_cast<bool*>(_v) = _t->isMovableAcrossScreens(); break;
        case 42: *reinterpret_cast<bool*>(_v) = _t->isUserMove(); break;
        case 43: *reinterpret_cast<bool*>(_v) = _t->isUserResize(); break;
        case 44: *reinterpret_cast<KWin::RectF*>(_v) = _t->iconGeometry(); break;
        case 45: *reinterpret_cast<bool*>(_v) = _t->isSpecialWindow(); break;
        case 46: *reinterpret_cast<QIcon*>(_v) = _t->icon(); break;
        case 47: *reinterpret_cast<bool*>(_v) = _t->isSkipSwitcher(); break;
        case 48: *reinterpret_cast<KWin::RectF*>(_v) = _t->contentsRect(); break;
        case 49: *reinterpret_cast<bool*>(_v) = _t->hasDecoration(); break;
        case 50: *reinterpret_cast<QStringList*>(_v) = _t->activities(); break;
        case 51: *reinterpret_cast<bool*>(_v) = _t->isOnCurrentActivity(); break;
        case 52: *reinterpret_cast<bool*>(_v) = _t->isOnAllActivities(); break;
        case 53: *reinterpret_cast<bool*>(_v) = _t->decorationHasAlpha(); break;
        case 54: *reinterpret_cast<bool*>(_v) = _t->isVisible(); break;
        case 55: *reinterpret_cast<bool*>(_v) = _t->skipsCloseAnimation(); break;
        case 56: *reinterpret_cast<bool*>(_v) = _t->isFullScreen(); break;
        case 57: *reinterpret_cast<bool*>(_v) = _t->isUnresponsive(); break;
        case 58: *reinterpret_cast<bool*>(_v) = _t->isWaylandClient(); break;
        case 59: *reinterpret_cast<bool*>(_v) = _t->isX11Client(); break;
        case 60: *reinterpret_cast<bool*>(_v) = _t->isPopupWindow(); break;
        case 61: *reinterpret_cast<QWindow**>(_v) = _t->internalWindow(); break;
        case 62: *reinterpret_cast<bool*>(_v) = _t->isOutline(); break;
        case 63: *reinterpret_cast<pid_t*>(_v) = _t->pid(); break;
        case 64: *reinterpret_cast<bool*>(_v) = _t->isLockScreen(); break;
        case 65: *reinterpret_cast<bool*>(_v) = _t->isAppletPopup(); break;
        case 66: *reinterpret_cast<bool*>(_v) = _t->isHiddenByShowDesktop(); break;
        case 67: *reinterpret_cast<QString*>(_v) = _t->tag(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 38: _t->setMinimized(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::EffectWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::EffectWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin12EffectWindowE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::EffectWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 68;
    }
    return _id;
}

// SIGNAL 0
void KWin::EffectWindow::windowStartUserMovedResized(KWin::EffectWindow * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void KWin::EffectWindow::windowStepUserMovedResized(KWin::EffectWindow * _t1, const KWin::RectF & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void KWin::EffectWindow::windowFinishUserMovedResized(KWin::EffectWindow * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void KWin::EffectWindow::windowMaximizedStateChanged(KWin::EffectWindow * _t1, bool _t2, bool _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2, _t3);
}

// SIGNAL 4
void KWin::EffectWindow::windowMaximizedStateAboutToChange(KWin::EffectWindow * _t1, bool _t2, bool _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2, _t3);
}

// SIGNAL 5
void KWin::EffectWindow::windowFrameGeometryChanged(KWin::EffectWindow * _t1, const KWin::RectF & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2);
}

// SIGNAL 6
void KWin::EffectWindow::windowFrameGeometryAboutToChange(KWin::EffectWindow * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void KWin::EffectWindow::windowOpacityChanged(KWin::EffectWindow * _t1, qreal _t2, qreal _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1, _t2, _t3);
}

// SIGNAL 8
void KWin::EffectWindow::minimizedChanged(KWin::EffectWindow * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void KWin::EffectWindow::windowModalityChanged(KWin::EffectWindow * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void KWin::EffectWindow::windowUnresponsiveChanged(KWin::EffectWindow * _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1, _t2);
}

// SIGNAL 11
void KWin::EffectWindow::windowDamaged(KWin::EffectWindow * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void KWin::EffectWindow::windowKeepAboveChanged(KWin::EffectWindow * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void KWin::EffectWindow::windowKeepBelowChanged(KWin::EffectWindow * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void KWin::EffectWindow::windowFullScreenChanged(KWin::EffectWindow * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1);
}

// SIGNAL 15
void KWin::EffectWindow::windowDecorationChanged(KWin::EffectWindow * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}

// SIGNAL 16
void KWin::EffectWindow::windowExpandedGeometryChanged(KWin::EffectWindow * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1);
}

// SIGNAL 17
void KWin::EffectWindow::windowDesktopsChanged(KWin::EffectWindow * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 17, nullptr, _t1);
}

// SIGNAL 18
void KWin::EffectWindow::windowHiddenChanged(KWin::EffectWindow * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 18, nullptr, _t1);
}
QT_WARNING_POP
