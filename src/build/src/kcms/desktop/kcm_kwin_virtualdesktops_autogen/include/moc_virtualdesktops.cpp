/****************************************************************************
** Meta object code from reading C++ file 'virtualdesktops.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/kcms/desktop/virtualdesktops.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'virtualdesktops.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin15VirtualDesktopsE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::VirtualDesktops::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin15VirtualDesktopsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::VirtualDesktops",
        "load",
        "",
        "save",
        "defaults",
        "configureAnimation",
        "QQuickItem*",
        "context",
        "showAboutAnimation",
        "desktopsModel",
        "QAbstractItemModel*",
        "animationsModel",
        "virtualDesktopsSettings",
        "VirtualDesktopsSettings*"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'load'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'save'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'defaults'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'configureAnimation'
        QtMocHelpers::SlotData<void(QQuickItem *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'showAboutAnimation'
        QtMocHelpers::SlotData<void(QQuickItem *)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'desktopsModel'
        QtMocHelpers::PropertyData<QAbstractItemModel*>(9, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'animationsModel'
        QtMocHelpers::PropertyData<QAbstractItemModel*>(11, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'virtualDesktopsSettings'
        QtMocHelpers::PropertyData<VirtualDesktopsSettings*>(12, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VirtualDesktops, qt_meta_tag_ZN4KWin15VirtualDesktopsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::VirtualDesktops::staticMetaObject = { {
    QMetaObject::SuperData::link<KQuickManagedConfigModule::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin15VirtualDesktopsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin15VirtualDesktopsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin15VirtualDesktopsE_t>.metaTypes,
    nullptr
} };

void KWin::VirtualDesktops::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VirtualDesktops *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->load(); break;
        case 1: _t->save(); break;
        case 2: _t->defaults(); break;
        case 3: _t->configureAnimation((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        case 4: _t->showAboutAnimation((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QAbstractItemModel**>(_v) = _t->desktopsModel(); break;
        case 1: *reinterpret_cast<QAbstractItemModel**>(_v) = _t->animationsModel(); break;
        case 2: *reinterpret_cast<VirtualDesktopsSettings**>(_v) = _t->virtualDesktopsSettings(); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::VirtualDesktops::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::VirtualDesktops::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin15VirtualDesktopsE_t>.strings))
        return static_cast<void*>(this);
    return KQuickManagedConfigModule::qt_metacast(_clname);
}

int KWin::VirtualDesktops::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KQuickManagedConfigModule::qt_metacall(_c, _id, _a);
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
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
