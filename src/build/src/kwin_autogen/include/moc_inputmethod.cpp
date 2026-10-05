/****************************************************************************
** Meta object code from reading C++ file 'inputmethod.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/inputmethod.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputmethod.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin11InputMethodE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::InputMethod::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin11InputMethodE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::InputMethod",
        "panelChanged",
        "",
        "activeChanged",
        "active",
        "modeChanged",
        "VirtualKeyboardVisibility",
        "mode",
        "visibleChanged",
        "availableChanged",
        "activeClientSupportsTextInputChanged",
        "cursorRectangleChanged",
        "activeWindowChanged",
        "handleFocusedSurfaceChanged",
        "surroundingTextChanged",
        "contentTypeChanged",
        "textInputInterfaceV2EnabledChanged",
        "textInputInterfaceV3EnabledChanged",
        "stateCommitted",
        "uint32_t",
        "serial",
        "textInputInterfaceV2StateUpdated",
        "KWin::TextInputV2Interface::UpdateReason",
        "reason",
        "textInputInterfaceV3EnableRequested",
        "setPreeditString",
        "text",
        "commit",
        "setPreeditStyling",
        "index",
        "length",
        "style",
        "setPreeditCursor",
        "key",
        "time",
        "KWin::KeyboardKeyState",
        "state",
        "modifiers",
        "mods_depressed",
        "mods_latched",
        "mods_locked",
        "group",
        "Never",
        "NonMouseInput",
        "AnyInput"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'panelChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activeChanged'
        QtMocHelpers::SignalData<void(bool)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'modeChanged'
        QtMocHelpers::SignalData<void(enum VirtualKeyboardVisibility)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Signal 'visibleChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'availableChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activeClientSupportsTextInputChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'cursorRectangleChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activeWindowChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'handleFocusedSurfaceChanged'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'surroundingTextChanged'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'contentTypeChanged'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'textInputInterfaceV2EnabledChanged'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'textInputInterfaceV3EnabledChanged'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'stateCommitted'
        QtMocHelpers::SlotData<void(uint32_t)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Slot 'textInputInterfaceV2StateUpdated'
        QtMocHelpers::SlotData<void(quint32, KWin::TextInputV2Interface::UpdateReason)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::UInt, 20 }, { 0x80000000 | 22, 23 },
        }}),
        // Slot 'textInputInterfaceV3EnableRequested'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setPreeditString'
        QtMocHelpers::SlotData<void(uint32_t, const QString &, const QString &)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 19, 20 }, { QMetaType::QString, 26 }, { QMetaType::QString, 27 },
        }}),
        // Slot 'setPreeditStyling'
        QtMocHelpers::SlotData<void(quint32, quint32, quint32)>(28, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::UInt, 29 }, { QMetaType::UInt, 30 }, { QMetaType::UInt, 31 },
        }}),
        // Slot 'setPreeditCursor'
        QtMocHelpers::SlotData<void(qint32)>(32, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 29 },
        }}),
        // Slot 'key'
        QtMocHelpers::SlotData<void(quint32, quint32, quint32, KWin::KeyboardKeyState)>(33, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::UInt, 20 }, { QMetaType::UInt, 34 }, { QMetaType::UInt, 33 }, { 0x80000000 | 35, 36 },
        }}),
        // Slot 'modifiers'
        QtMocHelpers::SlotData<void(quint32, quint32, quint32, quint32, quint32)>(37, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::UInt, 20 }, { QMetaType::UInt, 38 }, { QMetaType::UInt, 39 }, { QMetaType::UInt, 40 },
            { QMetaType::UInt, 41 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'VirtualKeyboardVisibility'
        QtMocHelpers::EnumData<enum VirtualKeyboardVisibility>(6, 6, QMC::EnumIsScoped).add({
            {   42, VirtualKeyboardVisibility::Never },
            {   43, VirtualKeyboardVisibility::NonMouseInput },
            {   44, VirtualKeyboardVisibility::AnyInput },
        }),
    };
    return QtMocHelpers::metaObjectData<InputMethod, qt_meta_tag_ZN4KWin11InputMethodE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::InputMethod::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin11InputMethodE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin11InputMethodE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin11InputMethodE_t>.metaTypes,
    nullptr
} };

void KWin::InputMethod::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InputMethod *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->panelChanged(); break;
        case 1: _t->activeChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->modeChanged((*reinterpret_cast<std::add_pointer_t<enum VirtualKeyboardVisibility>>(_a[1]))); break;
        case 3: _t->visibleChanged(); break;
        case 4: _t->availableChanged(); break;
        case 5: _t->activeClientSupportsTextInputChanged(); break;
        case 6: _t->cursorRectangleChanged(); break;
        case 7: _t->activeWindowChanged(); break;
        case 8: _t->handleFocusedSurfaceChanged(); break;
        case 9: _t->surroundingTextChanged(); break;
        case 10: _t->contentTypeChanged(); break;
        case 11: _t->textInputInterfaceV2EnabledChanged(); break;
        case 12: _t->textInputInterfaceV3EnabledChanged(); break;
        case 13: _t->stateCommitted((*reinterpret_cast<std::add_pointer_t<uint32_t>>(_a[1]))); break;
        case 14: _t->textInputInterfaceV2StateUpdated((*reinterpret_cast<std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<KWin::TextInputV2Interface::UpdateReason>>(_a[2]))); break;
        case 15: _t->textInputInterfaceV3EnableRequested(); break;
        case 16: _t->setPreeditString((*reinterpret_cast<std::add_pointer_t<uint32_t>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 17: _t->setPreeditStyling((*reinterpret_cast<std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[3]))); break;
        case 18: _t->setPreeditCursor((*reinterpret_cast<std::add_pointer_t<qint32>>(_a[1]))); break;
        case 19: _t->key((*reinterpret_cast<std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<KWin::KeyboardKeyState>>(_a[4]))); break;
        case 20: _t->modifiers((*reinterpret_cast<std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[5]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::TextInputV2Interface::UpdateReason >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (InputMethod::*)()>(_a, &InputMethod::panelChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputMethod::*)(bool )>(_a, &InputMethod::activeChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputMethod::*)(VirtualKeyboardVisibility )>(_a, &InputMethod::modeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputMethod::*)()>(_a, &InputMethod::visibleChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputMethod::*)()>(_a, &InputMethod::availableChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputMethod::*)()>(_a, &InputMethod::activeClientSupportsTextInputChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputMethod::*)()>(_a, &InputMethod::cursorRectangleChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputMethod::*)()>(_a, &InputMethod::activeWindowChanged, 7))
            return;
    }
}

const QMetaObject *KWin::InputMethod::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::InputMethod::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin11InputMethodE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::InputMethod::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void KWin::InputMethod::panelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::InputMethod::activeChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void KWin::InputMethod::modeChanged(VirtualKeyboardVisibility _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void KWin::InputMethod::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWin::InputMethod::availableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KWin::InputMethod::activeClientSupportsTextInputChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KWin::InputMethod::cursorRectangleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void KWin::InputMethod::activeWindowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
