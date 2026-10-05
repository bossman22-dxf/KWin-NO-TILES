/****************************************************************************
** Meta object code from reading C++ file 'zoom.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/plugins/zoom/zoom.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zoom.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin10ZoomEffectE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::ZoomEffect::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin10ZoomEffectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::ZoomEffect",
        "saveInitialZoom",
        "",
        "zoomIn",
        "zoomTo",
        "to",
        "zoomOut",
        "actualSize",
        "moveZoomLeft",
        "moveZoomRight",
        "moveZoomUp",
        "moveZoomDown",
        "timelineFrameChanged",
        "frame",
        "moveFocus",
        "QPointF",
        "point",
        "slotMouseChanged",
        "pos",
        "old",
        "slotWindowAdded",
        "EffectWindow*",
        "w",
        "slotWindowDamaged",
        "slotScreenRemoved",
        "LogicalOutput*",
        "screen",
        "setTargetZoom",
        "value",
        "zoomFactor",
        "mouseTracking",
        "focusDelay",
        "moveFactor",
        "targetZoom"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'saveInitialZoom'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'zoomIn'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'zoomTo'
        QtMocHelpers::SlotData<void(double)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 5 },
        }}),
        // Slot 'zoomOut'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'actualSize'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'moveZoomLeft'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'moveZoomRight'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'moveZoomUp'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'moveZoomDown'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'timelineFrameChanged'
        QtMocHelpers::SlotData<void(int)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 13 },
        }}),
        // Slot 'moveFocus'
        QtMocHelpers::SlotData<void(const QPointF &)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 15, 16 },
        }}),
        // Slot 'slotMouseChanged'
        QtMocHelpers::SlotData<void(const QPointF &, const QPointF &)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 15, 18 }, { 0x80000000 | 15, 19 },
        }}),
        // Slot 'slotWindowAdded'
        QtMocHelpers::SlotData<void(EffectWindow *)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 21, 22 },
        }}),
        // Slot 'slotWindowDamaged'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'slotScreenRemoved'
        QtMocHelpers::SlotData<void(LogicalOutput *)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 25, 26 },
        }}),
        // Slot 'setTargetZoom'
        QtMocHelpers::SlotData<void(double)>(27, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 28 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'zoomFactor'
        QtMocHelpers::PropertyData<qreal>(29, QMetaType::QReal, QMC::DefaultPropertyFlags),
        // property 'mouseTracking'
        QtMocHelpers::PropertyData<int>(30, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'focusDelay'
        QtMocHelpers::PropertyData<int>(31, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'moveFactor'
        QtMocHelpers::PropertyData<qreal>(32, QMetaType::QReal, QMC::DefaultPropertyFlags),
        // property 'targetZoom'
        QtMocHelpers::PropertyData<qreal>(33, QMetaType::QReal, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ZoomEffect, qt_meta_tag_ZN4KWin10ZoomEffectE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::ZoomEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<Effect::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin10ZoomEffectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin10ZoomEffectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin10ZoomEffectE_t>.metaTypes,
    nullptr
} };

void KWin::ZoomEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ZoomEffect *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->saveInitialZoom(); break;
        case 1: _t->zoomIn(); break;
        case 2: _t->zoomTo((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 3: _t->zoomOut(); break;
        case 4: _t->actualSize(); break;
        case 5: _t->moveZoomLeft(); break;
        case 6: _t->moveZoomRight(); break;
        case 7: _t->moveZoomUp(); break;
        case 8: _t->moveZoomDown(); break;
        case 9: _t->timelineFrameChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->moveFocus((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 11: _t->slotMouseChanged((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[2]))); break;
        case 12: _t->slotWindowAdded((*reinterpret_cast<std::add_pointer_t<EffectWindow*>>(_a[1]))); break;
        case 13: _t->slotWindowDamaged(); break;
        case 14: _t->slotScreenRemoved((*reinterpret_cast<std::add_pointer_t<LogicalOutput*>>(_a[1]))); break;
        case 15: _t->setTargetZoom((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<qreal*>(_v) = _t->configuredZoomFactor(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->configuredMouseTracking(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->configuredFocusDelay(); break;
        case 3: *reinterpret_cast<qreal*>(_v) = _t->configuredMoveFactor(); break;
        case 4: *reinterpret_cast<qreal*>(_v) = _t->targetZoom(); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::ZoomEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::ZoomEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin10ZoomEffectE_t>.strings))
        return static_cast<void*>(this);
    return Effect::qt_metacast(_clname);
}

int KWin::ZoomEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Effect::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
