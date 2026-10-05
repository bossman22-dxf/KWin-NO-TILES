/****************************************************************************
** Meta object code from reading C++ file 'screencast_v1.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/wayland/screencast_v1.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screencast_v1.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin27ScreencastStreamV1InterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::ScreencastStreamV1Interface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin27ScreencastStreamV1InterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::ScreencastStreamV1Interface",
        "finished",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'finished'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ScreencastStreamV1Interface, qt_meta_tag_ZN4KWin27ScreencastStreamV1InterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::ScreencastStreamV1Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin27ScreencastStreamV1InterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin27ScreencastStreamV1InterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin27ScreencastStreamV1InterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::ScreencastStreamV1Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScreencastStreamV1Interface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->finished(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ScreencastStreamV1Interface::*)()>(_a, &ScreencastStreamV1Interface::finished, 0))
            return;
    }
}

const QMetaObject *KWin::ScreencastStreamV1Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::ScreencastStreamV1Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin27ScreencastStreamV1InterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::ScreencastStreamV1Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void KWin::ScreencastStreamV1Interface::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN4KWin21ScreencastV1InterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::ScreencastV1Interface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin21ScreencastV1InterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::ScreencastV1Interface",
        "outputScreencastRequested",
        "",
        "ScreencastStreamV1Interface*",
        "stream",
        "OutputInterface*",
        "output",
        "CursorMode",
        "mode",
        "virtualOutputScreencastRequested",
        "name",
        "description",
        "QSize",
        "size",
        "scaling",
        "windowScreencastRequested",
        "winid",
        "regionScreencastRequested",
        "Rect",
        "geometry",
        "Hidden",
        "Embedded",
        "Metadata"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'outputScreencastRequested'
        QtMocHelpers::SignalData<void(ScreencastStreamV1Interface *, OutputInterface *, enum CursorMode)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'virtualOutputScreencastRequested'
        QtMocHelpers::SignalData<void(ScreencastStreamV1Interface *, const QString &, const QString &, const QSize &, double, enum CursorMode)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QString, 10 }, { QMetaType::QString, 11 }, { 0x80000000 | 12, 13 },
            { QMetaType::Double, 14 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'windowScreencastRequested'
        QtMocHelpers::SignalData<void(ScreencastStreamV1Interface *, const QString &, enum CursorMode)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QString, 16 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'regionScreencastRequested'
        QtMocHelpers::SignalData<void(ScreencastStreamV1Interface *, const Rect &, qreal, enum CursorMode)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 18, 19 }, { QMetaType::QReal, 14 }, { 0x80000000 | 7, 8 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'CursorMode'
        QtMocHelpers::EnumData<enum CursorMode>(7, 7, QMC::EnumFlags{}).add({
            {   20, CursorMode::Hidden },
            {   21, CursorMode::Embedded },
            {   22, CursorMode::Metadata },
        }),
    };
    return QtMocHelpers::metaObjectData<ScreencastV1Interface, qt_meta_tag_ZN4KWin21ScreencastV1InterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::ScreencastV1Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21ScreencastV1InterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21ScreencastV1InterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin21ScreencastV1InterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::ScreencastV1Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScreencastV1Interface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->outputScreencastRequested((*reinterpret_cast<std::add_pointer_t<ScreencastStreamV1Interface*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<OutputInterface*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<enum CursorMode>>(_a[3]))); break;
        case 1: _t->virtualOutputScreencastRequested((*reinterpret_cast<std::add_pointer_t<ScreencastStreamV1Interface*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QSize>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<enum CursorMode>>(_a[6]))); break;
        case 2: _t->windowScreencastRequested((*reinterpret_cast<std::add_pointer_t<ScreencastStreamV1Interface*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<enum CursorMode>>(_a[3]))); break;
        case 3: _t->regionScreencastRequested((*reinterpret_cast<std::add_pointer_t<ScreencastStreamV1Interface*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Rect>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<enum CursorMode>>(_a[4]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ScreencastStreamV1Interface* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ScreencastStreamV1Interface* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ScreencastStreamV1Interface* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ScreencastStreamV1Interface* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ScreencastV1Interface::*)(ScreencastStreamV1Interface * , OutputInterface * , CursorMode )>(_a, &ScreencastV1Interface::outputScreencastRequested, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScreencastV1Interface::*)(ScreencastStreamV1Interface * , const QString & , const QString & , const QSize & , double , CursorMode )>(_a, &ScreencastV1Interface::virtualOutputScreencastRequested, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScreencastV1Interface::*)(ScreencastStreamV1Interface * , const QString & , CursorMode )>(_a, &ScreencastV1Interface::windowScreencastRequested, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScreencastV1Interface::*)(ScreencastStreamV1Interface * , const Rect & , qreal , CursorMode )>(_a, &ScreencastV1Interface::regionScreencastRequested, 3))
            return;
    }
}

const QMetaObject *KWin::ScreencastV1Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::ScreencastV1Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21ScreencastV1InterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::ScreencastV1Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void KWin::ScreencastV1Interface::outputScreencastRequested(ScreencastStreamV1Interface * _t1, OutputInterface * _t2, CursorMode _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}

// SIGNAL 1
void KWin::ScreencastV1Interface::virtualOutputScreencastRequested(ScreencastStreamV1Interface * _t1, const QString & _t2, const QString & _t3, const QSize & _t4, double _t5, CursorMode _t6)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3, _t4, _t5, _t6);
}

// SIGNAL 2
void KWin::ScreencastV1Interface::windowScreencastRequested(ScreencastStreamV1Interface * _t1, const QString & _t2, CursorMode _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2, _t3);
}

// SIGNAL 3
void KWin::ScreencastV1Interface::regionScreencastRequested(ScreencastStreamV1Interface * _t1, const Rect & _t2, qreal _t3, CursorMode _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2, _t3, _t4);
}
QT_WARNING_POP
