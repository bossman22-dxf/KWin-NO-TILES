/****************************************************************************
** Meta object code from reading C++ file 'datacontroldevicemanager_v1.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/wayland/datacontroldevicemanager_v1.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datacontroldevicemanager_v1.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin35DataControlDeviceManagerV1InterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::DataControlDeviceManagerV1Interface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin35DataControlDeviceManagerV1InterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::DataControlDeviceManagerV1Interface",
        "dataSourceCreated",
        "",
        "KWin::DataControlSourceV1Interface*",
        "dataSource",
        "dataDeviceCreated",
        "KWin::DataControlDeviceV1Interface*",
        "dataDevice"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'dataSourceCreated'
        QtMocHelpers::SignalData<void(KWin::DataControlSourceV1Interface *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'dataDeviceCreated'
        QtMocHelpers::SignalData<void(KWin::DataControlDeviceV1Interface *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DataControlDeviceManagerV1Interface, qt_meta_tag_ZN4KWin35DataControlDeviceManagerV1InterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::DataControlDeviceManagerV1Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin35DataControlDeviceManagerV1InterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin35DataControlDeviceManagerV1InterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin35DataControlDeviceManagerV1InterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::DataControlDeviceManagerV1Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DataControlDeviceManagerV1Interface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->dataSourceCreated((*reinterpret_cast<std::add_pointer_t<KWin::DataControlSourceV1Interface*>>(_a[1]))); break;
        case 1: _t->dataDeviceCreated((*reinterpret_cast<std::add_pointer_t<KWin::DataControlDeviceV1Interface*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DataControlDeviceManagerV1Interface::*)(KWin::DataControlSourceV1Interface * )>(_a, &DataControlDeviceManagerV1Interface::dataSourceCreated, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataControlDeviceManagerV1Interface::*)(KWin::DataControlDeviceV1Interface * )>(_a, &DataControlDeviceManagerV1Interface::dataDeviceCreated, 1))
            return;
    }
}

const QMetaObject *KWin::DataControlDeviceManagerV1Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::DataControlDeviceManagerV1Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin35DataControlDeviceManagerV1InterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::DataControlDeviceManagerV1Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void KWin::DataControlDeviceManagerV1Interface::dataSourceCreated(KWin::DataControlSourceV1Interface * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void KWin::DataControlDeviceManagerV1Interface::dataDeviceCreated(KWin::DataControlDeviceV1Interface * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
