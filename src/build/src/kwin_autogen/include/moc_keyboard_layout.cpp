/****************************************************************************
** Meta object code from reading C++ file 'keyboard_layout.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/keyboard_layout.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keyboard_layout.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin14KeyboardLayoutE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::KeyboardLayout::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin14KeyboardLayoutE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::KeyboardLayout",
        "layoutChanged",
        "",
        "index",
        "layoutsReconfigured",
        "handleXkbConfigChanged",
        "KConfigGroup",
        "group"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'layoutChanged'
        QtMocHelpers::SignalData<void(uint)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 3 },
        }}),
        // Signal 'layoutsReconfigured'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'handleXkbConfigChanged'
        QtMocHelpers::SlotData<void(const KConfigGroup &)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<KeyboardLayout, qt_meta_tag_ZN4KWin14KeyboardLayoutE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::KeyboardLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin14KeyboardLayoutE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin14KeyboardLayoutE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin14KeyboardLayoutE_t>.metaTypes,
    nullptr
} };

void KWin::KeyboardLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<KeyboardLayout *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->layoutChanged((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 1: _t->layoutsReconfigured(); break;
        case 2: _t->handleXkbConfigChanged((*reinterpret_cast<std::add_pointer_t<KConfigGroup>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (KeyboardLayout::*)(uint )>(_a, &KeyboardLayout::layoutChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (KeyboardLayout::*)()>(_a, &KeyboardLayout::layoutsReconfigured, 1))
            return;
    }
}

const QMetaObject *KWin::KeyboardLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::KeyboardLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin14KeyboardLayoutE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "InputEventSpy"))
        return static_cast< InputEventSpy*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::KeyboardLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void KWin::KeyboardLayout::layoutChanged(uint _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void KWin::KeyboardLayout::layoutsReconfigured()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
namespace {
struct qt_meta_tag_ZN4KWin27KeyboardLayoutDBusInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::KeyboardLayoutDBusInterface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin27KeyboardLayoutDBusInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::KeyboardLayoutDBusInterface",
        "D-Bus Interface",
        "org.kde.KeyboardLayouts",
        "layoutChanged",
        "",
        "index",
        "layoutListChanged",
        "switchToNextLayout",
        "switchToPreviousLayout",
        "setLayout",
        "getLayout",
        "getLayoutsList",
        "QList<LayoutNames>"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'layoutChanged'
        QtMocHelpers::SignalData<void(uint)>(3, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 5 },
        }}),
        // Signal 'layoutListChanged'
        QtMocHelpers::SignalData<void()>(6, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'switchToNextLayout'
        QtMocHelpers::SlotData<void()>(7, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'switchToPreviousLayout'
        QtMocHelpers::SlotData<void()>(8, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setLayout'
        QtMocHelpers::SlotData<bool(uint)>(9, 4, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::UInt, 5 },
        }}),
        // Slot 'getLayout'
        QtMocHelpers::SlotData<uint() const>(10, 4, QMC::AccessPublic, QMetaType::UInt),
        // Slot 'getLayoutsList'
        QtMocHelpers::SlotData<QList<LayoutNames>() const>(11, 4, QMC::AccessPublic, 0x80000000 | 12),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<KeyboardLayoutDBusInterface, qt_meta_tag_ZN4KWin27KeyboardLayoutDBusInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject KWin::KeyboardLayoutDBusInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin27KeyboardLayoutDBusInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin27KeyboardLayoutDBusInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin27KeyboardLayoutDBusInterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::KeyboardLayoutDBusInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<KeyboardLayoutDBusInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->layoutChanged((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 1: _t->layoutListChanged(); break;
        case 2: _t->switchToNextLayout(); break;
        case 3: _t->switchToPreviousLayout(); break;
        case 4: { bool _r = _t->setLayout((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { uint _r = _t->getLayout();
            if (_a[0]) *reinterpret_cast<uint*>(_a[0]) = std::move(_r); }  break;
        case 6: { QList<LayoutNames> _r = _t->getLayoutsList();
            if (_a[0]) *reinterpret_cast<QList<LayoutNames>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (KeyboardLayoutDBusInterface::*)(uint )>(_a, &KeyboardLayoutDBusInterface::layoutChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (KeyboardLayoutDBusInterface::*)()>(_a, &KeyboardLayoutDBusInterface::layoutListChanged, 1))
            return;
    }
}

const QMetaObject *KWin::KeyboardLayoutDBusInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::KeyboardLayoutDBusInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin27KeyboardLayoutDBusInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::KeyboardLayoutDBusInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void KWin::KeyboardLayoutDBusInterface::layoutChanged(uint _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void KWin::KeyboardLayoutDBusInterface::layoutListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
