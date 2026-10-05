/****************************************************************************
** Meta object code from reading C++ file 'inputmethod_v1.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/wayland/inputmethod_v1.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputmethod_v1.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin22InputMethodV1InterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::InputMethodV1Interface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin22InputMethodV1InterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::InputMethodV1Interface"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<InputMethodV1Interface, qt_meta_tag_ZN4KWin22InputMethodV1InterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::InputMethodV1Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin22InputMethodV1InterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin22InputMethodV1InterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin22InputMethodV1InterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::InputMethodV1Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InputMethodV1Interface *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::InputMethodV1Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::InputMethodV1Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin22InputMethodV1InterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::InputMethodV1Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin29InputMethodContextV1InterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::InputMethodContextV1Interface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin29InputMethodContextV1InterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::InputMethodContextV1Interface",
        "commitString",
        "",
        "serial",
        "text",
        "preeditString",
        "commit",
        "preeditStyling",
        "index",
        "length",
        "style",
        "preeditCursor",
        "deleteSurroundingText",
        "cursorPosition",
        "anchor",
        "keysym",
        "time",
        "sym",
        "KeyboardKeyState",
        "state",
        "modifiers",
        "key",
        "mods_depressed",
        "mods_latched",
        "mods_locked",
        "group",
        "language",
        "textDirection",
        "Qt::LayoutDirection",
        "direction",
        "keyboardGrabRequested",
        "InputMethodGrabV1*",
        "keyboardGrab",
        "modifiersMap",
        "map"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'commitString'
        QtMocHelpers::SignalData<void(quint32, const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 3 }, { QMetaType::QString, 4 },
        }}),
        // Signal 'preeditString'
        QtMocHelpers::SignalData<void(quint32, const QString &, const QString &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 3 }, { QMetaType::QString, 4 }, { QMetaType::QString, 6 },
        }}),
        // Signal 'preeditStyling'
        QtMocHelpers::SignalData<void(quint32, quint32, quint32)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 8 }, { QMetaType::UInt, 9 }, { QMetaType::UInt, 10 },
        }}),
        // Signal 'preeditCursor'
        QtMocHelpers::SignalData<void(qint32)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Signal 'deleteSurroundingText'
        QtMocHelpers::SignalData<void(qint32, quint32)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 8 }, { QMetaType::UInt, 9 },
        }}),
        // Signal 'cursorPosition'
        QtMocHelpers::SignalData<void(qint32, qint32)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 8 }, { QMetaType::Int, 14 },
        }}),
        // Signal 'keysym'
        QtMocHelpers::SignalData<void(quint32, quint32, quint32, KeyboardKeyState, quint32)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 3 }, { QMetaType::UInt, 16 }, { QMetaType::UInt, 17 }, { 0x80000000 | 18, 19 },
            { QMetaType::UInt, 20 },
        }}),
        // Signal 'key'
        QtMocHelpers::SignalData<void(quint32, quint32, quint32, KeyboardKeyState)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 3 }, { QMetaType::UInt, 16 }, { QMetaType::UInt, 21 }, { 0x80000000 | 18, 19 },
        }}),
        // Signal 'modifiers'
        QtMocHelpers::SignalData<void(quint32, quint32, quint32, quint32, quint32)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 3 }, { QMetaType::UInt, 22 }, { QMetaType::UInt, 23 }, { QMetaType::UInt, 24 },
            { QMetaType::UInt, 25 },
        }}),
        // Signal 'language'
        QtMocHelpers::SignalData<void(quint32, const QString &)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 3 }, { QMetaType::QString, 26 },
        }}),
        // Signal 'textDirection'
        QtMocHelpers::SignalData<void(quint32, Qt::LayoutDirection)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 3 }, { 0x80000000 | 28, 29 },
        }}),
        // Signal 'keyboardGrabRequested'
        QtMocHelpers::SignalData<void(InputMethodGrabV1 *)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 31, 32 },
        }}),
        // Signal 'modifiersMap'
        QtMocHelpers::SignalData<void(const QByteArray &)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QByteArray, 34 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<InputMethodContextV1Interface, qt_meta_tag_ZN4KWin29InputMethodContextV1InterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::InputMethodContextV1Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin29InputMethodContextV1InterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin29InputMethodContextV1InterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin29InputMethodContextV1InterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::InputMethodContextV1Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InputMethodContextV1Interface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->commitString((*reinterpret_cast<std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->preeditString((*reinterpret_cast<std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 2: _t->preeditStyling((*reinterpret_cast<std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[3]))); break;
        case 3: _t->preeditCursor((*reinterpret_cast<std::add_pointer_t<qint32>>(_a[1]))); break;
        case 4: _t->deleteSurroundingText((*reinterpret_cast<std::add_pointer_t<qint32>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[2]))); break;
        case 5: _t->cursorPosition((*reinterpret_cast<std::add_pointer_t<qint32>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qint32>>(_a[2]))); break;
        case 6: _t->keysym((*reinterpret_cast<std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<KeyboardKeyState>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[5]))); break;
        case 7: _t->key((*reinterpret_cast<std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<KeyboardKeyState>>(_a[4]))); break;
        case 8: _t->modifiers((*reinterpret_cast<std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[5]))); break;
        case 9: _t->language((*reinterpret_cast<std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 10: _t->textDirection((*reinterpret_cast<std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Qt::LayoutDirection>>(_a[2]))); break;
        case 11: _t->keyboardGrabRequested((*reinterpret_cast<std::add_pointer_t<InputMethodGrabV1*>>(_a[1]))); break;
        case 12: _t->modifiersMap((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputMethodGrabV1* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (InputMethodContextV1Interface::*)(quint32 , const QString & )>(_a, &InputMethodContextV1Interface::commitString, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputMethodContextV1Interface::*)(quint32 , const QString & , const QString & )>(_a, &InputMethodContextV1Interface::preeditString, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputMethodContextV1Interface::*)(quint32 , quint32 , quint32 )>(_a, &InputMethodContextV1Interface::preeditStyling, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputMethodContextV1Interface::*)(qint32 )>(_a, &InputMethodContextV1Interface::preeditCursor, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputMethodContextV1Interface::*)(qint32 , quint32 )>(_a, &InputMethodContextV1Interface::deleteSurroundingText, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputMethodContextV1Interface::*)(qint32 , qint32 )>(_a, &InputMethodContextV1Interface::cursorPosition, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputMethodContextV1Interface::*)(quint32 , quint32 , quint32 , KeyboardKeyState , quint32 )>(_a, &InputMethodContextV1Interface::keysym, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputMethodContextV1Interface::*)(quint32 , quint32 , quint32 , KeyboardKeyState )>(_a, &InputMethodContextV1Interface::key, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputMethodContextV1Interface::*)(quint32 , quint32 , quint32 , quint32 , quint32 )>(_a, &InputMethodContextV1Interface::modifiers, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputMethodContextV1Interface::*)(quint32 , const QString & )>(_a, &InputMethodContextV1Interface::language, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputMethodContextV1Interface::*)(quint32 , Qt::LayoutDirection )>(_a, &InputMethodContextV1Interface::textDirection, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputMethodContextV1Interface::*)(InputMethodGrabV1 * )>(_a, &InputMethodContextV1Interface::keyboardGrabRequested, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputMethodContextV1Interface::*)(const QByteArray & )>(_a, &InputMethodContextV1Interface::modifiersMap, 12))
            return;
    }
}

const QMetaObject *KWin::InputMethodContextV1Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::InputMethodContextV1Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin29InputMethodContextV1InterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::InputMethodContextV1Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void KWin::InputMethodContextV1Interface::commitString(quint32 _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void KWin::InputMethodContextV1Interface::preeditString(quint32 _t1, const QString & _t2, const QString & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3);
}

// SIGNAL 2
void KWin::InputMethodContextV1Interface::preeditStyling(quint32 _t1, quint32 _t2, quint32 _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2, _t3);
}

// SIGNAL 3
void KWin::InputMethodContextV1Interface::preeditCursor(qint32 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void KWin::InputMethodContextV1Interface::deleteSurroundingText(qint32 _t1, quint32 _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}

// SIGNAL 5
void KWin::InputMethodContextV1Interface::cursorPosition(qint32 _t1, qint32 _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2);
}

// SIGNAL 6
void KWin::InputMethodContextV1Interface::keysym(quint32 _t1, quint32 _t2, quint32 _t3, KeyboardKeyState _t4, quint32 _t5)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1, _t2, _t3, _t4, _t5);
}

// SIGNAL 7
void KWin::InputMethodContextV1Interface::key(quint32 _t1, quint32 _t2, quint32 _t3, KeyboardKeyState _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 8
void KWin::InputMethodContextV1Interface::modifiers(quint32 _t1, quint32 _t2, quint32 _t3, quint32 _t4, quint32 _t5)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1, _t2, _t3, _t4, _t5);
}

// SIGNAL 9
void KWin::InputMethodContextV1Interface::language(quint32 _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1, _t2);
}

// SIGNAL 10
void KWin::InputMethodContextV1Interface::textDirection(quint32 _t1, Qt::LayoutDirection _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1, _t2);
}

// SIGNAL 11
void KWin::InputMethodContextV1Interface::keyboardGrabRequested(InputMethodGrabV1 * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void KWin::InputMethodContextV1Interface::modifiersMap(const QByteArray & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN4KWin21InputPanelV1InterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::InputPanelV1Interface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin21InputPanelV1InterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::InputPanelV1Interface",
        "inputPanelSurfaceAdded",
        "",
        "InputPanelSurfaceV1Interface*",
        "surface"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'inputPanelSurfaceAdded'
        QtMocHelpers::SignalData<void(InputPanelSurfaceV1Interface *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<InputPanelV1Interface, qt_meta_tag_ZN4KWin21InputPanelV1InterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::InputPanelV1Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21InputPanelV1InterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21InputPanelV1InterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin21InputPanelV1InterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::InputPanelV1Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InputPanelV1Interface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->inputPanelSurfaceAdded((*reinterpret_cast<std::add_pointer_t<InputPanelSurfaceV1Interface*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< InputPanelSurfaceV1Interface* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (InputPanelV1Interface::*)(InputPanelSurfaceV1Interface * )>(_a, &InputPanelV1Interface::inputPanelSurfaceAdded, 0))
            return;
    }
}

const QMetaObject *KWin::InputPanelV1Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::InputPanelV1Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21InputPanelV1InterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::InputPanelV1Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void KWin::InputPanelV1Interface::inputPanelSurfaceAdded(InputPanelSurfaceV1Interface * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN4KWin28InputPanelSurfaceV1InterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::InputPanelSurfaceV1Interface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin28InputPanelSurfaceV1InterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::InputPanelSurfaceV1Interface",
        "topLevel",
        "",
        "OutputInterface*",
        "output",
        "Position",
        "position",
        "overlayPanel",
        "aboutToBeDestroyed",
        "CenterBottom"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'topLevel'
        QtMocHelpers::SignalData<void(OutputInterface *, enum Position)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
        // Signal 'overlayPanel'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'aboutToBeDestroyed'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Position'
        QtMocHelpers::EnumData<enum Position>(5, 5, QMC::EnumFlags{}).add({
            {    9, Position::CenterBottom },
        }),
    };
    return QtMocHelpers::metaObjectData<InputPanelSurfaceV1Interface, qt_meta_tag_ZN4KWin28InputPanelSurfaceV1InterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::InputPanelSurfaceV1Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin28InputPanelSurfaceV1InterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin28InputPanelSurfaceV1InterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin28InputPanelSurfaceV1InterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::InputPanelSurfaceV1Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InputPanelSurfaceV1Interface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->topLevel((*reinterpret_cast<std::add_pointer_t<OutputInterface*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<enum Position>>(_a[2]))); break;
        case 1: _t->overlayPanel(); break;
        case 2: _t->aboutToBeDestroyed(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (InputPanelSurfaceV1Interface::*)(OutputInterface * , Position )>(_a, &InputPanelSurfaceV1Interface::topLevel, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputPanelSurfaceV1Interface::*)()>(_a, &InputPanelSurfaceV1Interface::overlayPanel, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputPanelSurfaceV1Interface::*)()>(_a, &InputPanelSurfaceV1Interface::aboutToBeDestroyed, 2))
            return;
    }
}

const QMetaObject *KWin::InputPanelSurfaceV1Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::InputPanelSurfaceV1Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin28InputPanelSurfaceV1InterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::InputPanelSurfaceV1Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void KWin::InputPanelSurfaceV1Interface::topLevel(OutputInterface * _t1, Position _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void KWin::InputPanelSurfaceV1Interface::overlayPanel()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::InputPanelSurfaceV1Interface::aboutToBeDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
namespace {
struct qt_meta_tag_ZN4KWin17InputMethodGrabV1E_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::InputMethodGrabV1::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin17InputMethodGrabV1E_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::InputMethodGrabV1"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<InputMethodGrabV1, qt_meta_tag_ZN4KWin17InputMethodGrabV1E_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::InputMethodGrabV1::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17InputMethodGrabV1E_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17InputMethodGrabV1E_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin17InputMethodGrabV1E_t>.metaTypes,
    nullptr
} };

void KWin::InputMethodGrabV1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InputMethodGrabV1 *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::InputMethodGrabV1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::InputMethodGrabV1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17InputMethodGrabV1E_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::InputMethodGrabV1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
