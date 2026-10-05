/****************************************************************************
** Meta object code from reading C++ file 'virtualdesktops.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/virtualdesktops.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'virtualdesktops.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin14VirtualDesktopE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::VirtualDesktop::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin14VirtualDesktopE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::VirtualDesktop",
        "nameChanged",
        "",
        "x11DesktopNumberChanged",
        "aboutToBeDestroyed",
        "id",
        "x11DesktopNumber",
        "name"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'nameChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'x11DesktopNumberChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'aboutToBeDestroyed'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'id'
        QtMocHelpers::PropertyData<QString>(5, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'x11DesktopNumber'
        QtMocHelpers::PropertyData<uint>(6, QMetaType::UInt, QMC::DefaultPropertyFlags, 1),
        // property 'name'
        QtMocHelpers::PropertyData<QString>(7, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VirtualDesktop, qt_meta_tag_ZN4KWin14VirtualDesktopE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::VirtualDesktop::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin14VirtualDesktopE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin14VirtualDesktopE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin14VirtualDesktopE_t>.metaTypes,
    nullptr
} };

void KWin::VirtualDesktop::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VirtualDesktop *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->x11DesktopNumberChanged(); break;
        case 2: _t->aboutToBeDestroyed(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktop::*)()>(_a, &VirtualDesktop::nameChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktop::*)()>(_a, &VirtualDesktop::x11DesktopNumberChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktop::*)()>(_a, &VirtualDesktop::aboutToBeDestroyed, 2))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast<uint*>(_v) = _t->x11DesktopNumber(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->name(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setName(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::VirtualDesktop::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::VirtualDesktop::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin14VirtualDesktopE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::VirtualDesktop::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void KWin::VirtualDesktop::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::VirtualDesktop::x11DesktopNumberChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::VirtualDesktop::aboutToBeDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
namespace {
struct qt_meta_tag_ZN4KWin21VirtualDesktopManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::VirtualDesktopManager::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin21VirtualDesktopManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::VirtualDesktopManager",
        "countChanged",
        "",
        "previousCount",
        "newCount",
        "rowsChanged",
        "rows",
        "desktopAdded",
        "KWin::VirtualDesktop*",
        "desktop",
        "desktopRemoved",
        "desktopMoved",
        "position",
        "currentChanged",
        "previousDesktop",
        "newDesktop",
        "KWin::LogicalOutput*",
        "output",
        "currentChanging",
        "currentDesktop",
        "QPointF",
        "offset",
        "currentChangingCancelled",
        "layoutChanged",
        "columns",
        "navigationWrappingAroundChanged",
        "perOutputVirtualDesktopsChanged",
        "setCount",
        "count",
        "setCurrent",
        "current",
        "LogicalOutput*",
        "VirtualDesktop*",
        "setRows",
        "updateLayout",
        "setNavigationWrappingAround",
        "enabled",
        "setPerOutputVirtualDesktops",
        "load",
        "save",
        "slotSwitchTo",
        "slotNext",
        "slotPrevious",
        "slotRight",
        "slotLeft",
        "slotUp",
        "slotDown",
        "gestureReleasedY",
        "gestureReleasedX",
        "navigationWrappingAround",
        "perOutputVirtualDesktops"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'countChanged'
        QtMocHelpers::SignalData<void(uint, uint)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 3 }, { QMetaType::UInt, 4 },
        }}),
        // Signal 'rowsChanged'
        QtMocHelpers::SignalData<void(uint)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 6 },
        }}),
        // Signal 'desktopAdded'
        QtMocHelpers::SignalData<void(KWin::VirtualDesktop *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Signal 'desktopRemoved'
        QtMocHelpers::SignalData<void(KWin::VirtualDesktop *)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Signal 'desktopMoved'
        QtMocHelpers::SignalData<void(KWin::VirtualDesktop *, int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { QMetaType::Int, 12 },
        }}),
        // Signal 'currentChanged'
        QtMocHelpers::SignalData<void(KWin::VirtualDesktop *, KWin::VirtualDesktop *, KWin::LogicalOutput *)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 14 }, { 0x80000000 | 8, 15 }, { 0x80000000 | 16, 17 },
        }}),
        // Signal 'currentChanging'
        QtMocHelpers::SignalData<void(KWin::VirtualDesktop *, QPointF, KWin::LogicalOutput *)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 19 }, { 0x80000000 | 20, 21 }, { 0x80000000 | 16, 17 },
        }}),
        // Signal 'currentChangingCancelled'
        QtMocHelpers::SignalData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'layoutChanged'
        QtMocHelpers::SignalData<void(int, int)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 24 }, { QMetaType::Int, 6 },
        }}),
        // Signal 'navigationWrappingAroundChanged'
        QtMocHelpers::SignalData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'perOutputVirtualDesktopsChanged'
        QtMocHelpers::SignalData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setCount'
        QtMocHelpers::SlotData<void(uint)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 28 },
        }}),
        // Slot 'setCurrent'
        QtMocHelpers::SlotData<bool(uint, LogicalOutput *)>(29, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::UInt, 30 }, { 0x80000000 | 31, 17 },
        }}),
        // Slot 'setCurrent'
        QtMocHelpers::SlotData<bool(uint)>(29, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::UInt, 30 },
        }}),
        // Slot 'setCurrent'
        QtMocHelpers::SlotData<bool(VirtualDesktop *, LogicalOutput *)>(29, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 32, 30 }, { 0x80000000 | 31, 17 },
        }}),
        // Slot 'setCurrent'
        QtMocHelpers::SlotData<bool(VirtualDesktop *)>(29, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { 0x80000000 | 32, 30 },
        }}),
        // Slot 'setRows'
        QtMocHelpers::SlotData<void(uint)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 6 },
        }}),
        // Slot 'updateLayout'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setNavigationWrappingAround'
        QtMocHelpers::SlotData<void(bool)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 36 },
        }}),
        // Slot 'setPerOutputVirtualDesktops'
        QtMocHelpers::SlotData<void(bool)>(37, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 36 },
        }}),
        // Slot 'load'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'save'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotSwitchTo'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'slotNext'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'slotPrevious'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'slotRight'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'slotLeft'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'slotUp'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'slotDown'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'gestureReleasedY'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'gestureReleasedX'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'count'
        QtMocHelpers::PropertyData<uint>(28, QMetaType::UInt, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'current'
        QtMocHelpers::PropertyData<uint>(30, QMetaType::UInt, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'navigationWrappingAround'
        QtMocHelpers::PropertyData<bool>(49, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
        // property 'perOutputVirtualDesktops'
        QtMocHelpers::PropertyData<bool>(50, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VirtualDesktopManager, qt_meta_tag_ZN4KWin21VirtualDesktopManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::VirtualDesktopManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21VirtualDesktopManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21VirtualDesktopManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin21VirtualDesktopManagerE_t>.metaTypes,
    nullptr
} };

void KWin::VirtualDesktopManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VirtualDesktopManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->countChanged((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[2]))); break;
        case 1: _t->rowsChanged((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 2: _t->desktopAdded((*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[1]))); break;
        case 3: _t->desktopRemoved((*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[1]))); break;
        case 4: _t->desktopMoved((*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->currentChanged((*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<KWin::LogicalOutput*>>(_a[3]))); break;
        case 6: _t->currentChanging((*reinterpret_cast<std::add_pointer_t<KWin::VirtualDesktop*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<KWin::LogicalOutput*>>(_a[3]))); break;
        case 7: _t->currentChangingCancelled(); break;
        case 8: _t->layoutChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 9: _t->navigationWrappingAroundChanged(); break;
        case 10: _t->perOutputVirtualDesktopsChanged(); break;
        case 11: _t->setCount((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 12: { bool _r = _t->setCurrent((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<LogicalOutput*>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->setCurrent((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->setCurrent((*reinterpret_cast<std::add_pointer_t<VirtualDesktop*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<LogicalOutput*>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { bool _r = _t->setCurrent((*reinterpret_cast<std::add_pointer_t<VirtualDesktop*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->setRows((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 17: _t->updateLayout(); break;
        case 18: _t->setNavigationWrappingAround((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->setPerOutputVirtualDesktops((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->load(); break;
        case 21: _t->save(); break;
        case 22: _t->slotSwitchTo(); break;
        case 23: _t->slotNext(); break;
        case 24: _t->slotPrevious(); break;
        case 25: _t->slotRight(); break;
        case 26: _t->slotLeft(); break;
        case 27: _t->slotUp(); break;
        case 28: _t->slotDown(); break;
        case 29: _t->gestureReleasedY(); break;
        case 30: _t->gestureReleasedX(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::VirtualDesktop* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::VirtualDesktop* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::VirtualDesktop* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::VirtualDesktop* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::VirtualDesktop* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< VirtualDesktop* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< VirtualDesktop* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopManager::*)(uint , uint )>(_a, &VirtualDesktopManager::countChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopManager::*)(uint )>(_a, &VirtualDesktopManager::rowsChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopManager::*)(KWin::VirtualDesktop * )>(_a, &VirtualDesktopManager::desktopAdded, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopManager::*)(KWin::VirtualDesktop * )>(_a, &VirtualDesktopManager::desktopRemoved, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopManager::*)(KWin::VirtualDesktop * , int )>(_a, &VirtualDesktopManager::desktopMoved, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopManager::*)(KWin::VirtualDesktop * , KWin::VirtualDesktop * , KWin::LogicalOutput * )>(_a, &VirtualDesktopManager::currentChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopManager::*)(KWin::VirtualDesktop * , QPointF , KWin::LogicalOutput * )>(_a, &VirtualDesktopManager::currentChanging, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopManager::*)()>(_a, &VirtualDesktopManager::currentChangingCancelled, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopManager::*)(int , int )>(_a, &VirtualDesktopManager::layoutChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopManager::*)()>(_a, &VirtualDesktopManager::navigationWrappingAroundChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopManager::*)()>(_a, &VirtualDesktopManager::perOutputVirtualDesktopsChanged, 10))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<uint*>(_v) = _t->count(); break;
        case 1: *reinterpret_cast<uint*>(_v) = _t->current(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isNavigationWrappingAround(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isPerOutputVirtualDesktops(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCount(*reinterpret_cast<uint*>(_v)); break;
        case 1: _t->setCurrent(*reinterpret_cast<uint*>(_v)); break;
        case 2: _t->setNavigationWrappingAround(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setPerOutputVirtualDesktops(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::VirtualDesktopManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::VirtualDesktopManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21VirtualDesktopManagerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::VirtualDesktopManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void KWin::VirtualDesktopManager::countChanged(uint _t1, uint _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void KWin::VirtualDesktopManager::rowsChanged(uint _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void KWin::VirtualDesktopManager::desktopAdded(KWin::VirtualDesktop * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void KWin::VirtualDesktopManager::desktopRemoved(KWin::VirtualDesktop * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void KWin::VirtualDesktopManager::desktopMoved(KWin::VirtualDesktop * _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}

// SIGNAL 5
void KWin::VirtualDesktopManager::currentChanged(KWin::VirtualDesktop * _t1, KWin::VirtualDesktop * _t2, KWin::LogicalOutput * _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2, _t3);
}

// SIGNAL 6
void KWin::VirtualDesktopManager::currentChanging(KWin::VirtualDesktop * _t1, QPointF _t2, KWin::LogicalOutput * _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1, _t2, _t3);
}

// SIGNAL 7
void KWin::VirtualDesktopManager::currentChangingCancelled()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void KWin::VirtualDesktopManager::layoutChanged(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1, _t2);
}

// SIGNAL 9
void KWin::VirtualDesktopManager::navigationWrappingAroundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void KWin::VirtualDesktopManager::perOutputVirtualDesktopsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
