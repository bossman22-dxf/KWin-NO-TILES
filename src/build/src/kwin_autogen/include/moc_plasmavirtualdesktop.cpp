/****************************************************************************
** Meta object code from reading C++ file 'plasmavirtualdesktop.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/wayland/plasmavirtualdesktop.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plasmavirtualdesktop.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin39PlasmaVirtualDesktopManagementInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::PlasmaVirtualDesktopManagementInterface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin39PlasmaVirtualDesktopManagementInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::PlasmaVirtualDesktopManagementInterface",
        "desktopActivated",
        "",
        "id",
        "desktopRemoveRequested",
        "desktopCreateRequested",
        "name",
        "position"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'desktopActivated'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'desktopRemoveRequested'
        QtMocHelpers::SignalData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'desktopCreateRequested'
        QtMocHelpers::SignalData<void(const QString &, quint32)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 6 }, { QMetaType::UInt, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PlasmaVirtualDesktopManagementInterface, qt_meta_tag_ZN4KWin39PlasmaVirtualDesktopManagementInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::PlasmaVirtualDesktopManagementInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin39PlasmaVirtualDesktopManagementInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin39PlasmaVirtualDesktopManagementInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin39PlasmaVirtualDesktopManagementInterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::PlasmaVirtualDesktopManagementInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlasmaVirtualDesktopManagementInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->desktopActivated((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->desktopRemoveRequested((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->desktopCreateRequested((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PlasmaVirtualDesktopManagementInterface::*)(const QString & )>(_a, &PlasmaVirtualDesktopManagementInterface::desktopActivated, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaVirtualDesktopManagementInterface::*)(const QString & )>(_a, &PlasmaVirtualDesktopManagementInterface::desktopRemoveRequested, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaVirtualDesktopManagementInterface::*)(const QString & , quint32 )>(_a, &PlasmaVirtualDesktopManagementInterface::desktopCreateRequested, 2))
            return;
    }
}

const QMetaObject *KWin::PlasmaVirtualDesktopManagementInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::PlasmaVirtualDesktopManagementInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin39PlasmaVirtualDesktopManagementInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::PlasmaVirtualDesktopManagementInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void KWin::PlasmaVirtualDesktopManagementInterface::desktopActivated(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void KWin::PlasmaVirtualDesktopManagementInterface::desktopRemoveRequested(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void KWin::PlasmaVirtualDesktopManagementInterface::desktopCreateRequested(const QString & _t1, quint32 _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN4KWin29PlasmaVirtualDesktopInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::PlasmaVirtualDesktopInterface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin29PlasmaVirtualDesktopInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::PlasmaVirtualDesktopInterface",
        "activateRequested",
        "",
        "enterOutputRequested",
        "outputName"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'activateRequested'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'enterOutputRequested'
        QtMocHelpers::SignalData<void(const QString &)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PlasmaVirtualDesktopInterface, qt_meta_tag_ZN4KWin29PlasmaVirtualDesktopInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::PlasmaVirtualDesktopInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin29PlasmaVirtualDesktopInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin29PlasmaVirtualDesktopInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin29PlasmaVirtualDesktopInterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::PlasmaVirtualDesktopInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlasmaVirtualDesktopInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->activateRequested(); break;
        case 1: _t->enterOutputRequested((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PlasmaVirtualDesktopInterface::*)()>(_a, &PlasmaVirtualDesktopInterface::activateRequested, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaVirtualDesktopInterface::*)(const QString & )>(_a, &PlasmaVirtualDesktopInterface::enterOutputRequested, 1))
            return;
    }
}

const QMetaObject *KWin::PlasmaVirtualDesktopInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::PlasmaVirtualDesktopInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin29PlasmaVirtualDesktopInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::PlasmaVirtualDesktopInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void KWin::PlasmaVirtualDesktopInterface::activateRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::PlasmaVirtualDesktopInterface::enterOutputRequested(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
