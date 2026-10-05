/****************************************************************************
** Meta object code from reading C++ file 'wobblywindows.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/plugins/wobblywindows/wobblywindows.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wobblywindows.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin19WobblyWindowsEffectE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::WobblyWindowsEffect::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin19WobblyWindowsEffectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::WobblyWindowsEffect",
        "slotWindowAdded",
        "",
        "KWin::EffectWindow*",
        "w",
        "slotWindowStartUserMovedResized",
        "slotWindowStepUserMovedResized",
        "RectF",
        "geometry",
        "slotWindowFinishUserMovedResized",
        "slotWindowMaximizeStateChanged",
        "horizontal",
        "vertical",
        "stiffness",
        "drag",
        "moveFactor",
        "xTessellation",
        "yTessellation",
        "minVelocity",
        "maxVelocity",
        "stopVelocity",
        "minAcceleration",
        "maxAcceleration",
        "stopAcceleration",
        "moveWobble",
        "resizeWobble"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'slotWindowAdded'
        QtMocHelpers::SlotData<void(KWin::EffectWindow *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'slotWindowStartUserMovedResized'
        QtMocHelpers::SlotData<void(KWin::EffectWindow *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'slotWindowStepUserMovedResized'
        QtMocHelpers::SlotData<void(KWin::EffectWindow *, const RectF &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 7, 8 },
        }}),
        // Slot 'slotWindowFinishUserMovedResized'
        QtMocHelpers::SlotData<void(KWin::EffectWindow *)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'slotWindowMaximizeStateChanged'
        QtMocHelpers::SlotData<void(KWin::EffectWindow *, bool, bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Bool, 11 }, { QMetaType::Bool, 12 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'stiffness'
        QtMocHelpers::PropertyData<qreal>(13, QMetaType::QReal, QMC::DefaultPropertyFlags),
        // property 'drag'
        QtMocHelpers::PropertyData<qreal>(14, QMetaType::QReal, QMC::DefaultPropertyFlags),
        // property 'moveFactor'
        QtMocHelpers::PropertyData<qreal>(15, QMetaType::QReal, QMC::DefaultPropertyFlags),
        // property 'xTessellation'
        QtMocHelpers::PropertyData<qreal>(16, QMetaType::QReal, QMC::DefaultPropertyFlags),
        // property 'yTessellation'
        QtMocHelpers::PropertyData<qreal>(17, QMetaType::QReal, QMC::DefaultPropertyFlags),
        // property 'minVelocity'
        QtMocHelpers::PropertyData<qreal>(18, QMetaType::QReal, QMC::DefaultPropertyFlags),
        // property 'maxVelocity'
        QtMocHelpers::PropertyData<qreal>(19, QMetaType::QReal, QMC::DefaultPropertyFlags),
        // property 'stopVelocity'
        QtMocHelpers::PropertyData<qreal>(20, QMetaType::QReal, QMC::DefaultPropertyFlags),
        // property 'minAcceleration'
        QtMocHelpers::PropertyData<qreal>(21, QMetaType::QReal, QMC::DefaultPropertyFlags),
        // property 'maxAcceleration'
        QtMocHelpers::PropertyData<qreal>(22, QMetaType::QReal, QMC::DefaultPropertyFlags),
        // property 'stopAcceleration'
        QtMocHelpers::PropertyData<qreal>(23, QMetaType::QReal, QMC::DefaultPropertyFlags),
        // property 'moveWobble'
        QtMocHelpers::PropertyData<bool>(24, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'resizeWobble'
        QtMocHelpers::PropertyData<bool>(25, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WobblyWindowsEffect, qt_meta_tag_ZN4KWin19WobblyWindowsEffectE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::WobblyWindowsEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<OffscreenEffect::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin19WobblyWindowsEffectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin19WobblyWindowsEffectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin19WobblyWindowsEffectE_t>.metaTypes,
    nullptr
} };

void KWin::WobblyWindowsEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WobblyWindowsEffect *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->slotWindowAdded((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 1: _t->slotWindowStartUserMovedResized((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 2: _t->slotWindowStepUserMovedResized((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<RectF>>(_a[2]))); break;
        case 3: _t->slotWindowFinishUserMovedResized((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 4: _t->slotWindowMaximizeStateChanged((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<qreal*>(_v) = _t->stiffness(); break;
        case 1: *reinterpret_cast<qreal*>(_v) = _t->drag(); break;
        case 2: *reinterpret_cast<qreal*>(_v) = _t->moveFactor(); break;
        case 3: *reinterpret_cast<qreal*>(_v) = _t->xTessellation(); break;
        case 4: *reinterpret_cast<qreal*>(_v) = _t->yTessellation(); break;
        case 5: *reinterpret_cast<qreal*>(_v) = _t->minVelocity(); break;
        case 6: *reinterpret_cast<qreal*>(_v) = _t->maxVelocity(); break;
        case 7: *reinterpret_cast<qreal*>(_v) = _t->stopVelocity(); break;
        case 8: *reinterpret_cast<qreal*>(_v) = _t->minAcceleration(); break;
        case 9: *reinterpret_cast<qreal*>(_v) = _t->maxAcceleration(); break;
        case 10: *reinterpret_cast<qreal*>(_v) = _t->stopAcceleration(); break;
        case 11: *reinterpret_cast<bool*>(_v) = _t->isMoveWobble(); break;
        case 12: *reinterpret_cast<bool*>(_v) = _t->isResizeWobble(); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::WobblyWindowsEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::WobblyWindowsEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin19WobblyWindowsEffectE_t>.strings))
        return static_cast<void*>(this);
    return OffscreenEffect::qt_metacast(_clname);
}

int KWin::WobblyWindowsEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OffscreenEffect::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
