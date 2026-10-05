/****************************************************************************
** Meta object code from reading C++ file 'seat.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/wayland/seat.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'seat.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin10TouchPointE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::TouchPoint::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin10TouchPointE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::TouchPoint"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TouchPoint, qt_meta_tag_ZN4KWin10TouchPointE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::TouchPoint::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin10TouchPointE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin10TouchPointE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin10TouchPointE_t>.metaTypes,
    nullptr
} };

void KWin::TouchPoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TouchPoint *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::TouchPoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::TouchPoint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin10TouchPointE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::TouchPoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin13SeatInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::SeatInterface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin13SeatInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::SeatInterface",
        "hasPointerChanged",
        "",
        "hasKeyboardChanged",
        "hasTouchChanged",
        "pointerPosChanged",
        "QPointF",
        "pos",
        "touchMoved",
        "id",
        "serial",
        "globalPosition",
        "selectionChanged",
        "KWin::AbstractDataSource*",
        "primarySelectionChanged",
        "dragRequested",
        "AbstractDataSource*",
        "source",
        "SurfaceInterface*",
        "origin",
        "DragAndDropIcon*",
        "dragIcon",
        "dragStarted",
        "dragEnded",
        "dragDropped",
        "dragMoved",
        "position",
        "focusedTextInputSurfaceChanged",
        "focusedKeyboardSurfaceAboutToChange",
        "nextSurface"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'hasPointerChanged'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'hasKeyboardChanged'
        QtMocHelpers::SignalData<void(bool)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'hasTouchChanged'
        QtMocHelpers::SignalData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'pointerPosChanged'
        QtMocHelpers::SignalData<void(const QPointF &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Signal 'touchMoved'
        QtMocHelpers::SignalData<void(qint32, quint32, const QPointF &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 }, { QMetaType::UInt, 10 }, { 0x80000000 | 6, 11 },
        }}),
        // Signal 'selectionChanged'
        QtMocHelpers::SignalData<void(KWin::AbstractDataSource *)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 2 },
        }}),
        // Signal 'primarySelectionChanged'
        QtMocHelpers::SignalData<void(KWin::AbstractDataSource *)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 2 },
        }}),
        // Signal 'dragRequested'
        QtMocHelpers::SignalData<void(AbstractDataSource *, SurfaceInterface *, quint32, DragAndDropIcon *)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 17 }, { 0x80000000 | 18, 19 }, { QMetaType::UInt, 10 }, { 0x80000000 | 20, 21 },
        }}),
        // Signal 'dragStarted'
        QtMocHelpers::SignalData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dragEnded'
        QtMocHelpers::SignalData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dragDropped'
        QtMocHelpers::SignalData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dragMoved'
        QtMocHelpers::SignalData<void(const QPointF &)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 26 },
        }}),
        // Signal 'focusedTextInputSurfaceChanged'
        QtMocHelpers::SignalData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'focusedKeyboardSurfaceAboutToChange'
        QtMocHelpers::SignalData<void(SurfaceInterface *)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 29 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SeatInterface, qt_meta_tag_ZN4KWin13SeatInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::SeatInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin13SeatInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin13SeatInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin13SeatInterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::SeatInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SeatInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->hasPointerChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->hasKeyboardChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->hasTouchChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->pointerPosChanged((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 4: _t->touchMoved((*reinterpret_cast<std::add_pointer_t<qint32>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[3]))); break;
        case 5: _t->selectionChanged((*reinterpret_cast<std::add_pointer_t<KWin::AbstractDataSource*>>(_a[1]))); break;
        case 6: _t->primarySelectionChanged((*reinterpret_cast<std::add_pointer_t<KWin::AbstractDataSource*>>(_a[1]))); break;
        case 7: _t->dragRequested((*reinterpret_cast<std::add_pointer_t<AbstractDataSource*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<SurfaceInterface*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<DragAndDropIcon*>>(_a[4]))); break;
        case 8: _t->dragStarted(); break;
        case 9: _t->dragEnded(); break;
        case 10: _t->dragDropped(); break;
        case 11: _t->dragMoved((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 12: _t->focusedTextInputSurfaceChanged(); break;
        case 13: _t->focusedKeyboardSurfaceAboutToChange((*reinterpret_cast<std::add_pointer_t<SurfaceInterface*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SeatInterface::*)(bool )>(_a, &SeatInterface::hasPointerChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SeatInterface::*)(bool )>(_a, &SeatInterface::hasKeyboardChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SeatInterface::*)(bool )>(_a, &SeatInterface::hasTouchChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SeatInterface::*)(const QPointF & )>(_a, &SeatInterface::pointerPosChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (SeatInterface::*)(qint32 , quint32 , const QPointF & )>(_a, &SeatInterface::touchMoved, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (SeatInterface::*)(KWin::AbstractDataSource * )>(_a, &SeatInterface::selectionChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (SeatInterface::*)(KWin::AbstractDataSource * )>(_a, &SeatInterface::primarySelectionChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (SeatInterface::*)(AbstractDataSource * , SurfaceInterface * , quint32 , DragAndDropIcon * )>(_a, &SeatInterface::dragRequested, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (SeatInterface::*)()>(_a, &SeatInterface::dragStarted, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (SeatInterface::*)()>(_a, &SeatInterface::dragEnded, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (SeatInterface::*)()>(_a, &SeatInterface::dragDropped, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (SeatInterface::*)(const QPointF & )>(_a, &SeatInterface::dragMoved, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (SeatInterface::*)()>(_a, &SeatInterface::focusedTextInputSurfaceChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (SeatInterface::*)(SurfaceInterface * )>(_a, &SeatInterface::focusedKeyboardSurfaceAboutToChange, 13))
            return;
    }
}

const QMetaObject *KWin::SeatInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::SeatInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin13SeatInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::SeatInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void KWin::SeatInterface::hasPointerChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void KWin::SeatInterface::hasKeyboardChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void KWin::SeatInterface::hasTouchChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void KWin::SeatInterface::pointerPosChanged(const QPointF & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void KWin::SeatInterface::touchMoved(qint32 _t1, quint32 _t2, const QPointF & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2, _t3);
}

// SIGNAL 5
void KWin::SeatInterface::selectionChanged(KWin::AbstractDataSource * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void KWin::SeatInterface::primarySelectionChanged(KWin::AbstractDataSource * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void KWin::SeatInterface::dragRequested(AbstractDataSource * _t1, SurfaceInterface * _t2, quint32 _t3, DragAndDropIcon * _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 8
void KWin::SeatInterface::dragStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void KWin::SeatInterface::dragEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void KWin::SeatInterface::dragDropped()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void KWin::SeatInterface::dragMoved(const QPointF & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void KWin::SeatInterface::focusedTextInputSurfaceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void KWin::SeatInterface::focusedKeyboardSurfaceAboutToChange(SurfaceInterface * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}
QT_WARNING_POP
