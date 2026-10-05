/****************************************************************************
** Meta object code from reading C++ file 'effectsadaptor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "effectsadaptor.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'effectsadaptor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14EffectsAdaptorE_t {};
} // unnamed namespace

template <> constexpr inline auto EffectsAdaptor::qt_create_metaobjectdata<qt_meta_tag_ZN14EffectsAdaptorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "EffectsAdaptor",
        "D-Bus Interface",
        "org.kde.kwin.Effects",
        "D-Bus Introspection",
        "  <interface name=\"org.kde.kwin.Effects\">\n    <property access="
        "\"read\" type=\"as\" name=\"activeEffects\"/>\n    <property acces"
        "s=\"read\" type=\"as\" name=\"loadedEffects\"/>\n    <property acc"
        "ess=\"read\" type=\"as\" name=\"listOfEffects\"/>\n    <method nam"
        "e=\"reconfigureEffect\">\n      <arg direction=\"in\" type=\"s\" n"
        "ame=\"name\"/>\n    </method>\n    <method name=\"loadEffect\">\n "
        "     <arg direction=\"out\" type=\"b\"/>\n      <arg direction=\"i"
        "n\" type=\"s\" name=\"name\"/>\n    </method>\n    <method name=\""
        "toggleEffect\">\n      <arg direction=\"in\" type=\"s\" name=\"nam"
        "e\"/>\n    </method>\n    <method name=\"unloadEffect\">\n      <a"
        "rg direction=\"in\" type=\"s\" name=\"name\"/>\n    </method>\n   "
        " <method name=\"isEffectLoaded\">\n      <arg direction=\"out\" ty"
        "pe=\"b\"/>\n      <arg direction=\"in\" type=\"s\" name=\"name\"/>"
        "\n    </method>\n    <method name=\"isEffectSupported\">\n      <a"
        "rg direction=\"out\" type=\"b\"/>\n      <arg direction=\"in\" typ"
        "e=\"s\" name=\"name\"/>\n    </method>\n    <method name=\"areEffe"
        "ctsSupported\">\n      <arg direction=\"out\" type=\"ab\"/>\n     "
        " <annotation value=\"QList&lt;bool&gt;\" name=\"org.qtproject.QtDB"
        "us.QtTypeName.Out0\"/>\n      <arg direction=\"in\" type=\"as\" na"
        "me=\"names\"/>\n    </method>\n    <method name=\"supportInformati"
        "on\">\n      <arg direction=\"out\" type=\"s\"/>\n      <arg direc"
        "tion=\"in\" type=\"s\" name=\"name\"/>\n    </method>\n    <method"
        " name=\"debug\">\n      <arg direction=\"out\" type=\"s\"/>\n     "
        " <arg direction=\"in\" type=\"s\" name=\"name\"/>\n      <arg dire"
        "ction=\"in\" type=\"s\" name=\"name\"/>\n    </method>\n  </interf"
        "ace>\n",
        "areEffectsSupported",
        "QList<bool>",
        "",
        "names",
        "debug",
        "name",
        "name_",
        "isEffectLoaded",
        "isEffectSupported",
        "loadEffect",
        "reconfigureEffect",
        "supportInformation",
        "toggleEffect",
        "unloadEffect",
        "activeEffects",
        "listOfEffects",
        "loadedEffects"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'areEffectsSupported'
        QtMocHelpers::SlotData<QList<bool>(const QStringList &)>(5, 7, QMC::AccessPublic, 0x80000000 | 6, {{
            { QMetaType::QStringList, 8 },
        }}),
        // Slot 'debug'
        QtMocHelpers::SlotData<QString(const QString &, const QString &)>(9, 7, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 10 }, { QMetaType::QString, 11 },
        }}),
        // Slot 'isEffectLoaded'
        QtMocHelpers::SlotData<bool(const QString &)>(12, 7, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'isEffectSupported'
        QtMocHelpers::SlotData<bool(const QString &)>(13, 7, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'loadEffect'
        QtMocHelpers::SlotData<bool(const QString &)>(14, 7, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'reconfigureEffect'
        QtMocHelpers::SlotData<void(const QString &)>(15, 7, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'supportInformation'
        QtMocHelpers::SlotData<QString(const QString &)>(16, 7, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'toggleEffect'
        QtMocHelpers::SlotData<void(const QString &)>(17, 7, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'unloadEffect'
        QtMocHelpers::SlotData<void(const QString &)>(18, 7, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'activeEffects'
        QtMocHelpers::PropertyData<QStringList>(19, QMetaType::QStringList, QMC::DefaultPropertyFlags),
        // property 'listOfEffects'
        QtMocHelpers::PropertyData<QStringList>(20, QMetaType::QStringList, QMC::DefaultPropertyFlags),
        // property 'loadedEffects'
        QtMocHelpers::PropertyData<QStringList>(21, QMetaType::QStringList, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<EffectsAdaptor, qt_meta_tag_ZN14EffectsAdaptorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject EffectsAdaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14EffectsAdaptorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14EffectsAdaptorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14EffectsAdaptorE_t>.metaTypes,
    nullptr
} };

void EffectsAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EffectsAdaptor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QList<bool> _r = _t->areEffectsSupported((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QList<bool>*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->debug((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->isEffectLoaded((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->isEffectSupported((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->loadEffect((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->reconfigureEffect((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: { QString _r = _t->supportInformation((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->toggleEffect((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->unloadEffect((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QStringList*>(_v) = _t->activeEffects(); break;
        case 1: *reinterpret_cast<QStringList*>(_v) = _t->listOfEffects(); break;
        case 2: *reinterpret_cast<QStringList*>(_v) = _t->loadedEffects(); break;
        default: break;
        }
    }
}

const QMetaObject *EffectsAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EffectsAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14EffectsAdaptorE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int EffectsAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
