/****************************************************************************
** Meta object code from reading C++ file 'previewsettings.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../kwin-6.7.5/src/kcms/decoration/declarative-plugin/previewsettings.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'previewsettings.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12KDecoration37Preview16BorderSizesModelE_t {};
} // unnamed namespace

template <> constexpr inline auto KDecoration3::Preview::BorderSizesModel::qt_create_metaobjectdata<qt_meta_tag_ZN12KDecoration37Preview16BorderSizesModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KDecoration3::Preview::BorderSizesModel"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BorderSizesModel, qt_meta_tag_ZN12KDecoration37Preview16BorderSizesModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KDecoration3::Preview::BorderSizesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12KDecoration37Preview16BorderSizesModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12KDecoration37Preview16BorderSizesModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12KDecoration37Preview16BorderSizesModelE_t>.metaTypes,
    nullptr
} };

void KDecoration3::Preview::BorderSizesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BorderSizesModel *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KDecoration3::Preview::BorderSizesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDecoration3::Preview::BorderSizesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12KDecoration37Preview16BorderSizesModelE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int KDecoration3::Preview::BorderSizesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN12KDecoration37Preview15PreviewSettingsE_t {};
} // unnamed namespace

template <> constexpr inline auto KDecoration3::Preview::PreviewSettings::qt_create_metaobjectdata<qt_meta_tag_ZN12KDecoration37Preview15PreviewSettingsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KDecoration3::Preview::PreviewSettings",
        "onAllDesktopsAvailableChanged",
        "",
        "alphaChannelSupportedChanged",
        "closeOnDoubleClickOnMenuChanged",
        "alwaysShowExcludeFromCaptureChanged",
        "borderSizesIndexChanged",
        "fontChanged",
        "QFont",
        "addButtonToLeft",
        "row",
        "addButtonToRight",
        "onAllDesktopsAvailable",
        "alphaChannelSupported",
        "closeOnDoubleClickOnMenu",
        "leftButtonsModel",
        "QAbstractItemModel*",
        "rightButtonsModel",
        "availableButtonsModel",
        "borderSizesModel",
        "borderSizesIndex",
        "font"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'onAllDesktopsAvailableChanged'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'alphaChannelSupportedChanged'
        QtMocHelpers::SignalData<void(bool)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'closeOnDoubleClickOnMenuChanged'
        QtMocHelpers::SignalData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'alwaysShowExcludeFromCaptureChanged'
        QtMocHelpers::SignalData<void(bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'borderSizesIndexChanged'
        QtMocHelpers::SignalData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'fontChanged'
        QtMocHelpers::SignalData<void(const QFont &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 2 },
        }}),
        // Method 'addButtonToLeft'
        QtMocHelpers::MethodData<void(int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Method 'addButtonToRight'
        QtMocHelpers::MethodData<void(int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'onAllDesktopsAvailable'
        QtMocHelpers::PropertyData<bool>(12, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'alphaChannelSupported'
        QtMocHelpers::PropertyData<bool>(13, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'closeOnDoubleClickOnMenu'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'leftButtonsModel'
        QtMocHelpers::PropertyData<QAbstractItemModel*>(15, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'rightButtonsModel'
        QtMocHelpers::PropertyData<QAbstractItemModel*>(17, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'availableButtonsModel'
        QtMocHelpers::PropertyData<QAbstractItemModel*>(18, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'borderSizesModel'
        QtMocHelpers::PropertyData<QAbstractItemModel*>(19, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'borderSizesIndex'
        QtMocHelpers::PropertyData<int>(20, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'font'
        QtMocHelpers::PropertyData<QFont>(21, 0x80000000 | 8, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 5),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PreviewSettings, qt_meta_tag_ZN12KDecoration37Preview15PreviewSettingsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KDecoration3::Preview::PreviewSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12KDecoration37Preview15PreviewSettingsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12KDecoration37Preview15PreviewSettingsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12KDecoration37Preview15PreviewSettingsE_t>.metaTypes,
    nullptr
} };

void KDecoration3::Preview::PreviewSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PreviewSettings *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onAllDesktopsAvailableChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->alphaChannelSupportedChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->closeOnDoubleClickOnMenuChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->alwaysShowExcludeFromCaptureChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->borderSizesIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->fontChanged((*reinterpret_cast<std::add_pointer_t<QFont>>(_a[1]))); break;
        case 6: _t->addButtonToLeft((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->addButtonToRight((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PreviewSettings::*)(bool )>(_a, &PreviewSettings::onAllDesktopsAvailableChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewSettings::*)(bool )>(_a, &PreviewSettings::alphaChannelSupportedChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewSettings::*)(bool )>(_a, &PreviewSettings::closeOnDoubleClickOnMenuChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewSettings::*)(bool )>(_a, &PreviewSettings::alwaysShowExcludeFromCaptureChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewSettings::*)(int )>(_a, &PreviewSettings::borderSizesIndexChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (PreviewSettings::*)(const QFont & )>(_a, &PreviewSettings::fontChanged, 5))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
        case 5:
        case 4:
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isOnAllDesktopsAvailable(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isAlphaChannelSupported(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isCloseOnDoubleClickOnMenu(); break;
        case 3: *reinterpret_cast<QAbstractItemModel**>(_v) = _t->leftButtonsModel(); break;
        case 4: *reinterpret_cast<QAbstractItemModel**>(_v) = _t->rightButtonsModel(); break;
        case 5: *reinterpret_cast<QAbstractItemModel**>(_v) = _t->availableButtonsModel(); break;
        case 6: *reinterpret_cast<QAbstractItemModel**>(_v) = _t->borderSizesModel(); break;
        case 7: *reinterpret_cast<int*>(_v) = _t->borderSizesIndex(); break;
        case 8: *reinterpret_cast<QFont*>(_v) = _t->font(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOnAllDesktopsAvailable(*reinterpret_cast<bool*>(_v)); break;
        case 1: _t->setAlphaChannelSupported(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setCloseOnDoubleClickOnMenu(*reinterpret_cast<bool*>(_v)); break;
        case 7: _t->setBorderSizesIndex(*reinterpret_cast<int*>(_v)); break;
        case 8: _t->setFont(*reinterpret_cast<QFont*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KDecoration3::Preview::PreviewSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDecoration3::Preview::PreviewSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12KDecoration37Preview15PreviewSettingsE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "DecorationSettingsPrivateV2"))
        return static_cast< DecorationSettingsPrivateV2*>(this);
    return QObject::qt_metacast(_clname);
}

int KDecoration3::Preview::PreviewSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void KDecoration3::Preview::PreviewSettings::onAllDesktopsAvailableChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void KDecoration3::Preview::PreviewSettings::alphaChannelSupportedChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void KDecoration3::Preview::PreviewSettings::closeOnDoubleClickOnMenuChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void KDecoration3::Preview::PreviewSettings::alwaysShowExcludeFromCaptureChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void KDecoration3::Preview::PreviewSettings::borderSizesIndexChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void KDecoration3::Preview::PreviewSettings::fontChanged(const QFont & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN12KDecoration37Preview8SettingsE_t {};
} // unnamed namespace

template <> constexpr inline auto KDecoration3::Preview::Settings::qt_create_metaobjectdata<qt_meta_tag_ZN12KDecoration37Preview8SettingsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KDecoration3::Preview::Settings",
        "QML.Element",
        "auto",
        "bridgeChanged",
        "",
        "settingsChanged",
        "borderSizesIndexChanged",
        "bridge",
        "KDecoration3::Preview::PreviewBridge*",
        "settings",
        "KDecoration3::DecorationSettings*",
        "borderSizesIndex"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'bridgeChanged'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'settingsChanged'
        QtMocHelpers::SignalData<void()>(5, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'borderSizesIndexChanged'
        QtMocHelpers::SignalData<void(int)>(6, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'bridge'
        QtMocHelpers::PropertyData<KDecoration3::Preview::PreviewBridge*>(7, 0x80000000 | 8, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'settings'
        QtMocHelpers::PropertyData<KDecoration3::DecorationSettings*>(9, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 1),
        // property 'borderSizesIndex'
        QtMocHelpers::PropertyData<int>(11, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<Settings, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject KDecoration3::Preview::Settings::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12KDecoration37Preview8SettingsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12KDecoration37Preview8SettingsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12KDecoration37Preview8SettingsE_t>.metaTypes,
    nullptr
} };

void KDecoration3::Preview::Settings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Settings *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->bridgeChanged(); break;
        case 1: _t->settingsChanged(); break;
        case 2: _t->borderSizesIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Settings::*)()>(_a, &Settings::bridgeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Settings::*)()>(_a, &Settings::settingsChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Settings::*)(int )>(_a, &Settings::borderSizesIndexChanged, 2))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDecoration3::DecorationSettings* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<KDecoration3::Preview::PreviewBridge**>(_v) = _t->bridge(); break;
        case 1: *reinterpret_cast<KDecoration3::DecorationSettings**>(_v) = _t->settingsPointer(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->borderSizesIndex(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBridge(*reinterpret_cast<KDecoration3::Preview::PreviewBridge**>(_v)); break;
        case 2: _t->setBorderSizesIndex(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KDecoration3::Preview::Settings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDecoration3::Preview::Settings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12KDecoration37Preview8SettingsE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KDecoration3::Preview::Settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void KDecoration3::Preview::Settings::bridgeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KDecoration3::Preview::Settings::settingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KDecoration3::Preview::Settings::borderSizesIndexChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP
