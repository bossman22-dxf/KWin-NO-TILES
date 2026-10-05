/****************************************************************************
** Meta object code from reading C++ file 'session_consolekit.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/core/session_consolekit.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'session_consolekit.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin17ConsoleKitSessionE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::ConsoleKitSession::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin17ConsoleKitSessionE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::ConsoleKitSession",
        "handleResumeDevice",
        "",
        "major",
        "minor",
        "QDBusUnixFileDescriptor",
        "fileDescriptor",
        "handlePauseDevice",
        "type",
        "handlePropertiesChanged",
        "interfaceName",
        "QVariantMap",
        "properties",
        "handlePrepareForSleep",
        "sleep"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'handleResumeDevice'
        QtMocHelpers::SlotData<void(uint, uint, QDBusUnixFileDescriptor)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::UInt, 3 }, { QMetaType::UInt, 4 }, { 0x80000000 | 5, 6 },
        }}),
        // Slot 'handlePauseDevice'
        QtMocHelpers::SlotData<void(uint, uint, const QString &)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::UInt, 3 }, { QMetaType::UInt, 4 }, { QMetaType::QString, 8 },
        }}),
        // Slot 'handlePropertiesChanged'
        QtMocHelpers::SlotData<void(const QString &, const QVariantMap &)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 10 }, { 0x80000000 | 11, 12 },
        }}),
        // Slot 'handlePrepareForSleep'
        QtMocHelpers::SlotData<void(bool)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 14 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ConsoleKitSession, qt_meta_tag_ZN4KWin17ConsoleKitSessionE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::ConsoleKitSession::staticMetaObject = { {
    QMetaObject::SuperData::link<Session::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17ConsoleKitSessionE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17ConsoleKitSessionE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin17ConsoleKitSessionE_t>.metaTypes,
    nullptr
} };

void KWin::ConsoleKitSession::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ConsoleKitSession *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->handleResumeDevice((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QDBusUnixFileDescriptor>>(_a[3]))); break;
        case 1: _t->handlePauseDevice((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 2: _t->handlePropertiesChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[2]))); break;
        case 3: _t->handlePrepareForSleep((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QDBusUnixFileDescriptor >(); break;
            }
            break;
        }
    }
}

const QMetaObject *KWin::ConsoleKitSession::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::ConsoleKitSession::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17ConsoleKitSessionE_t>.strings))
        return static_cast<void*>(this);
    return Session::qt_metacast(_clname);
}

int KWin::ConsoleKitSession::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Session::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
