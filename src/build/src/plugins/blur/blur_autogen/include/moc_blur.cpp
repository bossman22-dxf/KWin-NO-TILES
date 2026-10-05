/****************************************************************************
** Meta object code from reading C++ file 'blur.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/plugins/blur/blur.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'blur.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin10BlurEffectE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::BlurEffect::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin10BlurEffectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::BlurEffect",
        "slotWindowAdded",
        "",
        "KWin::EffectWindow*",
        "w",
        "slotWindowDeleted",
        "slotViewRemoved",
        "KWin::RenderView*",
        "view",
        "slotPropertyNotify",
        "atom",
        "setupDecorationConnections",
        "EffectWindow*"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'slotWindowAdded'
        QtMocHelpers::SlotData<void(KWin::EffectWindow *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'slotWindowDeleted'
        QtMocHelpers::SlotData<void(KWin::EffectWindow *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'slotViewRemoved'
        QtMocHelpers::SlotData<void(KWin::RenderView *)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Slot 'slotPropertyNotify'
        QtMocHelpers::SlotData<void(KWin::EffectWindow *, long)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Long, 10 },
        }}),
        // Slot 'setupDecorationConnections'
        QtMocHelpers::SlotData<void(EffectWindow *)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BlurEffect, qt_meta_tag_ZN4KWin10BlurEffectE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::BlurEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<KWin::Effect::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin10BlurEffectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin10BlurEffectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin10BlurEffectE_t>.metaTypes,
    nullptr
} };

void KWin::BlurEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BlurEffect *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->slotWindowAdded((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 1: _t->slotWindowDeleted((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 2: _t->slotViewRemoved((*reinterpret_cast<std::add_pointer_t<KWin::RenderView*>>(_a[1]))); break;
        case 3: _t->slotPropertyNotify((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<long>>(_a[2]))); break;
        case 4: _t->setupDecorationConnections((*reinterpret_cast<std::add_pointer_t<EffectWindow*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *KWin::BlurEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::BlurEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin10BlurEffectE_t>.strings))
        return static_cast<void*>(this);
    return KWin::Effect::qt_metacast(_clname);
}

int KWin::BlurEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KWin::Effect::qt_metacall(_c, _id, _a);
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
