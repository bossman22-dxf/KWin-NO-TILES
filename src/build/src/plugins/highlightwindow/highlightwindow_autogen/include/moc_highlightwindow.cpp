/****************************************************************************
** Meta object code from reading C++ file 'highlightwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/plugins/highlightwindow/highlightwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'highlightwindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin21HighlightWindowEffectE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::HighlightWindowEffect::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin21HighlightWindowEffectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::HighlightWindowEffect",
        "slotWindowAdded",
        "",
        "KWin::EffectWindow*",
        "w",
        "slotWindowDeleted",
        "highlightWindows",
        "windows"
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
        // Method 'highlightWindows'
        QtMocHelpers::MethodData<void(const QStringList &)>(6, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::QStringList, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<HighlightWindowEffect, qt_meta_tag_ZN4KWin21HighlightWindowEffectE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::HighlightWindowEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<AnimationEffect::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21HighlightWindowEffectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21HighlightWindowEffectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin21HighlightWindowEffectE_t>.metaTypes,
    nullptr
} };

void KWin::HighlightWindowEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<HighlightWindowEffect *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->slotWindowAdded((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 1: _t->slotWindowDeleted((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1]))); break;
        case 2: _t->highlightWindows((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *KWin::HighlightWindowEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::HighlightWindowEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21HighlightWindowEffectE_t>.strings))
        return static_cast<void*>(this);
    return AnimationEffect::qt_metacast(_clname);
}

int KWin::HighlightWindowEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AnimationEffect::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
