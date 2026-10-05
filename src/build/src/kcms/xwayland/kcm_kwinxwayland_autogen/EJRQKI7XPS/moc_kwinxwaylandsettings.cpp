/****************************************************************************
** Meta object code from reading C++ file 'kwinxwaylandsettings.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kwinxwaylandsettings.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kwinxwaylandsettings.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN20KWinXwaylandSettingsE_t {};
} // unnamed namespace

template <> constexpr inline auto KWinXwaylandSettings::qt_create_metaobjectdata<qt_meta_tag_ZN20KWinXwaylandSettingsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWinXwaylandSettings",
        "xwaylandEavesdropsChanged",
        "",
        "xwaylandEavesdropsMouseChanged",
        "xwaylandEisNoPromptChanged",
        "XwaylandEisNoPromptAppsChanged",
        "xwaylandEavesdrops",
        "isXwaylandEavesdropsImmutable",
        "defaultXwaylandEavesdropsValue",
        "xwaylandEavesdropsMouse",
        "isXwaylandEavesdropsMouseImmutable",
        "defaultXwaylandEavesdropsMouseValue",
        "xwaylandEisNoPrompt",
        "isXwaylandEisNoPromptImmutable",
        "defaultXwaylandEisNoPromptValue",
        "xwaylandEisNoPromptApps",
        "isXwaylandEisNoPromptAppsImmutable",
        "EnumXwaylandEavesdrops",
        "None",
        "Modifiers",
        "Combinations",
        "All"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'xwaylandEavesdropsChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'xwaylandEavesdropsMouseChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'xwaylandEisNoPromptChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'XwaylandEisNoPromptAppsChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'xwaylandEavesdrops'
        QtMocHelpers::PropertyData<int>(6, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'isXwaylandEavesdropsImmutable'
        QtMocHelpers::PropertyData<bool>(7, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultXwaylandEavesdropsValue'
        QtMocHelpers::PropertyData<int>(8, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'xwaylandEavesdropsMouse'
        QtMocHelpers::PropertyData<bool>(9, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'isXwaylandEavesdropsMouseImmutable'
        QtMocHelpers::PropertyData<bool>(10, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultXwaylandEavesdropsMouseValue'
        QtMocHelpers::PropertyData<bool>(11, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'xwaylandEisNoPrompt'
        QtMocHelpers::PropertyData<bool>(12, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'isXwaylandEisNoPromptImmutable'
        QtMocHelpers::PropertyData<bool>(13, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultXwaylandEisNoPromptValue'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'xwaylandEisNoPromptApps'
        QtMocHelpers::PropertyData<QStringList>(15, QMetaType::QStringList, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'isXwaylandEisNoPromptAppsImmutable'
        QtMocHelpers::PropertyData<bool>(16, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'EnumXwaylandEavesdrops'
        QtMocHelpers::EnumData<enum EnumXwaylandEavesdrops>(17, 17, QMC::EnumFlags{}).add({
            {   18, EnumXwaylandEavesdrops::None },
            {   19, EnumXwaylandEavesdrops::Modifiers },
            {   20, EnumXwaylandEavesdrops::Combinations },
            {   21, EnumXwaylandEavesdrops::All },
        }),
    };
    return QtMocHelpers::metaObjectData<KWinXwaylandSettings, qt_meta_tag_ZN20KWinXwaylandSettingsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWinXwaylandSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<KConfigSkeleton::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20KWinXwaylandSettingsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20KWinXwaylandSettingsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20KWinXwaylandSettingsE_t>.metaTypes,
    nullptr
} };

void KWinXwaylandSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<KWinXwaylandSettings *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->xwaylandEavesdropsChanged(); break;
        case 1: _t->xwaylandEavesdropsMouseChanged(); break;
        case 2: _t->xwaylandEisNoPromptChanged(); break;
        case 3: _t->XwaylandEisNoPromptAppsChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (KWinXwaylandSettings::*)()>(_a, &KWinXwaylandSettings::xwaylandEavesdropsChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (KWinXwaylandSettings::*)()>(_a, &KWinXwaylandSettings::xwaylandEavesdropsMouseChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (KWinXwaylandSettings::*)()>(_a, &KWinXwaylandSettings::xwaylandEisNoPromptChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (KWinXwaylandSettings::*)()>(_a, &KWinXwaylandSettings::XwaylandEisNoPromptAppsChanged, 3))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->xwaylandEavesdrops(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isXwaylandEavesdropsImmutable(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->defaultXwaylandEavesdropsValue(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->xwaylandEavesdropsMouse(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isXwaylandEavesdropsMouseImmutable(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->defaultXwaylandEavesdropsMouseValue(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->xwaylandEisNoPrompt(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->isXwaylandEisNoPromptImmutable(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->defaultXwaylandEisNoPromptValue(); break;
        case 9: *reinterpret_cast<QStringList*>(_v) = _t->xwaylandEisNoPromptApps(); break;
        case 10: *reinterpret_cast<bool*>(_v) = _t->isXwaylandEisNoPromptAppsImmutable(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setXwaylandEavesdrops(*reinterpret_cast<int*>(_v)); break;
        case 3: _t->setXwaylandEavesdropsMouse(*reinterpret_cast<bool*>(_v)); break;
        case 6: _t->setXwaylandEisNoPrompt(*reinterpret_cast<bool*>(_v)); break;
        case 9: _t->setXwaylandEisNoPromptApps(*reinterpret_cast<QStringList*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KWinXwaylandSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWinXwaylandSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20KWinXwaylandSettingsE_t>.strings))
        return static_cast<void*>(this);
    return KConfigSkeleton::qt_metacast(_clname);
}

int KWinXwaylandSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KConfigSkeleton::qt_metacall(_c, _id, _a);
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
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void KWinXwaylandSettings::xwaylandEavesdropsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWinXwaylandSettings::xwaylandEavesdropsMouseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWinXwaylandSettings::xwaylandEisNoPromptChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWinXwaylandSettings::XwaylandEisNoPromptAppsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
