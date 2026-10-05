/****************************************************************************
** Meta object code from reading C++ file 'krunner1adaptor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "krunner1adaptor.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'krunner1adaptor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15Krunner1AdaptorE_t {};
} // unnamed namespace

template <> constexpr inline auto Krunner1Adaptor::qt_create_metaobjectdata<qt_meta_tag_ZN15Krunner1AdaptorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Krunner1Adaptor",
        "D-Bus Interface",
        "org.kde.krunner1",
        "D-Bus Introspection",
        "  <interface name=\"org.kde.krunner1\">\n    <method name=\"Action"
        "s\">\n      <annotation value=\"RemoteActions\" name=\"org.qtproje"
        "ct.QtDBus.QtTypeName.Out0\"/>\n      <arg direction=\"out\" type=\""
        "a(sss)\" name=\"matches\"/>\n    </method>\n    <method name=\"Run"
        "\">\n      <arg direction=\"in\" type=\"s\" name=\"matchId\"/>\n  "
        "    <arg direction=\"in\" type=\"s\" name=\"actionId\"/>\n    </me"
        "thod>\n    <method name=\"Match\">\n      <arg direction=\"in\" ty"
        "pe=\"s\" name=\"query\"/>\n      <annotation value=\"RemoteMatches"
        "\" name=\"org.qtproject.QtDBus.QtTypeName.Out0\"/>\n      <arg dir"
        "ection=\"out\" type=\"a(sssuda{sv})\" name=\"matches\"/>\n    </me"
        "thod>\n  </interface>\n",
        "Actions",
        "RemoteActions",
        "",
        "Match",
        "RemoteMatches",
        "query",
        "Run",
        "matchId",
        "actionId"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'Actions'
        QtMocHelpers::SlotData<RemoteActions()>(5, 7, QMC::AccessPublic, 0x80000000 | 6),
        // Slot 'Match'
        QtMocHelpers::SlotData<RemoteMatches(const QString &)>(8, 7, QMC::AccessPublic, 0x80000000 | 9, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'Run'
        QtMocHelpers::SlotData<void(const QString &, const QString &)>(11, 7, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 12 }, { QMetaType::QString, 13 },
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
    return QtMocHelpers::metaObjectData<Krunner1Adaptor, qt_meta_tag_ZN15Krunner1AdaptorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject Krunner1Adaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15Krunner1AdaptorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15Krunner1AdaptorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15Krunner1AdaptorE_t>.metaTypes,
    nullptr
} };

void Krunner1Adaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Krunner1Adaptor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { RemoteActions _r = _t->Actions();
            if (_a[0]) *reinterpret_cast<RemoteActions*>(_a[0]) = std::move(_r); }  break;
        case 1: { RemoteMatches _r = _t->Match((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<RemoteMatches*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->Run((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *Krunner1Adaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Krunner1Adaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15Krunner1AdaptorE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int Krunner1Adaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
