/****************************************************************************
** Meta object code from reading C++ file 'diminactive.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/plugins/diminactive/diminactive.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'diminactive.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin17DimInactiveEffectE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::DimInactiveEffect::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin17DimInactiveEffectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::DimInactiveEffect",
        "windowActivated",
        "",
        "EffectWindow*",
        "w",
        "windowAdded",
        "windowClosed",
        "windowDeleted",
        "activeFullScreenEffectChanged",
        "updateActiveWindow",
        "dimStrength",
        "dimPanels",
        "dimDesktop",
        "dimKeepAbove",
        "dimByGroup",
        "dimFullScreen"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'windowActivated'
        QtMocHelpers::SlotData<void(EffectWindow *)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'windowAdded'
        QtMocHelpers::SlotData<void(EffectWindow *)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'windowClosed'
        QtMocHelpers::SlotData<void(EffectWindow *)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'windowDeleted'
        QtMocHelpers::SlotData<void(EffectWindow *)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'activeFullScreenEffectChanged'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateActiveWindow'
        QtMocHelpers::SlotData<void(EffectWindow *)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'dimStrength'
        QtMocHelpers::PropertyData<int>(10, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'dimPanels'
        QtMocHelpers::PropertyData<bool>(11, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'dimDesktop'
        QtMocHelpers::PropertyData<bool>(12, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'dimKeepAbove'
        QtMocHelpers::PropertyData<bool>(13, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'dimByGroup'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'dimFullScreen'
        QtMocHelpers::PropertyData<bool>(15, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DimInactiveEffect, qt_meta_tag_ZN4KWin17DimInactiveEffectE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::DimInactiveEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<Effect::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17DimInactiveEffectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17DimInactiveEffectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin17DimInactiveEffectE_t>.metaTypes,
    nullptr
} };

void KWin::DimInactiveEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DimInactiveEffect *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->windowActivated((*reinterpret_cast<std::add_pointer_t<EffectWindow*>>(_a[1]))); break;
        case 1: _t->windowAdded((*reinterpret_cast<std::add_pointer_t<EffectWindow*>>(_a[1]))); break;
        case 2: _t->windowClosed((*reinterpret_cast<std::add_pointer_t<EffectWindow*>>(_a[1]))); break;
        case 3: _t->windowDeleted((*reinterpret_cast<std::add_pointer_t<EffectWindow*>>(_a[1]))); break;
        case 4: _t->activeFullScreenEffectChanged(); break;
        case 5: _t->updateActiveWindow((*reinterpret_cast<std::add_pointer_t<EffectWindow*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->dimStrength(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->dimPanels(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->dimDesktop(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->dimKeepAbove(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->dimByGroup(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->dimFullScreen(); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::DimInactiveEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::DimInactiveEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17DimInactiveEffectE_t>.strings))
        return static_cast<void*>(this);
    return Effect::qt_metacast(_clname);
}

int KWin::DimInactiveEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
