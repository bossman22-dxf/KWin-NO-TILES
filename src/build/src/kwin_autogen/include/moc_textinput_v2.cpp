/****************************************************************************
** Meta object code from reading C++ file 'textinput_v2.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/wayland/textinput_v2.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textinput_v2.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin27TextInputManagerV2InterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::TextInputManagerV2Interface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin27TextInputManagerV2InterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::TextInputManagerV2Interface"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TextInputManagerV2Interface, qt_meta_tag_ZN4KWin27TextInputManagerV2InterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::TextInputManagerV2Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin27TextInputManagerV2InterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin27TextInputManagerV2InterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin27TextInputManagerV2InterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::TextInputManagerV2Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TextInputManagerV2Interface *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::TextInputManagerV2Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::TextInputManagerV2Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin27TextInputManagerV2InterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::TextInputManagerV2Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin20TextInputV2InterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::TextInputV2Interface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin20TextInputV2InterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::TextInputV2Interface",
        "requestShowInputPanel",
        "",
        "requestHideInputPanel",
        "preferredLanguageChanged",
        "language",
        "cursorRectangleChanged",
        "RectF",
        "rect",
        "contentTypeChanged",
        "surroundingTextChanged",
        "enabledChanged",
        "stateUpdated",
        "uint32_t",
        "serial",
        "UpdateReason",
        "reason",
        "StateChange",
        "StateFull",
        "StateReset",
        "StateEnter"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'requestShowInputPanel'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'requestHideInputPanel'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'preferredLanguageChanged'
        QtMocHelpers::SignalData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Signal 'cursorRectangleChanged'
        QtMocHelpers::SignalData<void(const RectF &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Signal 'contentTypeChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'surroundingTextChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'enabledChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'stateUpdated'
        QtMocHelpers::SignalData<void(uint32_t, enum UpdateReason)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 }, { 0x80000000 | 15, 16 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'UpdateReason'
        QtMocHelpers::EnumData<enum UpdateReason>(15, 15, QMC::EnumIsScoped).add({
            {   17, UpdateReason::StateChange },
            {   18, UpdateReason::StateFull },
            {   19, UpdateReason::StateReset },
            {   20, UpdateReason::StateEnter },
        }),
    };
    return QtMocHelpers::metaObjectData<TextInputV2Interface, qt_meta_tag_ZN4KWin20TextInputV2InterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::TextInputV2Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin20TextInputV2InterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin20TextInputV2InterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin20TextInputV2InterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::TextInputV2Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TextInputV2Interface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->requestShowInputPanel(); break;
        case 1: _t->requestHideInputPanel(); break;
        case 2: _t->preferredLanguageChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->cursorRectangleChanged((*reinterpret_cast<std::add_pointer_t<RectF>>(_a[1]))); break;
        case 4: _t->contentTypeChanged(); break;
        case 5: _t->surroundingTextChanged(); break;
        case 6: _t->enabledChanged(); break;
        case 7: _t->stateUpdated((*reinterpret_cast<std::add_pointer_t<uint32_t>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<enum UpdateReason>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TextInputV2Interface::*)()>(_a, &TextInputV2Interface::requestShowInputPanel, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextInputV2Interface::*)()>(_a, &TextInputV2Interface::requestHideInputPanel, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextInputV2Interface::*)(const QString & )>(_a, &TextInputV2Interface::preferredLanguageChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextInputV2Interface::*)(const RectF & )>(_a, &TextInputV2Interface::cursorRectangleChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextInputV2Interface::*)()>(_a, &TextInputV2Interface::contentTypeChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextInputV2Interface::*)()>(_a, &TextInputV2Interface::surroundingTextChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextInputV2Interface::*)()>(_a, &TextInputV2Interface::enabledChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextInputV2Interface::*)(uint32_t , UpdateReason )>(_a, &TextInputV2Interface::stateUpdated, 7))
            return;
    }
}

const QMetaObject *KWin::TextInputV2Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::TextInputV2Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin20TextInputV2InterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::TextInputV2Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void KWin::TextInputV2Interface::requestShowInputPanel()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::TextInputV2Interface::requestHideInputPanel()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::TextInputV2Interface::preferredLanguageChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void KWin::TextInputV2Interface::cursorRectangleChanged(const RectF & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void KWin::TextInputV2Interface::contentTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KWin::TextInputV2Interface::surroundingTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KWin::TextInputV2Interface::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void KWin::TextInputV2Interface::stateUpdated(uint32_t _t1, UpdateReason _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1, _t2);
}
QT_WARNING_POP
