/****************************************************************************
** Meta object code from reading C++ file 'datasource.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../kwin-6.7.5/src/xwayland/datasource.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datasource.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin3Xwl13XwlDataSourceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::Xwl::XwlDataSource::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin3Xwl13XwlDataSourceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::Xwl::XwlDataSource",
        "dropped",
        "",
        "finished",
        "cancelled"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'dropped'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'finished'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'cancelled'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XwlDataSource, qt_meta_tag_ZN4KWin3Xwl13XwlDataSourceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::Xwl::XwlDataSource::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractDataSource::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin3Xwl13XwlDataSourceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin3Xwl13XwlDataSourceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin3Xwl13XwlDataSourceE_t>.metaTypes,
    nullptr
} };

void KWin::Xwl::XwlDataSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XwlDataSource *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->dropped(); break;
        case 1: _t->finished(); break;
        case 2: _t->cancelled(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (XwlDataSource::*)()>(_a, &XwlDataSource::dropped, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (XwlDataSource::*)()>(_a, &XwlDataSource::finished, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (XwlDataSource::*)()>(_a, &XwlDataSource::cancelled, 2))
            return;
    }
}

const QMetaObject *KWin::Xwl::XwlDataSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::Xwl::XwlDataSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin3Xwl13XwlDataSourceE_t>.strings))
        return static_cast<void*>(this);
    return AbstractDataSource::qt_metacast(_clname);
}

int KWin::Xwl::XwlDataSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractDataSource::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void KWin::Xwl::XwlDataSource::dropped()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::Xwl::XwlDataSource::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::Xwl::XwlDataSource::cancelled()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
