/****************************************************************************
** Meta object code from reading C++ file 'sessionadaptor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sessionadaptor.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sessionadaptor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14SessionAdaptorE_t {};
} // unnamed namespace

template <> constexpr inline auto SessionAdaptor::qt_create_metaobjectdata<qt_meta_tag_ZN14SessionAdaptorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SessionAdaptor",
        "D-Bus Interface",
        "org.kde.KWin.Session",
        "D-Bus Introspection",
        "  <interface name=\"org.kde.KWin.Session\">\n    <method name=\"se"
        "tState\">\n      <arg direction=\"in\" type=\"u\" name=\"state\"/>"
        "\n    </method>\n    <method name=\"loadSession\">\n      <arg dir"
        "ection=\"in\" type=\"s\" name=\"name\"/>\n    </method>\n    <meth"
        "od name=\"aboutToSaveSession\">\n      <arg direction=\"in\" type="
        "\"s\" name=\"name\"/>\n    </method>\n    <method name=\"finishSav"
        "eSession\">\n      <arg direction=\"in\" type=\"s\" name=\"name\"/"
        ">\n    </method>\n    <method name=\"quit\"/>\n    <method name=\""
        "closeWaylandWindows\">\n      <arg direction=\"out\" type=\"b\"/>\n"
        "    </method>\n  </interface>\n",
        "aboutToSaveSession",
        "",
        "name",
        "closeWaylandWindows",
        "finishSaveSession",
        "loadSession",
        "quit",
        "setState",
        "state"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'aboutToSaveSession'
        QtMocHelpers::SlotData<void(const QString &)>(5, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Slot 'closeWaylandWindows'
        QtMocHelpers::SlotData<bool()>(8, 6, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'finishSaveSession'
        QtMocHelpers::SlotData<void(const QString &)>(9, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Slot 'loadSession'
        QtMocHelpers::SlotData<void(const QString &)>(10, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Slot 'quit'
        QtMocHelpers::SlotData<void()>(11, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setState'
        QtMocHelpers::SlotData<void(uint)>(12, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 13 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<SessionAdaptor, qt_meta_tag_ZN14SessionAdaptorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject SessionAdaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SessionAdaptorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SessionAdaptorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14SessionAdaptorE_t>.metaTypes,
    nullptr
} };

void SessionAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SessionAdaptor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->aboutToSaveSession((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: { bool _r = _t->closeWaylandWindows();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->finishSaveSession((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->loadSession((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->quit(); break;
        case 5: _t->setState((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *SessionAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SessionAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SessionAdaptorE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int SessionAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
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
