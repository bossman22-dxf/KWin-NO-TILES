/****************************************************************************
** Meta object code from reading C++ file 'a11ykeyboardmonitor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/a11ykeyboardmonitor.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'a11ykeyboardmonitor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin19A11yKeyboardMonitorE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::A11yKeyboardMonitor::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin19A11yKeyboardMonitorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::A11yKeyboardMonitor",
        "D-Bus Interface",
        "org.freedesktop.a11y.KeyboardMonitor",
        "KeyEvent",
        "",
        "released",
        "state",
        "keysym",
        "unichar",
        "keycode",
        "GrabKeyboard",
        "UngrabKeyboard",
        "WatchKeyboard",
        "UnwatchKeyboard",
        "SetKeyGrabs",
        "QList<quint32>",
        "modifiers",
        "QList<KeyStroke>",
        "keystrokes"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'KeyEvent'
        QtMocHelpers::SignalData<void(bool, quint32, quint32, quint32, quint16)>(3, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Bool, 5 }, { QMetaType::UInt, 6 }, { QMetaType::UInt, 7 }, { QMetaType::UInt, 8 },
            { QMetaType::UShort, 9 },
        }}),
        // Method 'GrabKeyboard'
        QtMocHelpers::MethodData<void()>(10, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Method 'UngrabKeyboard'
        QtMocHelpers::MethodData<void()>(11, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Method 'WatchKeyboard'
        QtMocHelpers::MethodData<void()>(12, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Method 'UnwatchKeyboard'
        QtMocHelpers::MethodData<void()>(13, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Method 'SetKeyGrabs'
        QtMocHelpers::MethodData<void(const QList<quint32> &, const QList<KeyStroke> &)>(14, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { 0x80000000 | 15, 16 }, { 0x80000000 | 17, 18 },
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
    return QtMocHelpers::metaObjectData<A11yKeyboardMonitor, qt_meta_tag_ZN4KWin19A11yKeyboardMonitorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject KWin::A11yKeyboardMonitor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin19A11yKeyboardMonitorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin19A11yKeyboardMonitorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin19A11yKeyboardMonitorE_t>.metaTypes,
    nullptr
} };

void KWin::A11yKeyboardMonitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<A11yKeyboardMonitor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->KeyEvent((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<quint16>>(_a[5]))); break;
        case 1: _t->GrabKeyboard(); break;
        case 2: _t->UngrabKeyboard(); break;
        case 3: _t->WatchKeyboard(); break;
        case 4: _t->UnwatchKeyboard(); break;
        case 5: _t->SetKeyGrabs((*reinterpret_cast<std::add_pointer_t<QList<quint32>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QList<KeyStroke>>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<quint32> >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (A11yKeyboardMonitor::*)(bool , quint32 , quint32 , quint32 , quint16 )>(_a, &A11yKeyboardMonitor::KeyEvent, 0))
            return;
    }
}

const QMetaObject *KWin::A11yKeyboardMonitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::A11yKeyboardMonitor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin19A11yKeyboardMonitorE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QDBusContext"))
        return static_cast< QDBusContext*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::A11yKeyboardMonitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void KWin::A11yKeyboardMonitor::KeyEvent(bool _t1, quint32 _t2, quint32 _t3, quint32 _t4, quint16 _t5)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3, _t4, _t5);
}
QT_WARNING_POP
