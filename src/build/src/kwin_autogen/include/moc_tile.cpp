/****************************************************************************
** Meta object code from reading C++ file 'tile.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/tiles/tile.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tile.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin4TileE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::Tile::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin4TileE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::Tile",
        "activeChanged",
        "",
        "active",
        "relativeGeometryChanged",
        "absoluteGeometryChanged",
        "windowGeometryChanged",
        "paddingChanged",
        "padding",
        "minimumSizeChanged",
        "QSizeF",
        "size",
        "rowChanged",
        "row",
        "isLayoutChanged",
        "isLayout",
        "childTilesChanged",
        "windowAdded",
        "Window*",
        "window",
        "windowRemoved",
        "windowsChanged",
        "resizeByPixels",
        "delta",
        "Qt::Edge",
        "edge",
        "manage",
        "unmanage",
        "relativeGeometry",
        "KWin::RectF",
        "absoluteGeometry",
        "absoluteGeometryInScreen",
        "minimumSize",
        "positionInLayout",
        "parent",
        "Tile*",
        "tiles",
        "QList<KWin::Tile*>",
        "windows",
        "QList<KWin::Window*>",
        "canBeRemoved",
        "LayoutDirection",
        "Floating",
        "Horizontal",
        "Vertical"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'activeChanged'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Signal 'relativeGeometryChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'absoluteGeometryChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'windowGeometryChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'paddingChanged'
        QtMocHelpers::SignalData<void(qreal)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 8 },
        }}),
        // Signal 'minimumSizeChanged'
        QtMocHelpers::SignalData<void(const QSizeF &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Signal 'rowChanged'
        QtMocHelpers::SignalData<void(int)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 13 },
        }}),
        // Signal 'isLayoutChanged'
        QtMocHelpers::SignalData<void(bool)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 15 },
        }}),
        // Signal 'childTilesChanged'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'windowAdded'
        QtMocHelpers::SignalData<void(Window *)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Signal 'windowRemoved'
        QtMocHelpers::SignalData<void(Window *)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Signal 'windowsChanged'
        QtMocHelpers::SignalData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'resizeByPixels'
        QtMocHelpers::MethodData<void(qreal, Qt::Edge)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 23 }, { 0x80000000 | 24, 25 },
        }}),
        // Method 'manage'
        QtMocHelpers::MethodData<bool(Window *)>(26, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Method 'unmanage'
        QtMocHelpers::MethodData<bool(Window *)>(27, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 18, 19 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'relativeGeometry'
        QtMocHelpers::PropertyData<KWin::RectF>(28, 0x80000000 | 29, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'absoluteGeometry'
        QtMocHelpers::PropertyData<KWin::RectF>(30, 0x80000000 | 29, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 2),
        // property 'absoluteGeometryInScreen'
        QtMocHelpers::PropertyData<KWin::RectF>(31, 0x80000000 | 29, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 2),
        // property 'padding'
        QtMocHelpers::PropertyData<qreal>(8, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'minimumSize'
        QtMocHelpers::PropertyData<QSizeF>(32, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 5),
        // property 'positionInLayout'
        QtMocHelpers::PropertyData<int>(33, QMetaType::Int, QMC::DefaultPropertyFlags, 6),
        // property 'parent'
        QtMocHelpers::PropertyData<Tile*>(34, 0x80000000 | 35, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'tiles'
        QtMocHelpers::PropertyData<QList<KWin::Tile*>>(36, 0x80000000 | 37, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 8),
        // property 'windows'
        QtMocHelpers::PropertyData<QList<KWin::Window*>>(38, 0x80000000 | 39, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 11),
        // property 'isLayout'
        QtMocHelpers::PropertyData<bool>(15, QMetaType::Bool, QMC::DefaultPropertyFlags, 7),
        // property 'canBeRemoved'
        QtMocHelpers::PropertyData<bool>(40, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'LayoutDirection'
        QtMocHelpers::EnumData<enum LayoutDirection>(41, 41, QMC::EnumIsScoped).add({
            {   42, LayoutDirection::Floating },
            {   43, LayoutDirection::Horizontal },
            {   44, LayoutDirection::Vertical },
        }),
    };
    return QtMocHelpers::metaObjectData<Tile, qt_meta_tag_ZN4KWin4TileE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN4KWin4TileE[] = {
    QMetaObject::SuperData::link<KWin::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject KWin::Tile::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin4TileE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin4TileE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN4KWin4TileE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin4TileE_t>.metaTypes,
    nullptr
} };

void KWin::Tile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Tile *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->activeChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->relativeGeometryChanged(); break;
        case 2: _t->absoluteGeometryChanged(); break;
        case 3: _t->windowGeometryChanged(); break;
        case 4: _t->paddingChanged((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 5: _t->minimumSizeChanged((*reinterpret_cast<std::add_pointer_t<QSizeF>>(_a[1]))); break;
        case 6: _t->rowChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->isLayoutChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->childTilesChanged(); break;
        case 9: _t->windowAdded((*reinterpret_cast<std::add_pointer_t<Window*>>(_a[1]))); break;
        case 10: _t->windowRemoved((*reinterpret_cast<std::add_pointer_t<Window*>>(_a[1]))); break;
        case 11: _t->windowsChanged(); break;
        case 12: _t->resizeByPixels((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Qt::Edge>>(_a[2]))); break;
        case 13: { bool _r = _t->manage((*reinterpret_cast<std::add_pointer_t<Window*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->unmanage((*reinterpret_cast<std::add_pointer_t<Window*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Tile::*)(bool )>(_a, &Tile::activeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Tile::*)()>(_a, &Tile::relativeGeometryChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Tile::*)()>(_a, &Tile::absoluteGeometryChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Tile::*)()>(_a, &Tile::windowGeometryChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Tile::*)(qreal )>(_a, &Tile::paddingChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Tile::*)(const QSizeF & )>(_a, &Tile::minimumSizeChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Tile::*)(int )>(_a, &Tile::rowChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Tile::*)(bool )>(_a, &Tile::isLayoutChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (Tile::*)()>(_a, &Tile::childTilesChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (Tile::*)(Window * )>(_a, &Tile::windowAdded, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (Tile::*)(Window * )>(_a, &Tile::windowRemoved, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (Tile::*)()>(_a, &Tile::windowsChanged, 11))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<KWin::Tile*> >(); break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Tile* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<KWin::RectF*>(_v) = _t->relativeGeometry(); break;
        case 1: *reinterpret_cast<KWin::RectF*>(_v) = _t->absoluteGeometry(); break;
        case 2: *reinterpret_cast<KWin::RectF*>(_v) = _t->absoluteGeometryInScreen(); break;
        case 3: *reinterpret_cast<qreal*>(_v) = _t->padding(); break;
        case 4: *reinterpret_cast<QSizeF*>(_v) = _t->minimumSize(); break;
        case 5: *reinterpret_cast<int*>(_v) = _t->row(); break;
        case 6: *reinterpret_cast<Tile**>(_v) = _t->parentTile(); break;
        case 7: *reinterpret_cast<QList<KWin::Tile*>*>(_v) = _t->childTiles(); break;
        case 8: *reinterpret_cast<QList<KWin::Window*>*>(_v) = _t->windows(); break;
        case 9: *reinterpret_cast<bool*>(_v) = _t->isLayout(); break;
        case 10: *reinterpret_cast<bool*>(_v) = _t->canBeRemoved(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRelativeGeometry(*reinterpret_cast<KWin::RectF*>(_v)); break;
        case 3: _t->setPadding(*reinterpret_cast<qreal*>(_v)); break;
        case 4: _t->setMinimumSize(*reinterpret_cast<QSizeF*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::Tile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::Tile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin4TileE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::Tile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void KWin::Tile::activeChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void KWin::Tile::relativeGeometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::Tile::absoluteGeometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::Tile::windowGeometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWin::Tile::paddingChanged(qreal _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void KWin::Tile::minimumSizeChanged(const QSizeF & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void KWin::Tile::rowChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void KWin::Tile::isLayoutChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void KWin::Tile::childTilesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void KWin::Tile::windowAdded(Window * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void KWin::Tile::windowRemoved(Window * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void KWin::Tile::windowsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
