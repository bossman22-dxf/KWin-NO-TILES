/****************************************************************************
** Meta object code from reading C++ file 'slide.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/plugins/slide/slide.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'slide.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin11SlideEffectE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::SlideEffect::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin11SlideEffectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::SlideEffect",
        "desktopChanged",
        "",
        "VirtualDesktop*",
        "old",
        "current",
        "EffectWindow*",
        "with",
        "LogicalOutput*",
        "output",
        "desktopChanging",
        "QPointF",
        "desktopOffset",
        "desktopChangingCancelled",
        "windowAdded",
        "w",
        "windowDeleted",
        "horizontalGap",
        "verticalGap",
        "slideBackground"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'desktopChanged'
        QtMocHelpers::SlotData<void(VirtualDesktop *, VirtualDesktop *, EffectWindow *, LogicalOutput *)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 3, 5 }, { 0x80000000 | 6, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Slot 'desktopChanging'
        QtMocHelpers::SlotData<void(VirtualDesktop *, QPointF, EffectWindow *, LogicalOutput *)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 11, 12 }, { 0x80000000 | 6, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Slot 'desktopChangingCancelled'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'windowAdded'
        QtMocHelpers::SlotData<void(EffectWindow *)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 6, 15 },
        }}),
        // Slot 'windowDeleted'
        QtMocHelpers::SlotData<void(EffectWindow *)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 6, 15 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'horizontalGap'
        QtMocHelpers::PropertyData<int>(17, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'verticalGap'
        QtMocHelpers::PropertyData<int>(18, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'slideBackground'
        QtMocHelpers::PropertyData<bool>(19, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SlideEffect, qt_meta_tag_ZN4KWin11SlideEffectE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::SlideEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<Effect::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin11SlideEffectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin11SlideEffectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin11SlideEffectE_t>.metaTypes,
    nullptr
} };

void KWin::SlideEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SlideEffect *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->desktopChanged((*reinterpret_cast<std::add_pointer_t<VirtualDesktop*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<VirtualDesktop*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<EffectWindow*>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<LogicalOutput*>>(_a[4]))); break;
        case 1: _t->desktopChanging((*reinterpret_cast<std::add_pointer_t<VirtualDesktop*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<EffectWindow*>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<LogicalOutput*>>(_a[4]))); break;
        case 2: _t->desktopChangingCancelled(); break;
        case 3: _t->windowAdded((*reinterpret_cast<std::add_pointer_t<EffectWindow*>>(_a[1]))); break;
        case 4: _t->windowDeleted((*reinterpret_cast<std::add_pointer_t<EffectWindow*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< EffectWindow* >(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LogicalOutput* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< EffectWindow* >(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LogicalOutput* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< EffectWindow* >(); break;
            }
            break;
        case 4:
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
        case 0: *reinterpret_cast<int*>(_v) = _t->horizontalGap(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->verticalGap(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->slideBackground(); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::SlideEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::SlideEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin11SlideEffectE_t>.strings))
        return static_cast<void*>(this);
    return Effect::qt_metacast(_clname);
}

int KWin::SlideEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Effect::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
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
