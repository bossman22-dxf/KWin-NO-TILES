/****************************************************************************
** Meta object code from reading C++ file 'sensorproxy_interface.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sensorproxy_interface.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sensorproxy_interface.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN29NetHadessSensorProxyInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto NetHadessSensorProxyInterface::qt_create_metaobjectdata<qt_meta_tag_ZN29NetHadessSensorProxyInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "NetHadessSensorProxyInterface",
        "ClaimAccelerometer",
        "QDBusPendingReply<>",
        "",
        "ClaimLight",
        "ClaimProximity",
        "ReleaseAccelerometer",
        "ReleaseLight",
        "ReleaseProximity",
        "AccelerometerOrientation",
        "AccelerometerTilt",
        "HasAccelerometer",
        "HasAmbientLight",
        "HasProximity",
        "LightLevel",
        "LightLevelUnit",
        "ProximityNear"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'ClaimAccelerometer'
        QtMocHelpers::SlotData<QDBusPendingReply<>()>(1, 3, QMC::AccessPublic, 0x80000000 | 2),
        // Slot 'ClaimLight'
        QtMocHelpers::SlotData<QDBusPendingReply<>()>(4, 3, QMC::AccessPublic, 0x80000000 | 2),
        // Slot 'ClaimProximity'
        QtMocHelpers::SlotData<QDBusPendingReply<>()>(5, 3, QMC::AccessPublic, 0x80000000 | 2),
        // Slot 'ReleaseAccelerometer'
        QtMocHelpers::SlotData<QDBusPendingReply<>()>(6, 3, QMC::AccessPublic, 0x80000000 | 2),
        // Slot 'ReleaseLight'
        QtMocHelpers::SlotData<QDBusPendingReply<>()>(7, 3, QMC::AccessPublic, 0x80000000 | 2),
        // Slot 'ReleaseProximity'
        QtMocHelpers::SlotData<QDBusPendingReply<>()>(8, 3, QMC::AccessPublic, 0x80000000 | 2),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'AccelerometerOrientation'
        QtMocHelpers::PropertyData<QString>(9, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'AccelerometerTilt'
        QtMocHelpers::PropertyData<QString>(10, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'HasAccelerometer'
        QtMocHelpers::PropertyData<bool>(11, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'HasAmbientLight'
        QtMocHelpers::PropertyData<bool>(12, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'HasProximity'
        QtMocHelpers::PropertyData<bool>(13, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'LightLevel'
        QtMocHelpers::PropertyData<double>(14, QMetaType::Double, QMC::DefaultPropertyFlags),
        // property 'LightLevelUnit'
        QtMocHelpers::PropertyData<QString>(15, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'ProximityNear'
        QtMocHelpers::PropertyData<bool>(16, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<NetHadessSensorProxyInterface, qt_meta_tag_ZN29NetHadessSensorProxyInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject NetHadessSensorProxyInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN29NetHadessSensorProxyInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN29NetHadessSensorProxyInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN29NetHadessSensorProxyInterfaceE_t>.metaTypes,
    nullptr
} };

void NetHadessSensorProxyInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NetHadessSensorProxyInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QDBusPendingReply<> _r = _t->ClaimAccelerometer();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 1: { QDBusPendingReply<> _r = _t->ClaimLight();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 2: { QDBusPendingReply<> _r = _t->ClaimProximity();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 3: { QDBusPendingReply<> _r = _t->ReleaseAccelerometer();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 4: { QDBusPendingReply<> _r = _t->ReleaseLight();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 5: { QDBusPendingReply<> _r = _t->ReleaseProximity();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->accelerometerOrientation(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->accelerometerTilt(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->hasAccelerometer(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->hasAmbientLight(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasProximity(); break;
        case 5: *reinterpret_cast<double*>(_v) = _t->lightLevel(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->lightLevelUnit(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->proximityNear(); break;
        default: break;
        }
    }
}

const QMetaObject *NetHadessSensorProxyInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetHadessSensorProxyInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN29NetHadessSensorProxyInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int NetHadessSensorProxyInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
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
        _id -= 8;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN36NetHadessSensorProxyCompassInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto NetHadessSensorProxyCompassInterface::qt_create_metaobjectdata<qt_meta_tag_ZN36NetHadessSensorProxyCompassInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "NetHadessSensorProxyCompassInterface",
        "ClaimCompass",
        "QDBusPendingReply<>",
        "",
        "ReleaseCompass",
        "CompassHeading",
        "HasCompass"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'ClaimCompass'
        QtMocHelpers::SlotData<QDBusPendingReply<>()>(1, 3, QMC::AccessPublic, 0x80000000 | 2),
        // Slot 'ReleaseCompass'
        QtMocHelpers::SlotData<QDBusPendingReply<>()>(4, 3, QMC::AccessPublic, 0x80000000 | 2),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'CompassHeading'
        QtMocHelpers::PropertyData<double>(5, QMetaType::Double, QMC::DefaultPropertyFlags),
        // property 'HasCompass'
        QtMocHelpers::PropertyData<bool>(6, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<NetHadessSensorProxyCompassInterface, qt_meta_tag_ZN36NetHadessSensorProxyCompassInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject NetHadessSensorProxyCompassInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN36NetHadessSensorProxyCompassInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN36NetHadessSensorProxyCompassInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN36NetHadessSensorProxyCompassInterfaceE_t>.metaTypes,
    nullptr
} };

void NetHadessSensorProxyCompassInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NetHadessSensorProxyCompassInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QDBusPendingReply<> _r = _t->ClaimCompass();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 1: { QDBusPendingReply<> _r = _t->ReleaseCompass();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<double*>(_v) = _t->compassHeading(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->hasCompass(); break;
        default: break;
        }
    }
}

const QMetaObject *NetHadessSensorProxyCompassInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetHadessSensorProxyCompassInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN36NetHadessSensorProxyCompassInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int NetHadessSensorProxyCompassInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
