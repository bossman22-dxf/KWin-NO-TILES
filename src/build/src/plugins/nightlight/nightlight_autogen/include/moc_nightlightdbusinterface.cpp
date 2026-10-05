/****************************************************************************
** Meta object code from reading C++ file 'nightlightdbusinterface.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/plugins/nightlight/nightlightdbusinterface.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nightlightdbusinterface.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin23NightLightDBusInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::NightLightDBusInterface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin23NightLightDBusInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::NightLightDBusInterface",
        "D-Bus Interface",
        "org.kde.KWin.NightLight",
        "inhibit",
        "",
        "uninhibit",
        "cookie",
        "preview",
        "temperature",
        "stopPreview",
        "removeInhibitorService",
        "serviceName",
        "inhibited",
        "enabled",
        "running",
        "available",
        "currentTemperature",
        "targetTemperature",
        "mode",
        "daylight",
        "previousTransitionDateTime",
        "previousTransitionDuration",
        "scheduledTransitionDateTime",
        "scheduledTransitionDuration"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'inhibit'
        QtMocHelpers::SlotData<uint()>(3, 4, QMC::AccessPublic, QMetaType::UInt),
        // Slot 'uninhibit'
        QtMocHelpers::SlotData<void(uint)>(5, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 6 },
        }}),
        // Slot 'preview'
        QtMocHelpers::SlotData<void(uint)>(7, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 8 },
        }}),
        // Slot 'stopPreview'
        QtMocHelpers::SlotData<void()>(9, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'removeInhibitorService'
        QtMocHelpers::SlotData<void(const QString &)>(10, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 11 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'inhibited'
        QtMocHelpers::PropertyData<bool>(12, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'enabled'
        QtMocHelpers::PropertyData<bool>(13, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'running'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'available'
        QtMocHelpers::PropertyData<bool>(15, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'currentTemperature'
        QtMocHelpers::PropertyData<quint32>(16, QMetaType::UInt, QMC::DefaultPropertyFlags),
        // property 'targetTemperature'
        QtMocHelpers::PropertyData<quint32>(17, QMetaType::UInt, QMC::DefaultPropertyFlags),
        // property 'mode'
        QtMocHelpers::PropertyData<quint32>(18, QMetaType::UInt, QMC::DefaultPropertyFlags),
        // property 'daylight'
        QtMocHelpers::PropertyData<bool>(19, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'previousTransitionDateTime'
        QtMocHelpers::PropertyData<quint64>(20, QMetaType::ULongLong, QMC::DefaultPropertyFlags),
        // property 'previousTransitionDuration'
        QtMocHelpers::PropertyData<quint32>(21, QMetaType::UInt, QMC::DefaultPropertyFlags),
        // property 'scheduledTransitionDateTime'
        QtMocHelpers::PropertyData<quint64>(22, QMetaType::ULongLong, QMC::DefaultPropertyFlags),
        // property 'scheduledTransitionDuration'
        QtMocHelpers::PropertyData<quint32>(23, QMetaType::UInt, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<NightLightDBusInterface, qt_meta_tag_ZN4KWin23NightLightDBusInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject KWin::NightLightDBusInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23NightLightDBusInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23NightLightDBusInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin23NightLightDBusInterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::NightLightDBusInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NightLightDBusInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { uint _r = _t->inhibit();
            if (_a[0]) *reinterpret_cast<uint*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->uninhibit((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 2: _t->preview((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 3: _t->stopPreview(); break;
        case 4: _t->removeInhibitorService((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isInhibited(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isEnabled(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isRunning(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isAvailable(); break;
        case 4: *reinterpret_cast<quint32*>(_v) = _t->currentTemperature(); break;
        case 5: *reinterpret_cast<quint32*>(_v) = _t->targetTemperature(); break;
        case 6: *reinterpret_cast<quint32*>(_v) = _t->mode(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->daylight(); break;
        case 8: *reinterpret_cast<quint64*>(_v) = _t->previousTransitionDateTime(); break;
        case 9: *reinterpret_cast<quint32*>(_v) = _t->previousTransitionDuration(); break;
        case 10: *reinterpret_cast<quint64*>(_v) = _t->scheduledTransitionDateTime(); break;
        case 11: *reinterpret_cast<quint32*>(_v) = _t->scheduledTransitionDuration(); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::NightLightDBusInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::NightLightDBusInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin23NightLightDBusInterfaceE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QDBusContext"))
        return static_cast< QDBusContext*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::NightLightDBusInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
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
