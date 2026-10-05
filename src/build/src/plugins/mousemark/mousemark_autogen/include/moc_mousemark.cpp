/****************************************************************************
** Meta object code from reading C++ file 'mousemark.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/plugins/mousemark/mousemark.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mousemark.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin15MouseMarkEffectE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::MouseMarkEffect::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin15MouseMarkEffectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::MouseMarkEffect",
        "clear",
        "",
        "clearLast",
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
        "screenLockingChanged",
        "locked",
        "width",
        "color",
        "QColor"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'clear'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'clearLast'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'slotMouseChanged'
        QtMocHelpers::SlotData<void(const QPointF &, const QPointF &, Qt::MouseButtons, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::KeyboardModifiers)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 5, 6 }, { 0x80000000 | 5, 7 }, { 0x80000000 | 8, 9 }, { 0x80000000 | 8, 10 },
            { 0x80000000 | 11, 12 }, { 0x80000000 | 11, 13 },
        }}),
        // Slot 'screenLockingChanged'
        QtMocHelpers::SlotData<void(bool)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 15 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'width'
        QtMocHelpers::PropertyData<int>(16, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'color'
        QtMocHelpers::PropertyData<QColor>(17, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'modifiers'
        QtMocHelpers::PropertyData<Qt::KeyboardModifiers>(12, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MouseMarkEffect, qt_meta_tag_ZN4KWin15MouseMarkEffectE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::MouseMarkEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<Effect::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin15MouseMarkEffectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin15MouseMarkEffectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin15MouseMarkEffectE_t>.metaTypes,
    nullptr
} };

void KWin::MouseMarkEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MouseMarkEffect *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->clear(); break;
        case 1: _t->clearLast(); break;
        case 2: _t->slotMouseChanged((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<Qt::MouseButtons>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<Qt::MouseButtons>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<Qt::KeyboardModifiers>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<Qt::KeyboardModifiers>>(_a[6]))); break;
        case 3: _t->screenLockingChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->configuredWidth(); break;
        case 1: *reinterpret_cast<QColor*>(_v) = _t->configuredColor(); break;
        case 2: *reinterpret_cast<Qt::KeyboardModifiers*>(_v) = _t->freedraw_modifiers(); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::MouseMarkEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::MouseMarkEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin15MouseMarkEffectE_t>.strings))
        return static_cast<void*>(this);
    return Effect::qt_metacast(_clname);
}

int KWin::MouseMarkEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Effect::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
