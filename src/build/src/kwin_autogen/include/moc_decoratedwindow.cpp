/****************************************************************************
** Meta object code from reading C++ file 'decoratedwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/decorations/decoratedwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'decoratedwindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin10Decoration19DecoratedWindowImplE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::Decoration::DecoratedWindowImpl::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin10Decoration19DecoratedWindowImplE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::Decoration::DecoratedWindowImpl",
        "delayedRequestToggleMaximization",
        "",
        "Options::WindowOperation",
        "operation"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'delayedRequestToggleMaximization'
        QtMocHelpers::SlotData<void(Options::WindowOperation)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DecoratedWindowImpl, qt_meta_tag_ZN4KWin10Decoration19DecoratedWindowImplE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::Decoration::DecoratedWindowImpl::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin10Decoration19DecoratedWindowImplE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin10Decoration19DecoratedWindowImplE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin10Decoration19DecoratedWindowImplE_t>.metaTypes,
    nullptr
} };

void KWin::Decoration::DecoratedWindowImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DecoratedWindowImpl *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->delayedRequestToggleMaximization((*reinterpret_cast<std::add_pointer_t<Options::WindowOperation>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *KWin::Decoration::DecoratedWindowImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::Decoration::DecoratedWindowImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin10Decoration19DecoratedWindowImplE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "KDecoration3::DecoratedWindowPrivateV4"))
        return static_cast< KDecoration3::DecoratedWindowPrivateV4*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::Decoration::DecoratedWindowImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
