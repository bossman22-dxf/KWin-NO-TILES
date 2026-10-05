/****************************************************************************
** Meta object code from reading C++ file 'wayland_egl_backend.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/backends/wayland/wayland_egl_backend.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wayland_egl_backend.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin7Wayland21WaylandEglCursorLayerE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::Wayland::WaylandEglCursorLayer::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin7Wayland21WaylandEglCursorLayerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::Wayland::WaylandEglCursorLayer"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WaylandEglCursorLayer, qt_meta_tag_ZN4KWin7Wayland21WaylandEglCursorLayerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::Wayland::WaylandEglCursorLayer::staticMetaObject = { {
    QMetaObject::SuperData::link<OutputLayer::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin7Wayland21WaylandEglCursorLayerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin7Wayland21WaylandEglCursorLayerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin7Wayland21WaylandEglCursorLayerE_t>.metaTypes,
    nullptr
} };

void KWin::Wayland::WaylandEglCursorLayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WaylandEglCursorLayer *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::Wayland::WaylandEglCursorLayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::Wayland::WaylandEglCursorLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin7Wayland21WaylandEglCursorLayerE_t>.strings))
        return static_cast<void*>(this);
    return OutputLayer::qt_metacast(_clname);
}

int KWin::Wayland::WaylandEglCursorLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OutputLayer::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin7Wayland17WaylandEglBackendE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::Wayland::WaylandEglBackend::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin7Wayland17WaylandEglBackendE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::Wayland::WaylandEglBackend"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WaylandEglBackend, qt_meta_tag_ZN4KWin7Wayland17WaylandEglBackendE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::Wayland::WaylandEglBackend::staticMetaObject = { {
    QMetaObject::SuperData::link<EglBackend::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin7Wayland17WaylandEglBackendE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin7Wayland17WaylandEglBackendE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin7Wayland17WaylandEglBackendE_t>.metaTypes,
    nullptr
} };

void KWin::Wayland::WaylandEglBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WaylandEglBackend *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::Wayland::WaylandEglBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::Wayland::WaylandEglBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin7Wayland17WaylandEglBackendE_t>.strings))
        return static_cast<void*>(this);
    return EglBackend::qt_metacast(_clname);
}

int KWin::Wayland::WaylandEglBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EglBackend::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
