/****************************************************************************
** Meta object code from reading C++ file 'virtualdesktopmanageradaptor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "virtualdesktopmanageradaptor.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'virtualdesktopmanageradaptor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN28VirtualDesktopManagerAdaptorE_t {};
} // unnamed namespace

template <> constexpr inline auto VirtualDesktopManagerAdaptor::qt_create_metaobjectdata<qt_meta_tag_ZN28VirtualDesktopManagerAdaptorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VirtualDesktopManagerAdaptor",
        "D-Bus Interface",
        "org.kde.KWin.VirtualDesktopManager",
        "D-Bus Introspection",
        "  <interface name=\"org.kde.KWin.VirtualDesktopManager\">\n    <pr"
        "operty access=\"read\" type=\"u\" name=\"count\"/>\n    <property "
        "access=\"readwrite\" type=\"s\" name=\"current\"/>\n    <property "
        "access=\"readwrite\" type=\"u\" name=\"rows\"/>\n    <property acc"
        "ess=\"readwrite\" type=\"b\" name=\"navigationWrappingAround\"/>\n"
        "    <property access=\"read\" type=\"a(iss)\" name=\"desktops\">\n"
        "      <annotation value=\"KWin::DBusDesktopDataVector\" name=\"org"
        ".qtproject.QtDBus.QtTypeName\"/>\n    </property>\n    <signal nam"
        "e=\"countChanged\">\n      <arg direction=\"out\" type=\"u\" name="
        "\"count\"/>\n    </signal>\n    <signal name=\"rowsChanged\">\n   "
        "   <arg direction=\"out\" type=\"u\" name=\"rows\"/>\n    </signal"
        ">\n    <signal name=\"currentChanged\">\n      <arg direction=\"ou"
        "t\" type=\"s\" name=\"id\"/>\n    </signal>\n    <signal name=\"na"
        "vigationWrappingAroundChanged\">\n      <arg direction=\"out\" typ"
        "e=\"b\" name=\"navigationWrappingAround\"/>\n    </signal>\n    <s"
        "ignal name=\"desktopDataChanged\">\n      <arg direction=\"out\" t"
        "ype=\"s\" name=\"id\"/>\n      <annotation value=\"KWin::DBusDeskt"
        "opDataStruct\" name=\"org.qtproject.QtDBus.QtTypeName.Out1\"/>\n  "
        "    <arg direction=\"out\" type=\"(iss)\" name=\"desktopData\"/>\n"
        "    </signal>\n    <signal name=\"desktopCreated\">\n      <arg di"
        "rection=\"out\" type=\"s\" name=\"id\"/>\n      <annotation value="
        "\"KWin::DBusDesktopDataStruct\" name=\"org.qtproject.QtDBus.QtType"
        "Name.Out1\"/>\n      <arg direction=\"out\" type=\"(iss)\" name=\""
        "desktopData\"/>\n    </signal>\n    <signal name=\"desktopRemoved\""
        ">\n      <arg direction=\"out\" type=\"s\" name=\"id\"/>\n    </si"
        "gnal>\n    <method name=\"createDesktop\">\n      <arg direction=\""
        "in\" type=\"u\" name=\"position\"/>\n      <arg direction=\"in\" t"
        "ype=\"s\" name=\"name\"/>\n    </method>\n    <method name=\"setDe"
        "sktopName\">\n      <arg direction=\"in\" type=\"s\" name=\"id\"/>"
        "\n      <arg direction=\"in\" type=\"s\" name=\"name\"/>\n    </me"
        "thod>\n    <method name=\"removeDesktop\">\n      <arg direction=\""
        "in\" type=\"s\" name=\"id\"/>\n    </method>\n  </interface>\n",
        "countChanged",
        "",
        "count",
        "currentChanged",
        "id",
        "desktopCreated",
        "KWin::DBusDesktopDataStruct",
        "desktopData",
        "desktopDataChanged",
        "desktopRemoved",
        "navigationWrappingAroundChanged",
        "navigationWrappingAround",
        "rowsChanged",
        "rows",
        "createDesktop",
        "position",
        "name",
        "removeDesktop",
        "setDesktopName",
        "current",
        "desktops",
        "KWin::DBusDesktopDataVector"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'countChanged'
        QtMocHelpers::SignalData<void(uint)>(5, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 7 },
        }}),
        // Signal 'currentChanged'
        QtMocHelpers::SignalData<void(const QString &)>(8, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Signal 'desktopCreated'
        QtMocHelpers::SignalData<void(const QString &, KWin::DBusDesktopDataStruct)>(10, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { 0x80000000 | 11, 12 },
        }}),
        // Signal 'desktopDataChanged'
        QtMocHelpers::SignalData<void(const QString &, KWin::DBusDesktopDataStruct)>(13, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { 0x80000000 | 11, 12 },
        }}),
        // Signal 'desktopRemoved'
        QtMocHelpers::SignalData<void(const QString &)>(14, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Signal 'navigationWrappingAroundChanged'
        QtMocHelpers::SignalData<void(bool)>(15, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 16 },
        }}),
        // Signal 'rowsChanged'
        QtMocHelpers::SignalData<void(uint)>(17, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 18 },
        }}),
        // Slot 'createDesktop'
        QtMocHelpers::SlotData<void(uint, const QString &)>(19, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 20 }, { QMetaType::QString, 21 },
        }}),
        // Slot 'removeDesktop'
        QtMocHelpers::SlotData<void(const QString &)>(22, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Slot 'setDesktopName'
        QtMocHelpers::SlotData<void(const QString &, const QString &)>(23, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 21 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'count'
        QtMocHelpers::PropertyData<uint>(7, QMetaType::UInt, QMC::DefaultPropertyFlags),
        // property 'current'
        QtMocHelpers::PropertyData<QString>(24, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'desktops'
        QtMocHelpers::PropertyData<KWin::DBusDesktopDataVector>(25, 0x80000000 | 26, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'navigationWrappingAround'
        QtMocHelpers::PropertyData<bool>(16, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'rows'
        QtMocHelpers::PropertyData<uint>(18, QMetaType::UInt, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<VirtualDesktopManagerAdaptor, qt_meta_tag_ZN28VirtualDesktopManagerAdaptorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject VirtualDesktopManagerAdaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN28VirtualDesktopManagerAdaptorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN28VirtualDesktopManagerAdaptorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN28VirtualDesktopManagerAdaptorE_t>.metaTypes,
    nullptr
} };

void VirtualDesktopManagerAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VirtualDesktopManagerAdaptor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->countChanged((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 1: _t->currentChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->desktopCreated((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<KWin::DBusDesktopDataStruct>>(_a[2]))); break;
        case 3: _t->desktopDataChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<KWin::DBusDesktopDataStruct>>(_a[2]))); break;
        case 4: _t->desktopRemoved((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->navigationWrappingAroundChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->rowsChanged((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 7: _t->createDesktop((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 8: _t->removeDesktop((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->setDesktopName((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::DBusDesktopDataStruct >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::DBusDesktopDataStruct >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopManagerAdaptor::*)(uint )>(_a, &VirtualDesktopManagerAdaptor::countChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopManagerAdaptor::*)(const QString & )>(_a, &VirtualDesktopManagerAdaptor::currentChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopManagerAdaptor::*)(const QString & , KWin::DBusDesktopDataStruct )>(_a, &VirtualDesktopManagerAdaptor::desktopCreated, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopManagerAdaptor::*)(const QString & , KWin::DBusDesktopDataStruct )>(_a, &VirtualDesktopManagerAdaptor::desktopDataChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopManagerAdaptor::*)(const QString & )>(_a, &VirtualDesktopManagerAdaptor::desktopRemoved, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopManagerAdaptor::*)(bool )>(_a, &VirtualDesktopManagerAdaptor::navigationWrappingAroundChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopManagerAdaptor::*)(uint )>(_a, &VirtualDesktopManagerAdaptor::rowsChanged, 6))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KWin::DBusDesktopDataVector >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<uint*>(_v) = _t->count(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->current(); break;
        case 2: *reinterpret_cast<KWin::DBusDesktopDataVector*>(_v) = _t->desktops(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->navigationWrappingAround(); break;
        case 4: *reinterpret_cast<uint*>(_v) = _t->rows(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setCurrent(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setNavigationWrappingAround(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setRows(*reinterpret_cast<uint*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *VirtualDesktopManagerAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VirtualDesktopManagerAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN28VirtualDesktopManagerAdaptorE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int VirtualDesktopManagerAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void VirtualDesktopManagerAdaptor::countChanged(uint _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void VirtualDesktopManagerAdaptor::currentChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void VirtualDesktopManagerAdaptor::desktopCreated(const QString & _t1, KWin::DBusDesktopDataStruct _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void VirtualDesktopManagerAdaptor::desktopDataChanged(const QString & _t1, KWin::DBusDesktopDataStruct _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}

// SIGNAL 4
void VirtualDesktopManagerAdaptor::desktopRemoved(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void VirtualDesktopManagerAdaptor::navigationWrappingAroundChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void VirtualDesktopManagerAdaptor::rowsChanged(uint _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}
QT_WARNING_POP
