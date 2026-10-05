/****************************************************************************
** Meta object code from reading C++ file 'nightlightadaptor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "nightlightadaptor.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nightlightadaptor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17NightLightAdaptorE_t {};
} // unnamed namespace

template <> constexpr inline auto NightLightAdaptor::qt_create_metaobjectdata<qt_meta_tag_ZN17NightLightAdaptorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "NightLightAdaptor",
        "D-Bus Interface",
        "org.kde.KWin.NightLight",
        "D-Bus Introspection",
        "  <interface name=\"org.kde.KWin.NightLight\">\n    <method name=\""
        "inhibit\">\n      <arg direction=\"out\" type=\"u\" name=\"cookie\""
        "/>\n    </method>\n    <method name=\"uninhibit\">\n      <arg dir"
        "ection=\"in\" type=\"u\" name=\"cookie\"/>\n    </method>\n    <me"
        "thod name=\"preview\">\n      <arg direction=\"in\" type=\"u\" nam"
        "e=\"temperature\"/>\n    </method>\n    <method name=\"stopPreview"
        "\"/>\n    <property access=\"read\" type=\"b\" name=\"inhibited\"/"
        ">\n    <property access=\"read\" type=\"b\" name=\"enabled\"/>\n  "
        "  <property access=\"read\" type=\"b\" name=\"running\"/>\n    <pr"
        "operty access=\"read\" type=\"b\" name=\"available\"/>\n    <prope"
        "rty access=\"read\" type=\"u\" name=\"currentTemperature\"/>\n    "
        "<property access=\"read\" type=\"u\" name=\"targetTemperature\"/>\n"
        "    <property access=\"read\" type=\"u\" name=\"mode\"/>\n    <pro"
        "perty access=\"read\" type=\"b\" name=\"daylight\"/>\n    <propert"
        "y access=\"read\" type=\"t\" name=\"previousTransitionDateTime\"/>"
        "\n    <property access=\"read\" type=\"u\" name=\"previousTransiti"
        "onDuration\"/>\n    <property access=\"read\" type=\"t\" name=\"sc"
        "heduledTransitionDateTime\"/>\n    <property access=\"read\" type="
        "\"u\" name=\"scheduledTransitionDuration\"/>\n  </interface>\n",
        "inhibit",
        "",
        "preview",
        "temperature",
        "stopPreview",
        "uninhibit",
        "cookie",
        "available",
        "currentTemperature",
        "daylight",
        "enabled",
        "inhibited",
        "mode",
        "previousTransitionDateTime",
        "previousTransitionDuration",
        "running",
        "scheduledTransitionDateTime",
        "scheduledTransitionDuration",
        "targetTemperature"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'inhibit'
        QtMocHelpers::SlotData<uint()>(5, 6, QMC::AccessPublic, QMetaType::UInt),
        // Slot 'preview'
        QtMocHelpers::SlotData<void(uint)>(7, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 8 },
        }}),
        // Slot 'stopPreview'
        QtMocHelpers::SlotData<void()>(9, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'uninhibit'
        QtMocHelpers::SlotData<void(uint)>(10, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 11 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'available'
        QtMocHelpers::PropertyData<bool>(12, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'currentTemperature'
        QtMocHelpers::PropertyData<uint>(13, QMetaType::UInt, QMC::DefaultPropertyFlags),
        // property 'daylight'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'enabled'
        QtMocHelpers::PropertyData<bool>(15, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'inhibited'
        QtMocHelpers::PropertyData<bool>(16, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'mode'
        QtMocHelpers::PropertyData<uint>(17, QMetaType::UInt, QMC::DefaultPropertyFlags),
        // property 'previousTransitionDateTime'
        QtMocHelpers::PropertyData<qulonglong>(18, QMetaType::ULongLong, QMC::DefaultPropertyFlags),
        // property 'previousTransitionDuration'
        QtMocHelpers::PropertyData<uint>(19, QMetaType::UInt, QMC::DefaultPropertyFlags),
        // property 'running'
        QtMocHelpers::PropertyData<bool>(20, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'scheduledTransitionDateTime'
        QtMocHelpers::PropertyData<qulonglong>(21, QMetaType::ULongLong, QMC::DefaultPropertyFlags),
        // property 'scheduledTransitionDuration'
        QtMocHelpers::PropertyData<uint>(22, QMetaType::UInt, QMC::DefaultPropertyFlags),
        // property 'targetTemperature'
        QtMocHelpers::PropertyData<uint>(23, QMetaType::UInt, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<NightLightAdaptor, qt_meta_tag_ZN17NightLightAdaptorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject NightLightAdaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17NightLightAdaptorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17NightLightAdaptorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17NightLightAdaptorE_t>.metaTypes,
    nullptr
} };

void NightLightAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NightLightAdaptor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { uint _r = _t->inhibit();
            if (_a[0]) *reinterpret_cast<uint*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->preview((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 2: _t->stopPreview(); break;
        case 3: _t->uninhibit((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->available(); break;
        case 1: *reinterpret_cast<uint*>(_v) = _t->currentTemperature(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->daylight(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->enabled(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->inhibited(); break;
        case 5: *reinterpret_cast<uint*>(_v) = _t->mode(); break;
        case 6: *reinterpret_cast<qulonglong*>(_v) = _t->previousTransitionDateTime(); break;
        case 7: *reinterpret_cast<uint*>(_v) = _t->previousTransitionDuration(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->running(); break;
        case 9: *reinterpret_cast<qulonglong*>(_v) = _t->scheduledTransitionDateTime(); break;
        case 10: *reinterpret_cast<uint*>(_v) = _t->scheduledTransitionDuration(); break;
        case 11: *reinterpret_cast<uint*>(_v) = _t->targetTemperature(); break;
        default: break;
        }
    }
}

const QMetaObject *NightLightAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NightLightAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17NightLightAdaptorE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int NightLightAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
