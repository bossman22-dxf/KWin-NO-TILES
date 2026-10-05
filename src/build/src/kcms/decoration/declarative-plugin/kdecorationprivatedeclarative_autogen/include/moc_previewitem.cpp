/****************************************************************************
** Meta object code from reading C++ file 'previewitem.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../kwin-6.7.5/src/kcms/decoration/declarative-plugin/previewitem.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'previewitem.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12KDecoration37Preview11PreviewItemE_t {};
} // unnamed namespace

template <> constexpr inline auto KDecoration3::Preview::PreviewItem::qt_create_metaobjectdata<qt_meta_tag_ZN12KDecoration37Preview11PreviewItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KDecoration3::Preview::PreviewItem",
        "QML.Element",
        "Decoration",
        "decorationChanged",
        "",
        "KDecoration3::Decoration*",
        "deco",
        "windowColorChanged",
        "QColor",
        "color",
        "drawingBackgroundChanged",
        "bridgeChanged",
        "settingsChanged",
        "shadowChanged",
        "decoration",
        "bridge",
        "KDecoration3::Preview::PreviewBridge*",
        "settings",
        "KDecoration3::Preview::Settings*",
        "client",
        "KDecoration3::Preview::PreviewClient*",
        "shadow",
        "KDecoration3::DecorationShadow*",
        "windowColor",
        "drawBackground"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'decorationChanged'
        QtMocHelpers::SignalData<void(KDecoration3::Decoration *)>(3, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'windowColorChanged'
        QtMocHelpers::SignalData<void(const QColor &)>(7, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Signal 'drawingBackgroundChanged'
        QtMocHelpers::SignalData<void(bool)>(10, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'bridgeChanged'
        QtMocHelpers::SignalData<void()>(11, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'settingsChanged'
        QtMocHelpers::SignalData<void()>(12, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'shadowChanged'
        QtMocHelpers::SignalData<void()>(13, 4, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'decoration'
        QtMocHelpers::PropertyData<KDecoration3::Decoration*>(14, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
        // property 'bridge'
        QtMocHelpers::PropertyData<KDecoration3::Preview::PreviewBridge*>(15, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 3),
        // property 'settings'
        QtMocHelpers::PropertyData<KDecoration3::Preview::Settings*>(17, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 4),
        // property 'client'
        QtMocHelpers::PropertyData<KDecoration3::Preview::PreviewClient*>(19, 0x80000000 | 20, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'shadow'
        QtMocHelpers::PropertyData<KDecoration3::DecorationShadow*>(21, 0x80000000 | 22, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 5),
        // property 'windowColor'
        QtMocHelpers::PropertyData<QColor>(23, 0x80000000 | 8, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'drawBackground'
        QtMocHelpers::PropertyData<bool>(24, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable, 2),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<PreviewItem, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject KDecoration3::Preview::PreviewItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickPaintedItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12KDecoration37Preview11PreviewItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12KDecoration37Preview11PreviewItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12KDecoration37Preview11PreviewItemE_t>.metaTypes,
    nullptr
} };

void KDecoration3::Preview::PreviewItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PreviewItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->decorationChanged((*reinterpret_cast<std::add_pointer_t<KDecoration3::Decoration*>>(_a[1]))); break;
        case 1: _t->windowColorChanged((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 2: _t->drawingBackgroundChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->bridgeChanged(); break;
        case 4: _t->settingsChanged(); break;
        case 5: _t->shadowChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PreviewItem::*)(KDecoration3::Decoration * )>(_a, &PreviewItem::decorationChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewItem::*)(const QColor & )>(_a, &PreviewItem::windowColorChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewItem::*)(bool )>(_a, &PreviewItem::drawingBackgroundChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewItem::*)()>(_a, &PreviewItem::bridgeChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewItem::*)()>(_a, &PreviewItem::settingsChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewItem::*)()>(_a, &PreviewItem::shadowChanged, 5))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<KDecoration3::Decoration**>(_v) = _t->decoration(); break;
        case 1: *reinterpret_cast<KDecoration3::Preview::PreviewBridge**>(_v) = _t->bridge(); break;
        case 2: *reinterpret_cast<KDecoration3::Preview::Settings**>(_v) = _t->settings(); break;
        case 3: *reinterpret_cast<KDecoration3::Preview::PreviewClient**>(_v) = _t->client(); break;
        case 4: *reinterpret_cast<KDecoration3::DecorationShadow**>(_v) = _t->shadow(); break;
        case 5: *reinterpret_cast<QColor*>(_v) = _t->windowColor(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->isDrawingBackground(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setBridge(*reinterpret_cast<KDecoration3::Preview::PreviewBridge**>(_v)); break;
        case 2: _t->setSettings(*reinterpret_cast<KDecoration3::Preview::Settings**>(_v)); break;
        case 5: _t->setWindowColor(*reinterpret_cast<QColor*>(_v)); break;
        case 6: _t->setDrawingBackground(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KDecoration3::Preview::PreviewItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDecoration3::Preview::PreviewItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12KDecoration37Preview11PreviewItemE_t>.strings))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int KDecoration3::Preview::PreviewItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void KDecoration3::Preview::PreviewItem::decorationChanged(KDecoration3::Decoration * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void KDecoration3::Preview::PreviewItem::windowColorChanged(const QColor & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void KDecoration3::Preview::PreviewItem::drawingBackgroundChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void KDecoration3::Preview::PreviewItem::bridgeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KDecoration3::Preview::PreviewItem::settingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KDecoration3::Preview::PreviewItem::shadowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
