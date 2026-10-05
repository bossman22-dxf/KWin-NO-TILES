/****************************************************************************
** Meta object code from reading C++ file 'animationeffect.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/effect/animationeffect.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'animationeffect.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin15AnimationEffectE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::AnimationEffect::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin15AnimationEffectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::AnimationEffect",
        "init",
        "",
        "triggerRepaint",
        "_windowClosed",
        "KWin::EffectWindow*",
        "w",
        "_windowDeleted",
        "_windowExpandedGeometryChanged",
        "Anchor",
        "Left",
        "Top",
        "Right",
        "Bottom",
        "Horizontal",
        "Vertical",
        "Mouse",
        "Attribute",
        "Opacity",
        "Brightness",
        "Saturation",
        "Scale",
        "Rotation",
        "Position",
        "Size",
        "Translation",
        "Clip",
        "Generic",
        "CrossFadePrevious",
        "Shader",
        "ShaderUniform",
        "NonFloatBase",
        "MetaType",
        "SourceAnchor",
        "TargetAnchor",
        "RelativeSourceX",
        "RelativeSourceY",
        "RelativeTargetX",
        "RelativeTargetY",
        "Axis",
        "Direction",
        "Forward",
        "Backward",
        "TerminationFlags",
        "TerminationFlag",
        "DontTerminate",
        "TerminateAtSource",
        "TerminateAtTarget"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'init'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'triggerRepaint'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot '_windowClosed'
        QtMocHelpers::SlotData<void(KWin::EffectWindow *)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot '_windowDeleted'
        QtMocHelpers::SlotData<void(KWin::EffectWindow *)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot '_windowExpandedGeometryChanged'
        QtMocHelpers::SlotData<void(KWin::EffectWindow *)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Anchor'
        QtMocHelpers::EnumData<enum Anchor>(9, 9, QMC::EnumFlags{}).add({
            {   10, Anchor::Left },
            {   11, Anchor::Top },
            {   12, Anchor::Right },
            {   13, Anchor::Bottom },
            {   14, Anchor::Horizontal },
            {   15, Anchor::Vertical },
            {   16, Anchor::Mouse },
        }),
        // enum 'Attribute'
        QtMocHelpers::EnumData<enum Attribute>(17, 17, QMC::EnumFlags{}).add({
            {   18, Attribute::Opacity },
            {   19, Attribute::Brightness },
            {   20, Attribute::Saturation },
            {   21, Attribute::Scale },
            {   22, Attribute::Rotation },
            {   23, Attribute::Position },
            {   24, Attribute::Size },
            {   25, Attribute::Translation },
            {   26, Attribute::Clip },
            {   27, Attribute::Generic },
            {   28, Attribute::CrossFadePrevious },
            {   29, Attribute::Shader },
            {   30, Attribute::ShaderUniform },
            {   31, Attribute::NonFloatBase },
        }),
        // enum 'MetaType'
        QtMocHelpers::EnumData<enum MetaType>(32, 32, QMC::EnumFlags{}).add({
            {   33, MetaType::SourceAnchor },
            {   34, MetaType::TargetAnchor },
            {   35, MetaType::RelativeSourceX },
            {   36, MetaType::RelativeSourceY },
            {   37, MetaType::RelativeTargetX },
            {   38, MetaType::RelativeTargetY },
            {   39, MetaType::Axis },
        }),
        // enum 'Direction'
        QtMocHelpers::EnumData<enum Direction>(40, 40, QMC::EnumFlags{}).add({
            {   41, Direction::Forward },
            {   42, Direction::Backward },
        }),
        // flag 'TerminationFlags'
        QtMocHelpers::EnumData<TerminationFlags>(43, 44, QMC::EnumIsFlag).add({
            {   45, TerminationFlag::DontTerminate },
            {   46, TerminationFlag::TerminateAtSource },
            {   47, TerminationFlag::TerminateAtTarget },
        }),
    };
    return QtMocHelpers::metaObjectData<AnimationEffect, qt_meta_tag_ZN4KWin15AnimationEffectE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::AnimationEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<CrossFadeEffect::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin15AnimationEffectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin15AnimationEffectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin15AnimationEffectE_t>.metaTypes,
    nullptr
} };

void KWin::AnimationEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AnimationEffect *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->triggerRepaint(); break;
        case 2: _t->_windowClosed((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 3: _t->_windowDeleted((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 4: _t->_windowExpandedGeometryChanged((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *KWin::AnimationEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::AnimationEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin15AnimationEffectE_t>.strings))
        return static_cast<void*>(this);
    return CrossFadeEffect::qt_metacast(_clname);
}

int KWin::AnimationEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CrossFadeEffect::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
