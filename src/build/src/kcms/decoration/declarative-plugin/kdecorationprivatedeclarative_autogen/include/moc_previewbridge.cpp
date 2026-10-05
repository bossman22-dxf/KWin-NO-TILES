/****************************************************************************
** Meta object code from reading C++ file 'previewbridge.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../kwin-6.7.5/src/kcms/decoration/declarative-plugin/previewbridge.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'previewbridge.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12KDecoration37Preview13PreviewBridgeE_t {};
} // unnamed namespace

template <> constexpr inline auto KDecoration3::Preview::PreviewBridge::qt_create_metaobjectdata<qt_meta_tag_ZN12KDecoration37Preview13PreviewBridgeE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KDecoration3::Preview::PreviewBridge",
        "QML.Element",
        "anonymous",
        "pluginChanged",
        "",
        "themeChanged",
        "validChanged",
        "kcmoduleNameChanged",
        "configure",
        "QQuickItem*",
        "ctx",
        "plugin",
        "theme",
        "kcmoduleName",
        "valid"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'pluginChanged'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'themeChanged'
        QtMocHelpers::SignalData<void()>(5, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'validChanged'
        QtMocHelpers::SignalData<void()>(6, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'kcmoduleNameChanged'
        QtMocHelpers::SignalData<void()>(7, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'configure'
        QtMocHelpers::SlotData<void(QQuickItem *)>(8, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'plugin'
        QtMocHelpers::PropertyData<QString>(11, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'theme'
        QtMocHelpers::PropertyData<QString>(12, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'kcmoduleName'
        QtMocHelpers::PropertyData<QString>(13, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'valid'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags, 2),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<PreviewBridge, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject KDecoration3::Preview::PreviewBridge::staticMetaObject = { {
    QMetaObject::SuperData::link<KDecoration3::DecorationBridge::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12KDecoration37Preview13PreviewBridgeE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12KDecoration37Preview13PreviewBridgeE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12KDecoration37Preview13PreviewBridgeE_t>.metaTypes,
    nullptr
} };

void KDecoration3::Preview::PreviewBridge::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PreviewBridge *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->pluginChanged(); break;
        case 1: _t->themeChanged(); break;
        case 2: _t->validChanged(); break;
        case 3: _t->kcmoduleNameChanged(); break;
        case 4: _t->configure((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PreviewBridge::*)()>(_a, &PreviewBridge::pluginChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewBridge::*)()>(_a, &PreviewBridge::themeChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewBridge::*)()>(_a, &PreviewBridge::validChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewBridge::*)()>(_a, &PreviewBridge::kcmoduleNameChanged, 3))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->plugin(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->theme(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->kcmoduleName(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isValid(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPlugin(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setTheme(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setKcmoduleName(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KDecoration3::Preview::PreviewBridge::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDecoration3::Preview::PreviewBridge::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12KDecoration37Preview13PreviewBridgeE_t>.strings))
        return static_cast<void*>(this);
    return KDecoration3::DecorationBridge::qt_metacast(_clname);
}

int KDecoration3::Preview::PreviewBridge::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDecoration3::DecorationBridge::qt_metacall(_c, _id, _a);
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
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void KDecoration3::Preview::PreviewBridge::pluginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KDecoration3::Preview::PreviewBridge::themeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KDecoration3::Preview::PreviewBridge::validChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KDecoration3::Preview::PreviewBridge::kcmoduleNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
namespace {
struct qt_meta_tag_ZN12KDecoration37Preview10BridgeItemE_t {};
} // unnamed namespace

template <> constexpr inline auto KDecoration3::Preview::BridgeItem::qt_create_metaobjectdata<qt_meta_tag_ZN12KDecoration37Preview10BridgeItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KDecoration3::Preview::BridgeItem",
        "QML.Element",
        "Bridge",
        "pluginChanged",
        "",
        "themeChanged",
        "kcmoduleNameChanged",
        "validChanged",
        "plugin",
        "theme",
        "kcmoduleName",
        "valid",
        "bridge",
        "KDecoration3::Preview::PreviewBridge*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'pluginChanged'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'themeChanged'
        QtMocHelpers::SignalData<void()>(5, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'kcmoduleNameChanged'
        QtMocHelpers::SignalData<void()>(6, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'validChanged'
        QtMocHelpers::SignalData<void()>(7, 4, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'plugin'
        QtMocHelpers::PropertyData<QString>(8, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'theme'
        QtMocHelpers::PropertyData<QString>(9, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'kcmoduleName'
        QtMocHelpers::PropertyData<QString>(10, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'valid'
        QtMocHelpers::PropertyData<bool>(11, QMetaType::Bool, QMC::DefaultPropertyFlags, 3),
        // property 'bridge'
        QtMocHelpers::PropertyData<KDecoration3::Preview::PreviewBridge*>(12, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<BridgeItem, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject KDecoration3::Preview::BridgeItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12KDecoration37Preview10BridgeItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12KDecoration37Preview10BridgeItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12KDecoration37Preview10BridgeItemE_t>.metaTypes,
    nullptr
} };

void KDecoration3::Preview::BridgeItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BridgeItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->pluginChanged(); break;
        case 1: _t->themeChanged(); break;
        case 2: _t->kcmoduleNameChanged(); break;
        case 3: _t->validChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (BridgeItem::*)()>(_a, &BridgeItem::pluginChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (BridgeItem::*)()>(_a, &BridgeItem::themeChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (BridgeItem::*)()>(_a, &BridgeItem::kcmoduleNameChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (BridgeItem::*)()>(_a, &BridgeItem::validChanged, 3))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDecoration3::Preview::PreviewBridge* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->plugin(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->theme(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->kcmoduleName(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isValid(); break;
        case 4: *reinterpret_cast<KDecoration3::Preview::PreviewBridge**>(_v) = _t->bridge(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPlugin(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setTheme(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setKcmoduleName(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KDecoration3::Preview::BridgeItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDecoration3::Preview::BridgeItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12KDecoration37Preview10BridgeItemE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KDecoration3::Preview::BridgeItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void KDecoration3::Preview::BridgeItem::pluginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KDecoration3::Preview::BridgeItem::themeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KDecoration3::Preview::BridgeItem::kcmoduleNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KDecoration3::Preview::BridgeItem::validChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
