/****************************************************************************
** Meta object code from reading C++ file 'datadevice.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/wayland/datadevice.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datadevice.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin15DragAndDropIconE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::DragAndDropIcon::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin15DragAndDropIconE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::DragAndDropIcon",
        "changed",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'changed'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DragAndDropIcon, qt_meta_tag_ZN4KWin15DragAndDropIconE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::DragAndDropIcon::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin15DragAndDropIconE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin15DragAndDropIconE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin15DragAndDropIconE_t>.metaTypes,
    nullptr
} };

void KWin::DragAndDropIcon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DragAndDropIcon *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->changed(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DragAndDropIcon::*)()>(_a, &DragAndDropIcon::changed, 0))
            return;
    }
}

const QMetaObject *KWin::DragAndDropIcon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::DragAndDropIcon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin15DragAndDropIconE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::DragAndDropIcon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void KWin::DragAndDropIcon::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN4KWin19DataDeviceInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::DataDeviceInterface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin19DataDeviceInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::DataDeviceInterface",
        "aboutToBeDestroyed",
        "",
        "dragRequested",
        "AbstractDataSource*",
        "source",
        "SurfaceInterface*",
        "originSurface",
        "serial",
        "DragAndDropIcon*",
        "dragIcon",
        "selectionChanged",
        "KWin::DataSourceInterface*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'aboutToBeDestroyed'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dragRequested'
        QtMocHelpers::SignalData<void(AbstractDataSource *, SurfaceInterface *, quint32, DragAndDropIcon *)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 6, 7 }, { QMetaType::UInt, 8 }, { 0x80000000 | 9, 10 },
        }}),
        // Signal 'selectionChanged'
        QtMocHelpers::SignalData<void(KWin::DataSourceInterface *, quint32)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 2 }, { QMetaType::UInt, 8 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DataDeviceInterface, qt_meta_tag_ZN4KWin19DataDeviceInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::DataDeviceInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractDropHandler::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin19DataDeviceInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin19DataDeviceInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin19DataDeviceInterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::DataDeviceInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DataDeviceInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->aboutToBeDestroyed(); break;
        case 1: _t->dragRequested((*reinterpret_cast<std::add_pointer_t<AbstractDataSource*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<SurfaceInterface*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<DragAndDropIcon*>>(_a[4]))); break;
        case 2: _t->selectionChanged((*reinterpret_cast<std::add_pointer_t<KWin::DataSourceInterface*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< DragAndDropIcon* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DataDeviceInterface::*)()>(_a, &DataDeviceInterface::aboutToBeDestroyed, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataDeviceInterface::*)(AbstractDataSource * , SurfaceInterface * , quint32 , DragAndDropIcon * )>(_a, &DataDeviceInterface::dragRequested, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataDeviceInterface::*)(KWin::DataSourceInterface * , quint32 )>(_a, &DataDeviceInterface::selectionChanged, 2))
            return;
    }
}

const QMetaObject *KWin::DataDeviceInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::DataDeviceInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin19DataDeviceInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return AbstractDropHandler::qt_metacast(_clname);
}

int KWin::DataDeviceInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractDropHandler::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void KWin::DataDeviceInterface::aboutToBeDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::DataDeviceInterface::dragRequested(AbstractDataSource * _t1, SurfaceInterface * _t2, quint32 _t3, DragAndDropIcon * _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 2
void KWin::DataDeviceInterface::selectionChanged(KWin::DataSourceInterface * _t1, quint32 _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}
QT_WARNING_POP
