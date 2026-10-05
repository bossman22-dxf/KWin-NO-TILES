/****************************************************************************
** Meta object code from reading C++ file 'plasmashell.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/wayland/plasmashell.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plasmashell.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin20PlasmaShellInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::PlasmaShellInterface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin20PlasmaShellInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::PlasmaShellInterface",
        "surfaceCreated",
        "",
        "KWin::PlasmaShellSurfaceInterface*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'surfaceCreated'
        QtMocHelpers::SignalData<void(KWin::PlasmaShellSurfaceInterface *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PlasmaShellInterface, qt_meta_tag_ZN4KWin20PlasmaShellInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::PlasmaShellInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin20PlasmaShellInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin20PlasmaShellInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin20PlasmaShellInterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::PlasmaShellInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlasmaShellInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->surfaceCreated((*reinterpret_cast<std::add_pointer_t<KWin::PlasmaShellSurfaceInterface*>>(_a[1]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::PlasmaShellSurfaceInterface* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PlasmaShellInterface::*)(KWin::PlasmaShellSurfaceInterface * )>(_a, &PlasmaShellInterface::surfaceCreated, 0))
            return;
    }
}

const QMetaObject *KWin::PlasmaShellInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::PlasmaShellInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin20PlasmaShellInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::PlasmaShellInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void KWin::PlasmaShellInterface::surfaceCreated(KWin::PlasmaShellSurfaceInterface * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN4KWin27PlasmaShellSurfaceInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::PlasmaShellSurfaceInterface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin27PlasmaShellSurfaceInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::PlasmaShellSurfaceInterface",
        "positionChanged",
        "",
        "openUnderCursorRequested",
        "roleChanged",
        "panelBehaviorChanged",
        "skipTaskbarChanged",
        "skipSwitcherChanged",
        "panelAutoHideHideRequested",
        "panelAutoHideShowRequested",
        "panelTakesFocusChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'positionChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'openUnderCursorRequested'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'roleChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'panelBehaviorChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'skipTaskbarChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'skipSwitcherChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'panelAutoHideHideRequested'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'panelAutoHideShowRequested'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'panelTakesFocusChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PlasmaShellSurfaceInterface, qt_meta_tag_ZN4KWin27PlasmaShellSurfaceInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::PlasmaShellSurfaceInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin27PlasmaShellSurfaceInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin27PlasmaShellSurfaceInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin27PlasmaShellSurfaceInterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::PlasmaShellSurfaceInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlasmaShellSurfaceInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->positionChanged(); break;
        case 1: _t->openUnderCursorRequested(); break;
        case 2: _t->roleChanged(); break;
        case 3: _t->panelBehaviorChanged(); break;
        case 4: _t->skipTaskbarChanged(); break;
        case 5: _t->skipSwitcherChanged(); break;
        case 6: _t->panelAutoHideHideRequested(); break;
        case 7: _t->panelAutoHideShowRequested(); break;
        case 8: _t->panelTakesFocusChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PlasmaShellSurfaceInterface::*)()>(_a, &PlasmaShellSurfaceInterface::positionChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaShellSurfaceInterface::*)()>(_a, &PlasmaShellSurfaceInterface::openUnderCursorRequested, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaShellSurfaceInterface::*)()>(_a, &PlasmaShellSurfaceInterface::roleChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaShellSurfaceInterface::*)()>(_a, &PlasmaShellSurfaceInterface::panelBehaviorChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaShellSurfaceInterface::*)()>(_a, &PlasmaShellSurfaceInterface::skipTaskbarChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaShellSurfaceInterface::*)()>(_a, &PlasmaShellSurfaceInterface::skipSwitcherChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaShellSurfaceInterface::*)()>(_a, &PlasmaShellSurfaceInterface::panelAutoHideHideRequested, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaShellSurfaceInterface::*)()>(_a, &PlasmaShellSurfaceInterface::panelAutoHideShowRequested, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaShellSurfaceInterface::*)()>(_a, &PlasmaShellSurfaceInterface::panelTakesFocusChanged, 8))
            return;
    }
}

const QMetaObject *KWin::PlasmaShellSurfaceInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::PlasmaShellSurfaceInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin27PlasmaShellSurfaceInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::PlasmaShellSurfaceInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void KWin::PlasmaShellSurfaceInterface::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::PlasmaShellSurfaceInterface::openUnderCursorRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::PlasmaShellSurfaceInterface::roleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::PlasmaShellSurfaceInterface::panelBehaviorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWin::PlasmaShellSurfaceInterface::skipTaskbarChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KWin::PlasmaShellSurfaceInterface::skipSwitcherChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KWin::PlasmaShellSurfaceInterface::panelAutoHideHideRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void KWin::PlasmaShellSurfaceInterface::panelAutoHideShowRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void KWin::PlasmaShellSurfaceInterface::panelTakesFocusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
