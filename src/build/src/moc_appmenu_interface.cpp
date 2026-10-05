/****************************************************************************
** Meta object code from reading C++ file 'appmenu_interface.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "appmenu_interface.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appmenu_interface.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN23OrgKdeKappmenuInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto OrgKdeKappmenuInterface::qt_create_metaobjectdata<qt_meta_tag_ZN23OrgKdeKappmenuInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OrgKdeKappmenuInterface",
        "menuHidden",
        "",
        "service",
        "QDBusObjectPath",
        "objectPath",
        "menuShown",
        "reconfigured",
        "showRequest",
        "actionId",
        "reconfigure",
        "QDBusPendingReply<>",
        "showMenu",
        "x",
        "y"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'menuHidden'
        QtMocHelpers::SignalData<void(const QString &, const QDBusObjectPath &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 4, 5 },
        }}),
        // Signal 'menuShown'
        QtMocHelpers::SignalData<void(const QString &, const QDBusObjectPath &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 4, 5 },
        }}),
        // Signal 'reconfigured'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showRequest'
        QtMocHelpers::SignalData<void(const QString &, const QDBusObjectPath &, int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 4, 5 }, { QMetaType::Int, 9 },
        }}),
        // Slot 'reconfigure'
        QtMocHelpers::SlotData<QDBusPendingReply<>()>(10, 2, QMC::AccessPublic, 0x80000000 | 11),
        // Slot 'showMenu'
        QtMocHelpers::SlotData<QDBusPendingReply<>(int, int, const QString &, const QDBusObjectPath &, int)>(12, 2, QMC::AccessPublic, 0x80000000 | 11, {{
            { QMetaType::Int, 13 }, { QMetaType::Int, 14 }, { QMetaType::QString, 3 }, { 0x80000000 | 4, 5 },
            { QMetaType::Int, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OrgKdeKappmenuInterface, qt_meta_tag_ZN23OrgKdeKappmenuInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OrgKdeKappmenuInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23OrgKdeKappmenuInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23OrgKdeKappmenuInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23OrgKdeKappmenuInterfaceE_t>.metaTypes,
    nullptr
} };

void OrgKdeKappmenuInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OrgKdeKappmenuInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->menuHidden((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QDBusObjectPath>>(_a[2]))); break;
        case 1: _t->menuShown((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QDBusObjectPath>>(_a[2]))); break;
        case 2: _t->reconfigured(); break;
        case 3: _t->showRequest((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QDBusObjectPath>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 4: { QDBusPendingReply<> _r = _t->reconfigure();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 5: { QDBusPendingReply<> _r = _t->showMenu((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QDBusObjectPath>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[5])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OrgKdeKappmenuInterface::*)(const QString & , const QDBusObjectPath & )>(_a, &OrgKdeKappmenuInterface::menuHidden, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdeKappmenuInterface::*)(const QString & , const QDBusObjectPath & )>(_a, &OrgKdeKappmenuInterface::menuShown, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdeKappmenuInterface::*)()>(_a, &OrgKdeKappmenuInterface::reconfigured, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdeKappmenuInterface::*)(const QString & , const QDBusObjectPath & , int )>(_a, &OrgKdeKappmenuInterface::showRequest, 3))
            return;
    }
}

const QMetaObject *OrgKdeKappmenuInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgKdeKappmenuInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23OrgKdeKappmenuInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgKdeKappmenuInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void OrgKdeKappmenuInterface::menuHidden(const QString & _t1, const QDBusObjectPath & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void OrgKdeKappmenuInterface::menuShown(const QString & _t1, const QDBusObjectPath & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void OrgKdeKappmenuInterface::reconfigured()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OrgKdeKappmenuInterface::showRequest(const QString & _t1, const QDBusObjectPath & _t2, int _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2, _t3);
}
QT_WARNING_POP
