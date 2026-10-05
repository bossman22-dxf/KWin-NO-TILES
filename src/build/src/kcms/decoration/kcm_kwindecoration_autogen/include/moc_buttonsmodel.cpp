/****************************************************************************
** Meta object code from reading C++ file 'buttonsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/kcms/decoration/declarative-plugin/buttonsmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buttonsmodel.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12KDecoration37Preview12ButtonsModelE_t {};
} // unnamed namespace

template <> constexpr inline auto KDecoration3::Preview::ButtonsModel::qt_create_metaobjectdata<qt_meta_tag_ZN12KDecoration37Preview12ButtonsModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KDecoration3::Preview::ButtonsModel",
        "QML.Element",
        "auto",
        "clear",
        "",
        "remove",
        "index",
        "up",
        "down",
        "move",
        "sourceIndex",
        "targetIndex",
        "add",
        "type"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'clear'
        QtMocHelpers::MethodData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Method 'remove'
        QtMocHelpers::MethodData<void(int)>(5, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Method 'up'
        QtMocHelpers::MethodData<void(int)>(7, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Method 'down'
        QtMocHelpers::MethodData<void(int)>(8, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Method 'move'
        QtMocHelpers::MethodData<void(int, int)>(9, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 }, { QMetaType::Int, 11 },
        }}),
        // Method 'add'
        QtMocHelpers::MethodData<void(int, int)>(12, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 }, { QMetaType::Int, 13 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<ButtonsModel, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject KDecoration3::Preview::ButtonsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12KDecoration37Preview12ButtonsModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12KDecoration37Preview12ButtonsModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12KDecoration37Preview12ButtonsModelE_t>.metaTypes,
    nullptr
} };

void KDecoration3::Preview::ButtonsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ButtonsModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->clear(); break;
        case 1: _t->remove((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->up((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->down((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->move((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->add((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *KDecoration3::Preview::ButtonsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDecoration3::Preview::ButtonsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12KDecoration37Preview12ButtonsModelE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int KDecoration3::Preview::ButtonsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
