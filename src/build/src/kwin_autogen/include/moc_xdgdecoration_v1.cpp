/****************************************************************************
** Meta object code from reading C++ file 'xdgdecoration_v1.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/wayland/xdgdecoration_v1.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xdgdecoration_v1.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin31XdgDecorationManagerV1InterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::XdgDecorationManagerV1Interface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin31XdgDecorationManagerV1InterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::XdgDecorationManagerV1Interface",
        "decorationCreated",
        "",
        "XdgToplevelDecorationV1Interface*",
        "decoration"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'decorationCreated'
        QtMocHelpers::SignalData<void(XdgToplevelDecorationV1Interface *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XdgDecorationManagerV1Interface, qt_meta_tag_ZN4KWin31XdgDecorationManagerV1InterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::XdgDecorationManagerV1Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin31XdgDecorationManagerV1InterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin31XdgDecorationManagerV1InterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin31XdgDecorationManagerV1InterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::XdgDecorationManagerV1Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XdgDecorationManagerV1Interface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->decorationCreated((*reinterpret_cast<std::add_pointer_t<XdgToplevelDecorationV1Interface*>>(_a[1]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< XdgToplevelDecorationV1Interface* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (XdgDecorationManagerV1Interface::*)(XdgToplevelDecorationV1Interface * )>(_a, &XdgDecorationManagerV1Interface::decorationCreated, 0))
            return;
    }
}

const QMetaObject *KWin::XdgDecorationManagerV1Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::XdgDecorationManagerV1Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin31XdgDecorationManagerV1InterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::XdgDecorationManagerV1Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void KWin::XdgDecorationManagerV1Interface::decorationCreated(XdgToplevelDecorationV1Interface * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN4KWin32XdgToplevelDecorationV1InterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::XdgToplevelDecorationV1Interface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin32XdgToplevelDecorationV1InterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::XdgToplevelDecorationV1Interface",
        "preferredModeChanged",
        "",
        "KWin::XdgToplevelDecorationV1Interface::Mode",
        "mode",
        "Mode",
        "Undefined",
        "None",
        "Client",
        "Server"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'preferredModeChanged'
        QtMocHelpers::SignalData<void(KWin::XdgToplevelDecorationV1Interface::Mode)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Mode'
        QtMocHelpers::EnumData<enum Mode>(5, 5, QMC::EnumIsScoped).add({
            {    6, Mode::Undefined },
            {    7, Mode::None },
            {    8, Mode::Client },
            {    9, Mode::Server },
        }),
    };
    return QtMocHelpers::metaObjectData<XdgToplevelDecorationV1Interface, qt_meta_tag_ZN4KWin32XdgToplevelDecorationV1InterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::XdgToplevelDecorationV1Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin32XdgToplevelDecorationV1InterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin32XdgToplevelDecorationV1InterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin32XdgToplevelDecorationV1InterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::XdgToplevelDecorationV1Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XdgToplevelDecorationV1Interface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->preferredModeChanged((*reinterpret_cast<std::add_pointer_t<KWin::XdgToplevelDecorationV1Interface::Mode>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (XdgToplevelDecorationV1Interface::*)(KWin::XdgToplevelDecorationV1Interface::Mode )>(_a, &XdgToplevelDecorationV1Interface::preferredModeChanged, 0))
            return;
    }
}

const QMetaObject *KWin::XdgToplevelDecorationV1Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::XdgToplevelDecorationV1Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin32XdgToplevelDecorationV1InterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::XdgToplevelDecorationV1Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void KWin::XdgToplevelDecorationV1Interface::preferredModeChanged(KWin::XdgToplevelDecorationV1Interface::Mode _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
