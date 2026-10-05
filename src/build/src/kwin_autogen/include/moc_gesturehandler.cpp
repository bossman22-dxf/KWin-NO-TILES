/****************************************************************************
** Meta object code from reading C++ file 'gesturehandler.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/scripting/gesturehandler.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gesturehandler.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin19SwipeGestureHandlerE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::SwipeGestureHandler::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin19SwipeGestureHandlerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::SwipeGestureHandler",
        "activated",
        "",
        "cancelled",
        "progressChanged",
        "directionChanged",
        "fingerCountChanged",
        "deviceTypeChanged",
        "direction",
        "Direction",
        "fingerCount",
        "progress",
        "deviceType",
        "Device",
        "Invalid",
        "Down",
        "Left",
        "Up",
        "Right",
        "Touchpad",
        "Touchscreen"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'activated'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'cancelled'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'progressChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'directionChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fingerCountChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'deviceTypeChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'direction'
        QtMocHelpers::PropertyData<enum Direction>(8, 0x80000000 | 9, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 3),
        // property 'fingerCount'
        QtMocHelpers::PropertyData<int>(10, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'progress'
        QtMocHelpers::PropertyData<qreal>(11, QMetaType::QReal, QMC::DefaultPropertyFlags, 2),
        // property 'deviceType'
        QtMocHelpers::PropertyData<enum Device>(12, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 5),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Direction'
        QtMocHelpers::EnumData<enum Direction>(9, 9, QMC::EnumIsScoped).add({
            {   14, Direction::Invalid },
            {   15, Direction::Down },
            {   16, Direction::Left },
            {   17, Direction::Up },
            {   18, Direction::Right },
        }),
        // enum 'Device'
        QtMocHelpers::EnumData<enum Device>(13, 13, QMC::EnumIsScoped).add({
            {   19, Device::Touchpad },
            {   20, Device::Touchscreen },
        }),
    };
    return QtMocHelpers::metaObjectData<SwipeGestureHandler, qt_meta_tag_ZN4KWin19SwipeGestureHandlerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::SwipeGestureHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin19SwipeGestureHandlerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin19SwipeGestureHandlerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin19SwipeGestureHandlerE_t>.metaTypes,
    nullptr
} };

void KWin::SwipeGestureHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SwipeGestureHandler *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->activated(); break;
        case 1: _t->cancelled(); break;
        case 2: _t->progressChanged(); break;
        case 3: _t->directionChanged(); break;
        case 4: _t->fingerCountChanged(); break;
        case 5: _t->deviceTypeChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SwipeGestureHandler::*)()>(_a, &SwipeGestureHandler::activated, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SwipeGestureHandler::*)()>(_a, &SwipeGestureHandler::cancelled, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SwipeGestureHandler::*)()>(_a, &SwipeGestureHandler::progressChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SwipeGestureHandler::*)()>(_a, &SwipeGestureHandler::directionChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (SwipeGestureHandler::*)()>(_a, &SwipeGestureHandler::fingerCountChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (SwipeGestureHandler::*)()>(_a, &SwipeGestureHandler::deviceTypeChanged, 5))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<enum Direction*>(_v) = _t->direction(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->fingerCount(); break;
        case 2: *reinterpret_cast<qreal*>(_v) = _t->progress(); break;
        case 3: *reinterpret_cast<enum Device*>(_v) = _t->deviceType(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDirection(*reinterpret_cast<enum Direction*>(_v)); break;
        case 1: _t->setFingerCount(*reinterpret_cast<int*>(_v)); break;
        case 3: _t->setDeviceType(*reinterpret_cast<enum Device*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::SwipeGestureHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::SwipeGestureHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin19SwipeGestureHandlerE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::SwipeGestureHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void KWin::SwipeGestureHandler::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::SwipeGestureHandler::cancelled()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::SwipeGestureHandler::progressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::SwipeGestureHandler::directionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWin::SwipeGestureHandler::fingerCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KWin::SwipeGestureHandler::deviceTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
namespace {
struct qt_meta_tag_ZN4KWin19PinchGestureHandlerE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::PinchGestureHandler::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin19PinchGestureHandlerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::PinchGestureHandler",
        "activated",
        "",
        "cancelled",
        "progressChanged",
        "directionChanged",
        "fingerCountChanged",
        "deviceTypeChanged",
        "direction",
        "Direction",
        "fingerCount",
        "progress",
        "Expanding",
        "Contracting",
        "Device",
        "Touchpad"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'activated'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'cancelled'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'progressChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'directionChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fingerCountChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'deviceTypeChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'direction'
        QtMocHelpers::PropertyData<enum Direction>(8, 0x80000000 | 9, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 3),
        // property 'fingerCount'
        QtMocHelpers::PropertyData<int>(10, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'progress'
        QtMocHelpers::PropertyData<qreal>(11, QMetaType::QReal, QMC::DefaultPropertyFlags, 2),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Direction'
        QtMocHelpers::EnumData<enum Direction>(9, 9, QMC::EnumIsScoped).add({
            {   12, Direction::Expanding },
            {   13, Direction::Contracting },
        }),
        // enum 'Device'
        QtMocHelpers::EnumData<enum Device>(14, 14, QMC::EnumIsScoped).add({
            {   15, Device::Touchpad },
        }),
    };
    return QtMocHelpers::metaObjectData<PinchGestureHandler, qt_meta_tag_ZN4KWin19PinchGestureHandlerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::PinchGestureHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin19PinchGestureHandlerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin19PinchGestureHandlerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin19PinchGestureHandlerE_t>.metaTypes,
    nullptr
} };

void KWin::PinchGestureHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PinchGestureHandler *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->activated(); break;
        case 1: _t->cancelled(); break;
        case 2: _t->progressChanged(); break;
        case 3: _t->directionChanged(); break;
        case 4: _t->fingerCountChanged(); break;
        case 5: _t->deviceTypeChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PinchGestureHandler::*)()>(_a, &PinchGestureHandler::activated, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PinchGestureHandler::*)()>(_a, &PinchGestureHandler::cancelled, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PinchGestureHandler::*)()>(_a, &PinchGestureHandler::progressChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PinchGestureHandler::*)()>(_a, &PinchGestureHandler::directionChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PinchGestureHandler::*)()>(_a, &PinchGestureHandler::fingerCountChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (PinchGestureHandler::*)()>(_a, &PinchGestureHandler::deviceTypeChanged, 5))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<enum Direction*>(_v) = _t->direction(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->fingerCount(); break;
        case 2: *reinterpret_cast<qreal*>(_v) = _t->progress(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDirection(*reinterpret_cast<enum Direction*>(_v)); break;
        case 1: _t->setFingerCount(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::PinchGestureHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::PinchGestureHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin19PinchGestureHandlerE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::PinchGestureHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void KWin::PinchGestureHandler::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::PinchGestureHandler::cancelled()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::PinchGestureHandler::progressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::PinchGestureHandler::directionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWin::PinchGestureHandler::fingerCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KWin::PinchGestureHandler::deviceTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
