/****************************************************************************
** Meta object code from reading C++ file 'xkb.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/xkb.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xkb.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin3XkbE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::Xkb::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin3XkbE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::Xkb",
        "ledsChanged",
        "",
        "LEDs",
        "leds",
        "modifierStateChanged",
        "reconfigure",
        "Modifier",
        "NoModifier",
        "Shift",
        "Lock",
        "Control",
        "Mod1",
        "Num",
        "Mod3",
        "Mod4",
        "Mod5"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'ledsChanged'
        QtMocHelpers::SignalData<void(const LEDs &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'modifierStateChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'reconfigure'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Modifier'
        QtMocHelpers::EnumData<enum Modifier>(7, 7, QMC::EnumFlags{}).add({
            {    8, Modifier::NoModifier },
            {    9, Modifier::Shift },
            {   10, Modifier::Lock },
            {   11, Modifier::Control },
            {   12, Modifier::Mod1 },
            {   13, Modifier::Num },
            {   14, Modifier::Mod3 },
            {   15, Modifier::Mod4 },
            {   16, Modifier::Mod5 },
        }),
    };
    return QtMocHelpers::metaObjectData<Xkb, qt_meta_tag_ZN4KWin3XkbE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::Xkb::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin3XkbE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin3XkbE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin3XkbE_t>.metaTypes,
    nullptr
} };

void KWin::Xkb::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Xkb *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->ledsChanged((*reinterpret_cast<std::add_pointer_t<LEDs>>(_a[1]))); break;
        case 1: _t->modifierStateChanged(); break;
        case 2: _t->reconfigure(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Xkb::*)(const LEDs & )>(_a, &Xkb::ledsChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Xkb::*)()>(_a, &Xkb::modifierStateChanged, 1))
            return;
    }
}

const QMetaObject *KWin::Xkb::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::Xkb::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin3XkbE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::Xkb::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void KWin::Xkb::ledsChanged(const LEDs & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void KWin::Xkb::modifierStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
