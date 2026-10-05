/****************************************************************************
** Meta object code from reading C++ file 'keyboard_layout_switching.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/keyboard_layout_switching.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keyboard_layout_switching.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching6PolicyE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::KeyboardLayoutSwitching::Policy::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching6PolicyE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::KeyboardLayoutSwitching::Policy"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Policy, qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching6PolicyE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::KeyboardLayoutSwitching::Policy::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching6PolicyE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching6PolicyE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching6PolicyE_t>.metaTypes,
    nullptr
} };

void KWin::KeyboardLayoutSwitching::Policy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Policy *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::KeyboardLayoutSwitching::Policy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::KeyboardLayoutSwitching::Policy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching6PolicyE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::KeyboardLayoutSwitching::Policy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching12GlobalPolicyE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::KeyboardLayoutSwitching::GlobalPolicy::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching12GlobalPolicyE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::KeyboardLayoutSwitching::GlobalPolicy"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GlobalPolicy, qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching12GlobalPolicyE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::KeyboardLayoutSwitching::GlobalPolicy::staticMetaObject = { {
    QMetaObject::SuperData::link<Policy::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching12GlobalPolicyE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching12GlobalPolicyE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching12GlobalPolicyE_t>.metaTypes,
    nullptr
} };

void KWin::KeyboardLayoutSwitching::GlobalPolicy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GlobalPolicy *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::KeyboardLayoutSwitching::GlobalPolicy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::KeyboardLayoutSwitching::GlobalPolicy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching12GlobalPolicyE_t>.strings))
        return static_cast<void*>(this);
    return Policy::qt_metacast(_clname);
}

int KWin::KeyboardLayoutSwitching::GlobalPolicy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Policy::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching20VirtualDesktopPolicyE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::KeyboardLayoutSwitching::VirtualDesktopPolicy::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching20VirtualDesktopPolicyE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::KeyboardLayoutSwitching::VirtualDesktopPolicy"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VirtualDesktopPolicy, qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching20VirtualDesktopPolicyE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::KeyboardLayoutSwitching::VirtualDesktopPolicy::staticMetaObject = { {
    QMetaObject::SuperData::link<Policy::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching20VirtualDesktopPolicyE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching20VirtualDesktopPolicyE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching20VirtualDesktopPolicyE_t>.metaTypes,
    nullptr
} };

void KWin::KeyboardLayoutSwitching::VirtualDesktopPolicy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VirtualDesktopPolicy *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::KeyboardLayoutSwitching::VirtualDesktopPolicy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::KeyboardLayoutSwitching::VirtualDesktopPolicy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching20VirtualDesktopPolicyE_t>.strings))
        return static_cast<void*>(this);
    return Policy::qt_metacast(_clname);
}

int KWin::KeyboardLayoutSwitching::VirtualDesktopPolicy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Policy::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching12WindowPolicyE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::KeyboardLayoutSwitching::WindowPolicy::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching12WindowPolicyE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::KeyboardLayoutSwitching::WindowPolicy"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WindowPolicy, qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching12WindowPolicyE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::KeyboardLayoutSwitching::WindowPolicy::staticMetaObject = { {
    QMetaObject::SuperData::link<Policy::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching12WindowPolicyE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching12WindowPolicyE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching12WindowPolicyE_t>.metaTypes,
    nullptr
} };

void KWin::KeyboardLayoutSwitching::WindowPolicy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WindowPolicy *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::KeyboardLayoutSwitching::WindowPolicy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::KeyboardLayoutSwitching::WindowPolicy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching12WindowPolicyE_t>.strings))
        return static_cast<void*>(this);
    return Policy::qt_metacast(_clname);
}

int KWin::KeyboardLayoutSwitching::WindowPolicy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Policy::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching17ApplicationPolicyE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::KeyboardLayoutSwitching::ApplicationPolicy::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching17ApplicationPolicyE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::KeyboardLayoutSwitching::ApplicationPolicy"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ApplicationPolicy, qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching17ApplicationPolicyE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::KeyboardLayoutSwitching::ApplicationPolicy::staticMetaObject = { {
    QMetaObject::SuperData::link<Policy::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching17ApplicationPolicyE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching17ApplicationPolicyE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching17ApplicationPolicyE_t>.metaTypes,
    nullptr
} };

void KWin::KeyboardLayoutSwitching::ApplicationPolicy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ApplicationPolicy *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::KeyboardLayoutSwitching::ApplicationPolicy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::KeyboardLayoutSwitching::ApplicationPolicy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23KeyboardLayoutSwitching17ApplicationPolicyE_t>.strings))
        return static_cast<void*>(this);
    return Policy::qt_metacast(_clname);
}

int KWin::KeyboardLayoutSwitching::ApplicationPolicy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Policy::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
