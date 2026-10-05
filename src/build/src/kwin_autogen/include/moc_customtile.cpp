/****************************************************************************
** Meta object code from reading C++ file 'customtile.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/tiles/customtile.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customtile.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin10CustomTileE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::CustomTile::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin10CustomTileE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::CustomTile",
        "layoutDirectionChanged",
        "",
        "Tile::LayoutDirection",
        "direction",
        "layoutModified",
        "moveByPixels",
        "QPointF",
        "delta",
        "remove",
        "split",
        "QList<CustomTile*>",
        "KWin::Tile::LayoutDirection",
        "newDirection",
        "layoutDirection"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'layoutDirectionChanged'
        QtMocHelpers::SignalData<void(Tile::LayoutDirection)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'layoutModified'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'moveByPixels'
        QtMocHelpers::MethodData<void(const QPointF &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Method 'remove'
        QtMocHelpers::MethodData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'split'
        QtMocHelpers::MethodData<QList<CustomTile*>(KWin::Tile::LayoutDirection)>(10, 2, QMC::AccessPublic, 0x80000000 | 11, {{
            { 0x80000000 | 12, 13 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'layoutDirection'
        QtMocHelpers::PropertyData<KWin::Tile::LayoutDirection>(14, 0x80000000 | 12, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CustomTile, qt_meta_tag_ZN4KWin10CustomTileE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN4KWin10CustomTileE[] = {
    QMetaObject::SuperData::link<KWin::Tile::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject KWin::CustomTile::staticMetaObject = { {
    QMetaObject::SuperData::link<Tile::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin10CustomTileE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin10CustomTileE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN4KWin10CustomTileE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin10CustomTileE_t>.metaTypes,
    nullptr
} };

void KWin::CustomTile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CustomTile *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->layoutDirectionChanged((*reinterpret_cast<std::add_pointer_t<Tile::LayoutDirection>>(_a[1]))); break;
        case 1: _t->layoutModified(); break;
        case 2: _t->moveByPixels((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 3: _t->remove(); break;
        case 4: { QList<CustomTile*> _r = _t->split((*reinterpret_cast<std::add_pointer_t<KWin::Tile::LayoutDirection>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QList<CustomTile*>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CustomTile::*)(Tile::LayoutDirection )>(_a, &CustomTile::layoutDirectionChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (CustomTile::*)()>(_a, &CustomTile::layoutModified, 1))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<KWin::Tile::LayoutDirection*>(_v) = _t->layoutDirection(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLayoutDirection(*reinterpret_cast<KWin::Tile::LayoutDirection*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::CustomTile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::CustomTile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin10CustomTileE_t>.strings))
        return static_cast<void*>(this);
    return Tile::qt_metacast(_clname);
}

int KWin::CustomTile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Tile::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void KWin::CustomTile::layoutDirectionChanged(Tile::LayoutDirection _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void KWin::CustomTile::layoutModified()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
namespace {
struct qt_meta_tag_ZN4KWin8RootTileE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::RootTile::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin8RootTileE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::RootTile",
        "pick",
        "KWin::Tile*",
        "",
        "QPointF",
        "point",
        "x",
        "y",
        "model",
        "KWin::TileModel*"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'pick'
        QtMocHelpers::MethodData<KWin::Tile *(const QPointF &) const>(1, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Method 'pick'
        QtMocHelpers::MethodData<KWin::Tile *(qreal, qreal) const>(1, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::QReal, 6 }, { QMetaType::QReal, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'model'
        QtMocHelpers::PropertyData<KWin::TileModel*>(8, 0x80000000 | 9, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<RootTile, qt_meta_tag_ZN4KWin8RootTileE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::RootTile::staticMetaObject = { {
    QMetaObject::SuperData::link<CustomTile::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin8RootTileE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin8RootTileE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin8RootTileE_t>.metaTypes,
    nullptr
} };

void KWin::RootTile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<RootTile *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { KWin::Tile* _r = _t->pick((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1])));
            if (_a[0]) *reinterpret_cast<KWin::Tile**>(_a[0]) = std::move(_r); }  break;
        case 1: { KWin::Tile* _r = _t->pick((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])));
            if (_a[0]) *reinterpret_cast<KWin::Tile**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KWin::TileModel* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<KWin::TileModel**>(_v) = _t->model(); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::RootTile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::RootTile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin8RootTileE_t>.strings))
        return static_cast<void*>(this);
    return CustomTile::qt_metacast(_clname);
}

int KWin::RootTile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CustomTile::qt_metacall(_c, _id, _a);
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
