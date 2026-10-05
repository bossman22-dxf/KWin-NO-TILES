/****************************************************************************
** Meta object code from reading C++ file 'xdgshell.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/wayland/xdgshell.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xdgshell.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin17XdgShellInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::XdgShellInterface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin17XdgShellInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::XdgShellInterface",
        "toplevelCreated",
        "",
        "XdgToplevelInterface*",
        "toplevel",
        "popupCreated",
        "XdgPopupInterface*",
        "popup",
        "pongReceived",
        "serial",
        "pingTimeout",
        "pingDelayed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'toplevelCreated'
        QtMocHelpers::SignalData<void(XdgToplevelInterface *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'popupCreated'
        QtMocHelpers::SignalData<void(XdgPopupInterface *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Signal 'pongReceived'
        QtMocHelpers::SignalData<void(quint32)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 9 },
        }}),
        // Signal 'pingTimeout'
        QtMocHelpers::SignalData<void(quint32)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 9 },
        }}),
        // Signal 'pingDelayed'
        QtMocHelpers::SignalData<void(quint32)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XdgShellInterface, qt_meta_tag_ZN4KWin17XdgShellInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::XdgShellInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17XdgShellInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17XdgShellInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin17XdgShellInterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::XdgShellInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XdgShellInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->toplevelCreated((*reinterpret_cast<std::add_pointer_t<XdgToplevelInterface*>>(_a[1]))); break;
        case 1: _t->popupCreated((*reinterpret_cast<std::add_pointer_t<XdgPopupInterface*>>(_a[1]))); break;
        case 2: _t->pongReceived((*reinterpret_cast<std::add_pointer_t<quint32>>(_a[1]))); break;
        case 3: _t->pingTimeout((*reinterpret_cast<std::add_pointer_t<quint32>>(_a[1]))); break;
        case 4: _t->pingDelayed((*reinterpret_cast<std::add_pointer_t<quint32>>(_a[1]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< XdgToplevelInterface* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< XdgPopupInterface* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (XdgShellInterface::*)(XdgToplevelInterface * )>(_a, &XdgShellInterface::toplevelCreated, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgShellInterface::*)(XdgPopupInterface * )>(_a, &XdgShellInterface::popupCreated, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgShellInterface::*)(quint32 )>(_a, &XdgShellInterface::pongReceived, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgShellInterface::*)(quint32 )>(_a, &XdgShellInterface::pingTimeout, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgShellInterface::*)(quint32 )>(_a, &XdgShellInterface::pingDelayed, 4))
            return;
    }
}

const QMetaObject *KWin::XdgShellInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::XdgShellInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17XdgShellInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::XdgShellInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void KWin::XdgShellInterface::toplevelCreated(XdgToplevelInterface * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void KWin::XdgShellInterface::popupCreated(XdgPopupInterface * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void KWin::XdgShellInterface::pongReceived(quint32 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void KWin::XdgShellInterface::pingTimeout(quint32 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void KWin::XdgShellInterface::pingDelayed(quint32 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN4KWin19XdgSurfaceInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::XdgSurfaceInterface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin19XdgSurfaceInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::XdgSurfaceInterface",
        "aboutToBeDestroyed",
        "",
        "configureAcknowledged",
        "serial",
        "windowGeometryChanged",
        "RectF",
        "rect",
        "resetOccurred"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'aboutToBeDestroyed'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'configureAcknowledged'
        QtMocHelpers::SignalData<void(quint32)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 4 },
        }}),
        // Signal 'windowGeometryChanged'
        QtMocHelpers::SignalData<void(const RectF &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Signal 'resetOccurred'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XdgSurfaceInterface, qt_meta_tag_ZN4KWin19XdgSurfaceInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::XdgSurfaceInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin19XdgSurfaceInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin19XdgSurfaceInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin19XdgSurfaceInterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::XdgSurfaceInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XdgSurfaceInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->aboutToBeDestroyed(); break;
        case 1: _t->configureAcknowledged((*reinterpret_cast<std::add_pointer_t<quint32>>(_a[1]))); break;
        case 2: _t->windowGeometryChanged((*reinterpret_cast<std::add_pointer_t<RectF>>(_a[1]))); break;
        case 3: _t->resetOccurred(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (XdgSurfaceInterface::*)()>(_a, &XdgSurfaceInterface::aboutToBeDestroyed, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgSurfaceInterface::*)(quint32 )>(_a, &XdgSurfaceInterface::configureAcknowledged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgSurfaceInterface::*)(const RectF & )>(_a, &XdgSurfaceInterface::windowGeometryChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgSurfaceInterface::*)()>(_a, &XdgSurfaceInterface::resetOccurred, 3))
            return;
    }
}

const QMetaObject *KWin::XdgSurfaceInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::XdgSurfaceInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin19XdgSurfaceInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::XdgSurfaceInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void KWin::XdgSurfaceInterface::aboutToBeDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::XdgSurfaceInterface::configureAcknowledged(quint32 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void KWin::XdgSurfaceInterface::windowGeometryChanged(const RectF & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void KWin::XdgSurfaceInterface::resetOccurred()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
namespace {
struct qt_meta_tag_ZN4KWin20XdgToplevelInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::XdgToplevelInterface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin20XdgToplevelInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::XdgToplevelInterface",
        "aboutToBeDestroyed",
        "",
        "initializeRequested",
        "resetOccurred",
        "titleChanged",
        "windowTitle",
        "appIdChanged",
        "windowClass",
        "windowMenuRequested",
        "KWin::SeatInterface*",
        "seat",
        "QPointF",
        "pos",
        "serial",
        "minimumSizeChanged",
        "QSizeF",
        "size",
        "maximumSizeChanged",
        "customIconChanged",
        "moveRequested",
        "resizeRequested",
        "KWin::Gravity",
        "gravity",
        "maximizeRequested",
        "unmaximizeRequested",
        "fullscreenRequested",
        "KWin::OutputInterface*",
        "output",
        "unfullscreenRequested",
        "minimizeRequested",
        "parentXdgToplevelChanged",
        "tagChanged",
        "descriptionChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'aboutToBeDestroyed'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'initializeRequested'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'resetOccurred'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'titleChanged'
        QtMocHelpers::SignalData<void(const QString &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 6 },
        }}),
        // Signal 'appIdChanged'
        QtMocHelpers::SignalData<void(const QString &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 8 },
        }}),
        // Signal 'windowMenuRequested'
        QtMocHelpers::SignalData<void(KWin::SeatInterface *, const QPointF &, quint32)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 }, { 0x80000000 | 12, 13 }, { QMetaType::UInt, 14 },
        }}),
        // Signal 'minimumSizeChanged'
        QtMocHelpers::SignalData<void(const QSizeF &)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 17 },
        }}),
        // Signal 'maximumSizeChanged'
        QtMocHelpers::SignalData<void(const QSizeF &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 17 },
        }}),
        // Signal 'customIconChanged'
        QtMocHelpers::SignalData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'moveRequested'
        QtMocHelpers::SignalData<void(KWin::SeatInterface *, quint32)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 }, { QMetaType::UInt, 14 },
        }}),
        // Signal 'resizeRequested'
        QtMocHelpers::SignalData<void(KWin::SeatInterface *, KWin::Gravity, quint32)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 }, { 0x80000000 | 22, 23 }, { QMetaType::UInt, 14 },
        }}),
        // Signal 'maximizeRequested'
        QtMocHelpers::SignalData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'unmaximizeRequested'
        QtMocHelpers::SignalData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fullscreenRequested'
        QtMocHelpers::SignalData<void(KWin::OutputInterface *)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 27, 28 },
        }}),
        // Signal 'unfullscreenRequested'
        QtMocHelpers::SignalData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'minimizeRequested'
        QtMocHelpers::SignalData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'parentXdgToplevelChanged'
        QtMocHelpers::SignalData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'tagChanged'
        QtMocHelpers::SignalData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'descriptionChanged'
        QtMocHelpers::SignalData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XdgToplevelInterface, qt_meta_tag_ZN4KWin20XdgToplevelInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::XdgToplevelInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin20XdgToplevelInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin20XdgToplevelInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin20XdgToplevelInterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::XdgToplevelInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XdgToplevelInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->aboutToBeDestroyed(); break;
        case 1: _t->initializeRequested(); break;
        case 2: _t->resetOccurred(); break;
        case 3: _t->titleChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->appIdChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->windowMenuRequested((*reinterpret_cast<std::add_pointer_t<KWin::SeatInterface*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[3]))); break;
        case 6: _t->minimumSizeChanged((*reinterpret_cast<std::add_pointer_t<QSizeF>>(_a[1]))); break;
        case 7: _t->maximumSizeChanged((*reinterpret_cast<std::add_pointer_t<QSizeF>>(_a[1]))); break;
        case 8: _t->customIconChanged(); break;
        case 9: _t->moveRequested((*reinterpret_cast<std::add_pointer_t<KWin::SeatInterface*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[2]))); break;
        case 10: _t->resizeRequested((*reinterpret_cast<std::add_pointer_t<KWin::SeatInterface*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<KWin::Gravity>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[3]))); break;
        case 11: _t->maximizeRequested(); break;
        case 12: _t->unmaximizeRequested(); break;
        case 13: _t->fullscreenRequested((*reinterpret_cast<std::add_pointer_t<KWin::OutputInterface*>>(_a[1]))); break;
        case 14: _t->unfullscreenRequested(); break;
        case 15: _t->minimizeRequested(); break;
        case 16: _t->parentXdgToplevelChanged(); break;
        case 17: _t->tagChanged(); break;
        case 18: _t->descriptionChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (XdgToplevelInterface::*)()>(_a, &XdgToplevelInterface::aboutToBeDestroyed, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgToplevelInterface::*)()>(_a, &XdgToplevelInterface::initializeRequested, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgToplevelInterface::*)()>(_a, &XdgToplevelInterface::resetOccurred, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgToplevelInterface::*)(const QString & )>(_a, &XdgToplevelInterface::titleChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgToplevelInterface::*)(const QString & )>(_a, &XdgToplevelInterface::appIdChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgToplevelInterface::*)(KWin::SeatInterface * , const QPointF & , quint32 )>(_a, &XdgToplevelInterface::windowMenuRequested, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgToplevelInterface::*)(const QSizeF & )>(_a, &XdgToplevelInterface::minimumSizeChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgToplevelInterface::*)(const QSizeF & )>(_a, &XdgToplevelInterface::maximumSizeChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgToplevelInterface::*)()>(_a, &XdgToplevelInterface::customIconChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgToplevelInterface::*)(KWin::SeatInterface * , quint32 )>(_a, &XdgToplevelInterface::moveRequested, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgToplevelInterface::*)(KWin::SeatInterface * , KWin::Gravity , quint32 )>(_a, &XdgToplevelInterface::resizeRequested, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgToplevelInterface::*)()>(_a, &XdgToplevelInterface::maximizeRequested, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgToplevelInterface::*)()>(_a, &XdgToplevelInterface::unmaximizeRequested, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgToplevelInterface::*)(KWin::OutputInterface * )>(_a, &XdgToplevelInterface::fullscreenRequested, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgToplevelInterface::*)()>(_a, &XdgToplevelInterface::unfullscreenRequested, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgToplevelInterface::*)()>(_a, &XdgToplevelInterface::minimizeRequested, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgToplevelInterface::*)()>(_a, &XdgToplevelInterface::parentXdgToplevelChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgToplevelInterface::*)()>(_a, &XdgToplevelInterface::tagChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgToplevelInterface::*)()>(_a, &XdgToplevelInterface::descriptionChanged, 18))
            return;
    }
}

const QMetaObject *KWin::XdgToplevelInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::XdgToplevelInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin20XdgToplevelInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::XdgToplevelInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void KWin::XdgToplevelInterface::aboutToBeDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::XdgToplevelInterface::initializeRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::XdgToplevelInterface::resetOccurred()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::XdgToplevelInterface::titleChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void KWin::XdgToplevelInterface::appIdChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void KWin::XdgToplevelInterface::windowMenuRequested(KWin::SeatInterface * _t1, const QPointF & _t2, quint32 _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2, _t3);
}

// SIGNAL 6
void KWin::XdgToplevelInterface::minimumSizeChanged(const QSizeF & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void KWin::XdgToplevelInterface::maximumSizeChanged(const QSizeF & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void KWin::XdgToplevelInterface::customIconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void KWin::XdgToplevelInterface::moveRequested(KWin::SeatInterface * _t1, quint32 _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1, _t2);
}

// SIGNAL 10
void KWin::XdgToplevelInterface::resizeRequested(KWin::SeatInterface * _t1, KWin::Gravity _t2, quint32 _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1, _t2, _t3);
}

// SIGNAL 11
void KWin::XdgToplevelInterface::maximizeRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void KWin::XdgToplevelInterface::unmaximizeRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void KWin::XdgToplevelInterface::fullscreenRequested(KWin::OutputInterface * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void KWin::XdgToplevelInterface::unfullscreenRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void KWin::XdgToplevelInterface::minimizeRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void KWin::XdgToplevelInterface::parentXdgToplevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void KWin::XdgToplevelInterface::tagChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void KWin::XdgToplevelInterface::descriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}
namespace {
struct qt_meta_tag_ZN4KWin17XdgPopupInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::XdgPopupInterface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin17XdgPopupInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::XdgPopupInterface",
        "aboutToBeDestroyed",
        "",
        "initializeRequested",
        "grabRequested",
        "SeatInterface*",
        "seat",
        "serial",
        "repositionRequested",
        "token"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'aboutToBeDestroyed'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'initializeRequested'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'grabRequested'
        QtMocHelpers::SignalData<void(SeatInterface *, quint32)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 }, { QMetaType::UInt, 7 },
        }}),
        // Signal 'repositionRequested'
        QtMocHelpers::SignalData<void(quint32)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XdgPopupInterface, qt_meta_tag_ZN4KWin17XdgPopupInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::XdgPopupInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17XdgPopupInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17XdgPopupInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin17XdgPopupInterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::XdgPopupInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XdgPopupInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->aboutToBeDestroyed(); break;
        case 1: _t->initializeRequested(); break;
        case 2: _t->grabRequested((*reinterpret_cast<std::add_pointer_t<SeatInterface*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[2]))); break;
        case 3: _t->repositionRequested((*reinterpret_cast<std::add_pointer_t<quint32>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (XdgPopupInterface::*)()>(_a, &XdgPopupInterface::aboutToBeDestroyed, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgPopupInterface::*)()>(_a, &XdgPopupInterface::initializeRequested, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgPopupInterface::*)(SeatInterface * , quint32 )>(_a, &XdgPopupInterface::grabRequested, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (XdgPopupInterface::*)(quint32 )>(_a, &XdgPopupInterface::repositionRequested, 3))
            return;
    }
}

const QMetaObject *KWin::XdgPopupInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::XdgPopupInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17XdgPopupInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::XdgPopupInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void KWin::XdgPopupInterface::aboutToBeDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::XdgPopupInterface::initializeRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::XdgPopupInterface::grabRequested(SeatInterface * _t1, quint32 _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void KWin::XdgPopupInterface::repositionRequested(quint32 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
