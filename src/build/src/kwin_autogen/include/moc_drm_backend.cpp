/****************************************************************************
** Meta object code from reading C++ file 'drm_backend.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/backends/drm/drm_backend.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drm_backend.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin10DrmBackendE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::DrmBackend::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin10DrmBackendE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::DrmBackend",
        "gpuAdded",
        "",
        "DrmGpu*",
        "gpu",
        "gpuRemoved"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'gpuAdded'
        QtMocHelpers::SignalData<void(DrmGpu *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'gpuRemoved'
        QtMocHelpers::SignalData<void(DrmGpu *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DrmBackend, qt_meta_tag_ZN4KWin10DrmBackendE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::DrmBackend::staticMetaObject = { {
    QMetaObject::SuperData::link<OutputBackend::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin10DrmBackendE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin10DrmBackendE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin10DrmBackendE_t>.metaTypes,
    nullptr
} };

void KWin::DrmBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DrmBackend *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->gpuAdded((*reinterpret_cast<std::add_pointer_t<DrmGpu*>>(_a[1]))); break;
        case 1: _t->gpuRemoved((*reinterpret_cast<std::add_pointer_t<DrmGpu*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DrmBackend::*)(DrmGpu * )>(_a, &DrmBackend::gpuAdded, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DrmBackend::*)(DrmGpu * )>(_a, &DrmBackend::gpuRemoved, 1))
            return;
    }
}

const QMetaObject *KWin::DrmBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::DrmBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin10DrmBackendE_t>.strings))
        return static_cast<void*>(this);
    return OutputBackend::qt_metacast(_clname);
}

int KWin::DrmBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OutputBackend::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void KWin::DrmBackend::gpuAdded(DrmGpu * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void KWin::DrmBackend::gpuRemoved(DrmGpu * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
