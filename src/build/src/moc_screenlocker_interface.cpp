/****************************************************************************
** Meta object code from reading C++ file 'screenlocker_interface.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "screenlocker_interface.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screenlocker_interface.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN34OrgFreedesktopScreenSaverInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto OrgFreedesktopScreenSaverInterface::qt_create_metaobjectdata<qt_meta_tag_ZN34OrgFreedesktopScreenSaverInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OrgFreedesktopScreenSaverInterface",
        "ActiveChanged",
        "",
        "in0",
        "GetActive",
        "QDBusPendingReply<bool>",
        "GetActiveTime",
        "QDBusPendingReply<uint>",
        "GetSessionIdleTime",
        "Inhibit",
        "application_name",
        "reason_for_inhibit",
        "Lock",
        "QDBusPendingReply<>",
        "SetActive",
        "e",
        "SimulateUserActivity",
        "Throttle",
        "UnInhibit",
        "cookie",
        "UnThrottle"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'ActiveChanged'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Slot 'GetActive'
        QtMocHelpers::SlotData<QDBusPendingReply<bool>()>(4, 2, QMC::AccessPublic, 0x80000000 | 5),
        // Slot 'GetActiveTime'
        QtMocHelpers::SlotData<QDBusPendingReply<uint>()>(6, 2, QMC::AccessPublic, 0x80000000 | 7),
        // Slot 'GetSessionIdleTime'
        QtMocHelpers::SlotData<QDBusPendingReply<uint>()>(8, 2, QMC::AccessPublic, 0x80000000 | 7),
        // Slot 'Inhibit'
        QtMocHelpers::SlotData<QDBusPendingReply<uint>(const QString &, const QString &)>(9, 2, QMC::AccessPublic, 0x80000000 | 7, {{
            { QMetaType::QString, 10 }, { QMetaType::QString, 11 },
        }}),
        // Slot 'Lock'
        QtMocHelpers::SlotData<QDBusPendingReply<>()>(12, 2, QMC::AccessPublic, 0x80000000 | 13),
        // Slot 'SetActive'
        QtMocHelpers::SlotData<QDBusPendingReply<bool>(bool)>(14, 2, QMC::AccessPublic, 0x80000000 | 5, {{
            { QMetaType::Bool, 15 },
        }}),
        // Slot 'SimulateUserActivity'
        QtMocHelpers::SlotData<QDBusPendingReply<>()>(16, 2, QMC::AccessPublic, 0x80000000 | 13),
        // Slot 'Throttle'
        QtMocHelpers::SlotData<QDBusPendingReply<uint>(const QString &, const QString &)>(17, 2, QMC::AccessPublic, 0x80000000 | 7, {{
            { QMetaType::QString, 10 }, { QMetaType::QString, 11 },
        }}),
        // Slot 'UnInhibit'
        QtMocHelpers::SlotData<QDBusPendingReply<>(uint)>(18, 2, QMC::AccessPublic, 0x80000000 | 13, {{
            { QMetaType::UInt, 19 },
        }}),
        // Slot 'UnThrottle'
        QtMocHelpers::SlotData<QDBusPendingReply<>(uint)>(20, 2, QMC::AccessPublic, 0x80000000 | 13, {{
            { QMetaType::UInt, 19 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OrgFreedesktopScreenSaverInterface, qt_meta_tag_ZN34OrgFreedesktopScreenSaverInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OrgFreedesktopScreenSaverInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN34OrgFreedesktopScreenSaverInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN34OrgFreedesktopScreenSaverInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN34OrgFreedesktopScreenSaverInterfaceE_t>.metaTypes,
    nullptr
} };

void OrgFreedesktopScreenSaverInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OrgFreedesktopScreenSaverInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->ActiveChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: { QDBusPendingReply<bool> _r = _t->GetActive();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<bool>*>(_a[0]) = std::move(_r); }  break;
        case 2: { QDBusPendingReply<uint> _r = _t->GetActiveTime();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<uint>*>(_a[0]) = std::move(_r); }  break;
        case 3: { QDBusPendingReply<uint> _r = _t->GetSessionIdleTime();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<uint>*>(_a[0]) = std::move(_r); }  break;
        case 4: { QDBusPendingReply<uint> _r = _t->Inhibit((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<uint>*>(_a[0]) = std::move(_r); }  break;
        case 5: { QDBusPendingReply<> _r = _t->Lock();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 6: { QDBusPendingReply<bool> _r = _t->SetActive((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<bool>*>(_a[0]) = std::move(_r); }  break;
        case 7: { QDBusPendingReply<> _r = _t->SimulateUserActivity();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 8: { QDBusPendingReply<uint> _r = _t->Throttle((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<uint>*>(_a[0]) = std::move(_r); }  break;
        case 9: { QDBusPendingReply<> _r = _t->UnInhibit((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 10: { QDBusPendingReply<> _r = _t->UnThrottle((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OrgFreedesktopScreenSaverInterface::*)(bool )>(_a, &OrgFreedesktopScreenSaverInterface::ActiveChanged, 0))
            return;
    }
}

const QMetaObject *OrgFreedesktopScreenSaverInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgFreedesktopScreenSaverInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN34OrgFreedesktopScreenSaverInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgFreedesktopScreenSaverInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void OrgFreedesktopScreenSaverInterface::ActiveChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
