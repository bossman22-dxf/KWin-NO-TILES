/****************************************************************************
** Meta object code from reading C++ file 'screenedge.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/screenedge.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screenedge.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin4EdgeE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::Edge::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin4EdgeE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::Edge",
        "approaching",
        "",
        "ElectricBorder",
        "border",
        "factor",
        "Rect",
        "geometry",
        "activatesForTouchGestureChanged",
        "reserve",
        "unreserve",
        "object",
        "setBorder",
        "setAction",
        "ElectricBorderAction",
        "action",
        "setGeometry",
        "updateApproaching",
        "QPointF",
        "point"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'approaching'
        QtMocHelpers::SignalData<void(ElectricBorder, qreal, const Rect &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QReal, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Signal 'activatesForTouchGestureChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'reserve'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'unreserve'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'unreserve'
        QtMocHelpers::SlotData<void(QObject *)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QObjectStar, 11 },
        }}),
        // Slot 'setBorder'
        QtMocHelpers::SlotData<void(ElectricBorder)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'setAction'
        QtMocHelpers::SlotData<void(ElectricBorderAction)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Slot 'setGeometry'
        QtMocHelpers::SlotData<void(const Rect &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'updateApproaching'
        QtMocHelpers::SlotData<void(const QPointF &)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Edge, qt_meta_tag_ZN4KWin4EdgeE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::Edge::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin4EdgeE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin4EdgeE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin4EdgeE_t>.metaTypes,
    nullptr
} };

void KWin::Edge::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Edge *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->approaching((*reinterpret_cast<std::add_pointer_t<ElectricBorder>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<Rect>>(_a[3]))); break;
        case 1: _t->activatesForTouchGestureChanged(); break;
        case 2: _t->reserve(); break;
        case 3: _t->unreserve(); break;
        case 4: _t->unreserve((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 5: _t->setBorder((*reinterpret_cast<std::add_pointer_t<ElectricBorder>>(_a[1]))); break;
        case 6: _t->setAction((*reinterpret_cast<std::add_pointer_t<ElectricBorderAction>>(_a[1]))); break;
        case 7: _t->setGeometry((*reinterpret_cast<std::add_pointer_t<Rect>>(_a[1]))); break;
        case 8: _t->updateApproaching((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Edge::*)(ElectricBorder , qreal , const Rect & )>(_a, &Edge::approaching, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Edge::*)()>(_a, &Edge::activatesForTouchGestureChanged, 1))
            return;
    }
}

const QMetaObject *KWin::Edge::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::Edge::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin4EdgeE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::Edge::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void KWin::Edge::approaching(ElectricBorder _t1, qreal _t2, const Rect & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}

// SIGNAL 1
void KWin::Edge::activatesForTouchGestureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
namespace {
struct qt_meta_tag_ZN4KWin11ScreenEdgesE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::ScreenEdges::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin11ScreenEdgesE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::ScreenEdges",
        "approaching",
        "",
        "ElectricBorder",
        "border",
        "factor",
        "Rect",
        "geometry",
        "reconfigure",
        "updateLayout",
        "recreateEdges",
        "desktopSwitching",
        "desktopSwitchingMovingClients",
        "cursorPushBackDistance",
        "QSize",
        "actionTopLeft",
        "actionTop",
        "actionTopRight",
        "actionRight",
        "actionBottomRight",
        "actionBottom",
        "actionBottomLeft",
        "actionLeft"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'approaching'
        QtMocHelpers::SignalData<void(ElectricBorder, qreal, const Rect &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QReal, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'reconfigure'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateLayout'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'recreateEdges'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'desktopSwitching'
        QtMocHelpers::PropertyData<bool>(11, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'desktopSwitchingMovingClients'
        QtMocHelpers::PropertyData<bool>(12, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'cursorPushBackDistance'
        QtMocHelpers::PropertyData<QSize>(13, 0x80000000 | 14, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'actionTopLeft'
        QtMocHelpers::PropertyData<int>(15, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'actionTop'
        QtMocHelpers::PropertyData<int>(16, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'actionTopRight'
        QtMocHelpers::PropertyData<int>(17, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'actionRight'
        QtMocHelpers::PropertyData<int>(18, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'actionBottomRight'
        QtMocHelpers::PropertyData<int>(19, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'actionBottom'
        QtMocHelpers::PropertyData<int>(20, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'actionBottomLeft'
        QtMocHelpers::PropertyData<int>(21, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'actionLeft'
        QtMocHelpers::PropertyData<int>(22, QMetaType::Int, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ScreenEdges, qt_meta_tag_ZN4KWin11ScreenEdgesE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::ScreenEdges::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin11ScreenEdgesE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin11ScreenEdgesE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin11ScreenEdgesE_t>.metaTypes,
    nullptr
} };

void KWin::ScreenEdges::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScreenEdges *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->approaching((*reinterpret_cast<std::add_pointer_t<ElectricBorder>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<Rect>>(_a[3]))); break;
        case 1: _t->reconfigure(); break;
        case 2: _t->updateLayout(); break;
        case 3: _t->recreateEdges(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ScreenEdges::*)(ElectricBorder , qreal , const Rect & )>(_a, &ScreenEdges::approaching, 0))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isDesktopSwitching(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isDesktopSwitchingMovingClients(); break;
        case 2: *reinterpret_cast<QSize*>(_v) = _t->cursorPushBackDistance(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->actionTopLeft(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->actionTop(); break;
        case 5: *reinterpret_cast<int*>(_v) = _t->actionTopRight(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->actionRight(); break;
        case 7: *reinterpret_cast<int*>(_v) = _t->actionBottomRight(); break;
        case 8: *reinterpret_cast<int*>(_v) = _t->actionBottom(); break;
        case 9: *reinterpret_cast<int*>(_v) = _t->actionBottomLeft(); break;
        case 10: *reinterpret_cast<int*>(_v) = _t->actionLeft(); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::ScreenEdges::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::ScreenEdges::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin11ScreenEdgesE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::ScreenEdges::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
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
void KWin::ScreenEdges::approaching(ElectricBorder _t1, qreal _t2, const Rect & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}
QT_WARNING_POP
