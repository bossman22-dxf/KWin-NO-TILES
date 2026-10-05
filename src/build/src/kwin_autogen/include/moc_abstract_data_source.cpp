/****************************************************************************
** Meta object code from reading C++ file 'abstract_data_source.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/wayland/abstract_data_source.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstract_data_source.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin18AbstractDataSourceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::AbstractDataSource::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin18AbstractDataSourceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::AbstractDataSource",
        "aboutToBeDestroyed",
        "",
        "mimeTypeOffered",
        "supportedDragAndDropActionsChanged",
        "keyboardModifiersChanged",
        "dndActionChanged",
        "exclusiveActionChanged",
        "acceptedChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'aboutToBeDestroyed'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'mimeTypeOffered'
        QtMocHelpers::SignalData<void(const QString &)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'supportedDragAndDropActionsChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'keyboardModifiersChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dndActionChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'exclusiveActionChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'acceptedChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AbstractDataSource, qt_meta_tag_ZN4KWin18AbstractDataSourceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::AbstractDataSource::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin18AbstractDataSourceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin18AbstractDataSourceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin18AbstractDataSourceE_t>.metaTypes,
    nullptr
} };

void KWin::AbstractDataSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AbstractDataSource *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->aboutToBeDestroyed(); break;
        case 1: _t->mimeTypeOffered((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->supportedDragAndDropActionsChanged(); break;
        case 3: _t->keyboardModifiersChanged(); break;
        case 4: _t->dndActionChanged(); break;
        case 5: _t->exclusiveActionChanged(); break;
        case 6: _t->acceptedChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AbstractDataSource::*)()>(_a, &AbstractDataSource::aboutToBeDestroyed, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractDataSource::*)(const QString & )>(_a, &AbstractDataSource::mimeTypeOffered, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractDataSource::*)()>(_a, &AbstractDataSource::supportedDragAndDropActionsChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractDataSource::*)()>(_a, &AbstractDataSource::keyboardModifiersChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractDataSource::*)()>(_a, &AbstractDataSource::dndActionChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractDataSource::*)()>(_a, &AbstractDataSource::exclusiveActionChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractDataSource::*)()>(_a, &AbstractDataSource::acceptedChanged, 6))
            return;
    }
}

const QMetaObject *KWin::AbstractDataSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::AbstractDataSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin18AbstractDataSourceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::AbstractDataSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void KWin::AbstractDataSource::aboutToBeDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::AbstractDataSource::mimeTypeOffered(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void KWin::AbstractDataSource::supportedDragAndDropActionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::AbstractDataSource::keyboardModifiersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWin::AbstractDataSource::dndActionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KWin::AbstractDataSource::exclusiveActionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KWin::AbstractDataSource::acceptedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
