/****************************************************************************
** Meta object code from reading C++ file 'xxpip_v1.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/wayland/xxpip_v1.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xxpip_v1.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin21XXPipShellV1InterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::XXPipShellV1Interface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin21XXPipShellV1InterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::XXPipShellV1Interface",
        "pipCreated",
        "",
        "XXPipV1Interface*",
        "pip"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'pipCreated'
        QtMocHelpers::SignalData<void(XXPipV1Interface *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XXPipShellV1Interface, qt_meta_tag_ZN4KWin21XXPipShellV1InterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::XXPipShellV1Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21XXPipShellV1InterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21XXPipShellV1InterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin21XXPipShellV1InterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::XXPipShellV1Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XXPipShellV1Interface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->pipCreated((*reinterpret_cast<std::add_pointer_t<XXPipV1Interface*>>(_a[1]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< XXPipV1Interface* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (XXPipShellV1Interface::*)(XXPipV1Interface * )>(_a, &XXPipShellV1Interface::pipCreated, 0))
            return;
    }
}

const QMetaObject *KWin::XXPipShellV1Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::XXPipShellV1Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21XXPipShellV1InterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::XXPipShellV1Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void KWin::XXPipShellV1Interface::pipCreated(XXPipV1Interface * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN4KWin16XXPipV1InterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::XXPipV1Interface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin16XXPipV1InterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::XXPipV1Interface",
        "aboutToBeDestroyed",
        "",
        "initializeRequested",
        "resetOccurred",
        "moveRequested",
        "SeatInterface*",
        "seat",
        "serial",
        "resizeRequested",
        "Gravity",
        "anchor",
        "applicationIdChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'aboutToBeDestroyed'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'initializeRequested'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'resetOccurred'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'moveRequested'
        QtMocHelpers::SignalData<void(SeatInterface *, quint32)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { QMetaType::UInt, 8 },
        }}),
        // Signal 'resizeRequested'
        QtMocHelpers::SignalData<void(SeatInterface *, Gravity, quint32)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { 0x80000000 | 10, 11 }, { QMetaType::UInt, 8 },
        }}),
        // Signal 'applicationIdChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XXPipV1Interface, qt_meta_tag_ZN4KWin16XXPipV1InterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::XXPipV1Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin16XXPipV1InterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin16XXPipV1InterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin16XXPipV1InterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::XXPipV1Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XXPipV1Interface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->aboutToBeDestroyed(); break;
        case 1: _t->initializeRequested(); break;
        case 2: _t->resetOccurred(); break;
        case 3: _t->moveRequested((*reinterpret_cast<std::add_pointer_t<SeatInterface*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[2]))); break;
        case 4: _t->resizeRequested((*reinterpret_cast<std::add_pointer_t<SeatInterface*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Gravity>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[3]))); break;
        case 5: _t->applicationIdChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (XXPipV1Interface::*)()>(_a, &XXPipV1Interface::aboutToBeDestroyed, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (XXPipV1Interface::*)()>(_a, &XXPipV1Interface::initializeRequested, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (XXPipV1Interface::*)()>(_a, &XXPipV1Interface::resetOccurred, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (XXPipV1Interface::*)(SeatInterface * , quint32 )>(_a, &XXPipV1Interface::moveRequested, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (XXPipV1Interface::*)(SeatInterface * , Gravity , quint32 )>(_a, &XXPipV1Interface::resizeRequested, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (XXPipV1Interface::*)()>(_a, &XXPipV1Interface::applicationIdChanged, 5))
            return;
    }
}

const QMetaObject *KWin::XXPipV1Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::XXPipV1Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin16XXPipV1InterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::XXPipV1Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void KWin::XXPipV1Interface::aboutToBeDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::XXPipV1Interface::initializeRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::XXPipV1Interface::resetOccurred()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::XXPipV1Interface::moveRequested(SeatInterface * _t1, quint32 _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}

// SIGNAL 4
void KWin::XXPipV1Interface::resizeRequested(SeatInterface * _t1, Gravity _t2, quint32 _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2, _t3);
}

// SIGNAL 5
void KWin::XXPipV1Interface::applicationIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
