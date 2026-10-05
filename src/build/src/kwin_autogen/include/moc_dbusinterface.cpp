/****************************************************************************
** Meta object code from reading C++ file 'dbusinterface.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/dbusinterface.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbusinterface.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin13DBusInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::DBusInterface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin13DBusInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::DBusInterface",
        "D-Bus Interface",
        "org.kde.KWin",
        "showingDesktopChanged",
        "",
        "showing",
        "currentDesktop",
        "killWindow",
        "Q_NOREPLY",
        "nextDesktop",
        "previousDesktop",
        "reconfigure",
        "setCurrentDesktop",
        "desktop",
        "supportInformation",
        "activeOutputName",
        "showDebugConsole",
        "replace",
        "queryWindowInfo",
        "QVariantMap",
        "getWindowInfo",
        "uuid",
        "showDesktop",
        "show",
        "onShowingDesktopChanged",
        "showingDesktop"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'showingDesktopChanged'
        QtMocHelpers::SignalData<void(bool)>(3, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
        // Slot 'currentDesktop'
        QtMocHelpers::SlotData<int()>(6, 4, QMC::AccessPublic, QMetaType::Int),
        // Slot 'killWindow'
        QtMocHelpers::SlotData<void()>(7, 8, QMC::AccessPublic, QMetaType::Void),
        // Slot 'nextDesktop'
        QtMocHelpers::SlotData<void()>(9, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'previousDesktop'
        QtMocHelpers::SlotData<void()>(10, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'reconfigure'
        QtMocHelpers::SlotData<void()>(11, 8, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setCurrentDesktop'
        QtMocHelpers::SlotData<bool(int)>(12, 4, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 13 },
        }}),
        // Slot 'supportInformation'
        QtMocHelpers::SlotData<QString()>(14, 4, QMC::AccessPublic, QMetaType::QString),
        // Slot 'activeOutputName'
        QtMocHelpers::SlotData<QString()>(15, 4, QMC::AccessPublic, QMetaType::QString),
        // Slot 'showDebugConsole'
        QtMocHelpers::SlotData<void()>(16, 8, QMC::AccessPublic, QMetaType::Void),
        // Slot 'replace'
        QtMocHelpers::SlotData<void()>(17, 8, QMC::AccessPublic, QMetaType::Void),
        // Slot 'queryWindowInfo'
        QtMocHelpers::SlotData<QVariantMap()>(18, 4, QMC::AccessPublic, 0x80000000 | 19),
        // Slot 'getWindowInfo'
        QtMocHelpers::SlotData<QVariantMap(const QString &)>(20, 4, QMC::AccessPublic, 0x80000000 | 19, {{
            { QMetaType::QString, 21 },
        }}),
        // Slot 'showDesktop'
        QtMocHelpers::SlotData<void(bool)>(22, 8, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 23 },
        }}),
        // Slot 'onShowingDesktopChanged'
        QtMocHelpers::SlotData<void(bool, bool)>(24, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 23 }, { QMetaType::Bool, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'showingDesktop'
        QtMocHelpers::PropertyData<bool>(25, QMetaType::Bool, QMC::DefaultPropertyFlags, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<DBusInterface, qt_meta_tag_ZN4KWin13DBusInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject KWin::DBusInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin13DBusInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin13DBusInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin13DBusInterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::DBusInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DBusInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->showingDesktopChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: { int _r = _t->currentDesktop();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->killWindow(); break;
        case 3: _t->nextDesktop(); break;
        case 4: _t->previousDesktop(); break;
        case 5: _t->reconfigure(); break;
        case 6: { bool _r = _t->setCurrentDesktop((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->supportInformation();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->activeOutputName();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->showDebugConsole(); break;
        case 10: _t->replace(); break;
        case 11: { QVariantMap _r = _t->queryWindowInfo();
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 12: { QVariantMap _r = _t->getWindowInfo((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->showDesktop((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->onShowingDesktopChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DBusInterface::*)(bool )>(_a, &DBusInterface::showingDesktopChanged, 0))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->showingDesktop(); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::DBusInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::DBusInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin13DBusInterfaceE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QDBusContext"))
        return static_cast< QDBusContext*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::DBusInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
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
void KWin::DBusInterface::showingDesktopChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN4KWin23CompositorDBusInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::CompositorDBusInterface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin23CompositorDBusInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::CompositorDBusInterface",
        "D-Bus Interface",
        "org.kde.kwin.Compositing",
        "compositingToggled",
        "",
        "active",
        "reinitialize",
        "compositingPossible",
        "compositingNotPossibleReason",
        "openGLIsBroken",
        "compositingType",
        "supportedOpenGLPlatformInterfaces",
        "platformRequiresCompositing"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'compositingToggled'
        QtMocHelpers::SignalData<void(bool)>(3, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
        // Slot 'reinitialize'
        QtMocHelpers::SlotData<void()>(6, 4, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'active'
        QtMocHelpers::PropertyData<bool>(5, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'compositingPossible'
        QtMocHelpers::PropertyData<bool>(7, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'compositingNotPossibleReason'
        QtMocHelpers::PropertyData<QString>(8, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'openGLIsBroken'
        QtMocHelpers::PropertyData<bool>(9, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'compositingType'
        QtMocHelpers::PropertyData<QString>(10, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'supportedOpenGLPlatformInterfaces'
        QtMocHelpers::PropertyData<QStringList>(11, QMetaType::QStringList, QMC::DefaultPropertyFlags),
        // property 'platformRequiresCompositing'
        QtMocHelpers::PropertyData<bool>(12, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<CompositorDBusInterface, qt_meta_tag_ZN4KWin23CompositorDBusInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject KWin::CompositorDBusInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23CompositorDBusInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23CompositorDBusInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin23CompositorDBusInterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::CompositorDBusInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CompositorDBusInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->compositingToggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->reinitialize(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CompositorDBusInterface::*)(bool )>(_a, &CompositorDBusInterface::compositingToggled, 0))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isActive(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isCompositingPossible(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->compositingNotPossibleReason(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isOpenGLBroken(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->compositingType(); break;
        case 5: *reinterpret_cast<QStringList*>(_v) = _t->supportedOpenGLPlatformInterfaces(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->platformRequiresCompositing(); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::CompositorDBusInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::CompositorDBusInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23CompositorDBusInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::CompositorDBusInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void KWin::CompositorDBusInterface::compositingToggled(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN4KWin34VirtualDesktopManagerDBusInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::VirtualDesktopManagerDBusInterface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin34VirtualDesktopManagerDBusInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::VirtualDesktopManagerDBusInterface",
        "D-Bus Interface",
        "org.kde.KWin.VirtualDesktopManager",
        "countChanged",
        "",
        "count",
        "rowsChanged",
        "rows",
        "currentChanged",
        "id",
        "navigationWrappingAroundChanged",
        "wraps",
        "desktopsChanged",
        "KWin::DBusDesktopDataVector",
        "desktopDataChanged",
        "KWin::DBusDesktopDataStruct",
        "desktopCreated",
        "desktopRemoved",
        "createDesktop",
        "position",
        "name",
        "setDesktopName",
        "removeDesktop",
        "current",
        "navigationWrappingAround",
        "desktops"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'countChanged'
        QtMocHelpers::SignalData<void(uint)>(3, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 5 },
        }}),
        // Signal 'rowsChanged'
        QtMocHelpers::SignalData<void(uint)>(6, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 7 },
        }}),
        // Signal 'currentChanged'
        QtMocHelpers::SignalData<void(const QString &)>(8, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Signal 'navigationWrappingAroundChanged'
        QtMocHelpers::SignalData<void(bool)>(10, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Signal 'desktopsChanged'
        QtMocHelpers::SignalData<void(KWin::DBusDesktopDataVector)>(12, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 4 },
        }}),
        // Signal 'desktopDataChanged'
        QtMocHelpers::SignalData<void(const QString &, KWin::DBusDesktopDataStruct)>(14, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { 0x80000000 | 15, 4 },
        }}),
        // Signal 'desktopCreated'
        QtMocHelpers::SignalData<void(const QString &, KWin::DBusDesktopDataStruct)>(16, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { 0x80000000 | 15, 4 },
        }}),
        // Signal 'desktopRemoved'
        QtMocHelpers::SignalData<void(const QString &)>(17, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Slot 'createDesktop'
        QtMocHelpers::SlotData<void(uint, const QString &)>(18, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 19 }, { QMetaType::QString, 20 },
        }}),
        // Slot 'setDesktopName'
        QtMocHelpers::SlotData<void(const QString &, const QString &)>(21, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 20 },
        }}),
        // Slot 'removeDesktop'
        QtMocHelpers::SlotData<void(const QString &)>(22, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'count'
        QtMocHelpers::PropertyData<uint>(5, QMetaType::UInt, QMC::DefaultPropertyFlags, 0),
        // property 'rows'
        QtMocHelpers::PropertyData<uint>(7, QMetaType::UInt, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'current'
        QtMocHelpers::PropertyData<QString>(23, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'navigationWrappingAround'
        QtMocHelpers::PropertyData<bool>(24, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'desktops'
        QtMocHelpers::PropertyData<KWin::DBusDesktopDataVector>(25, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 4),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<VirtualDesktopManagerDBusInterface, qt_meta_tag_ZN4KWin34VirtualDesktopManagerDBusInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject KWin::VirtualDesktopManagerDBusInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin34VirtualDesktopManagerDBusInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin34VirtualDesktopManagerDBusInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin34VirtualDesktopManagerDBusInterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::VirtualDesktopManagerDBusInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VirtualDesktopManagerDBusInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->countChanged((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 1: _t->rowsChanged((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 2: _t->currentChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->navigationWrappingAroundChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->desktopsChanged((*reinterpret_cast<std::add_pointer_t<KWin::DBusDesktopDataVector>>(_a[1]))); break;
        case 5: _t->desktopDataChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<KWin::DBusDesktopDataStruct>>(_a[2]))); break;
        case 6: _t->desktopCreated((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<KWin::DBusDesktopDataStruct>>(_a[2]))); break;
        case 7: _t->desktopRemoved((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->createDesktop((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 9: _t->setDesktopName((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 10: _t->removeDesktop((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::DBusDesktopDataVector >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::DBusDesktopDataStruct >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::DBusDesktopDataStruct >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopManagerDBusInterface::*)(uint )>(_a, &VirtualDesktopManagerDBusInterface::countChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopManagerDBusInterface::*)(uint )>(_a, &VirtualDesktopManagerDBusInterface::rowsChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopManagerDBusInterface::*)(const QString & )>(_a, &VirtualDesktopManagerDBusInterface::currentChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopManagerDBusInterface::*)(bool )>(_a, &VirtualDesktopManagerDBusInterface::navigationWrappingAroundChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopManagerDBusInterface::*)(KWin::DBusDesktopDataVector )>(_a, &VirtualDesktopManagerDBusInterface::desktopsChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopManagerDBusInterface::*)(const QString & , KWin::DBusDesktopDataStruct )>(_a, &VirtualDesktopManagerDBusInterface::desktopDataChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopManagerDBusInterface::*)(const QString & , KWin::DBusDesktopDataStruct )>(_a, &VirtualDesktopManagerDBusInterface::desktopCreated, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopManagerDBusInterface::*)(const QString & )>(_a, &VirtualDesktopManagerDBusInterface::desktopRemoved, 7))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KWin::DBusDesktopDataVector >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<uint*>(_v) = _t->count(); break;
        case 1: *reinterpret_cast<uint*>(_v) = _t->rows(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->current(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isNavigationWrappingAround(); break;
        case 4: *reinterpret_cast<KWin::DBusDesktopDataVector*>(_v) = _t->desktops(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setRows(*reinterpret_cast<uint*>(_v)); break;
        case 2: _t->setCurrent(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setNavigationWrappingAround(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::VirtualDesktopManagerDBusInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::VirtualDesktopManagerDBusInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin34VirtualDesktopManagerDBusInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::VirtualDesktopManagerDBusInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
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
void KWin::VirtualDesktopManagerDBusInterface::countChanged(uint _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void KWin::VirtualDesktopManagerDBusInterface::rowsChanged(uint _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void KWin::VirtualDesktopManagerDBusInterface::currentChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void KWin::VirtualDesktopManagerDBusInterface::navigationWrappingAroundChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void KWin::VirtualDesktopManagerDBusInterface::desktopsChanged(KWin::DBusDesktopDataVector _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void KWin::VirtualDesktopManagerDBusInterface::desktopDataChanged(const QString & _t1, KWin::DBusDesktopDataStruct _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2);
}

// SIGNAL 6
void KWin::VirtualDesktopManagerDBusInterface::desktopCreated(const QString & _t1, KWin::DBusDesktopDataStruct _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1, _t2);
}

// SIGNAL 7
void KWin::VirtualDesktopManagerDBusInterface::desktopRemoved(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN4KWin26PluginManagerDBusInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::PluginManagerDBusInterface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin26PluginManagerDBusInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::PluginManagerDBusInterface",
        "D-Bus Interface",
        "org.kde.KWin.Plugins",
        "LoadPlugin",
        "",
        "name",
        "UnloadPlugin",
        "LoadedPlugins",
        "AvailablePlugins"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'LoadPlugin'
        QtMocHelpers::SlotData<bool(const QString &)>(3, 4, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 5 },
        }}),
        // Slot 'UnloadPlugin'
        QtMocHelpers::SlotData<void(const QString &)>(6, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'LoadedPlugins'
        QtMocHelpers::PropertyData<QStringList>(7, QMetaType::QStringList, QMC::DefaultPropertyFlags),
        // property 'AvailablePlugins'
        QtMocHelpers::PropertyData<QStringList>(8, QMetaType::QStringList, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<PluginManagerDBusInterface, qt_meta_tag_ZN4KWin26PluginManagerDBusInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject KWin::PluginManagerDBusInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin26PluginManagerDBusInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin26PluginManagerDBusInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin26PluginManagerDBusInterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::PluginManagerDBusInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PluginManagerDBusInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = _t->LoadPlugin((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->UnloadPlugin((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QStringList*>(_v) = _t->loadedPlugins(); break;
        case 1: *reinterpret_cast<QStringList*>(_v) = _t->availablePlugins(); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::PluginManagerDBusInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::PluginManagerDBusInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin26PluginManagerDBusInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::PluginManagerDBusInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
