/****************************************************************************
** Meta object code from reading C++ file 'desktopsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/kcms/desktop/desktopsmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'desktopsmodel.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin13DesktopsModelE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::DesktopsModel::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin13DesktopsModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::DesktopsModel",
        "readyChanged",
        "",
        "errorChanged",
        "userModifiedChanged",
        "serverModifiedChanged",
        "rowsChanged",
        "desktopCountChanged",
        "reset",
        "getAllAndConnect",
        "QDBusMessage",
        "msg",
        "desktopCreated",
        "id",
        "KWin::DBusDesktopDataStruct",
        "data",
        "desktopRemoved",
        "desktopDataChanged",
        "desktopRowsChanged",
        "rows",
        "updateModifiedState",
        "server",
        "handleCallError",
        "createDesktop",
        "removeDesktop",
        "setDesktopName",
        "name",
        "syncWithServer",
        "ready",
        "error",
        "userModified",
        "serverModified",
        "desktopCount",
        "AdditionalRoles",
        "Id",
        "DesktopRow",
        "IsDefault"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'readyChanged'
        QtMocHelpers::SignalData<void() const>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'errorChanged'
        QtMocHelpers::SignalData<void() const>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'userModifiedChanged'
        QtMocHelpers::SignalData<void() const>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'serverModifiedChanged'
        QtMocHelpers::SignalData<void() const>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'rowsChanged'
        QtMocHelpers::SignalData<void() const>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'desktopCountChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'reset'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'getAllAndConnect'
        QtMocHelpers::SlotData<void(const QDBusMessage &)>(9, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Slot 'desktopCreated'
        QtMocHelpers::SlotData<void(const QString &, const KWin::DBusDesktopDataStruct &)>(12, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 13 }, { 0x80000000 | 14, 15 },
        }}),
        // Slot 'desktopRemoved'
        QtMocHelpers::SlotData<void(const QString &)>(16, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
        // Slot 'desktopDataChanged'
        QtMocHelpers::SlotData<void(const QString &, const KWin::DBusDesktopDataStruct &)>(17, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 13 }, { 0x80000000 | 14, 15 },
        }}),
        // Slot 'desktopRowsChanged'
        QtMocHelpers::SlotData<void(uint)>(18, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::UInt, 19 },
        }}),
        // Slot 'updateModifiedState'
        QtMocHelpers::SlotData<void(bool)>(20, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 21 },
        }}),
        // Slot 'updateModifiedState'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessProtected | QMC::MethodCloned, QMetaType::Void),
        // Slot 'handleCallError'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessProtected, QMetaType::Void),
        // Method 'createDesktop'
        QtMocHelpers::MethodData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'removeDesktop'
        QtMocHelpers::MethodData<void(const QString &)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
        // Method 'setDesktopName'
        QtMocHelpers::MethodData<void(const QString &, const QString &)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 13 }, { QMetaType::QString, 26 },
        }}),
        // Method 'syncWithServer'
        QtMocHelpers::MethodData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'ready'
        QtMocHelpers::PropertyData<bool>(28, QMetaType::Bool, QMC::DefaultPropertyFlags, 0),
        // property 'error'
        QtMocHelpers::PropertyData<QString>(29, QMetaType::QString, QMC::DefaultPropertyFlags, 1),
        // property 'userModified'
        QtMocHelpers::PropertyData<bool>(30, QMetaType::Bool, QMC::DefaultPropertyFlags, 2),
        // property 'serverModified'
        QtMocHelpers::PropertyData<bool>(31, QMetaType::Bool, QMC::DefaultPropertyFlags, 3),
        // property 'rows'
        QtMocHelpers::PropertyData<int>(19, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'desktopCount'
        QtMocHelpers::PropertyData<int>(32, QMetaType::Int, QMC::DefaultPropertyFlags, 5),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'AdditionalRoles'
        QtMocHelpers::EnumData<enum AdditionalRoles>(33, 33, QMC::EnumFlags{}).add({
            {   34, AdditionalRoles::Id },
            {   35, AdditionalRoles::DesktopRow },
            {   36, AdditionalRoles::IsDefault },
        }),
    };
    return QtMocHelpers::metaObjectData<DesktopsModel, qt_meta_tag_ZN4KWin13DesktopsModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::DesktopsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin13DesktopsModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin13DesktopsModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin13DesktopsModelE_t>.metaTypes,
    nullptr
} };

void KWin::DesktopsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DesktopsModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->readyChanged(); break;
        case 1: _t->errorChanged(); break;
        case 2: _t->userModifiedChanged(); break;
        case 3: _t->serverModifiedChanged(); break;
        case 4: _t->rowsChanged(); break;
        case 5: _t->desktopCountChanged(); break;
        case 6: _t->reset(); break;
        case 7: _t->getAllAndConnect((*reinterpret_cast<std::add_pointer_t<QDBusMessage>>(_a[1]))); break;
        case 8: _t->desktopCreated((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<KWin::DBusDesktopDataStruct>>(_a[2]))); break;
        case 9: _t->desktopRemoved((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->desktopDataChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<KWin::DBusDesktopDataStruct>>(_a[2]))); break;
        case 11: _t->desktopRowsChanged((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 12: _t->updateModifiedState((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->updateModifiedState(); break;
        case 14: _t->handleCallError(); break;
        case 15: _t->createDesktop(); break;
        case 16: _t->removeDesktop((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: _t->setDesktopName((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 18: _t->syncWithServer(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::DBusDesktopDataStruct >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::DBusDesktopDataStruct >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DesktopsModel::*)() const>(_a, &DesktopsModel::readyChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DesktopsModel::*)() const>(_a, &DesktopsModel::errorChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (DesktopsModel::*)() const>(_a, &DesktopsModel::userModifiedChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (DesktopsModel::*)() const>(_a, &DesktopsModel::serverModifiedChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (DesktopsModel::*)() const>(_a, &DesktopsModel::rowsChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (DesktopsModel::*)()>(_a, &DesktopsModel::desktopCountChanged, 5))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->ready(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->error(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->userModified(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->serverModified(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->rows(); break;
        case 5: *reinterpret_cast<int*>(_v) = _t->desktopCount(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setRows(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::DesktopsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::DesktopsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin13DesktopsModelE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int KWin::DesktopsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void KWin::DesktopsModel::readyChanged()const
{
    QMetaObject::activate(const_cast< KWin::DesktopsModel *>(this), &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::DesktopsModel::errorChanged()const
{
    QMetaObject::activate(const_cast< KWin::DesktopsModel *>(this), &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::DesktopsModel::userModifiedChanged()const
{
    QMetaObject::activate(const_cast< KWin::DesktopsModel *>(this), &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::DesktopsModel::serverModifiedChanged()const
{
    QMetaObject::activate(const_cast< KWin::DesktopsModel *>(this), &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWin::DesktopsModel::rowsChanged()const
{
    QMetaObject::activate(const_cast< KWin::DesktopsModel *>(this), &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KWin::DesktopsModel::desktopCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
