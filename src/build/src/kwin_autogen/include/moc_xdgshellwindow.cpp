/****************************************************************************
** Meta object code from reading C++ file 'xdgshellwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/xdgshellwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xdgshellwindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin16XdgSurfaceWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::XdgSurfaceWindow::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin16XdgSurfaceWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::XdgSurfaceWindow"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XdgSurfaceWindow, qt_meta_tag_ZN4KWin16XdgSurfaceWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::XdgSurfaceWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<WaylandWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin16XdgSurfaceWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin16XdgSurfaceWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin16XdgSurfaceWindowE_t>.metaTypes,
    nullptr
} };

void KWin::XdgSurfaceWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XdgSurfaceWindow *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::XdgSurfaceWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::XdgSurfaceWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin16XdgSurfaceWindowE_t>.strings))
        return static_cast<void*>(this);
    return WaylandWindow::qt_metacast(_clname);
}

int KWin::XdgSurfaceWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WaylandWindow::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin17XdgToplevelWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::XdgToplevelWindow::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin17XdgToplevelWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::XdgToplevelWindow"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XdgToplevelWindow, qt_meta_tag_ZN4KWin17XdgToplevelWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::XdgToplevelWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<XdgSurfaceWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17XdgToplevelWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17XdgToplevelWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin17XdgToplevelWindowE_t>.metaTypes,
    nullptr
} };

void KWin::XdgToplevelWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XdgToplevelWindow *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::XdgToplevelWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::XdgToplevelWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17XdgToplevelWindowE_t>.strings))
        return static_cast<void*>(this);
    return XdgSurfaceWindow::qt_metacast(_clname);
}

int KWin::XdgToplevelWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XdgSurfaceWindow::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin14XdgPopupWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::XdgPopupWindow::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin14XdgPopupWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::XdgPopupWindow"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XdgPopupWindow, qt_meta_tag_ZN4KWin14XdgPopupWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::XdgPopupWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<XdgSurfaceWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin14XdgPopupWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin14XdgPopupWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin14XdgPopupWindowE_t>.metaTypes,
    nullptr
} };

void KWin::XdgPopupWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XdgPopupWindow *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::XdgPopupWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::XdgPopupWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin14XdgPopupWindowE_t>.strings))
        return static_cast<void*>(this);
    return XdgSurfaceWindow::qt_metacast(_clname);
}

int KWin::XdgPopupWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XdgSurfaceWindow::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
