/****************************************************************************
** Meta object code from reading C++ file 'virtualkeyboard_dbus.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/virtualkeyboard_dbus.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'virtualkeyboard_dbus.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin19VirtualKeyboardDBusE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::VirtualKeyboardDBus::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin19VirtualKeyboardDBusE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::VirtualKeyboardDBus",
        "D-Bus Interface",
        "org.kde.kwin.VirtualKeyboard",
        "modeChanged",
        "",
        "activeChanged",
        "visibleChanged",
        "availableChanged",
        "activeClientSupportsTextInputChanged",
        "willShowOnActive",
        "forceActivate",
        "available",
        "mode",
        "active",
        "visible",
        "activeClientSupportsTextInput"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'modeChanged'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'activeChanged'
        QtMocHelpers::SignalData<void()>(5, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'visibleChanged'
        QtMocHelpers::SignalData<void()>(6, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'availableChanged'
        QtMocHelpers::SignalData<void()>(7, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Signal 'activeClientSupportsTextInputChanged'
        QtMocHelpers::SignalData<void()>(8, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Method 'willShowOnActive'
        QtMocHelpers::MethodData<bool() const>(9, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool),
        // Method 'forceActivate'
        QtMocHelpers::MethodData<void()>(10, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'available'
        QtMocHelpers::PropertyData<bool>(11, QMetaType::Bool, QMC::DefaultPropertyFlags, 3),
        // property 'mode'
        QtMocHelpers::PropertyData<int>(12, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'active'
        QtMocHelpers::PropertyData<bool>(13, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'visible'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags, 2),
        // property 'activeClientSupportsTextInput'
        QtMocHelpers::PropertyData<bool>(15, QMetaType::Bool, QMC::DefaultPropertyFlags, 4),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<VirtualKeyboardDBus, qt_meta_tag_ZN4KWin19VirtualKeyboardDBusE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject KWin::VirtualKeyboardDBus::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin19VirtualKeyboardDBusE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin19VirtualKeyboardDBusE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin19VirtualKeyboardDBusE_t>.metaTypes,
    nullptr
} };

void KWin::VirtualKeyboardDBus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VirtualKeyboardDBus *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->modeChanged(); break;
        case 1: _t->activeChanged(); break;
        case 2: _t->visibleChanged(); break;
        case 3: _t->availableChanged(); break;
        case 4: _t->activeClientSupportsTextInputChanged(); break;
        case 5: { bool _r = _t->willShowOnActive();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->forceActivate(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (VirtualKeyboardDBus::*)()>(_a, &VirtualKeyboardDBus::modeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualKeyboardDBus::*)()>(_a, &VirtualKeyboardDBus::activeChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualKeyboardDBus::*)()>(_a, &VirtualKeyboardDBus::visibleChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualKeyboardDBus::*)()>(_a, &VirtualKeyboardDBus::availableChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualKeyboardDBus::*)()>(_a, &VirtualKeyboardDBus::activeClientSupportsTextInputChanged, 4))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isAvailable(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->mode(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isActive(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isVisible(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->activeClientSupportsTextInput(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setMode(*reinterpret_cast<int*>(_v)); break;
        case 2: _t->setActive(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::VirtualKeyboardDBus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::VirtualKeyboardDBus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin19VirtualKeyboardDBusE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::VirtualKeyboardDBus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void KWin::VirtualKeyboardDBus::modeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::VirtualKeyboardDBus::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::VirtualKeyboardDBus::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::VirtualKeyboardDBus::availableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWin::VirtualKeyboardDBus::activeClientSupportsTextInputChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
