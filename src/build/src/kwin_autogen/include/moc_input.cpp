/****************************************************************************
** Meta object code from reading C++ file 'input.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/input.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'input.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin16InputRedirectionE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::InputRedirection::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin16InputRedirectionE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::InputRedirection",
        "deviceAdded",
        "",
        "InputDevice*",
        "device",
        "deviceRemoved",
        "globalPointerChanged",
        "QPointF",
        "pos",
        "pointerButtonStateChanged",
        "uint32_t",
        "button",
        "PointerButtonState",
        "state",
        "pointerAxisChanged",
        "PointerAxis",
        "axis",
        "delta",
        "keyboardModifiersChanged",
        "Qt::KeyboardModifiers",
        "newMods",
        "oldMods",
        "keyStateChanged",
        "keyCode",
        "KeyboardKeyState",
        "hasKeyboardChanged",
        "set",
        "hasAlphaNumericKeyboardChanged",
        "hasPointerChanged",
        "hasTouchChanged",
        "hasTabletModeSwitchChanged",
        "handleInputConfigChanged",
        "KConfigGroup",
        "group",
        "updateScreens"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'deviceAdded'
        QtMocHelpers::SignalData<void(InputDevice *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'deviceRemoved'
        QtMocHelpers::SignalData<void(InputDevice *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'globalPointerChanged'
        QtMocHelpers::SignalData<void(const QPointF &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Signal 'pointerButtonStateChanged'
        QtMocHelpers::SignalData<void(uint32_t, PointerButtonState)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 }, { 0x80000000 | 12, 13 },
        }}),
        // Signal 'pointerAxisChanged'
        QtMocHelpers::SignalData<void(PointerAxis, qreal)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 16 }, { QMetaType::QReal, 17 },
        }}),
        // Signal 'keyboardModifiersChanged'
        QtMocHelpers::SignalData<void(Qt::KeyboardModifiers, Qt::KeyboardModifiers)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 20 }, { 0x80000000 | 19, 21 },
        }}),
        // Signal 'keyStateChanged'
        QtMocHelpers::SignalData<void(quint32, KeyboardKeyState)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 23 }, { 0x80000000 | 24, 13 },
        }}),
        // Signal 'hasKeyboardChanged'
        QtMocHelpers::SignalData<void(bool)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 26 },
        }}),
        // Signal 'hasAlphaNumericKeyboardChanged'
        QtMocHelpers::SignalData<void(bool)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 26 },
        }}),
        // Signal 'hasPointerChanged'
        QtMocHelpers::SignalData<void(bool)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 26 },
        }}),
        // Signal 'hasTouchChanged'
        QtMocHelpers::SignalData<void(bool)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 26 },
        }}),
        // Signal 'hasTabletModeSwitchChanged'
        QtMocHelpers::SignalData<void(bool)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 26 },
        }}),
        // Slot 'handleInputConfigChanged'
        QtMocHelpers::SlotData<void(const KConfigGroup &)>(31, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 32, 33 },
        }}),
        // Slot 'updateScreens'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<InputRedirection, qt_meta_tag_ZN4KWin16InputRedirectionE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::InputRedirection::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin16InputRedirectionE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin16InputRedirectionE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin16InputRedirectionE_t>.metaTypes,
    nullptr
} };

void KWin::InputRedirection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InputRedirection *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->deviceAdded((*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[1]))); break;
        case 1: _t->deviceRemoved((*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[1]))); break;
        case 2: _t->globalPointerChanged((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 3: _t->pointerButtonStateChanged((*reinterpret_cast<std::add_pointer_t<uint32_t>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<PointerButtonState>>(_a[2]))); break;
        case 4: _t->pointerAxisChanged((*reinterpret_cast<std::add_pointer_t<PointerAxis>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2]))); break;
        case 5: _t->keyboardModifiersChanged((*reinterpret_cast<std::add_pointer_t<Qt::KeyboardModifiers>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Qt::KeyboardModifiers>>(_a[2]))); break;
        case 6: _t->keyStateChanged((*reinterpret_cast<std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<KeyboardKeyState>>(_a[2]))); break;
        case 7: _t->hasKeyboardChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->hasAlphaNumericKeyboardChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->hasPointerChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->hasTouchChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->hasTabletModeSwitchChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->handleInputConfigChanged((*reinterpret_cast<std::add_pointer_t<KConfigGroup>>(_a[1]))); break;
        case 13: _t->updateScreens(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (InputRedirection::*)(InputDevice * )>(_a, &InputRedirection::deviceAdded, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputRedirection::*)(InputDevice * )>(_a, &InputRedirection::deviceRemoved, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputRedirection::*)(const QPointF & )>(_a, &InputRedirection::globalPointerChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputRedirection::*)(uint32_t , PointerButtonState )>(_a, &InputRedirection::pointerButtonStateChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputRedirection::*)(PointerAxis , qreal )>(_a, &InputRedirection::pointerAxisChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputRedirection::*)(Qt::KeyboardModifiers , Qt::KeyboardModifiers )>(_a, &InputRedirection::keyboardModifiersChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputRedirection::*)(quint32 , KeyboardKeyState )>(_a, &InputRedirection::keyStateChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputRedirection::*)(bool )>(_a, &InputRedirection::hasKeyboardChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputRedirection::*)(bool )>(_a, &InputRedirection::hasAlphaNumericKeyboardChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputRedirection::*)(bool )>(_a, &InputRedirection::hasPointerChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputRedirection::*)(bool )>(_a, &InputRedirection::hasTouchChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputRedirection::*)(bool )>(_a, &InputRedirection::hasTabletModeSwitchChanged, 11))
            return;
    }
}

const QMetaObject *KWin::InputRedirection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::InputRedirection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin16InputRedirectionE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::InputRedirection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void KWin::InputRedirection::deviceAdded(InputDevice * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void KWin::InputRedirection::deviceRemoved(InputDevice * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void KWin::InputRedirection::globalPointerChanged(const QPointF & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void KWin::InputRedirection::pointerButtonStateChanged(uint32_t _t1, PointerButtonState _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}

// SIGNAL 4
void KWin::InputRedirection::pointerAxisChanged(PointerAxis _t1, qreal _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}

// SIGNAL 5
void KWin::InputRedirection::keyboardModifiersChanged(Qt::KeyboardModifiers _t1, Qt::KeyboardModifiers _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2);
}

// SIGNAL 6
void KWin::InputRedirection::keyStateChanged(quint32 _t1, KeyboardKeyState _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1, _t2);
}

// SIGNAL 7
void KWin::InputRedirection::hasKeyboardChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void KWin::InputRedirection::hasAlphaNumericKeyboardChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void KWin::InputRedirection::hasPointerChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void KWin::InputRedirection::hasTouchChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void KWin::InputRedirection::hasTabletModeSwitchChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN4KWin18InputDeviceHandlerE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::InputDeviceHandler::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin18InputDeviceHandlerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::InputDeviceHandler",
        "decorationChanged",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'decorationChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<InputDeviceHandler, qt_meta_tag_ZN4KWin18InputDeviceHandlerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::InputDeviceHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin18InputDeviceHandlerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin18InputDeviceHandlerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin18InputDeviceHandlerE_t>.metaTypes,
    nullptr
} };

void KWin::InputDeviceHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InputDeviceHandler *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->decorationChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (InputDeviceHandler::*)()>(_a, &InputDeviceHandler::decorationChanged, 0))
            return;
    }
}

const QMetaObject *KWin::InputDeviceHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::InputDeviceHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin18InputDeviceHandlerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::InputDeviceHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void KWin::InputDeviceHandler::decorationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
