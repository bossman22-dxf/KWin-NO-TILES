/****************************************************************************
** Meta object code from reading C++ file 'glide.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/plugins/glide/glide.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glide.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin11GlideEffectE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::GlideEffect::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin11GlideEffectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::GlideEffect",
        "windowAdded",
        "",
        "EffectWindow*",
        "w",
        "windowClosed",
        "windowDataChanged",
        "role",
        "duration",
        "inRotationEdge",
        "RotationEdge",
        "inRotationAngle",
        "inDistance",
        "inOpacity",
        "outRotationEdge",
        "outRotationAngle",
        "outDistance",
        "outOpacity",
        "Top",
        "Right",
        "Bottom",
        "Left"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'windowAdded'
        QtMocHelpers::SlotData<void(EffectWindow *)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'windowClosed'
        QtMocHelpers::SlotData<void(EffectWindow *)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'windowDataChanged'
        QtMocHelpers::SlotData<void(EffectWindow *, int)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'duration'
        QtMocHelpers::PropertyData<int>(8, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'inRotationEdge'
        QtMocHelpers::PropertyData<enum RotationEdge>(9, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'inRotationAngle'
        QtMocHelpers::PropertyData<qreal>(11, QMetaType::QReal, QMC::DefaultPropertyFlags),
        // property 'inDistance'
        QtMocHelpers::PropertyData<qreal>(12, QMetaType::QReal, QMC::DefaultPropertyFlags),
        // property 'inOpacity'
        QtMocHelpers::PropertyData<qreal>(13, QMetaType::QReal, QMC::DefaultPropertyFlags),
        // property 'outRotationEdge'
        QtMocHelpers::PropertyData<enum RotationEdge>(14, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'outRotationAngle'
        QtMocHelpers::PropertyData<qreal>(15, QMetaType::QReal, QMC::DefaultPropertyFlags),
        // property 'outDistance'
        QtMocHelpers::PropertyData<qreal>(16, QMetaType::QReal, QMC::DefaultPropertyFlags),
        // property 'outOpacity'
        QtMocHelpers::PropertyData<qreal>(17, QMetaType::QReal, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'RotationEdge'
        QtMocHelpers::EnumData<enum RotationEdge>(10, 10, QMC::EnumFlags{}).add({
            {   18, RotationEdge::Top },
            {   19, RotationEdge::Right },
            {   20, RotationEdge::Bottom },
            {   21, RotationEdge::Left },
        }),
    };
    return QtMocHelpers::metaObjectData<GlideEffect, qt_meta_tag_ZN4KWin11GlideEffectE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::GlideEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<OffscreenEffect::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin11GlideEffectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin11GlideEffectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin11GlideEffectE_t>.metaTypes,
    nullptr
} };

void KWin::GlideEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GlideEffect *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->windowAdded((*reinterpret_cast<std::add_pointer_t<EffectWindow*>>(_a[1]))); break;
        case 1: _t->windowClosed((*reinterpret_cast<std::add_pointer_t<EffectWindow*>>(_a[1]))); break;
        case 2: _t->windowDataChanged((*reinterpret_cast<std::add_pointer_t<EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< EffectWindow* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< EffectWindow* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< EffectWindow* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->duration(); break;
        case 1: *reinterpret_cast<enum RotationEdge*>(_v) = _t->inRotationEdge(); break;
        case 2: *reinterpret_cast<qreal*>(_v) = _t->inRotationAngle(); break;
        case 3: *reinterpret_cast<qreal*>(_v) = _t->inDistance(); break;
        case 4: *reinterpret_cast<qreal*>(_v) = _t->inOpacity(); break;
        case 5: *reinterpret_cast<enum RotationEdge*>(_v) = _t->outRotationEdge(); break;
        case 6: *reinterpret_cast<qreal*>(_v) = _t->outRotationAngle(); break;
        case 7: *reinterpret_cast<qreal*>(_v) = _t->outDistance(); break;
        case 8: *reinterpret_cast<qreal*>(_v) = _t->outOpacity(); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::GlideEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::GlideEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin11GlideEffectE_t>.strings))
        return static_cast<void*>(this);
    return OffscreenEffect::qt_metacast(_clname);
}

int KWin::GlideEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OffscreenEffect::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
