/****************************************************************************
** Meta object code from reading C++ file 'kwinadaptor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "kwinadaptor.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kwinadaptor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11KWinAdaptorE_t {};
} // unnamed namespace

template <> constexpr inline auto KWinAdaptor::qt_create_metaobjectdata<qt_meta_tag_ZN11KWinAdaptorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWinAdaptor",
        "D-Bus Interface",
        "org.kde.KWin",
        "D-Bus Introspection",
        "  <interface name=\"org.kde.KWin\">\n    <method name=\"reconfigur"
        "e\">\n      <annotation value=\"true\" name=\"org.freedesktop.DBus"
        ".Method.NoReply\"/>\n    </method>\n    <method name=\"killWindow\""
        ">\n      <annotation value=\"true\" name=\"org.freedesktop.DBus.Me"
        "thod.NoReply\"/>\n    </method>\n    <method name=\"setCurrentDesk"
        "top\">\n      <arg direction=\"in\" type=\"i\" name=\"desktop\"/>\n"
        "      <arg direction=\"out\" type=\"b\"/>\n    </method>\n    <met"
        "hod name=\"currentDesktop\">\n      <arg direction=\"out\" type=\""
        "i\"/>\n    </method>\n    <method name=\"nextDesktop\"/>\n    <met"
        "hod name=\"previousDesktop\"/>\n    <signal name=\"reloadConfig\"/"
        ">\n    <method name=\"supportInformation\">\n      <arg direction="
        "\"out\" type=\"s\"/>\n    </method>\n    <method name=\"activeOutp"
        "utName\">\n      <arg direction=\"out\" type=\"s\"/>\n    </method"
        ">\n    <method name=\"showDebugConsole\"/>\n    <method name=\"rep"
        "lace\"/>\n    <method name=\"queryWindowInfo\">\n      <annotation"
        " value=\"QVariantMap\" name=\"org.qtproject.QtDBus.QtTypeName.Out0"
        "\"/>\n      <arg direction=\"out\" type=\"a{sv}\"/>\n    </method>"
        "\n    <method name=\"getWindowInfo\">\n      <annotation value=\"Q"
        "VariantMap\" name=\"org.qtproject.QtDBus.QtTypeName.Out0\"/>\n    "
        "  <arg direction=\"in\" type=\"s\"/>\n      <arg direction=\"out\""
        " type=\"a{sv}\"/>\n    </method>\n    <property access=\"read\" ty"
        "pe=\"b\" name=\"showingDesktop\"/>\n    <method name=\"showDesktop"
        "\">\n      <annotation value=\"true\" name=\"org.freedesktop.DBus."
        "Method.NoReply\"/>\n      <arg direction=\"in\" type=\"b\" name=\""
        "showing\"/>\n    </method>\n    <signal name=\"showingDesktopChang"
        "ed\">\n      <arg direction=\"out\" type=\"b\" name=\"showing\"/>\n"
        "    </signal>\n  </interface>\n",
        "reloadConfig",
        "",
        "showingDesktopChanged",
        "showing",
        "activeOutputName",
        "currentDesktop",
        "getWindowInfo",
        "QVariantMap",
        "in0",
        "killWindow",
        "Q_NOREPLY",
        "nextDesktop",
        "previousDesktop",
        "queryWindowInfo",
        "reconfigure",
        "replace",
        "setCurrentDesktop",
        "desktop",
        "showDebugConsole",
        "showDesktop",
        "supportInformation",
        "showingDesktop"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'reloadConfig'
        QtMocHelpers::SignalData<void()>(5, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showingDesktopChanged'
        QtMocHelpers::SignalData<void(bool)>(7, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
        // Slot 'activeOutputName'
        QtMocHelpers::SlotData<QString()>(9, 6, QMC::AccessPublic, QMetaType::QString),
        // Slot 'currentDesktop'
        QtMocHelpers::SlotData<int()>(10, 6, QMC::AccessPublic, QMetaType::Int),
        // Slot 'getWindowInfo'
        QtMocHelpers::SlotData<QVariantMap(const QString &)>(11, 6, QMC::AccessPublic, 0x80000000 | 12, {{
            { QMetaType::QString, 13 },
        }}),
        // Slot 'killWindow'
        QtMocHelpers::SlotData<void()>(14, 15, QMC::AccessPublic, QMetaType::Void),
        // Slot 'nextDesktop'
        QtMocHelpers::SlotData<void()>(16, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'previousDesktop'
        QtMocHelpers::SlotData<void()>(17, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'queryWindowInfo'
        QtMocHelpers::SlotData<QVariantMap()>(18, 6, QMC::AccessPublic, 0x80000000 | 12),
        // Slot 'reconfigure'
        QtMocHelpers::SlotData<void()>(19, 15, QMC::AccessPublic, QMetaType::Void),
        // Slot 'replace'
        QtMocHelpers::SlotData<void()>(20, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setCurrentDesktop'
        QtMocHelpers::SlotData<bool(int)>(21, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 22 },
        }}),
        // Slot 'showDebugConsole'
        QtMocHelpers::SlotData<void()>(23, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showDesktop'
        QtMocHelpers::SlotData<void(bool)>(24, 15, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
        // Slot 'supportInformation'
        QtMocHelpers::SlotData<QString()>(25, 6, QMC::AccessPublic, QMetaType::QString),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'showingDesktop'
        QtMocHelpers::PropertyData<bool>(26, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<KWinAdaptor, qt_meta_tag_ZN11KWinAdaptorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject KWinAdaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11KWinAdaptorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11KWinAdaptorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11KWinAdaptorE_t>.metaTypes,
    nullptr
} };

void KWinAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<KWinAdaptor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->reloadConfig(); break;
        case 1: _t->showingDesktopChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: { QString _r = _t->activeOutputName();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { int _r = _t->currentDesktop();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 4: { QVariantMap _r = _t->getWindowInfo((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->killWindow(); break;
        case 6: _t->nextDesktop(); break;
        case 7: _t->previousDesktop(); break;
        case 8: { QVariantMap _r = _t->queryWindowInfo();
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->reconfigure(); break;
        case 10: _t->replace(); break;
        case 11: { bool _r = _t->setCurrentDesktop((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->showDebugConsole(); break;
        case 13: _t->showDesktop((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: { QString _r = _t->supportInformation();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (KWinAdaptor::*)()>(_a, &KWinAdaptor::reloadConfig, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (KWinAdaptor::*)(bool )>(_a, &KWinAdaptor::showingDesktopChanged, 1))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->showingDesktop(); break;
        default: break;
        }
    }
}

const QMetaObject *KWinAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWinAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11KWinAdaptorE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int KWinAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void KWinAdaptor::reloadConfig()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWinAdaptor::showingDesktopChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
