/****************************************************************************
** Meta object code from reading C++ file 'virtualkeyboard_interface.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "virtualkeyboard_interface.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'virtualkeyboard_interface.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN34OrgKdeKwinVirtualKeyboardInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto OrgKdeKwinVirtualKeyboardInterface::qt_create_metaobjectdata<qt_meta_tag_ZN34OrgKdeKwinVirtualKeyboardInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OrgKdeKwinVirtualKeyboardInterface",
        "activeChanged",
        "",
        "activeClientSupportsTextInputChanged",
        "availableChanged",
        "modeChanged",
        "visibleChanged",
        "forceActivate",
        "QDBusPendingReply<>",
        "willShowOnActive",
        "QDBusPendingReply<bool>",
        "active",
        "activeClientSupportsTextInput",
        "available",
        "mode",
        "visible"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'activeChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activeClientSupportsTextInputChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'availableChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'modeChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'visibleChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'forceActivate'
        QtMocHelpers::SlotData<QDBusPendingReply<>()>(7, 2, QMC::AccessPublic, 0x80000000 | 8),
        // Slot 'willShowOnActive'
        QtMocHelpers::SlotData<QDBusPendingReply<bool>()>(9, 2, QMC::AccessPublic, 0x80000000 | 10),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'active'
        QtMocHelpers::PropertyData<bool>(11, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'activeClientSupportsTextInput'
        QtMocHelpers::PropertyData<bool>(12, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'available'
        QtMocHelpers::PropertyData<bool>(13, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'mode'
        QtMocHelpers::PropertyData<int>(14, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'visible'
        QtMocHelpers::PropertyData<bool>(15, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OrgKdeKwinVirtualKeyboardInterface, qt_meta_tag_ZN34OrgKdeKwinVirtualKeyboardInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OrgKdeKwinVirtualKeyboardInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN34OrgKdeKwinVirtualKeyboardInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN34OrgKdeKwinVirtualKeyboardInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN34OrgKdeKwinVirtualKeyboardInterfaceE_t>.metaTypes,
    nullptr
} };

void OrgKdeKwinVirtualKeyboardInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OrgKdeKwinVirtualKeyboardInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->activeChanged(); break;
        case 1: _t->activeClientSupportsTextInputChanged(); break;
        case 2: _t->availableChanged(); break;
        case 3: _t->modeChanged(); break;
        case 4: _t->visibleChanged(); break;
        case 5: { QDBusPendingReply<> _r = _t->forceActivate();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 6: { QDBusPendingReply<bool> _r = _t->willShowOnActive();
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<bool>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OrgKdeKwinVirtualKeyboardInterface::*)()>(_a, &OrgKdeKwinVirtualKeyboardInterface::activeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdeKwinVirtualKeyboardInterface::*)()>(_a, &OrgKdeKwinVirtualKeyboardInterface::activeClientSupportsTextInputChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdeKwinVirtualKeyboardInterface::*)()>(_a, &OrgKdeKwinVirtualKeyboardInterface::availableChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdeKwinVirtualKeyboardInterface::*)()>(_a, &OrgKdeKwinVirtualKeyboardInterface::modeChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (OrgKdeKwinVirtualKeyboardInterface::*)()>(_a, &OrgKdeKwinVirtualKeyboardInterface::visibleChanged, 4))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->active(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->activeClientSupportsTextInput(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->available(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->mode(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->visible(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setActive(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setMode(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *OrgKdeKwinVirtualKeyboardInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgKdeKwinVirtualKeyboardInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN34OrgKdeKwinVirtualKeyboardInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgKdeKwinVirtualKeyboardInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void OrgKdeKwinVirtualKeyboardInterface::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OrgKdeKwinVirtualKeyboardInterface::activeClientSupportsTextInputChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OrgKdeKwinVirtualKeyboardInterface::availableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OrgKdeKwinVirtualKeyboardInterface::modeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OrgKdeKwinVirtualKeyboardInterface::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
