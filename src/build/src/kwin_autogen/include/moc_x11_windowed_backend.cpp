/****************************************************************************
** Meta object code from reading C++ file 'x11_windowed_backend.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/backends/x11/x11_windowed_backend.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'x11_windowed_backend.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin22X11WindowedInputDeviceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::X11WindowedInputDevice::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin22X11WindowedInputDeviceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::X11WindowedInputDevice"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<X11WindowedInputDevice, qt_meta_tag_ZN4KWin22X11WindowedInputDeviceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::X11WindowedInputDevice::staticMetaObject = { {
    QMetaObject::SuperData::link<InputDevice::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin22X11WindowedInputDeviceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin22X11WindowedInputDeviceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin22X11WindowedInputDeviceE_t>.metaTypes,
    nullptr
} };

void KWin::X11WindowedInputDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<X11WindowedInputDevice *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::X11WindowedInputDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::X11WindowedInputDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin22X11WindowedInputDeviceE_t>.strings))
        return static_cast<void*>(this);
    return InputDevice::qt_metacast(_clname);
}

int KWin::X11WindowedInputDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InputDevice::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin23X11WindowedInputBackendE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::X11WindowedInputBackend::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin23X11WindowedInputBackendE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::X11WindowedInputBackend"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<X11WindowedInputBackend, qt_meta_tag_ZN4KWin23X11WindowedInputBackendE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::X11WindowedInputBackend::staticMetaObject = { {
    QMetaObject::SuperData::link<InputBackend::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23X11WindowedInputBackendE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23X11WindowedInputBackendE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin23X11WindowedInputBackendE_t>.metaTypes,
    nullptr
} };

void KWin::X11WindowedInputBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<X11WindowedInputBackend *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::X11WindowedInputBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::X11WindowedInputBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23X11WindowedInputBackendE_t>.strings))
        return static_cast<void*>(this);
    return InputBackend::qt_metacast(_clname);
}

int KWin::X11WindowedInputBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InputBackend::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin18X11WindowedBackendE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::X11WindowedBackend::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin18X11WindowedBackendE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::X11WindowedBackend"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<X11WindowedBackend, qt_meta_tag_ZN4KWin18X11WindowedBackendE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::X11WindowedBackend::staticMetaObject = { {
    QMetaObject::SuperData::link<OutputBackend::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin18X11WindowedBackendE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin18X11WindowedBackendE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin18X11WindowedBackendE_t>.metaTypes,
    nullptr
} };

void KWin::X11WindowedBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<X11WindowedBackend *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::X11WindowedBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::X11WindowedBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin18X11WindowedBackendE_t>.strings))
        return static_cast<void*>(this);
    return OutputBackend::qt_metacast(_clname);
}

int KWin::X11WindowedBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OutputBackend::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
