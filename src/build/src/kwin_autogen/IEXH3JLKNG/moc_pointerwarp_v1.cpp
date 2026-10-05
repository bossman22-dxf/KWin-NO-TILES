/****************************************************************************
** Meta object code from reading C++ file 'pointerwarp_v1.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/wayland/pointerwarp_v1.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pointerwarp_v1.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin13PointerWarpV1E_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::PointerWarpV1::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin13PointerWarpV1E_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::PointerWarpV1",
        "warpRequested",
        "",
        "SurfaceInterface*",
        "surface",
        "PointerInterface*",
        "pointer",
        "QPointF",
        "point",
        "uint32_t",
        "serial"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'warpRequested'
        QtMocHelpers::SignalData<void(SurfaceInterface *, PointerInterface *, const QPointF &, uint32_t)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 }, { 0x80000000 | 9, 10 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PointerWarpV1, qt_meta_tag_ZN4KWin13PointerWarpV1E_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::PointerWarpV1::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin13PointerWarpV1E_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin13PointerWarpV1E_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin13PointerWarpV1E_t>.metaTypes,
    nullptr
} };

void KWin::PointerWarpV1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PointerWarpV1 *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->warpRequested((*reinterpret_cast<std::add_pointer_t<SurfaceInterface*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<PointerInterface*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<uint32_t>>(_a[4]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PointerWarpV1::*)(SurfaceInterface * , PointerInterface * , const QPointF & , uint32_t )>(_a, &PointerWarpV1::warpRequested, 0))
            return;
    }
}

const QMetaObject *KWin::PointerWarpV1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::PointerWarpV1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin13PointerWarpV1E_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QtWaylandServer::wp_pointer_warp_v1"))
        return static_cast< QtWaylandServer::wp_pointer_warp_v1*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::PointerWarpV1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void KWin::PointerWarpV1::warpRequested(SurfaceInterface * _t1, PointerInterface * _t2, const QPointF & _t3, uint32_t _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3, _t4);
}
QT_WARNING_POP
