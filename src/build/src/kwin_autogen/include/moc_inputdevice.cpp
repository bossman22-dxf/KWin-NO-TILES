/****************************************************************************
** Meta object code from reading C++ file 'inputdevice.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/core/inputdevice.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputdevice.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin21InputDeviceTabletToolE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::InputDeviceTabletTool::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin21InputDeviceTabletToolE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::InputDeviceTabletTool"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<InputDeviceTabletTool, qt_meta_tag_ZN4KWin21InputDeviceTabletToolE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::InputDeviceTabletTool::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21InputDeviceTabletToolE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21InputDeviceTabletToolE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin21InputDeviceTabletToolE_t>.metaTypes,
    nullptr
} };

void KWin::InputDeviceTabletTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InputDeviceTabletTool *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::InputDeviceTabletTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::InputDeviceTabletTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21InputDeviceTabletToolE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::InputDeviceTabletTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin11InputDeviceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::InputDevice::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin11InputDeviceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::InputDevice",
        "keyChanged",
        "",
        "key",
        "KeyboardKeyState",
        "std::chrono::microseconds",
        "time",
        "InputDevice*",
        "device",
        "pointerButtonChanged",
        "button",
        "PointerButtonState",
        "state",
        "pointerMotionAbsolute",
        "QPointF",
        "position",
        "pointerMotion",
        "delta",
        "deltaNonAccelerated",
        "pointerAxisChanged",
        "PointerAxis",
        "axis",
        "deltaV120",
        "PointerAxisSource",
        "source",
        "inverted",
        "pointerFrame",
        "touchFrame",
        "touchCanceled",
        "touchDown",
        "id",
        "absolutePos",
        "touchUp",
        "touchMotion",
        "swipeGestureBegin",
        "fingerCount",
        "swipeGestureUpdate",
        "swipeGestureEnd",
        "swipeGestureCancelled",
        "pinchGestureBegin",
        "pinchGestureUpdate",
        "scale",
        "angleDelta",
        "pinchGestureEnd",
        "pinchGestureCancelled",
        "holdGestureBegin",
        "holdGestureEnd",
        "holdGestureCancelled",
        "switchToggle",
        "SwitchState",
        "tabletToolAxisEvent",
        "pos",
        "pressure",
        "xTilt",
        "yTilt",
        "rotation",
        "distance",
        "tipDown",
        "sliderPosition",
        "InputDeviceTabletTool*",
        "tool",
        "tabletToolAxisEventRelative",
        "tabletToolProximityEvent",
        "tipNear",
        "tabletToolTipEvent",
        "tabletToolButtonEvent",
        "isPressed",
        "tabletPadButtonEvent",
        "group",
        "mode",
        "isModeSwitch",
        "tabletPadStripEvent",
        "number",
        "isFinger",
        "tabletPadRingEvent",
        "tabletPadDialEvent"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'keyChanged'
        QtMocHelpers::SignalData<void(quint32, KeyboardKeyState, std::chrono::microseconds, InputDevice *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 3 }, { 0x80000000 | 4, 2 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'pointerButtonChanged'
        QtMocHelpers::SignalData<void(quint32, PointerButtonState, std::chrono::microseconds, InputDevice *)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 10 }, { 0x80000000 | 11, 12 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'pointerMotionAbsolute'
        QtMocHelpers::SignalData<void(const QPointF &, std::chrono::microseconds, InputDevice *)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 15 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'pointerMotion'
        QtMocHelpers::SignalData<void(const QPointF &, const QPointF &, std::chrono::microseconds, InputDevice *)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 17 }, { 0x80000000 | 14, 18 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'pointerAxisChanged'
        QtMocHelpers::SignalData<void(PointerAxis, qreal, qint32, PointerAxisSource, bool, std::chrono::microseconds, InputDevice *)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 20, 21 }, { QMetaType::QReal, 17 }, { QMetaType::Int, 22 }, { 0x80000000 | 23, 24 },
            { QMetaType::Bool, 25 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'pointerFrame'
        QtMocHelpers::SignalData<void(InputDevice *)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Signal 'touchFrame'
        QtMocHelpers::SignalData<void(InputDevice *)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Signal 'touchCanceled'
        QtMocHelpers::SignalData<void(InputDevice *)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Signal 'touchDown'
        QtMocHelpers::SignalData<void(qint32, const QPointF &, std::chrono::microseconds, InputDevice *)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 30 }, { 0x80000000 | 14, 31 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'touchUp'
        QtMocHelpers::SignalData<void(qint32, std::chrono::microseconds, InputDevice *)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 30 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'touchMotion'
        QtMocHelpers::SignalData<void(qint32, const QPointF &, std::chrono::microseconds, InputDevice *)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 30 }, { 0x80000000 | 14, 31 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'swipeGestureBegin'
        QtMocHelpers::SignalData<void(int, std::chrono::microseconds, InputDevice *)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 35 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'swipeGestureUpdate'
        QtMocHelpers::SignalData<void(const QPointF &, std::chrono::microseconds, InputDevice *)>(36, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 17 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'swipeGestureEnd'
        QtMocHelpers::SignalData<void(std::chrono::microseconds, InputDevice *)>(37, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'swipeGestureCancelled'
        QtMocHelpers::SignalData<void(std::chrono::microseconds, InputDevice *)>(38, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'pinchGestureBegin'
        QtMocHelpers::SignalData<void(int, std::chrono::microseconds, InputDevice *)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 35 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'pinchGestureUpdate'
        QtMocHelpers::SignalData<void(qreal, qreal, const QPointF &, std::chrono::microseconds, InputDevice *)>(40, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 41 }, { QMetaType::QReal, 42 }, { 0x80000000 | 14, 17 }, { 0x80000000 | 5, 6 },
            { 0x80000000 | 7, 8 },
        }}),
        // Signal 'pinchGestureEnd'
        QtMocHelpers::SignalData<void(std::chrono::microseconds, InputDevice *)>(43, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'pinchGestureCancelled'
        QtMocHelpers::SignalData<void(std::chrono::microseconds, InputDevice *)>(44, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'holdGestureBegin'
        QtMocHelpers::SignalData<void(int, std::chrono::microseconds, InputDevice *)>(45, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 35 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'holdGestureEnd'
        QtMocHelpers::SignalData<void(std::chrono::microseconds, InputDevice *)>(46, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'holdGestureCancelled'
        QtMocHelpers::SignalData<void(std::chrono::microseconds, InputDevice *)>(47, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'switchToggle'
        QtMocHelpers::SignalData<void(SwitchState, std::chrono::microseconds, InputDevice *)>(48, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 49, 12 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'tabletToolAxisEvent'
        QtMocHelpers::SignalData<void(const QPointF &, qreal, qreal, qreal, qreal, qreal, bool, qreal, InputDeviceTabletTool *, std::chrono::microseconds, InputDevice *)>(50, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 51 }, { QMetaType::QReal, 52 }, { QMetaType::QReal, 53 }, { QMetaType::QReal, 54 },
            { QMetaType::QReal, 55 }, { QMetaType::QReal, 56 }, { QMetaType::Bool, 57 }, { QMetaType::QReal, 58 },
            { 0x80000000 | 59, 60 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'tabletToolAxisEventRelative'
        QtMocHelpers::SignalData<void(const QPointF &, qreal, qreal, qreal, qreal, qreal, bool, qreal, InputDeviceTabletTool *, std::chrono::microseconds, InputDevice *)>(61, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 17 }, { QMetaType::QReal, 52 }, { QMetaType::QReal, 53 }, { QMetaType::QReal, 54 },
            { QMetaType::QReal, 55 }, { QMetaType::QReal, 56 }, { QMetaType::Bool, 57 }, { QMetaType::QReal, 58 },
            { 0x80000000 | 59, 60 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'tabletToolProximityEvent'
        QtMocHelpers::SignalData<void(const QPointF &, qreal, qreal, qreal, qreal, bool, qreal, InputDeviceTabletTool *, std::chrono::microseconds, InputDevice *)>(62, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 51 }, { QMetaType::QReal, 53 }, { QMetaType::QReal, 54 }, { QMetaType::QReal, 55 },
            { QMetaType::QReal, 56 }, { QMetaType::Bool, 63 }, { QMetaType::QReal, 58 }, { 0x80000000 | 59, 60 },
            { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'tabletToolTipEvent'
        QtMocHelpers::SignalData<void(const QPointF &, qreal, qreal, qreal, qreal, qreal, bool, qreal, InputDeviceTabletTool *, std::chrono::microseconds, InputDevice *)>(64, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 51 }, { QMetaType::QReal, 52 }, { QMetaType::QReal, 53 }, { QMetaType::QReal, 54 },
            { QMetaType::QReal, 55 }, { QMetaType::QReal, 56 }, { QMetaType::Bool, 57 }, { QMetaType::QReal, 58 },
            { 0x80000000 | 59, 60 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'tabletToolButtonEvent'
        QtMocHelpers::SignalData<void(uint, bool, InputDeviceTabletTool *, std::chrono::microseconds, InputDevice *)>(65, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 10 }, { QMetaType::Bool, 66 }, { 0x80000000 | 59, 60 }, { 0x80000000 | 5, 6 },
            { 0x80000000 | 7, 8 },
        }}),
        // Signal 'tabletPadButtonEvent'
        QtMocHelpers::SignalData<void(uint, bool, quint32, quint32, bool, std::chrono::microseconds, InputDevice *)>(67, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 10 }, { QMetaType::Bool, 66 }, { QMetaType::UInt, 68 }, { QMetaType::UInt, 69 },
            { QMetaType::Bool, 70 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'tabletPadStripEvent'
        QtMocHelpers::SignalData<void(int, qreal, bool, quint32, quint32, std::chrono::microseconds, InputDevice *)>(71, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 72 }, { QMetaType::QReal, 15 }, { QMetaType::Bool, 73 }, { QMetaType::UInt, 68 },
            { QMetaType::UInt, 69 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'tabletPadRingEvent'
        QtMocHelpers::SignalData<void(int, qreal, bool, quint32, quint32, std::chrono::microseconds, InputDevice *)>(74, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 72 }, { QMetaType::QReal, 15 }, { QMetaType::Bool, 73 }, { QMetaType::UInt, 68 },
            { QMetaType::UInt, 69 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'tabletPadDialEvent'
        QtMocHelpers::SignalData<void(int, double, quint32, std::chrono::microseconds, InputDevice *)>(75, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 72 }, { QMetaType::Double, 17 }, { QMetaType::UInt, 68 }, { 0x80000000 | 5, 6 },
            { 0x80000000 | 7, 8 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<InputDevice, qt_meta_tag_ZN4KWin11InputDeviceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::InputDevice::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin11InputDeviceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin11InputDeviceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin11InputDeviceE_t>.metaTypes,
    nullptr
} };

void KWin::InputDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InputDevice *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->keyChanged((*reinterpret_cast<std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<KeyboardKeyState>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[4]))); break;
        case 1: _t->pointerButtonChanged((*reinterpret_cast<std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<PointerButtonState>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[4]))); break;
        case 2: _t->pointerMotionAbsolute((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[3]))); break;
        case 3: _t->pointerMotion((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[4]))); break;
        case 4: _t->pointerAxisChanged((*reinterpret_cast<std::add_pointer_t<PointerAxis>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<qint32>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<PointerAxisSource>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[7]))); break;
        case 5: _t->pointerFrame((*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[1]))); break;
        case 6: _t->touchFrame((*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[1]))); break;
        case 7: _t->touchCanceled((*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[1]))); break;
        case 8: _t->touchDown((*reinterpret_cast<std::add_pointer_t<qint32>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[4]))); break;
        case 9: _t->touchUp((*reinterpret_cast<std::add_pointer_t<qint32>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[3]))); break;
        case 10: _t->touchMotion((*reinterpret_cast<std::add_pointer_t<qint32>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[4]))); break;
        case 11: _t->swipeGestureBegin((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[3]))); break;
        case 12: _t->swipeGestureUpdate((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[3]))); break;
        case 13: _t->swipeGestureEnd((*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[2]))); break;
        case 14: _t->swipeGestureCancelled((*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[2]))); break;
        case 15: _t->pinchGestureBegin((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[3]))); break;
        case 16: _t->pinchGestureUpdate((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[5]))); break;
        case 17: _t->pinchGestureEnd((*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[2]))); break;
        case 18: _t->pinchGestureCancelled((*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[2]))); break;
        case 19: _t->holdGestureBegin((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[3]))); break;
        case 20: _t->holdGestureEnd((*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[2]))); break;
        case 21: _t->holdGestureCancelled((*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[2]))); break;
        case 22: _t->switchToggle((*reinterpret_cast<std::add_pointer_t<SwitchState>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[3]))); break;
        case 23: _t->tabletToolAxisEvent((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[7])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[8])),(*reinterpret_cast<std::add_pointer_t<InputDeviceTabletTool*>>(_a[9])),(*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[10])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[11]))); break;
        case 24: _t->tabletToolAxisEventRelative((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[7])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[8])),(*reinterpret_cast<std::add_pointer_t<InputDeviceTabletTool*>>(_a[9])),(*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[10])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[11]))); break;
        case 25: _t->tabletToolProximityEvent((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[7])),(*reinterpret_cast<std::add_pointer_t<InputDeviceTabletTool*>>(_a[8])),(*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[9])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[10]))); break;
        case 26: _t->tabletToolTipEvent((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[7])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[8])),(*reinterpret_cast<std::add_pointer_t<InputDeviceTabletTool*>>(_a[9])),(*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[10])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[11]))); break;
        case 27: _t->tabletToolButtonEvent((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<InputDeviceTabletTool*>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[5]))); break;
        case 28: _t->tabletPadButtonEvent((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[7]))); break;
        case 29: _t->tabletPadStripEvent((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[7]))); break;
        case 30: _t->tabletPadRingEvent((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[7]))); break;
        case 31: _t->tabletPadDialEvent((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<std::chrono::microseconds>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<InputDevice*>>(_a[5]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 6:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 10:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            case 8:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDeviceTabletTool* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 10:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            case 8:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDeviceTabletTool* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 9:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            case 7:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDeviceTabletTool* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 10:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            case 8:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDeviceTabletTool* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDeviceTabletTool* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 6:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 6:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 6:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputDevice* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(quint32 , KeyboardKeyState , std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::keyChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(quint32 , PointerButtonState , std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::pointerButtonChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(const QPointF & , std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::pointerMotionAbsolute, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(const QPointF & , const QPointF & , std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::pointerMotion, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(PointerAxis , qreal , qint32 , PointerAxisSource , bool , std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::pointerAxisChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(InputDevice * )>(_a, &InputDevice::pointerFrame, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(InputDevice * )>(_a, &InputDevice::touchFrame, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(InputDevice * )>(_a, &InputDevice::touchCanceled, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(qint32 , const QPointF & , std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::touchDown, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(qint32 , std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::touchUp, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(qint32 , const QPointF & , std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::touchMotion, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(int , std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::swipeGestureBegin, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(const QPointF & , std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::swipeGestureUpdate, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::swipeGestureEnd, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::swipeGestureCancelled, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(int , std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::pinchGestureBegin, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(qreal , qreal , const QPointF & , std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::pinchGestureUpdate, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::pinchGestureEnd, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::pinchGestureCancelled, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(int , std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::holdGestureBegin, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::holdGestureEnd, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::holdGestureCancelled, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(SwitchState , std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::switchToggle, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(const QPointF & , qreal , qreal , qreal , qreal , qreal , bool , qreal , InputDeviceTabletTool * , std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::tabletToolAxisEvent, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(const QPointF & , qreal , qreal , qreal , qreal , qreal , bool , qreal , InputDeviceTabletTool * , std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::tabletToolAxisEventRelative, 24))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(const QPointF & , qreal , qreal , qreal , qreal , bool , qreal , InputDeviceTabletTool * , std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::tabletToolProximityEvent, 25))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(const QPointF & , qreal , qreal , qreal , qreal , qreal , bool , qreal , InputDeviceTabletTool * , std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::tabletToolTipEvent, 26))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(uint , bool , InputDeviceTabletTool * , std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::tabletToolButtonEvent, 27))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(uint , bool , quint32 , quint32 , bool , std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::tabletPadButtonEvent, 28))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(int , qreal , bool , quint32 , quint32 , std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::tabletPadStripEvent, 29))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(int , qreal , bool , quint32 , quint32 , std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::tabletPadRingEvent, 30))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputDevice::*)(int , double , quint32 , std::chrono::microseconds , InputDevice * )>(_a, &InputDevice::tabletPadDialEvent, 31))
            return;
    }
}

const QMetaObject *KWin::InputDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::InputDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin11InputDeviceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::InputDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void KWin::InputDevice::keyChanged(quint32 _t1, KeyboardKeyState _t2, std::chrono::microseconds _t3, InputDevice * _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 1
void KWin::InputDevice::pointerButtonChanged(quint32 _t1, PointerButtonState _t2, std::chrono::microseconds _t3, InputDevice * _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 2
void KWin::InputDevice::pointerMotionAbsolute(const QPointF & _t1, std::chrono::microseconds _t2, InputDevice * _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2, _t3);
}

// SIGNAL 3
void KWin::InputDevice::pointerMotion(const QPointF & _t1, const QPointF & _t2, std::chrono::microseconds _t3, InputDevice * _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 4
void KWin::InputDevice::pointerAxisChanged(PointerAxis _t1, qreal _t2, qint32 _t3, PointerAxisSource _t4, bool _t5, std::chrono::microseconds _t6, InputDevice * _t7)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2, _t3, _t4, _t5, _t6, _t7);
}

// SIGNAL 5
void KWin::InputDevice::pointerFrame(InputDevice * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void KWin::InputDevice::touchFrame(InputDevice * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void KWin::InputDevice::touchCanceled(InputDevice * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void KWin::InputDevice::touchDown(qint32 _t1, const QPointF & _t2, std::chrono::microseconds _t3, InputDevice * _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 9
void KWin::InputDevice::touchUp(qint32 _t1, std::chrono::microseconds _t2, InputDevice * _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1, _t2, _t3);
}

// SIGNAL 10
void KWin::InputDevice::touchMotion(qint32 _t1, const QPointF & _t2, std::chrono::microseconds _t3, InputDevice * _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 11
void KWin::InputDevice::swipeGestureBegin(int _t1, std::chrono::microseconds _t2, InputDevice * _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1, _t2, _t3);
}

// SIGNAL 12
void KWin::InputDevice::swipeGestureUpdate(const QPointF & _t1, std::chrono::microseconds _t2, InputDevice * _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1, _t2, _t3);
}

// SIGNAL 13
void KWin::InputDevice::swipeGestureEnd(std::chrono::microseconds _t1, InputDevice * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1, _t2);
}

// SIGNAL 14
void KWin::InputDevice::swipeGestureCancelled(std::chrono::microseconds _t1, InputDevice * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1, _t2);
}

// SIGNAL 15
void KWin::InputDevice::pinchGestureBegin(int _t1, std::chrono::microseconds _t2, InputDevice * _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1, _t2, _t3);
}

// SIGNAL 16
void KWin::InputDevice::pinchGestureUpdate(qreal _t1, qreal _t2, const QPointF & _t3, std::chrono::microseconds _t4, InputDevice * _t5)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1, _t2, _t3, _t4, _t5);
}

// SIGNAL 17
void KWin::InputDevice::pinchGestureEnd(std::chrono::microseconds _t1, InputDevice * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 17, nullptr, _t1, _t2);
}

// SIGNAL 18
void KWin::InputDevice::pinchGestureCancelled(std::chrono::microseconds _t1, InputDevice * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 18, nullptr, _t1, _t2);
}

// SIGNAL 19
void KWin::InputDevice::holdGestureBegin(int _t1, std::chrono::microseconds _t2, InputDevice * _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 19, nullptr, _t1, _t2, _t3);
}

// SIGNAL 20
void KWin::InputDevice::holdGestureEnd(std::chrono::microseconds _t1, InputDevice * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 20, nullptr, _t1, _t2);
}

// SIGNAL 21
void KWin::InputDevice::holdGestureCancelled(std::chrono::microseconds _t1, InputDevice * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 21, nullptr, _t1, _t2);
}

// SIGNAL 22
void KWin::InputDevice::switchToggle(SwitchState _t1, std::chrono::microseconds _t2, InputDevice * _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 22, nullptr, _t1, _t2, _t3);
}

// SIGNAL 23
void KWin::InputDevice::tabletToolAxisEvent(const QPointF & _t1, qreal _t2, qreal _t3, qreal _t4, qreal _t5, qreal _t6, bool _t7, qreal _t8, InputDeviceTabletTool * _t9, std::chrono::microseconds _t10, InputDevice * _t11)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 23, nullptr, _t1, _t2, _t3, _t4, _t5, _t6, _t7, _t8, _t9, _t10, _t11);
}

// SIGNAL 24
void KWin::InputDevice::tabletToolAxisEventRelative(const QPointF & _t1, qreal _t2, qreal _t3, qreal _t4, qreal _t5, qreal _t6, bool _t7, qreal _t8, InputDeviceTabletTool * _t9, std::chrono::microseconds _t10, InputDevice * _t11)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 24, nullptr, _t1, _t2, _t3, _t4, _t5, _t6, _t7, _t8, _t9, _t10, _t11);
}

// SIGNAL 25
void KWin::InputDevice::tabletToolProximityEvent(const QPointF & _t1, qreal _t2, qreal _t3, qreal _t4, qreal _t5, bool _t6, qreal _t7, InputDeviceTabletTool * _t8, std::chrono::microseconds _t9, InputDevice * _t10)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 25, nullptr, _t1, _t2, _t3, _t4, _t5, _t6, _t7, _t8, _t9, _t10);
}

// SIGNAL 26
void KWin::InputDevice::tabletToolTipEvent(const QPointF & _t1, qreal _t2, qreal _t3, qreal _t4, qreal _t5, qreal _t6, bool _t7, qreal _t8, InputDeviceTabletTool * _t9, std::chrono::microseconds _t10, InputDevice * _t11)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 26, nullptr, _t1, _t2, _t3, _t4, _t5, _t6, _t7, _t8, _t9, _t10, _t11);
}

// SIGNAL 27
void KWin::InputDevice::tabletToolButtonEvent(uint _t1, bool _t2, InputDeviceTabletTool * _t3, std::chrono::microseconds _t4, InputDevice * _t5)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 27, nullptr, _t1, _t2, _t3, _t4, _t5);
}

// SIGNAL 28
void KWin::InputDevice::tabletPadButtonEvent(uint _t1, bool _t2, quint32 _t3, quint32 _t4, bool _t5, std::chrono::microseconds _t6, InputDevice * _t7)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 28, nullptr, _t1, _t2, _t3, _t4, _t5, _t6, _t7);
}

// SIGNAL 29
void KWin::InputDevice::tabletPadStripEvent(int _t1, qreal _t2, bool _t3, quint32 _t4, quint32 _t5, std::chrono::microseconds _t6, InputDevice * _t7)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 29, nullptr, _t1, _t2, _t3, _t4, _t5, _t6, _t7);
}

// SIGNAL 30
void KWin::InputDevice::tabletPadRingEvent(int _t1, qreal _t2, bool _t3, quint32 _t4, quint32 _t5, std::chrono::microseconds _t6, InputDevice * _t7)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 30, nullptr, _t1, _t2, _t3, _t4, _t5, _t6, _t7);
}

// SIGNAL 31
void KWin::InputDevice::tabletPadDialEvent(int _t1, double _t2, quint32 _t3, std::chrono::microseconds _t4, InputDevice * _t5)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 31, nullptr, _t1, _t2, _t3, _t4, _t5);
}
QT_WARNING_POP
