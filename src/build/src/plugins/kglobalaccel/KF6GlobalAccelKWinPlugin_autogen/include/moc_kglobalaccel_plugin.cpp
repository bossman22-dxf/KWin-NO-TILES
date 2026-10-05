/****************************************************************************
** Meta object code from reading C++ file 'kglobalaccel_plugin.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/plugins/kglobalaccel/kglobalaccel_plugin.h"
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kglobalaccel_plugin.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16KGlobalAccelImplE_t {};
} // unnamed namespace

template <> constexpr inline auto KGlobalAccelImpl::qt_create_metaobjectdata<qt_meta_tag_ZN16KGlobalAccelImplE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KGlobalAccelImpl",
        "checkKeyPressed",
        "",
        "keyQt",
        "KWin::KeyboardKeyState",
        "state",
        "checkPointerPressed",
        "Qt::MouseButtons",
        "buttons",
        "checkAxisTriggered",
        "axis",
        "cancelModiferOnlySequence"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'checkKeyPressed'
        QtMocHelpers::SlotData<bool(int, KWin::KeyboardKeyState)>(1, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 3 }, { 0x80000000 | 4, 5 },
        }}),
        // Slot 'checkPointerPressed'
        QtMocHelpers::SlotData<bool(Qt::MouseButtons)>(6, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Slot 'checkAxisTriggered'
        QtMocHelpers::SlotData<bool(int)>(9, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 10 },
        }}),
        // Slot 'cancelModiferOnlySequence'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<KGlobalAccelImpl, qt_meta_tag_ZN16KGlobalAccelImplE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KGlobalAccelImpl::staticMetaObject = { {
    QMetaObject::SuperData::link<KGlobalAccelInterface::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16KGlobalAccelImplE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16KGlobalAccelImplE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16KGlobalAccelImplE_t>.metaTypes,
    nullptr
} };

void KGlobalAccelImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<KGlobalAccelImpl *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = _t->checkKeyPressed((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<KWin::KeyboardKeyState>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->checkPointerPressed((*reinterpret_cast<std::add_pointer_t<Qt::MouseButtons>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->checkAxisTriggered((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->cancelModiferOnlySequence(); break;
        default: ;
        }
    }
}

const QMetaObject *KGlobalAccelImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KGlobalAccelImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16KGlobalAccelImplE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.kde.kglobalaccel5.KGlobalAccelInterface"))
        return static_cast< KGlobalAccelInterface*>(this);
    return KGlobalAccelInterface::qt_metacast(_clname);
}

int KGlobalAccelImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KGlobalAccelInterface::qt_metacall(_c, _id, _a);
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
    return _id;
}

#ifdef QT_MOC_EXPORT_PLUGIN_V2
static constexpr unsigned char qt_pluginMetaDataV2_KGlobalAccelImpl[] = {
    0xbf, 
    // "IID"
    0x02,  0x78,  0x2b,  'o',  'r',  'g',  '.',  'k', 
    'd',  'e',  '.',  'k',  'g',  'l',  'o',  'b', 
    'a',  'l',  'a',  'c',  'c',  'e',  'l',  '5', 
    '.',  'K',  'G',  'l',  'o',  'b',  'a',  'l', 
    'A',  'c',  'c',  'e',  'l',  'I',  'n',  't', 
    'e',  'r',  'f',  'a',  'c',  'e', 
    // "className"
    0x03,  0x70,  'K',  'G',  'l',  'o',  'b',  'a', 
    'l',  'A',  'c',  'c',  'e',  'l',  'I',  'm', 
    'p',  'l', 
    // "MetaData"
    0x04,  0xa1,  0x69,  'p',  'l',  'a',  't',  'f', 
    'o',  'r',  'm',  's',  0x81,  0x6c,  'o',  'r', 
    'g',  '.',  'k',  'd',  'e',  '.',  'k',  'w', 
    'i',  'n', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN_V2(KGlobalAccelImpl, KGlobalAccelImpl, qt_pluginMetaDataV2_KGlobalAccelImpl)
#else
QT_PLUGIN_METADATA_SECTION
Q_CONSTINIT static constexpr unsigned char qt_pluginMetaData_KGlobalAccelImpl[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x2b,  'o',  'r',  'g',  '.',  'k', 
    'd',  'e',  '.',  'k',  'g',  'l',  'o',  'b', 
    'a',  'l',  'a',  'c',  'c',  'e',  'l',  '5', 
    '.',  'K',  'G',  'l',  'o',  'b',  'a',  'l', 
    'A',  'c',  'c',  'e',  'l',  'I',  'n',  't', 
    'e',  'r',  'f',  'a',  'c',  'e', 
    // "className"
    0x03,  0x70,  'K',  'G',  'l',  'o',  'b',  'a', 
    'l',  'A',  'c',  'c',  'e',  'l',  'I',  'm', 
    'p',  'l', 
    // "MetaData"
    0x04,  0xa1,  0x69,  'p',  'l',  'a',  't',  'f', 
    'o',  'r',  'm',  's',  0x81,  0x6c,  'o',  'r', 
    'g',  '.',  'k',  'd',  'e',  '.',  'k',  'w', 
    'i',  'n', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(KGlobalAccelImpl, KGlobalAccelImpl)
#endif  // QT_MOC_EXPORT_PLUGIN_V2

QT_WARNING_POP
