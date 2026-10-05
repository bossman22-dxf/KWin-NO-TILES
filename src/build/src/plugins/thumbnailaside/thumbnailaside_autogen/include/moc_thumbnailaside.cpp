/****************************************************************************
** Meta object code from reading C++ file 'thumbnailaside.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/plugins/thumbnailaside/thumbnailaside.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'thumbnailaside.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin20ThumbnailAsideEffectE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::ThumbnailAsideEffect::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin20ThumbnailAsideEffectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::ThumbnailAsideEffect",
        "toggleCurrentThumbnail",
        "",
        "slotWindowAdded",
        "KWin::EffectWindow*",
        "w",
        "slotWindowClosed",
        "slotWindowFrameGeometryChanged",
        "RectF",
        "old",
        "slotWindowDamaged",
        "repaintAll",
        "maxWidth",
        "spacing",
        "opacity",
        "screen"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'toggleCurrentThumbnail'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'slotWindowAdded'
        QtMocHelpers::SlotData<void(KWin::EffectWindow *)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Slot 'slotWindowClosed'
        QtMocHelpers::SlotData<void(KWin::EffectWindow *)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Slot 'slotWindowFrameGeometryChanged'
        QtMocHelpers::SlotData<void(KWin::EffectWindow *, const RectF &)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 8, 9 },
        }}),
        // Slot 'slotWindowDamaged'
        QtMocHelpers::SlotData<void(KWin::EffectWindow *)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Slot 'repaintAll'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'maxWidth'
        QtMocHelpers::PropertyData<int>(12, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'spacing'
        QtMocHelpers::PropertyData<int>(13, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'opacity'
        QtMocHelpers::PropertyData<qreal>(14, QMetaType::QReal, QMC::DefaultPropertyFlags),
        // property 'screen'
        QtMocHelpers::PropertyData<int>(15, QMetaType::Int, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ThumbnailAsideEffect, qt_meta_tag_ZN4KWin20ThumbnailAsideEffectE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::ThumbnailAsideEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<Effect::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin20ThumbnailAsideEffectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin20ThumbnailAsideEffectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin20ThumbnailAsideEffectE_t>.metaTypes,
    nullptr
} };

void KWin::ThumbnailAsideEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ThumbnailAsideEffect *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->toggleCurrentThumbnail(); break;
        case 1: _t->slotWindowAdded((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 2: _t->slotWindowClosed((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 3: _t->slotWindowFrameGeometryChanged((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<RectF>>(_a[2]))); break;
        case 4: _t->slotWindowDamaged((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 5: _t->repaintAll(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->configuredMaxWidth(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->configuredSpacing(); break;
        case 2: *reinterpret_cast<qreal*>(_v) = _t->configuredOpacity(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->configuredScreen(); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::ThumbnailAsideEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::ThumbnailAsideEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin20ThumbnailAsideEffectE_t>.strings))
        return static_cast<void*>(this);
    return Effect::qt_metacast(_clname);
}

int KWin::ThumbnailAsideEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Effect::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
