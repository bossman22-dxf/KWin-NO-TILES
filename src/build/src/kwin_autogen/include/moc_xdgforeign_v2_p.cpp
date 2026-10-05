/****************************************************************************
** Meta object code from reading C++ file 'xdgforeign_v2_p.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/wayland/xdgforeign_v2_p.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xdgforeign_v2_p.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin22XdgExporterV2InterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::XdgExporterV2Interface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin22XdgExporterV2InterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::XdgExporterV2Interface"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XdgExporterV2Interface, qt_meta_tag_ZN4KWin22XdgExporterV2InterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::XdgExporterV2Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin22XdgExporterV2InterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin22XdgExporterV2InterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin22XdgExporterV2InterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::XdgExporterV2Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XdgExporterV2Interface *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::XdgExporterV2Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::XdgExporterV2Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin22XdgExporterV2InterfaceE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QtWaylandServer::zxdg_exporter_v2"))
        return static_cast< QtWaylandServer::zxdg_exporter_v2*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::XdgExporterV2Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin22XdgImporterV2InterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::XdgImporterV2Interface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin22XdgImporterV2InterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::XdgImporterV2Interface"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XdgImporterV2Interface, qt_meta_tag_ZN4KWin22XdgImporterV2InterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::XdgImporterV2Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin22XdgImporterV2InterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin22XdgImporterV2InterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin22XdgImporterV2InterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::XdgImporterV2Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XdgImporterV2Interface *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::XdgImporterV2Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::XdgImporterV2Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin22XdgImporterV2InterfaceE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QtWaylandServer::zxdg_importer_v2"))
        return static_cast< QtWaylandServer::zxdg_importer_v2*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::XdgImporterV2Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin22XdgExportedV2InterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::XdgExportedV2Interface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin22XdgExportedV2InterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::XdgExportedV2Interface"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XdgExportedV2Interface, qt_meta_tag_ZN4KWin22XdgExportedV2InterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::XdgExportedV2Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<XdgExportedSurface::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin22XdgExportedV2InterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin22XdgExportedV2InterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin22XdgExportedV2InterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::XdgExportedV2Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XdgExportedV2Interface *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::XdgExportedV2Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::XdgExportedV2Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin22XdgExportedV2InterfaceE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QtWaylandServer::zxdg_exported_v2"))
        return static_cast< QtWaylandServer::zxdg_exported_v2*>(this);
    return XdgExportedSurface::qt_metacast(_clname);
}

int KWin::XdgExportedV2Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XdgExportedSurface::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin22XdgImportedV2InterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::XdgImportedV2Interface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin22XdgImportedV2InterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::XdgImportedV2Interface",
        "childChanged",
        "",
        "KWin::SurfaceInterface*",
        "child",
        "handleExportedDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'childChanged'
        QtMocHelpers::SignalData<void(KWin::SurfaceInterface *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'handleExportedDestroyed'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XdgImportedV2Interface, qt_meta_tag_ZN4KWin22XdgImportedV2InterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::XdgImportedV2Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin22XdgImportedV2InterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin22XdgImportedV2InterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin22XdgImportedV2InterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::XdgImportedV2Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XdgImportedV2Interface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->childChanged((*reinterpret_cast<std::add_pointer_t<KWin::SurfaceInterface*>>(_a[1]))); break;
        case 1: _t->handleExportedDestroyed(); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::SurfaceInterface* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (XdgImportedV2Interface::*)(KWin::SurfaceInterface * )>(_a, &XdgImportedV2Interface::childChanged, 0))
            return;
    }
}

const QMetaObject *KWin::XdgImportedV2Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::XdgImportedV2Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin22XdgImportedV2InterfaceE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QtWaylandServer::zxdg_imported_v2"))
        return static_cast< QtWaylandServer::zxdg_imported_v2*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::XdgImportedV2Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void KWin::XdgImportedV2Interface::childChanged(KWin::SurfaceInterface * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
