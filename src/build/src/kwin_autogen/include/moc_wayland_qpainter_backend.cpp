/****************************************************************************
** Meta object code from reading C++ file 'wayland_qpainter_backend.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/backends/wayland/wayland_qpainter_backend.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wayland_qpainter_backend.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin7Wayland26WaylandQPainterCursorLayerE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::Wayland::WaylandQPainterCursorLayer::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin7Wayland26WaylandQPainterCursorLayerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::Wayland::WaylandQPainterCursorLayer"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WaylandQPainterCursorLayer, qt_meta_tag_ZN4KWin7Wayland26WaylandQPainterCursorLayerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::Wayland::WaylandQPainterCursorLayer::staticMetaObject = { {
    QMetaObject::SuperData::link<OutputLayer::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin7Wayland26WaylandQPainterCursorLayerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin7Wayland26WaylandQPainterCursorLayerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin7Wayland26WaylandQPainterCursorLayerE_t>.metaTypes,
    nullptr
} };

void KWin::Wayland::WaylandQPainterCursorLayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WaylandQPainterCursorLayer *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::Wayland::WaylandQPainterCursorLayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::Wayland::WaylandQPainterCursorLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin7Wayland26WaylandQPainterCursorLayerE_t>.strings))
        return static_cast<void*>(this);
    return OutputLayer::qt_metacast(_clname);
}

int KWin::Wayland::WaylandQPainterCursorLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OutputLayer::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin7Wayland22WaylandQPainterBackendE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::Wayland::WaylandQPainterBackend::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin7Wayland22WaylandQPainterBackendE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::Wayland::WaylandQPainterBackend"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WaylandQPainterBackend, qt_meta_tag_ZN4KWin7Wayland22WaylandQPainterBackendE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::Wayland::WaylandQPainterBackend::staticMetaObject = { {
    QMetaObject::SuperData::link<QPainterBackend::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin7Wayland22WaylandQPainterBackendE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin7Wayland22WaylandQPainterBackendE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin7Wayland22WaylandQPainterBackendE_t>.metaTypes,
    nullptr
} };

void KWin::Wayland::WaylandQPainterBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WaylandQPainterBackend *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::Wayland::WaylandQPainterBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::Wayland::WaylandQPainterBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin7Wayland22WaylandQPainterBackendE_t>.strings))
        return static_cast<void*>(this);
    return QPainterBackend::qt_metacast(_clname);
}

int KWin::Wayland::WaylandQPainterBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPainterBackend::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
