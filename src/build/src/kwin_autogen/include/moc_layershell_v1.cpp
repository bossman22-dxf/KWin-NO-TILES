/****************************************************************************
** Meta object code from reading C++ file 'layershell_v1.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/wayland/layershell_v1.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layershell_v1.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin21LayerShellV1InterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::LayerShellV1Interface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin21LayerShellV1InterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::LayerShellV1Interface",
        "surfaceCreated",
        "",
        "LayerSurfaceV1Interface*",
        "surface"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'surfaceCreated'
        QtMocHelpers::SignalData<void(LayerSurfaceV1Interface *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<LayerShellV1Interface, qt_meta_tag_ZN4KWin21LayerShellV1InterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::LayerShellV1Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21LayerShellV1InterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21LayerShellV1InterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin21LayerShellV1InterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::LayerShellV1Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LayerShellV1Interface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->surfaceCreated((*reinterpret_cast<std::add_pointer_t<LayerSurfaceV1Interface*>>(_a[1]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LayerSurfaceV1Interface* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (LayerShellV1Interface::*)(LayerSurfaceV1Interface * )>(_a, &LayerShellV1Interface::surfaceCreated, 0))
            return;
    }
}

const QMetaObject *KWin::LayerShellV1Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::LayerShellV1Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21LayerShellV1InterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::LayerShellV1Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void KWin::LayerShellV1Interface::surfaceCreated(LayerSurfaceV1Interface * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN4KWin23LayerSurfaceV1InterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::LayerSurfaceV1Interface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin23LayerSurfaceV1InterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::LayerSurfaceV1Interface",
        "aboutToBeDestroyed",
        "",
        "configureAcknowledged",
        "serial",
        "acceptsFocusChanged",
        "layerChanged",
        "anchorChanged",
        "desiredSizeChanged",
        "exclusiveZoneChanged",
        "marginsChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'aboutToBeDestroyed'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'configureAcknowledged'
        QtMocHelpers::SignalData<void(quint32)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 4 },
        }}),
        // Signal 'acceptsFocusChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'layerChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'anchorChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'desiredSizeChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'exclusiveZoneChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'marginsChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<LayerSurfaceV1Interface, qt_meta_tag_ZN4KWin23LayerSurfaceV1InterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::LayerSurfaceV1Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23LayerSurfaceV1InterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23LayerSurfaceV1InterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin23LayerSurfaceV1InterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::LayerSurfaceV1Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LayerSurfaceV1Interface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->aboutToBeDestroyed(); break;
        case 1: _t->configureAcknowledged((*reinterpret_cast<std::add_pointer_t<quint32>>(_a[1]))); break;
        case 2: _t->acceptsFocusChanged(); break;
        case 3: _t->layerChanged(); break;
        case 4: _t->anchorChanged(); break;
        case 5: _t->desiredSizeChanged(); break;
        case 6: _t->exclusiveZoneChanged(); break;
        case 7: _t->marginsChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (LayerSurfaceV1Interface::*)()>(_a, &LayerSurfaceV1Interface::aboutToBeDestroyed, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (LayerSurfaceV1Interface::*)(quint32 )>(_a, &LayerSurfaceV1Interface::configureAcknowledged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (LayerSurfaceV1Interface::*)()>(_a, &LayerSurfaceV1Interface::acceptsFocusChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (LayerSurfaceV1Interface::*)()>(_a, &LayerSurfaceV1Interface::layerChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (LayerSurfaceV1Interface::*)()>(_a, &LayerSurfaceV1Interface::anchorChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (LayerSurfaceV1Interface::*)()>(_a, &LayerSurfaceV1Interface::desiredSizeChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (LayerSurfaceV1Interface::*)()>(_a, &LayerSurfaceV1Interface::exclusiveZoneChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (LayerSurfaceV1Interface::*)()>(_a, &LayerSurfaceV1Interface::marginsChanged, 7))
            return;
    }
}

const QMetaObject *KWin::LayerSurfaceV1Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::LayerSurfaceV1Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23LayerSurfaceV1InterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::LayerSurfaceV1Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void KWin::LayerSurfaceV1Interface::aboutToBeDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::LayerSurfaceV1Interface::configureAcknowledged(quint32 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void KWin::LayerSurfaceV1Interface::acceptsFocusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::LayerSurfaceV1Interface::layerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWin::LayerSurfaceV1Interface::anchorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KWin::LayerSurfaceV1Interface::desiredSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KWin::LayerSurfaceV1Interface::exclusiveZoneChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void KWin::LayerSurfaceV1Interface::marginsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
