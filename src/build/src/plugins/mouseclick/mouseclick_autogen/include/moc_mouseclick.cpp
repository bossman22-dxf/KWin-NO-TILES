/****************************************************************************
** Meta object code from reading C++ file 'mouseclick.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/plugins/mouseclick/mouseclick.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mouseclick.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin16MouseClickEffectE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::MouseClickEffect::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin16MouseClickEffectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::MouseClickEffect",
        "toggleEnabled",
        "",
        "slotMouseChanged",
        "QPointF",
        "pos",
        "old",
        "Qt::MouseButtons",
        "buttons",
        "oldbuttons",
        "Qt::KeyboardModifiers",
        "modifiers",
        "oldmodifiers",
        "color1",
        "QColor",
        "color2",
        "color3",
        "lineWidth",
        "ringLife",
        "ringSize",
        "ringCount",
        "showText",
        "font",
        "QFont",
        "enabled"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'toggleEnabled'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'slotMouseChanged'
        QtMocHelpers::SlotData<void(const QPointF &, const QPointF &, Qt::MouseButtons, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::KeyboardModifiers)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 4, 6 }, { 0x80000000 | 7, 8 }, { 0x80000000 | 7, 9 },
            { 0x80000000 | 10, 11 }, { 0x80000000 | 10, 12 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'color1'
        QtMocHelpers::PropertyData<QColor>(13, 0x80000000 | 14, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'color2'
        QtMocHelpers::PropertyData<QColor>(15, 0x80000000 | 14, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'color3'
        QtMocHelpers::PropertyData<QColor>(16, 0x80000000 | 14, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'lineWidth'
        QtMocHelpers::PropertyData<qreal>(17, QMetaType::QReal, QMC::DefaultPropertyFlags),
        // property 'ringLife'
        QtMocHelpers::PropertyData<int>(18, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'ringSize'
        QtMocHelpers::PropertyData<int>(19, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'ringCount'
        QtMocHelpers::PropertyData<int>(20, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'showText'
        QtMocHelpers::PropertyData<bool>(21, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'font'
        QtMocHelpers::PropertyData<QFont>(22, 0x80000000 | 23, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'enabled'
        QtMocHelpers::PropertyData<bool>(24, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MouseClickEffect, qt_meta_tag_ZN4KWin16MouseClickEffectE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::MouseClickEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<Effect::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin16MouseClickEffectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin16MouseClickEffectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin16MouseClickEffectE_t>.metaTypes,
    nullptr
} };

void KWin::MouseClickEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MouseClickEffect *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->toggleEnabled(); break;
        case 1: _t->slotMouseChanged((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<Qt::MouseButtons>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<Qt::MouseButtons>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<Qt::KeyboardModifiers>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<Qt::KeyboardModifiers>>(_a[6]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QColor*>(_v) = _t->color1(); break;
        case 1: *reinterpret_cast<QColor*>(_v) = _t->color2(); break;
        case 2: *reinterpret_cast<QColor*>(_v) = _t->color3(); break;
        case 3: *reinterpret_cast<qreal*>(_v) = _t->lineWidth(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->ringLife(); break;
        case 5: *reinterpret_cast<int*>(_v) = _t->ringSize(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->ringCount(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->isShowText(); break;
        case 8: *reinterpret_cast<QFont*>(_v) = _t->font(); break;
        case 9: *reinterpret_cast<bool*>(_v) = _t->isEnabled(); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::MouseClickEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::MouseClickEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin16MouseClickEffectE_t>.strings))
        return static_cast<void*>(this);
    return Effect::qt_metacast(_clname);
}

int KWin::MouseClickEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Effect::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
