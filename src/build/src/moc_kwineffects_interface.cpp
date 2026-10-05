/****************************************************************************
** Meta object code from reading C++ file 'kwineffects_interface.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "kwineffects_interface.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kwineffects_interface.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN26OrgKdeKwinEffectsInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto OrgKdeKwinEffectsInterface::qt_create_metaobjectdata<qt_meta_tag_ZN26OrgKdeKwinEffectsInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OrgKdeKwinEffectsInterface",
        "areEffectsSupported",
        "QDBusPendingReply<QList<bool>>",
        "",
        "names",
        "debug",
        "QDBusPendingReply<QString>",
        "name",
        "name_",
        "isEffectLoaded",
        "QDBusPendingReply<bool>",
        "isEffectSupported",
        "loadEffect",
        "reconfigureEffect",
        "QDBusPendingReply<>",
        "supportInformation",
        "toggleEffect",
        "unloadEffect",
        "activeEffects",
        "listOfEffects",
        "loadedEffects"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'areEffectsSupported'
        QtMocHelpers::SlotData<QDBusPendingReply<QList<bool> >(const QStringList &)>(1, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::QStringList, 4 },
        }}),
        // Slot 'debug'
        QtMocHelpers::SlotData<QDBusPendingReply<QString>(const QString &, const QString &)>(5, 3, QMC::AccessPublic, 0x80000000 | 6, {{
            { QMetaType::QString, 7 }, { QMetaType::QString, 8 },
        }}),
        // Slot 'isEffectLoaded'
        QtMocHelpers::SlotData<QDBusPendingReply<bool>(const QString &)>(9, 3, QMC::AccessPublic, 0x80000000 | 10, {{
            { QMetaType::QString, 7 },
        }}),
        // Slot 'isEffectSupported'
        QtMocHelpers::SlotData<QDBusPendingReply<bool>(const QString &)>(11, 3, QMC::AccessPublic, 0x80000000 | 10, {{
            { QMetaType::QString, 7 },
        }}),
        // Slot 'loadEffect'
        QtMocHelpers::SlotData<QDBusPendingReply<bool>(const QString &)>(12, 3, QMC::AccessPublic, 0x80000000 | 10, {{
            { QMetaType::QString, 7 },
        }}),
        // Slot 'reconfigureEffect'
        QtMocHelpers::SlotData<QDBusPendingReply<>(const QString &)>(13, 3, QMC::AccessPublic, 0x80000000 | 14, {{
            { QMetaType::QString, 7 },
        }}),
        // Slot 'supportInformation'
        QtMocHelpers::SlotData<QDBusPendingReply<QString>(const QString &)>(15, 3, QMC::AccessPublic, 0x80000000 | 6, {{
            { QMetaType::QString, 7 },
        }}),
        // Slot 'toggleEffect'
        QtMocHelpers::SlotData<QDBusPendingReply<>(const QString &)>(16, 3, QMC::AccessPublic, 0x80000000 | 14, {{
            { QMetaType::QString, 7 },
        }}),
        // Slot 'unloadEffect'
        QtMocHelpers::SlotData<QDBusPendingReply<>(const QString &)>(17, 3, QMC::AccessPublic, 0x80000000 | 14, {{
            { QMetaType::QString, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'activeEffects'
        QtMocHelpers::PropertyData<QStringList>(18, QMetaType::QStringList, QMC::DefaultPropertyFlags),
        // property 'listOfEffects'
        QtMocHelpers::PropertyData<QStringList>(19, QMetaType::QStringList, QMC::DefaultPropertyFlags),
        // property 'loadedEffects'
        QtMocHelpers::PropertyData<QStringList>(20, QMetaType::QStringList, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OrgKdeKwinEffectsInterface, qt_meta_tag_ZN26OrgKdeKwinEffectsInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OrgKdeKwinEffectsInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN26OrgKdeKwinEffectsInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN26OrgKdeKwinEffectsInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN26OrgKdeKwinEffectsInterfaceE_t>.metaTypes,
    nullptr
} };

void OrgKdeKwinEffectsInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OrgKdeKwinEffectsInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QDBusPendingReply<QList<bool>> _r = _t->areEffectsSupported((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<QList<bool>>*>(_a[0]) = std::move(_r); }  break;
        case 1: { QDBusPendingReply<QString> _r = _t->debug((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 2: { QDBusPendingReply<bool> _r = _t->isEffectLoaded((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<bool>*>(_a[0]) = std::move(_r); }  break;
        case 3: { QDBusPendingReply<bool> _r = _t->isEffectSupported((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<bool>*>(_a[0]) = std::move(_r); }  break;
        case 4: { QDBusPendingReply<bool> _r = _t->loadEffect((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<bool>*>(_a[0]) = std::move(_r); }  break;
        case 5: { QDBusPendingReply<> _r = _t->reconfigureEffect((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 6: { QDBusPendingReply<QString> _r = _t->supportInformation((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 7: { QDBusPendingReply<> _r = _t->toggleEffect((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 8: { QDBusPendingReply<> _r = _t->unloadEffect((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
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

const QMetaObject *OrgKdeKwinEffectsInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgKdeKwinEffectsInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN26OrgKdeKwinEffectsInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgKdeKwinEffectsInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
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
