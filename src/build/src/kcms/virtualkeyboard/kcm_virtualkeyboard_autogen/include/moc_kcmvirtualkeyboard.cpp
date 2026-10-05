/****************************************************************************
** Meta object code from reading C++ file 'kcmvirtualkeyboard.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/kcms/virtualkeyboard/kcmvirtualkeyboard.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kcmvirtualkeyboard.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN21VirtualKeyboardsModelE_t {};
} // unnamed namespace

template <> constexpr inline auto VirtualKeyboardsModel::qt_create_metaobjectdata<qt_meta_tag_ZN21VirtualKeyboardsModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VirtualKeyboardsModel",
        "inputMethodIndex",
        "",
        "desktopFile",
        "Roles",
        "DesktopFileNameRole"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'inputMethodIndex'
        QtMocHelpers::MethodData<int(const QString &) const>(1, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Int, {{
            { QMetaType::QString, 3 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Roles'
        QtMocHelpers::EnumData<enum Roles>(4, 4, QMC::EnumFlags{}).add({
            {    5, Roles::DesktopFileNameRole },
        }),
    };
    return QtMocHelpers::metaObjectData<VirtualKeyboardsModel, qt_meta_tag_ZN21VirtualKeyboardsModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject VirtualKeyboardsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21VirtualKeyboardsModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21VirtualKeyboardsModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21VirtualKeyboardsModelE_t>.metaTypes,
    nullptr
} };

void VirtualKeyboardsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VirtualKeyboardsModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { int _r = _t->inputMethodIndex((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *VirtualKeyboardsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VirtualKeyboardsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21VirtualKeyboardsModelE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int VirtualKeyboardsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
struct qt_meta_tag_ZN18KcmVirtualKeyboardE_t {};
} // unnamed namespace

template <> constexpr inline auto KcmVirtualKeyboard::qt_create_metaobjectdata<qt_meta_tag_ZN18KcmVirtualKeyboardE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KcmVirtualKeyboard",
        "modeChanged",
        "",
        "KWinVirtualKeyboard::VirtualKeyboardMode",
        "mode",
        "settings",
        "VirtualKeyboardSettings*",
        "model",
        "QAbstractItemModel*",
        "dbusInterface",
        "KWinVirtualKeyboard*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'modeChanged'
        QtMocHelpers::SignalData<void(KWinVirtualKeyboard::VirtualKeyboardMode)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'settings'
        QtMocHelpers::PropertyData<VirtualKeyboardSettings*>(5, 0x80000000 | 6, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'model'
        QtMocHelpers::PropertyData<QAbstractItemModel*>(7, 0x80000000 | 8, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'dbusInterface'
        QtMocHelpers::PropertyData<KWinVirtualKeyboard*>(9, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'mode'
        QtMocHelpers::PropertyData<KWinVirtualKeyboard::VirtualKeyboardMode>(4, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<KcmVirtualKeyboard, qt_meta_tag_ZN18KcmVirtualKeyboardE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN18KcmVirtualKeyboardE[] = {
    QMetaObject::SuperData::link<KWinVirtualKeyboard::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject KcmVirtualKeyboard::staticMetaObject = { {
    QMetaObject::SuperData::link<KQuickManagedConfigModule::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18KcmVirtualKeyboardE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18KcmVirtualKeyboardE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN18KcmVirtualKeyboardE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18KcmVirtualKeyboardE_t>.metaTypes,
    nullptr
} };

void KcmVirtualKeyboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<KcmVirtualKeyboard *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->modeChanged((*reinterpret_cast<std::add_pointer_t<KWinVirtualKeyboard::VirtualKeyboardMode>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (KcmVirtualKeyboard::*)(KWinVirtualKeyboard::VirtualKeyboardMode )>(_a, &KcmVirtualKeyboard::modeChanged, 0))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KWinVirtualKeyboard* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<VirtualKeyboardSettings**>(_v) = _t->settings(); break;
        case 1: *reinterpret_cast<QAbstractItemModel**>(_v) = _t->keyboardsModel(); break;
        case 2: *reinterpret_cast<KWinVirtualKeyboard**>(_v) = _t->dbusInterface(); break;
        case 3: *reinterpret_cast<KWinVirtualKeyboard::VirtualKeyboardMode*>(_v) = _t->mode(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setMode(*reinterpret_cast<KWinVirtualKeyboard::VirtualKeyboardMode*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KcmVirtualKeyboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KcmVirtualKeyboard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18KcmVirtualKeyboardE_t>.strings))
        return static_cast<void*>(this);
    return KQuickManagedConfigModule::qt_metacast(_clname);
}

int KcmVirtualKeyboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KQuickManagedConfigModule::qt_metacall(_c, _id, _a);
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void KcmVirtualKeyboard::modeChanged(KWinVirtualKeyboard::VirtualKeyboardMode _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
