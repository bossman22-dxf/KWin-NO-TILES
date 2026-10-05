/****************************************************************************
** Meta object code from reading C++ file 'previewclient.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../kwin-6.7.5/src/kcms/decoration/declarative-plugin/previewclient.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'previewclient.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12KDecoration37Preview13PreviewClientE_t {};
} // unnamed namespace

template <> constexpr inline auto KDecoration3::Preview::PreviewClient::qt_create_metaobjectdata<qt_meta_tag_ZN12KDecoration37Preview13PreviewClientE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KDecoration3::Preview::PreviewClient",
        "QML.Element",
        "anonymous",
        "captionChanged",
        "",
        "iconChanged",
        "QIcon",
        "iconNameChanged",
        "activeChanged",
        "closeableChanged",
        "keepAboveChanged",
        "keepBelowChanged",
        "excludeFromCaptureChanged",
        "maximizableChanged",
        "maximizedChanged",
        "maximizedVerticallyChanged",
        "maximizedHorizontallyChanged",
        "minimizableChanged",
        "modalChanged",
        "movableChanged",
        "onAllDesktopsChanged",
        "resizableChanged",
        "shadeableChanged",
        "shadedChanged",
        "providesContextHelpChanged",
        "widthChanged",
        "heightChanged",
        "paletteChanged",
        "QPalette",
        "bordersTopEdgeChanged",
        "bordersLeftEdgeChanged",
        "bordersRightEdgeChanged",
        "bordersBottomEdgeChanged",
        "showWindowMenuRequested",
        "showApplicationMenuRequested",
        "minimizeRequested",
        "closeRequested",
        "decoration",
        "KDecoration3::Decoration*",
        "caption",
        "icon",
        "iconName",
        "active",
        "closeable",
        "keepAbove",
        "keepBelow",
        "maximizable",
        "maximized",
        "maximizedVertically",
        "maximizedHorizontally",
        "minimizable",
        "modal",
        "movable",
        "onAllDesktops",
        "resizable",
        "shadeable",
        "shaded",
        "providesContextHelp",
        "width",
        "height",
        "bordersTopEdge",
        "bordersLeftEdge",
        "bordersRightEdge",
        "bordersBottomEdge"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'captionChanged'
        QtMocHelpers::SignalData<void(const QString &)>(3, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Signal 'iconChanged'
        QtMocHelpers::SignalData<void(const QIcon &)>(5, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 4 },
        }}),
        // Signal 'iconNameChanged'
        QtMocHelpers::SignalData<void(const QString &)>(7, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Signal 'activeChanged'
        QtMocHelpers::SignalData<void(bool)>(8, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'closeableChanged'
        QtMocHelpers::SignalData<void(bool)>(9, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'keepAboveChanged'
        QtMocHelpers::SignalData<void(bool)>(10, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'keepBelowChanged'
        QtMocHelpers::SignalData<void(bool)>(11, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'excludeFromCaptureChanged'
        QtMocHelpers::SignalData<void(bool)>(12, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'maximizableChanged'
        QtMocHelpers::SignalData<void(bool)>(13, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'maximizedChanged'
        QtMocHelpers::SignalData<void(bool)>(14, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'maximizedVerticallyChanged'
        QtMocHelpers::SignalData<void(bool)>(15, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'maximizedHorizontallyChanged'
        QtMocHelpers::SignalData<void(bool)>(16, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'minimizableChanged'
        QtMocHelpers::SignalData<void(bool)>(17, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'modalChanged'
        QtMocHelpers::SignalData<void(bool)>(18, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'movableChanged'
        QtMocHelpers::SignalData<void(bool)>(19, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'onAllDesktopsChanged'
        QtMocHelpers::SignalData<void(bool)>(20, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'resizableChanged'
        QtMocHelpers::SignalData<void(bool)>(21, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'shadeableChanged'
        QtMocHelpers::SignalData<void(bool)>(22, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'shadedChanged'
        QtMocHelpers::SignalData<void(bool)>(23, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'providesContextHelpChanged'
        QtMocHelpers::SignalData<void(bool)>(24, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'widthChanged'
        QtMocHelpers::SignalData<void(qreal)>(25, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 4 },
        }}),
        // Signal 'heightChanged'
        QtMocHelpers::SignalData<void(qreal)>(26, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 4 },
        }}),
        // Signal 'paletteChanged'
        QtMocHelpers::SignalData<void(const QPalette &)>(27, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 28, 4 },
        }}),
        // Signal 'bordersTopEdgeChanged'
        QtMocHelpers::SignalData<void(bool)>(29, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'bordersLeftEdgeChanged'
        QtMocHelpers::SignalData<void(bool)>(30, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'bordersRightEdgeChanged'
        QtMocHelpers::SignalData<void(bool)>(31, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'bordersBottomEdgeChanged'
        QtMocHelpers::SignalData<void(bool)>(32, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'showWindowMenuRequested'
        QtMocHelpers::SignalData<void()>(33, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showApplicationMenuRequested'
        QtMocHelpers::SignalData<void()>(34, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'minimizeRequested'
        QtMocHelpers::SignalData<void()>(35, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'closeRequested'
        QtMocHelpers::SignalData<void()>(36, 4, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'decoration'
        QtMocHelpers::PropertyData<KDecoration3::Decoration*>(37, 0x80000000 | 38, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'caption'
        QtMocHelpers::PropertyData<QString>(39, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'icon'
        QtMocHelpers::PropertyData<QIcon>(40, 0x80000000 | 6, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'iconName'
        QtMocHelpers::PropertyData<QString>(41, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'active'
        QtMocHelpers::PropertyData<bool>(42, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'closeable'
        QtMocHelpers::PropertyData<bool>(43, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'keepAbove'
        QtMocHelpers::PropertyData<bool>(44, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'keepBelow'
        QtMocHelpers::PropertyData<bool>(45, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'maximizable'
        QtMocHelpers::PropertyData<bool>(46, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'maximized'
        QtMocHelpers::PropertyData<bool>(47, QMetaType::Bool, QMC::DefaultPropertyFlags, 9),
        // property 'maximizedVertically'
        QtMocHelpers::PropertyData<bool>(48, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
        // property 'maximizedHorizontally'
        QtMocHelpers::PropertyData<bool>(49, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 11),
        // property 'minimizable'
        QtMocHelpers::PropertyData<bool>(50, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 12),
        // property 'modal'
        QtMocHelpers::PropertyData<bool>(51, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 13),
        // property 'movable'
        QtMocHelpers::PropertyData<bool>(52, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 14),
        // property 'onAllDesktops'
        QtMocHelpers::PropertyData<bool>(53, QMetaType::Bool, QMC::DefaultPropertyFlags, 15),
        // property 'resizable'
        QtMocHelpers::PropertyData<bool>(54, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 16),
        // property 'shadeable'
        QtMocHelpers::PropertyData<bool>(55, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 17),
        // property 'shaded'
        QtMocHelpers::PropertyData<bool>(56, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 18),
        // property 'providesContextHelp'
        QtMocHelpers::PropertyData<bool>(57, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 19),
        // property 'width'
        QtMocHelpers::PropertyData<qreal>(58, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 20),
        // property 'height'
        QtMocHelpers::PropertyData<qreal>(59, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 21),
        // property 'bordersTopEdge'
        QtMocHelpers::PropertyData<bool>(60, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 23),
        // property 'bordersLeftEdge'
        QtMocHelpers::PropertyData<bool>(61, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 24),
        // property 'bordersRightEdge'
        QtMocHelpers::PropertyData<bool>(62, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 25),
        // property 'bordersBottomEdge'
        QtMocHelpers::PropertyData<bool>(63, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 26),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<PreviewClient, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject KDecoration3::Preview::PreviewClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12KDecoration37Preview13PreviewClientE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12KDecoration37Preview13PreviewClientE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12KDecoration37Preview13PreviewClientE_t>.metaTypes,
    nullptr
} };

void KDecoration3::Preview::PreviewClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PreviewClient *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->captionChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->iconChanged((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 2: _t->iconNameChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->activeChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->closeableChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->keepAboveChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->keepBelowChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->excludeFromCaptureChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->maximizableChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->maximizedChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->maximizedVerticallyChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->maximizedHorizontallyChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->minimizableChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->modalChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->movableChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->onAllDesktopsChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->resizableChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->shadeableChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->shadedChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->providesContextHelpChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->widthChanged((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 21: _t->heightChanged((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 22: _t->paletteChanged((*reinterpret_cast<std::add_pointer_t<QPalette>>(_a[1]))); break;
        case 23: _t->bordersTopEdgeChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 24: _t->bordersLeftEdgeChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 25: _t->bordersRightEdgeChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 26: _t->bordersBottomEdgeChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 27: _t->showWindowMenuRequested(); break;
        case 28: _t->showApplicationMenuRequested(); break;
        case 29: _t->minimizeRequested(); break;
        case 30: _t->closeRequested(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)(const QString & )>(_a, &PreviewClient::captionChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)(const QIcon & )>(_a, &PreviewClient::iconChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)(const QString & )>(_a, &PreviewClient::iconNameChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)(bool )>(_a, &PreviewClient::activeChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)(bool )>(_a, &PreviewClient::closeableChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)(bool )>(_a, &PreviewClient::keepAboveChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)(bool )>(_a, &PreviewClient::keepBelowChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)(bool )>(_a, &PreviewClient::excludeFromCaptureChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)(bool )>(_a, &PreviewClient::maximizableChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)(bool )>(_a, &PreviewClient::maximizedChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)(bool )>(_a, &PreviewClient::maximizedVerticallyChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)(bool )>(_a, &PreviewClient::maximizedHorizontallyChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)(bool )>(_a, &PreviewClient::minimizableChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)(bool )>(_a, &PreviewClient::modalChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)(bool )>(_a, &PreviewClient::movableChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)(bool )>(_a, &PreviewClient::onAllDesktopsChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)(bool )>(_a, &PreviewClient::resizableChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)(bool )>(_a, &PreviewClient::shadeableChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)(bool )>(_a, &PreviewClient::shadedChanged, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)(bool )>(_a, &PreviewClient::providesContextHelpChanged, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)(qreal )>(_a, &PreviewClient::widthChanged, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)(qreal )>(_a, &PreviewClient::heightChanged, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)(const QPalette & )>(_a, &PreviewClient::paletteChanged, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)(bool )>(_a, &PreviewClient::bordersTopEdgeChanged, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)(bool )>(_a, &PreviewClient::bordersLeftEdgeChanged, 24))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)(bool )>(_a, &PreviewClient::bordersRightEdgeChanged, 25))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)(bool )>(_a, &PreviewClient::bordersBottomEdgeChanged, 26))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)()>(_a, &PreviewClient::showWindowMenuRequested, 27))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)()>(_a, &PreviewClient::showApplicationMenuRequested, 28))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)()>(_a, &PreviewClient::minimizeRequested, 29))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewClient::*)()>(_a, &PreviewClient::closeRequested, 30))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<KDecoration3::Decoration**>(_v) = _t->decoration(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->caption(); break;
        case 2: *reinterpret_cast<QIcon*>(_v) = _t->icon(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->iconName(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isActive(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->isCloseable(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->isKeepAbove(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->isKeepBelow(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->isMaximizeable(); break;
        case 9: *reinterpret_cast<bool*>(_v) = _t->isMaximized(); break;
        case 10: *reinterpret_cast<bool*>(_v) = _t->isMaximizedVertically(); break;
        case 11: *reinterpret_cast<bool*>(_v) = _t->isMaximizedHorizontally(); break;
        case 12: *reinterpret_cast<bool*>(_v) = _t->isMinimizeable(); break;
        case 13: *reinterpret_cast<bool*>(_v) = _t->isModal(); break;
        case 14: *reinterpret_cast<bool*>(_v) = _t->isMoveable(); break;
        case 15: *reinterpret_cast<bool*>(_v) = _t->isOnAllDesktops(); break;
        case 16: *reinterpret_cast<bool*>(_v) = _t->isResizeable(); break;
        case 17: *reinterpret_cast<bool*>(_v) = _t->isShadeable(); break;
        case 18: *reinterpret_cast<bool*>(_v) = _t->isShaded(); break;
        case 19: *reinterpret_cast<bool*>(_v) = _t->providesContextHelp(); break;
        case 20: *reinterpret_cast<qreal*>(_v) = _t->width(); break;
        case 21: *reinterpret_cast<qreal*>(_v) = _t->height(); break;
        case 22: *reinterpret_cast<bool*>(_v) = _t->bordersTopEdge(); break;
        case 23: *reinterpret_cast<bool*>(_v) = _t->bordersLeftEdge(); break;
        case 24: *reinterpret_cast<bool*>(_v) = _t->bordersRightEdge(); break;
        case 25: *reinterpret_cast<bool*>(_v) = _t->bordersBottomEdge(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setCaption(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setIcon(*reinterpret_cast<QIcon*>(_v)); break;
        case 3: _t->setIconName(*reinterpret_cast<QString*>(_v)); break;
        case 4: _t->setActive(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setCloseable(*reinterpret_cast<bool*>(_v)); break;
        case 6: _t->setKeepAbove(*reinterpret_cast<bool*>(_v)); break;
        case 7: _t->setKeepBelow(*reinterpret_cast<bool*>(_v)); break;
        case 8: _t->setMaximizable(*reinterpret_cast<bool*>(_v)); break;
        case 10: _t->setMaximizedVertically(*reinterpret_cast<bool*>(_v)); break;
        case 11: _t->setMaximizedHorizontally(*reinterpret_cast<bool*>(_v)); break;
        case 12: _t->setMinimizable(*reinterpret_cast<bool*>(_v)); break;
        case 13: _t->setModal(*reinterpret_cast<bool*>(_v)); break;
        case 14: _t->setMovable(*reinterpret_cast<bool*>(_v)); break;
        case 16: _t->setResizable(*reinterpret_cast<bool*>(_v)); break;
        case 17: _t->setShadeable(*reinterpret_cast<bool*>(_v)); break;
        case 18: _t->setShaded(*reinterpret_cast<bool*>(_v)); break;
        case 19: _t->setProvidesContextHelp(*reinterpret_cast<bool*>(_v)); break;
        case 20: _t->setWidth(*reinterpret_cast<qreal*>(_v)); break;
        case 21: _t->setHeight(*reinterpret_cast<qreal*>(_v)); break;
        case 22: _t->setBordersTopEdge(*reinterpret_cast<bool*>(_v)); break;
        case 23: _t->setBordersLeftEdge(*reinterpret_cast<bool*>(_v)); break;
        case 24: _t->setBordersRightEdge(*reinterpret_cast<bool*>(_v)); break;
        case 25: _t->setBordersBottomEdge(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KDecoration3::Preview::PreviewClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDecoration3::Preview::PreviewClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12KDecoration37Preview13PreviewClientE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "DecoratedWindowPrivateV4"))
        return static_cast< DecoratedWindowPrivateV4*>(this);
    return QObject::qt_metacast(_clname);
}

int KDecoration3::Preview::PreviewClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 31;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void KDecoration3::Preview::PreviewClient::captionChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void KDecoration3::Preview::PreviewClient::iconChanged(const QIcon & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void KDecoration3::Preview::PreviewClient::iconNameChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void KDecoration3::Preview::PreviewClient::activeChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void KDecoration3::Preview::PreviewClient::closeableChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void KDecoration3::Preview::PreviewClient::keepAboveChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void KDecoration3::Preview::PreviewClient::keepBelowChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void KDecoration3::Preview::PreviewClient::excludeFromCaptureChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void KDecoration3::Preview::PreviewClient::maximizableChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void KDecoration3::Preview::PreviewClient::maximizedChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void KDecoration3::Preview::PreviewClient::maximizedVerticallyChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void KDecoration3::Preview::PreviewClient::maximizedHorizontallyChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void KDecoration3::Preview::PreviewClient::minimizableChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void KDecoration3::Preview::PreviewClient::modalChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void KDecoration3::Preview::PreviewClient::movableChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1);
}

// SIGNAL 15
void KDecoration3::Preview::PreviewClient::onAllDesktopsChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}

// SIGNAL 16
void KDecoration3::Preview::PreviewClient::resizableChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1);
}

// SIGNAL 17
void KDecoration3::Preview::PreviewClient::shadeableChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 17, nullptr, _t1);
}

// SIGNAL 18
void KDecoration3::Preview::PreviewClient::shadedChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 18, nullptr, _t1);
}

// SIGNAL 19
void KDecoration3::Preview::PreviewClient::providesContextHelpChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 19, nullptr, _t1);
}

// SIGNAL 20
void KDecoration3::Preview::PreviewClient::widthChanged(qreal _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 20, nullptr, _t1);
}

// SIGNAL 21
void KDecoration3::Preview::PreviewClient::heightChanged(qreal _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 21, nullptr, _t1);
}

// SIGNAL 22
void KDecoration3::Preview::PreviewClient::paletteChanged(const QPalette & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 22, nullptr, _t1);
}

// SIGNAL 23
void KDecoration3::Preview::PreviewClient::bordersTopEdgeChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 23, nullptr, _t1);
}

// SIGNAL 24
void KDecoration3::Preview::PreviewClient::bordersLeftEdgeChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 24, nullptr, _t1);
}

// SIGNAL 25
void KDecoration3::Preview::PreviewClient::bordersRightEdgeChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 25, nullptr, _t1);
}

// SIGNAL 26
void KDecoration3::Preview::PreviewClient::bordersBottomEdgeChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 26, nullptr, _t1);
}

// SIGNAL 27
void KDecoration3::Preview::PreviewClient::showWindowMenuRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void KDecoration3::Preview::PreviewClient::showApplicationMenuRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void KDecoration3::Preview::PreviewClient::minimizeRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void KDecoration3::Preview::PreviewClient::closeRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}
QT_WARNING_POP
