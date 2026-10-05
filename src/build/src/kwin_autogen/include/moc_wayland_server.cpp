/****************************************************************************
** Meta object code from reading C++ file 'wayland_server.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/wayland_server.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wayland_server.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin13WaylandServerE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::WaylandServer::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin13WaylandServerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::WaylandServer",
        "windowCreated",
        "",
        "KWin::Window*",
        "windowAdded",
        "windowRemoved",
        "initialized",
        "foreignTransientChanged",
        "KWin::SurfaceInterface*",
        "child",
        "lockStateChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'windowCreated'
        QtMocHelpers::SignalData<void(KWin::Window *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'windowAdded'
        QtMocHelpers::SignalData<void(KWin::Window *)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'windowRemoved'
        QtMocHelpers::SignalData<void(KWin::Window *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'initialized'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'foreignTransientChanged'
        QtMocHelpers::SignalData<void(KWin::SurfaceInterface *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Signal 'lockStateChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WaylandServer, qt_meta_tag_ZN4KWin13WaylandServerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::WaylandServer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin13WaylandServerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin13WaylandServerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin13WaylandServerE_t>.metaTypes,
    nullptr
} };

void KWin::WaylandServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WaylandServer *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->windowCreated((*reinterpret_cast<std::add_pointer_t<KWin::Window*>>(_a[1]))); break;
        case 1: _t->windowAdded((*reinterpret_cast<std::add_pointer_t<KWin::Window*>>(_a[1]))); break;
        case 2: _t->windowRemoved((*reinterpret_cast<std::add_pointer_t<KWin::Window*>>(_a[1]))); break;
        case 3: _t->initialized(); break;
        case 4: _t->foreignTransientChanged((*reinterpret_cast<std::add_pointer_t<KWin::SurfaceInterface*>>(_a[1]))); break;
        case 5: _t->lockStateChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (WaylandServer::*)(KWin::Window * )>(_a, &WaylandServer::windowCreated, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaylandServer::*)(KWin::Window * )>(_a, &WaylandServer::windowAdded, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaylandServer::*)(KWin::Window * )>(_a, &WaylandServer::windowRemoved, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaylandServer::*)()>(_a, &WaylandServer::initialized, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaylandServer::*)(KWin::SurfaceInterface * )>(_a, &WaylandServer::foreignTransientChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (WaylandServer::*)()>(_a, &WaylandServer::lockStateChanged, 5))
            return;
    }
}

const QMetaObject *KWin::WaylandServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::WaylandServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin13WaylandServerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::WaylandServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void KWin::WaylandServer::windowCreated(KWin::Window * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void KWin::WaylandServer::windowAdded(KWin::Window * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void KWin::WaylandServer::windowRemoved(KWin::Window * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void KWin::WaylandServer::initialized()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWin::WaylandServer::foreignTransientChanged(KWin::SurfaceInterface * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void KWin::WaylandServer::lockStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
