/****************************************************************************
** Meta object code from reading C++ file 'plugin.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/plugins/windowsystem/plugin.h"
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plugin.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN23KWindowSystemKWinPluginE_t {};
} // unnamed namespace

template <> constexpr inline auto KWindowSystemKWinPlugin::qt_create_metaobjectdata<qt_meta_tag_ZN23KWindowSystemKWinPluginE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWindowSystemKWinPlugin"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<KWindowSystemKWinPlugin, qt_meta_tag_ZN23KWindowSystemKWinPluginE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWindowSystemKWinPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<KWindowSystemPluginInterface::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23KWindowSystemKWinPluginE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23KWindowSystemKWinPluginE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23KWindowSystemKWinPluginE_t>.metaTypes,
    nullptr
} };

void KWindowSystemKWinPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<KWindowSystemKWinPlugin *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWindowSystemKWinPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWindowSystemKWinPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23KWindowSystemKWinPluginE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.kde.kwindowsystem.KWindowSystemPluginInterface"))
        return static_cast< KWindowSystemPluginInterface*>(this);
    return KWindowSystemPluginInterface::qt_metacast(_clname);
}

int KWindowSystemKWinPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KWindowSystemPluginInterface::qt_metacall(_c, _id, _a);
    return _id;
}

#ifdef QT_MOC_EXPORT_PLUGIN_V2
static constexpr unsigned char qt_pluginMetaDataV2_KWindowSystemKWinPlugin[] = {
    0xbf, 
    // "IID"
    0x02,  0x78,  0x32,  'o',  'r',  'g',  '.',  'k', 
    'd',  'e',  '.',  'k',  'w',  'i',  'n',  'd', 
    'o',  'w',  's',  'y',  's',  't',  'e',  'm', 
    '.',  'K',  'W',  'i',  'n',  'd',  'o',  'w', 
    'S',  'y',  's',  't',  'e',  'm',  'P',  'l', 
    'u',  'g',  'i',  'n',  'I',  'n',  't',  'e', 
    'r',  'f',  'a',  'c',  'e', 
    // "className"
    0x03,  0x77,  'K',  'W',  'i',  'n',  'd',  'o', 
    'w',  'S',  'y',  's',  't',  'e',  'm',  'K', 
    'W',  'i',  'n',  'P',  'l',  'u',  'g',  'i', 
    'n', 
    // "MetaData"
    0x04,  0xa1,  0x69,  'p',  'l',  'a',  't',  'f', 
    'o',  'r',  'm',  's',  0x81,  0x78,  0x18,  'w', 
    'a',  'y',  'l',  'a',  'n',  'd',  '-',  'o', 
    'r',  'g',  '.',  'k',  'd',  'e',  '.',  'k', 
    'w',  'i',  'n',  '.',  'q',  'p',  'a', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN_V2(KWindowSystemKWinPlugin, KWindowSystemKWinPlugin, qt_pluginMetaDataV2_KWindowSystemKWinPlugin)
#else
QT_PLUGIN_METADATA_SECTION
Q_CONSTINIT static constexpr unsigned char qt_pluginMetaData_KWindowSystemKWinPlugin[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x32,  'o',  'r',  'g',  '.',  'k', 
    'd',  'e',  '.',  'k',  'w',  'i',  'n',  'd', 
    'o',  'w',  's',  'y',  's',  't',  'e',  'm', 
    '.',  'K',  'W',  'i',  'n',  'd',  'o',  'w', 
    'S',  'y',  's',  't',  'e',  'm',  'P',  'l', 
    'u',  'g',  'i',  'n',  'I',  'n',  't',  'e', 
    'r',  'f',  'a',  'c',  'e', 
    // "className"
    0x03,  0x77,  'K',  'W',  'i',  'n',  'd',  'o', 
    'w',  'S',  'y',  's',  't',  'e',  'm',  'K', 
    'W',  'i',  'n',  'P',  'l',  'u',  'g',  'i', 
    'n', 
    // "MetaData"
    0x04,  0xa1,  0x69,  'p',  'l',  'a',  't',  'f', 
    'o',  'r',  'm',  's',  0x81,  0x78,  0x18,  'w', 
    'a',  'y',  'l',  'a',  'n',  'd',  '-',  'o', 
    'r',  'g',  '.',  'k',  'd',  'e',  '.',  'k', 
    'w',  'i',  'n',  '.',  'q',  'p',  'a', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(KWindowSystemKWinPlugin, KWindowSystemKWinPlugin)
#endif  // QT_MOC_EXPORT_PLUGIN_V2

QT_WARNING_POP
