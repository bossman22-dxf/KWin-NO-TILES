/****************************************************************************
** Meta object code from reading C++ file 'x11_windowed_qpainter_backend.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/backends/x11/x11_windowed_qpainter_backend.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'x11_windowed_qpainter_backend.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin30X11WindowedQPainterCursorLayerE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::X11WindowedQPainterCursorLayer::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin30X11WindowedQPainterCursorLayerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::X11WindowedQPainterCursorLayer"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<X11WindowedQPainterCursorLayer, qt_meta_tag_ZN4KWin30X11WindowedQPainterCursorLayerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::X11WindowedQPainterCursorLayer::staticMetaObject = { {
    QMetaObject::SuperData::link<OutputLayer::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin30X11WindowedQPainterCursorLayerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin30X11WindowedQPainterCursorLayerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin30X11WindowedQPainterCursorLayerE_t>.metaTypes,
    nullptr
} };

void KWin::X11WindowedQPainterCursorLayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<X11WindowedQPainterCursorLayer *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::X11WindowedQPainterCursorLayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::X11WindowedQPainterCursorLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin30X11WindowedQPainterCursorLayerE_t>.strings))
        return static_cast<void*>(this);
    return OutputLayer::qt_metacast(_clname);
}

int KWin::X11WindowedQPainterCursorLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OutputLayer::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin26X11WindowedQPainterBackendE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::X11WindowedQPainterBackend::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin26X11WindowedQPainterBackendE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::X11WindowedQPainterBackend"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<X11WindowedQPainterBackend, qt_meta_tag_ZN4KWin26X11WindowedQPainterBackendE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::X11WindowedQPainterBackend::staticMetaObject = { {
    QMetaObject::SuperData::link<QPainterBackend::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin26X11WindowedQPainterBackendE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin26X11WindowedQPainterBackendE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin26X11WindowedQPainterBackendE_t>.metaTypes,
    nullptr
} };

void KWin::X11WindowedQPainterBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<X11WindowedQPainterBackend *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::X11WindowedQPainterBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::X11WindowedQPainterBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin26X11WindowedQPainterBackendE_t>.strings))
        return static_cast<void*>(this);
    return QPainterBackend::qt_metacast(_clname);
}

int KWin::X11WindowedQPainterBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPainterBackend::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
