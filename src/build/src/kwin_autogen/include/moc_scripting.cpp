/****************************************************************************
** Meta object code from reading C++ file 'scripting.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/scripting/scripting.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scripting.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin14AbstractScriptE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::AbstractScript::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin14AbstractScriptE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::AbstractScript",
        "runningChanged",
        "",
        "stop",
        "run"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'runningChanged'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'stop'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'run'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AbstractScript, qt_meta_tag_ZN4KWin14AbstractScriptE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::AbstractScript::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin14AbstractScriptE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin14AbstractScriptE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin14AbstractScriptE_t>.metaTypes,
    nullptr
} };

void KWin::AbstractScript::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AbstractScript *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->runningChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->stop(); break;
        case 2: _t->run(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AbstractScript::*)(bool )>(_a, &AbstractScript::runningChanged, 0))
            return;
    }
}

const QMetaObject *KWin::AbstractScript::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::AbstractScript::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin14AbstractScriptE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::AbstractScript::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void KWin::AbstractScript::runningChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN4KWin11ScriptTimerE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::ScriptTimer::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin11ScriptTimerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::ScriptTimer",
        "ScriptTimer",
        "",
        "parent"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    using Constructor = QtMocHelpers::NoType;
    QtMocHelpers::UintData qt_constructors {
        QtMocHelpers::ConstructorData<Constructor(QObject *)>(2, QMC::AccessPublic, {{
            { QMetaType::QObjectStar, 3 },
        }}),
        QtMocHelpers::ConstructorData<Constructor()>(2, QMC::AccessPublic | QMC::MethodCloned),
    };
    return QtMocHelpers::metaObjectData<ScriptTimer, qt_meta_tag_ZN4KWin11ScriptTimerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors);
}
Q_CONSTINIT const QMetaObject KWin::ScriptTimer::staticMetaObject = { {
    QMetaObject::SuperData::link<QTimer::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin11ScriptTimerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin11ScriptTimerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin11ScriptTimerE_t>.metaTypes,
    nullptr
} };

void KWin::ScriptTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScriptTimer *>(_o);
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { ScriptTimer *_r = new ScriptTimer((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { ScriptTimer *_r = new ScriptTimer();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    }
    if (_c == QMetaObject::ConstructInPlace) {
        switch (_id) {
        case 0: { new (_a[0]) ScriptTimer((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1]))); } break;
        case 1: { new (_a[0]) ScriptTimer(); } break;
        default: break;
        }
    }
    (void)_t;
}

const QMetaObject *KWin::ScriptTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::ScriptTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin11ScriptTimerE_t>.strings))
        return static_cast<void*>(this);
    return QTimer::qt_metacast(_clname);
}

int KWin::ScriptTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTimer::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin6ScriptE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::Script::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin6ScriptE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::Script",
        "run",
        "",
        "slotScriptLoadedFromFile",
        "slotBorderActivated",
        "ElectricBorder",
        "border",
        "readConfig",
        "QVariant",
        "key",
        "defaultValue",
        "callDBus",
        "service",
        "path",
        "interface",
        "method",
        "QJSValue",
        "arg1",
        "arg2",
        "arg3",
        "arg4",
        "arg5",
        "arg6",
        "arg7",
        "arg8",
        "arg9",
        "registerShortcut",
        "objectName",
        "text",
        "keySequence",
        "callback",
        "registerScreenEdge",
        "edge",
        "unregisterScreenEdge",
        "registerTouchScreenEdge",
        "unregisterTouchScreenEdge",
        "registerUserActionsMenu"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'run'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotScriptLoadedFromFile'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'slotBorderActivated'
        QtMocHelpers::SlotData<bool(ElectricBorder)>(4, 2, QMC::AccessPrivate, QMetaType::Bool, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Method 'readConfig'
        QtMocHelpers::MethodData<QVariant(const QString &, const QVariant &)>(7, 2, QMC::AccessPublic, 0x80000000 | 8, {{
            { QMetaType::QString, 9 }, { 0x80000000 | 8, 10 },
        }}),
        // Method 'readConfig'
        QtMocHelpers::MethodData<QVariant(const QString &)>(7, 2, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 8, {{
            { QMetaType::QString, 9 },
        }}),
        // Method 'callDBus'
        QtMocHelpers::MethodData<void(const QString &, const QString &, const QString &, const QString &, const QJSValue &, const QJSValue &, const QJSValue &, const QJSValue &, const QJSValue &, const QJSValue &, const QJSValue &, const QJSValue &, const QJSValue &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 12 }, { QMetaType::QString, 13 }, { QMetaType::QString, 14 }, { QMetaType::QString, 15 },
            { 0x80000000 | 16, 17 }, { 0x80000000 | 16, 18 }, { 0x80000000 | 16, 19 }, { 0x80000000 | 16, 20 },
            { 0x80000000 | 16, 21 }, { 0x80000000 | 16, 22 }, { 0x80000000 | 16, 23 }, { 0x80000000 | 16, 24 },
            { 0x80000000 | 16, 25 },
        }}),
        // Method 'callDBus'
        QtMocHelpers::MethodData<void(const QString &, const QString &, const QString &, const QString &, const QJSValue &, const QJSValue &, const QJSValue &, const QJSValue &, const QJSValue &, const QJSValue &, const QJSValue &, const QJSValue &)>(11, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 12 }, { QMetaType::QString, 13 }, { QMetaType::QString, 14 }, { QMetaType::QString, 15 },
            { 0x80000000 | 16, 17 }, { 0x80000000 | 16, 18 }, { 0x80000000 | 16, 19 }, { 0x80000000 | 16, 20 },
            { 0x80000000 | 16, 21 }, { 0x80000000 | 16, 22 }, { 0x80000000 | 16, 23 }, { 0x80000000 | 16, 24 },
        }}),
        // Method 'callDBus'
        QtMocHelpers::MethodData<void(const QString &, const QString &, const QString &, const QString &, const QJSValue &, const QJSValue &, const QJSValue &, const QJSValue &, const QJSValue &, const QJSValue &, const QJSValue &)>(11, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 12 }, { QMetaType::QString, 13 }, { QMetaType::QString, 14 }, { QMetaType::QString, 15 },
            { 0x80000000 | 16, 17 }, { 0x80000000 | 16, 18 }, { 0x80000000 | 16, 19 }, { 0x80000000 | 16, 20 },
            { 0x80000000 | 16, 21 }, { 0x80000000 | 16, 22 }, { 0x80000000 | 16, 23 },
        }}),
        // Method 'callDBus'
        QtMocHelpers::MethodData<void(const QString &, const QString &, const QString &, const QString &, const QJSValue &, const QJSValue &, const QJSValue &, const QJSValue &, const QJSValue &, const QJSValue &)>(11, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 12 }, { QMetaType::QString, 13 }, { QMetaType::QString, 14 }, { QMetaType::QString, 15 },
            { 0x80000000 | 16, 17 }, { 0x80000000 | 16, 18 }, { 0x80000000 | 16, 19 }, { 0x80000000 | 16, 20 },
            { 0x80000000 | 16, 21 }, { 0x80000000 | 16, 22 },
        }}),
        // Method 'callDBus'
        QtMocHelpers::MethodData<void(const QString &, const QString &, const QString &, const QString &, const QJSValue &, const QJSValue &, const QJSValue &, const QJSValue &, const QJSValue &)>(11, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 12 }, { QMetaType::QString, 13 }, { QMetaType::QString, 14 }, { QMetaType::QString, 15 },
            { 0x80000000 | 16, 17 }, { 0x80000000 | 16, 18 }, { 0x80000000 | 16, 19 }, { 0x80000000 | 16, 20 },
            { 0x80000000 | 16, 21 },
        }}),
        // Method 'callDBus'
        QtMocHelpers::MethodData<void(const QString &, const QString &, const QString &, const QString &, const QJSValue &, const QJSValue &, const QJSValue &, const QJSValue &)>(11, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 12 }, { QMetaType::QString, 13 }, { QMetaType::QString, 14 }, { QMetaType::QString, 15 },
            { 0x80000000 | 16, 17 }, { 0x80000000 | 16, 18 }, { 0x80000000 | 16, 19 }, { 0x80000000 | 16, 20 },
        }}),
        // Method 'callDBus'
        QtMocHelpers::MethodData<void(const QString &, const QString &, const QString &, const QString &, const QJSValue &, const QJSValue &, const QJSValue &)>(11, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 12 }, { QMetaType::QString, 13 }, { QMetaType::QString, 14 }, { QMetaType::QString, 15 },
            { 0x80000000 | 16, 17 }, { 0x80000000 | 16, 18 }, { 0x80000000 | 16, 19 },
        }}),
        // Method 'callDBus'
        QtMocHelpers::MethodData<void(const QString &, const QString &, const QString &, const QString &, const QJSValue &, const QJSValue &)>(11, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 12 }, { QMetaType::QString, 13 }, { QMetaType::QString, 14 }, { QMetaType::QString, 15 },
            { 0x80000000 | 16, 17 }, { 0x80000000 | 16, 18 },
        }}),
        // Method 'callDBus'
        QtMocHelpers::MethodData<void(const QString &, const QString &, const QString &, const QString &, const QJSValue &)>(11, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 12 }, { QMetaType::QString, 13 }, { QMetaType::QString, 14 }, { QMetaType::QString, 15 },
            { 0x80000000 | 16, 17 },
        }}),
        // Method 'callDBus'
        QtMocHelpers::MethodData<void(const QString &, const QString &, const QString &, const QString &)>(11, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 12 }, { QMetaType::QString, 13 }, { QMetaType::QString, 14 }, { QMetaType::QString, 15 },
        }}),
        // Method 'registerShortcut'
        QtMocHelpers::MethodData<bool(const QString &, const QString &, const QString &, const QJSValue &)>(26, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 27 }, { QMetaType::QString, 28 }, { QMetaType::QString, 29 }, { 0x80000000 | 16, 30 },
        }}),
        // Method 'registerScreenEdge'
        QtMocHelpers::MethodData<bool(int, const QJSValue &)>(31, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 32 }, { 0x80000000 | 16, 30 },
        }}),
        // Method 'unregisterScreenEdge'
        QtMocHelpers::MethodData<bool(int)>(33, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 32 },
        }}),
        // Method 'registerTouchScreenEdge'
        QtMocHelpers::MethodData<bool(int, const QJSValue &)>(34, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 32 }, { 0x80000000 | 16, 30 },
        }}),
        // Method 'unregisterTouchScreenEdge'
        QtMocHelpers::MethodData<bool(int)>(35, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 32 },
        }}),
        // Method 'registerUserActionsMenu'
        QtMocHelpers::MethodData<void(const QJSValue &)>(36, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 30 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Script, qt_meta_tag_ZN4KWin6ScriptE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::Script::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractScript::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin6ScriptE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin6ScriptE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin6ScriptE_t>.metaTypes,
    nullptr
} };

void KWin::Script::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Script *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->run(); break;
        case 1: _t->slotScriptLoadedFromFile(); break;
        case 2: { bool _r = _t->slotBorderActivated((*reinterpret_cast<std::add_pointer_t<ElectricBorder>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { QVariant _r = _t->readConfig((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QVariant*>(_a[0]) = std::move(_r); }  break;
        case 4: { QVariant _r = _t->readConfig((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariant*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->callDBus((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[7])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[8])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[9])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[10])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[11])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[12])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[13]))); break;
        case 6: _t->callDBus((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[7])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[8])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[9])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[10])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[11])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[12]))); break;
        case 7: _t->callDBus((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[7])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[8])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[9])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[10])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[11]))); break;
        case 8: _t->callDBus((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[7])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[8])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[9])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[10]))); break;
        case 9: _t->callDBus((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[7])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[8])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[9]))); break;
        case 10: _t->callDBus((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[7])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[8]))); break;
        case 11: _t->callDBus((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[7]))); break;
        case 12: _t->callDBus((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[6]))); break;
        case 13: _t->callDBus((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[5]))); break;
        case 14: _t->callDBus((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4]))); break;
        case 15: { bool _r = _t->registerShortcut((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[4])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 16: { bool _r = _t->registerScreenEdge((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->unregisterScreenEdge((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 18: { bool _r = _t->registerTouchScreenEdge((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 19: { bool _r = _t->unregisterTouchScreenEdge((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 20: _t->registerUserActionsMenu((*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 12:
            case 11:
            case 10:
            case 9:
            case 8:
            case 7:
            case 6:
            case 5:
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 11:
            case 10:
            case 9:
            case 8:
            case 7:
            case 6:
            case 5:
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 10:
            case 9:
            case 8:
            case 7:
            case 6:
            case 5:
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 9:
            case 8:
            case 7:
            case 6:
            case 5:
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 8:
            case 7:
            case 6:
            case 5:
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 7:
            case 6:
            case 5:
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 6:
            case 5:
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 5:
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        }
    }
}

const QMetaObject *KWin::Script::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::Script::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin6ScriptE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QDBusContext"))
        return static_cast< QDBusContext*>(this);
    return AbstractScript::qt_metacast(_clname);
}

int KWin::Script::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractScript::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN4KWin17DeclarativeScriptE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::DeclarativeScript::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin17DeclarativeScriptE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::DeclarativeScript",
        "run",
        "",
        "createComponent"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'run'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Slot 'createComponent'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DeclarativeScript, qt_meta_tag_ZN4KWin17DeclarativeScriptE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::DeclarativeScript::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractScript::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17DeclarativeScriptE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17DeclarativeScriptE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin17DeclarativeScriptE_t>.metaTypes,
    nullptr
} };

void KWin::DeclarativeScript::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DeclarativeScript *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->run(); break;
        case 1: _t->createComponent(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *KWin::DeclarativeScript::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::DeclarativeScript::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17DeclarativeScriptE_t>.strings))
        return static_cast<void*>(this);
    return AbstractScript::qt_metacast(_clname);
}

int KWin::DeclarativeScript::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractScript::qt_metacall(_c, _id, _a);
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
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin28JSEngineGlobalMethodsWrapperE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::JSEngineGlobalMethodsWrapper::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin28JSEngineGlobalMethodsWrapperE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::JSEngineGlobalMethodsWrapper",
        "readConfig",
        "QVariant",
        "",
        "key",
        "defaultValue",
        "ClientAreaOption",
        "PlacementArea",
        "MovementArea",
        "MaximizeArea",
        "MaximizeFullArea",
        "FullScreenArea",
        "WorkArea",
        "FullArea",
        "ScreenArea"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'readConfig'
        QtMocHelpers::SlotData<QVariant(const QString &, QVariant)>(1, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::QString, 4 }, { 0x80000000 | 2, 5 },
        }}),
        // Slot 'readConfig'
        QtMocHelpers::SlotData<QVariant(const QString &)>(1, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2, {{
            { QMetaType::QString, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ClientAreaOption'
        QtMocHelpers::EnumData<enum ClientAreaOption>(6, 6, QMC::EnumFlags{}).add({
            {    7, ClientAreaOption::PlacementArea },
            {    8, ClientAreaOption::MovementArea },
            {    9, ClientAreaOption::MaximizeArea },
            {   10, ClientAreaOption::MaximizeFullArea },
            {   11, ClientAreaOption::FullScreenArea },
            {   12, ClientAreaOption::WorkArea },
            {   13, ClientAreaOption::FullArea },
            {   14, ClientAreaOption::ScreenArea },
        }),
    };
    return QtMocHelpers::metaObjectData<JSEngineGlobalMethodsWrapper, qt_meta_tag_ZN4KWin28JSEngineGlobalMethodsWrapperE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::JSEngineGlobalMethodsWrapper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin28JSEngineGlobalMethodsWrapperE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin28JSEngineGlobalMethodsWrapperE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin28JSEngineGlobalMethodsWrapperE_t>.metaTypes,
    nullptr
} };

void KWin::JSEngineGlobalMethodsWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<JSEngineGlobalMethodsWrapper *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QVariant _r = _t->readConfig((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QVariant*>(_a[0]) = std::move(_r); }  break;
        case 1: { QVariant _r = _t->readConfig((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *KWin::JSEngineGlobalMethodsWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::JSEngineGlobalMethodsWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin28JSEngineGlobalMethodsWrapperE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::JSEngineGlobalMethodsWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin9ScriptingE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::Scripting::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin9ScriptingE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::Scripting",
        "D-Bus Interface",
        "org.kde.kwin.Scripting",
        "scriptDestroyed",
        "",
        "object",
        "start",
        "slotScriptsQueried",
        "loadScript",
        "filePath",
        "pluginName",
        "loadDeclarativeScript",
        "isScriptLoaded",
        "unloadScript"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'scriptDestroyed'
        QtMocHelpers::SlotData<void(QObject *)>(3, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QObjectStar, 5 },
        }}),
        // Slot 'start'
        QtMocHelpers::SlotData<void()>(6, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Slot 'slotScriptsQueried'
        QtMocHelpers::SlotData<void()>(7, 4, QMC::AccessPrivate, QMetaType::Void),
        // Method 'loadScript'
        QtMocHelpers::MethodData<int(const QString &, const QString &)>(8, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Int, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 10 },
        }}),
        // Method 'loadScript'
        QtMocHelpers::MethodData<int(const QString &)>(8, 4, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::Int, {{
            { QMetaType::QString, 9 },
        }}),
        // Method 'loadDeclarativeScript'
        QtMocHelpers::MethodData<int(const QString &, const QString &)>(11, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Int, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 10 },
        }}),
        // Method 'loadDeclarativeScript'
        QtMocHelpers::MethodData<int(const QString &)>(11, 4, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::Int, {{
            { QMetaType::QString, 9 },
        }}),
        // Method 'isScriptLoaded'
        QtMocHelpers::MethodData<bool(const QString &) const>(12, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { QMetaType::QString, 10 },
        }}),
        // Method 'unloadScript'
        QtMocHelpers::MethodData<bool(const QString &)>(13, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { QMetaType::QString, 10 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<Scripting, qt_meta_tag_ZN4KWin9ScriptingE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject KWin::Scripting::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin9ScriptingE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin9ScriptingE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin9ScriptingE_t>.metaTypes,
    nullptr
} };

void KWin::Scripting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Scripting *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->scriptDestroyed((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 1: _t->start(); break;
        case 2: _t->slotScriptsQueried(); break;
        case 3: { int _r = _t->loadScript((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->loadScript((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 5: { int _r = _t->loadDeclarativeScript((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 6: { int _r = _t->loadDeclarativeScript((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->isScriptLoaded((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->unloadScript((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *KWin::Scripting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::Scripting::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin9ScriptingE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::Scripting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
