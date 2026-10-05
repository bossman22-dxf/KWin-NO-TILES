/****************************************************************************
** Meta object code from reading C++ file 'genericscriptedconfig.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/kcms/common/genericscriptedconfig.h"
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'genericscriptedconfig.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin28GenericScriptedConfigFactoryE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::GenericScriptedConfigFactory::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin28GenericScriptedConfigFactoryE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::GenericScriptedConfigFactory"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GenericScriptedConfigFactory, qt_meta_tag_ZN4KWin28GenericScriptedConfigFactoryE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::GenericScriptedConfigFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<KPluginFactory::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin28GenericScriptedConfigFactoryE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin28GenericScriptedConfigFactoryE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin28GenericScriptedConfigFactoryE_t>.metaTypes,
    nullptr
} };

void KWin::GenericScriptedConfigFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GenericScriptedConfigFactory *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::GenericScriptedConfigFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::GenericScriptedConfigFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin28GenericScriptedConfigFactoryE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.kde.KPluginFactory"))
        return static_cast< KPluginFactory*>(this);
    return KPluginFactory::qt_metacast(_clname);
}

int KWin::GenericScriptedConfigFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KPluginFactory::qt_metacall(_c, _id, _a);
    return _id;
}
using namespace KWin;

#ifdef QT_MOC_EXPORT_PLUGIN_V2
static constexpr unsigned char qt_pluginMetaDataV2_GenericScriptedConfigFactory[] = {
    0xbf, 
    // "IID"
    0x02,  0x76,  'o',  'r',  'g',  '.',  'k',  'd', 
    'e',  '.',  'K',  'P',  'l',  'u',  'g',  'i', 
    'n',  'F',  'a',  'c',  't',  'o',  'r',  'y', 
    // "className"
    0x03,  0x78,  0x1c,  'G',  'e',  'n',  'e',  'r', 
    'i',  'c',  'S',  'c',  'r',  'i',  'p',  't', 
    'e',  'd',  'C',  'o',  'n',  'f',  'i',  'g', 
    'F',  'a',  'c',  't',  'o',  'r',  'y', 
    // "MetaData"
    0x04,  0xa2,  0x64,  'T',  'y',  'p',  'e',  0x67, 
    'S',  'e',  'r',  'v',  'i',  'c',  'e',  0x6d, 
    'X',  '-',  'K',  'D',  'E',  '-',  'L',  'i', 
    'b',  'r',  'a',  'r',  'y',  0x78,  0x19,  'k', 
    'c',  'm',  '_',  'k',  'w',  'i',  'n',  '4', 
    '_',  'g',  'e',  'n',  'e',  'r',  'i',  'c', 
    's',  'c',  'r',  'i',  'p',  't',  'e',  'd', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN_V2(KWin::GenericScriptedConfigFactory, GenericScriptedConfigFactory, qt_pluginMetaDataV2_GenericScriptedConfigFactory)
#else
QT_PLUGIN_METADATA_SECTION
Q_CONSTINIT static constexpr unsigned char qt_pluginMetaData_GenericScriptedConfigFactory[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x76,  'o',  'r',  'g',  '.',  'k',  'd', 
    'e',  '.',  'K',  'P',  'l',  'u',  'g',  'i', 
    'n',  'F',  'a',  'c',  't',  'o',  'r',  'y', 
    // "className"
    0x03,  0x78,  0x1c,  'G',  'e',  'n',  'e',  'r', 
    'i',  'c',  'S',  'c',  'r',  'i',  'p',  't', 
    'e',  'd',  'C',  'o',  'n',  'f',  'i',  'g', 
    'F',  'a',  'c',  't',  'o',  'r',  'y', 
    // "MetaData"
    0x04,  0xa2,  0x64,  'T',  'y',  'p',  'e',  0x67, 
    'S',  'e',  'r',  'v',  'i',  'c',  'e',  0x6d, 
    'X',  '-',  'K',  'D',  'E',  '-',  'L',  'i', 
    'b',  'r',  'a',  'r',  'y',  0x78,  0x19,  'k', 
    'c',  'm',  '_',  'k',  'w',  'i',  'n',  '4', 
    '_',  'g',  'e',  'n',  'e',  'r',  'i',  'c', 
    's',  'c',  'r',  'i',  'p',  't',  'e',  'd', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(KWin::GenericScriptedConfigFactory, GenericScriptedConfigFactory)
#endif  // QT_MOC_EXPORT_PLUGIN_V2

namespace {
struct qt_meta_tag_ZN4KWin21GenericScriptedConfigE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::GenericScriptedConfig::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin21GenericScriptedConfigE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::GenericScriptedConfig",
        "save",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'save'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GenericScriptedConfig, qt_meta_tag_ZN4KWin21GenericScriptedConfigE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::GenericScriptedConfig::staticMetaObject = { {
    QMetaObject::SuperData::link<KCModule::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21GenericScriptedConfigE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21GenericScriptedConfigE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin21GenericScriptedConfigE_t>.metaTypes,
    nullptr
} };

void KWin::GenericScriptedConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GenericScriptedConfig *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->save(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *KWin::GenericScriptedConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::GenericScriptedConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21GenericScriptedConfigE_t>.strings))
        return static_cast<void*>(this);
    return KCModule::qt_metacast(_clname);
}

int KWin::GenericScriptedConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KCModule::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN4KWin20ScriptedEffectConfigE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::ScriptedEffectConfig::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin20ScriptedEffectConfigE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::ScriptedEffectConfig"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ScriptedEffectConfig, qt_meta_tag_ZN4KWin20ScriptedEffectConfigE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::ScriptedEffectConfig::staticMetaObject = { {
    QMetaObject::SuperData::link<GenericScriptedConfig::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin20ScriptedEffectConfigE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin20ScriptedEffectConfigE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin20ScriptedEffectConfigE_t>.metaTypes,
    nullptr
} };

void KWin::ScriptedEffectConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScriptedEffectConfig *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::ScriptedEffectConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::ScriptedEffectConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin20ScriptedEffectConfigE_t>.strings))
        return static_cast<void*>(this);
    return GenericScriptedConfig::qt_metacast(_clname);
}

int KWin::ScriptedEffectConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GenericScriptedConfig::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin15ScriptingConfigE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::ScriptingConfig::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin15ScriptingConfigE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::ScriptingConfig"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ScriptingConfig, qt_meta_tag_ZN4KWin15ScriptingConfigE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::ScriptingConfig::staticMetaObject = { {
    QMetaObject::SuperData::link<GenericScriptedConfig::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin15ScriptingConfigE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin15ScriptingConfigE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin15ScriptingConfigE_t>.metaTypes,
    nullptr
} };

void KWin::ScriptingConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScriptingConfig *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::ScriptingConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::ScriptingConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin15ScriptingConfigE_t>.strings))
        return static_cast<void*>(this);
    return GenericScriptedConfig::qt_metacast(_clname);
}

int KWin::ScriptingConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GenericScriptedConfig::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
