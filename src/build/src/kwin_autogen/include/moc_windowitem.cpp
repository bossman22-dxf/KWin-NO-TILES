/****************************************************************************
** Meta object code from reading C++ file 'windowitem.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/scene/windowitem.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowitem.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin10WindowItemE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::WindowItem::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin10WindowItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::WindowItem",
        "updateDecorationItem",
        "",
        "updateShadowItem",
        "updateSurfacePosition",
        "updateBorderRadius",
        "updateGeometry",
        "updateOpacity",
        "updateStackingOrder",
        "addSurfaceItemDamageConnects",
        "Item*",
        "item"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'updateDecorationItem'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateShadowItem'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateSurfacePosition'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateBorderRadius'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateGeometry'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateOpacity'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateStackingOrder'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'addSurfaceItemDamageConnects'
        QtMocHelpers::SlotData<void(Item *)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WindowItem, qt_meta_tag_ZN4KWin10WindowItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::WindowItem::staticMetaObject = { {
    QMetaObject::SuperData::link<Item::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin10WindowItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin10WindowItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin10WindowItemE_t>.metaTypes,
    nullptr
} };

void KWin::WindowItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WindowItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->updateDecorationItem(); break;
        case 1: _t->updateShadowItem(); break;
        case 2: _t->updateSurfacePosition(); break;
        case 3: _t->updateBorderRadius(); break;
        case 4: _t->updateGeometry(); break;
        case 5: _t->updateOpacity(); break;
        case 6: _t->updateStackingOrder(); break;
        case 7: _t->addSurfaceItemDamageConnects((*reinterpret_cast<std::add_pointer_t<Item*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Item* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *KWin::WindowItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::WindowItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin10WindowItemE_t>.strings))
        return static_cast<void*>(this);
    return Item::qt_metacast(_clname);
}

int KWin::WindowItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Item::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin13WindowItemX11E_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::WindowItemX11::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin13WindowItemX11E_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::WindowItemX11",
        "initialize",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'initialize'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WindowItemX11, qt_meta_tag_ZN4KWin13WindowItemX11E_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::WindowItemX11::staticMetaObject = { {
    QMetaObject::SuperData::link<WindowItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin13WindowItemX11E_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin13WindowItemX11E_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin13WindowItemX11E_t>.metaTypes,
    nullptr
} };

void KWin::WindowItemX11::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WindowItemX11 *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->initialize(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *KWin::WindowItemX11::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::WindowItemX11::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin13WindowItemX11E_t>.strings))
        return static_cast<void*>(this);
    return WindowItem::qt_metacast(_clname);
}

int KWin::WindowItemX11::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WindowItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin17WindowItemWaylandE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::WindowItemWayland::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin17WindowItemWaylandE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::WindowItemWayland"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WindowItemWayland, qt_meta_tag_ZN4KWin17WindowItemWaylandE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::WindowItemWayland::staticMetaObject = { {
    QMetaObject::SuperData::link<WindowItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17WindowItemWaylandE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17WindowItemWaylandE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin17WindowItemWaylandE_t>.metaTypes,
    nullptr
} };

void KWin::WindowItemWayland::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WindowItemWayland *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::WindowItemWayland::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::WindowItemWayland::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17WindowItemWaylandE_t>.strings))
        return static_cast<void*>(this);
    return WindowItem::qt_metacast(_clname);
}

int KWin::WindowItemWayland::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WindowItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin18WindowItemInternalE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::WindowItemInternal::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin18WindowItemInternalE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::WindowItemInternal"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WindowItemInternal, qt_meta_tag_ZN4KWin18WindowItemInternalE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::WindowItemInternal::staticMetaObject = { {
    QMetaObject::SuperData::link<WindowItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin18WindowItemInternalE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin18WindowItemInternalE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin18WindowItemInternalE_t>.metaTypes,
    nullptr
} };

void KWin::WindowItemInternal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WindowItemInternal *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::WindowItemInternal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::WindowItemInternal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin18WindowItemInternalE_t>.strings))
        return static_cast<void*>(this);
    return WindowItem::qt_metacast(_clname);
}

int KWin::WindowItemInternal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WindowItem::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
