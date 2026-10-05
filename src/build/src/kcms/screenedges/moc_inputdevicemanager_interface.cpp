/****************************************************************************
** Meta object code from reading C++ file 'inputdevicemanager_interface.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "inputdevicemanager_interface.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputdevicemanager_interface.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN37OrgKdeKWinInputDeviceManagerInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto OrgKdeKWinInputDeviceManagerInterface::qt_create_metaobjectdata<qt_meta_tag_ZN37OrgKdeKWinInputDeviceManagerInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OrgKdeKWinInputDeviceManagerInterface",
        "deviceAdded",
        "",
        "sysName",
        "deviceRemoved",
        "ListKeyboards",
        "QDBusPendingReply<QStringList>",
        "ListPointers",
        "ListTouch",
        "devicesSysNames"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'deviceAdded'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'deviceRemoved'
        QtMocHelpers::SignalData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'ListKeyboards'
        QtMocHelpers::SlotData<QDBusPendingReply<QStringList>()>(5, 2, QMC::AccessPublic, 0x80000000 | 6),
        // Slot 'ListPointers'
        QtMocHelpers::SlotData<QDBusPendingReply<QStringList>()>(7, 2, QMC::AccessPublic, 0x80000000 | 6),
        // Slot 'ListTouch'
        QtMocHelpers::SlotData<QDBusPendingReply<QStringList>()>(8, 2, QMC::AccessPublic, 0x80000000 | 6),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'devicesSysNames'
        QtMocHelpers::PropertyData<QStringList>(9, QMetaType::QStringList, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OrgKdeKWinInputDeviceManagerInterface, qt_meta_tag_ZN37OrgKdeKWinInputDeviceManagerInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OrgKdeKWinInputDeviceManagerInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN37OrgKdeKWinInputDeviceManagerInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN37OrgKdeKWinInputDeviceManagerInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN37OrgKdeKWinInputDeviceManagerInterfaceE_t>.metaTypes,
    nullptr
} };

void OrgKdeKWinInputDeviceManagerInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OrgKdeKWinInputDeviceManagerInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->deviceAdded((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->deviceRemoved((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: { QDBusPendingReply<QStringList> _r = _t->ListKeyboards();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<QStringList>*>(_a[0]) = std::move(_r); }  break;
        case 3: { QDBusPendingReply<QStringList> _r = _t->ListPointers();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<QStringList>*>(_a[0]) = std::move(_r); }  break;
        case 4: { QDBusPendingReply<QStringList> _r = _t->ListTouch();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<QStringList>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OrgKdeKWinInputDeviceManagerInterface::*)(const QString & )>(_a, &OrgKdeKWinInputDeviceManagerInterface::deviceAdded, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdeKWinInputDeviceManagerInterface::*)(const QString & )>(_a, &OrgKdeKWinInputDeviceManagerInterface::deviceRemoved, 1))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QStringList*>(_v) = _t->devicesSysNames(); break;
        default: break;
        }
    }
}

const QMetaObject *OrgKdeKWinInputDeviceManagerInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgKdeKWinInputDeviceManagerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN37OrgKdeKWinInputDeviceManagerInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgKdeKWinInputDeviceManagerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void OrgKdeKWinInputDeviceManagerInterface::deviceAdded(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void OrgKdeKWinInputDeviceManagerInterface::deviceRemoved(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
