/****************************************************************************
** Meta object code from reading C++ file 'virtualdesktopssettings.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../virtualdesktopssettings.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'virtualdesktopssettings.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN23VirtualDesktopsSettingsE_t {};
} // unnamed namespace

template <> constexpr inline auto VirtualDesktopsSettings::qt_create_metaobjectdata<qt_meta_tag_ZN23VirtualDesktopsSettingsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VirtualDesktopsSettings",
        "rollOverDesktopsChanged",
        "",
        "perOutputVirtualDesktopsChanged",
        "desktopChangeOsdEnabledChanged",
        "popupHideDelayChanged",
        "textOnlyChanged",
        "rollOverDesktops",
        "isRollOverDesktopsImmutable",
        "defaultRollOverDesktopsValue",
        "perOutputVirtualDesktops",
        "isPerOutputVirtualDesktopsImmutable",
        "defaultPerOutputVirtualDesktopsValue",
        "desktopChangeOsdEnabled",
        "isDesktopChangeOsdEnabledImmutable",
        "defaultDesktopChangeOsdEnabledValue",
        "popupHideDelay",
        "isPopupHideDelayImmutable",
        "defaultPopupHideDelayValue",
        "textOnly",
        "isTextOnlyImmutable",
        "defaultTextOnlyValue"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'rollOverDesktopsChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'perOutputVirtualDesktopsChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'desktopChangeOsdEnabledChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'popupHideDelayChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'textOnlyChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'rollOverDesktops'
        QtMocHelpers::PropertyData<bool>(7, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'isRollOverDesktopsImmutable'
        QtMocHelpers::PropertyData<bool>(8, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultRollOverDesktopsValue'
        QtMocHelpers::PropertyData<bool>(9, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'perOutputVirtualDesktops'
        QtMocHelpers::PropertyData<bool>(10, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'isPerOutputVirtualDesktopsImmutable'
        QtMocHelpers::PropertyData<bool>(11, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultPerOutputVirtualDesktopsValue'
        QtMocHelpers::PropertyData<bool>(12, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'desktopChangeOsdEnabled'
        QtMocHelpers::PropertyData<bool>(13, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'isDesktopChangeOsdEnabledImmutable'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultDesktopChangeOsdEnabledValue'
        QtMocHelpers::PropertyData<bool>(15, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'popupHideDelay'
        QtMocHelpers::PropertyData<int>(16, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'isPopupHideDelayImmutable'
        QtMocHelpers::PropertyData<bool>(17, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultPopupHideDelayValue'
        QtMocHelpers::PropertyData<int>(18, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'textOnly'
        QtMocHelpers::PropertyData<bool>(19, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'isTextOnlyImmutable'
        QtMocHelpers::PropertyData<bool>(20, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultTextOnlyValue'
        QtMocHelpers::PropertyData<bool>(21, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VirtualDesktopsSettings, qt_meta_tag_ZN23VirtualDesktopsSettingsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject VirtualDesktopsSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<KConfigSkeleton::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23VirtualDesktopsSettingsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23VirtualDesktopsSettingsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23VirtualDesktopsSettingsE_t>.metaTypes,
    nullptr
} };

void VirtualDesktopsSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VirtualDesktopsSettings *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->rollOverDesktopsChanged(); break;
        case 1: _t->perOutputVirtualDesktopsChanged(); break;
        case 2: _t->desktopChangeOsdEnabledChanged(); break;
        case 3: _t->popupHideDelayChanged(); break;
        case 4: _t->textOnlyChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopsSettings::*)()>(_a, &VirtualDesktopsSettings::rollOverDesktopsChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopsSettings::*)()>(_a, &VirtualDesktopsSettings::perOutputVirtualDesktopsChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopsSettings::*)()>(_a, &VirtualDesktopsSettings::desktopChangeOsdEnabledChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopsSettings::*)()>(_a, &VirtualDesktopsSettings::popupHideDelayChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualDesktopsSettings::*)()>(_a, &VirtualDesktopsSettings::textOnlyChanged, 4))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->rollOverDesktops(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isRollOverDesktopsImmutable(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->defaultRollOverDesktopsValue(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->perOutputVirtualDesktops(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isPerOutputVirtualDesktopsImmutable(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->defaultPerOutputVirtualDesktopsValue(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->desktopChangeOsdEnabled(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->isDesktopChangeOsdEnabledImmutable(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->defaultDesktopChangeOsdEnabledValue(); break;
        case 9: *reinterpret_cast<int*>(_v) = _t->popupHideDelay(); break;
        case 10: *reinterpret_cast<bool*>(_v) = _t->isPopupHideDelayImmutable(); break;
        case 11: *reinterpret_cast<int*>(_v) = _t->defaultPopupHideDelayValue(); break;
        case 12: *reinterpret_cast<bool*>(_v) = _t->textOnly(); break;
        case 13: *reinterpret_cast<bool*>(_v) = _t->isTextOnlyImmutable(); break;
        case 14: *reinterpret_cast<bool*>(_v) = _t->defaultTextOnlyValue(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRollOverDesktops(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setPerOutputVirtualDesktops(*reinterpret_cast<bool*>(_v)); break;
        case 6: _t->setDesktopChangeOsdEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 9: _t->setPopupHideDelay(*reinterpret_cast<int*>(_v)); break;
        case 12: _t->setTextOnly(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *VirtualDesktopsSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VirtualDesktopsSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23VirtualDesktopsSettingsE_t>.strings))
        return static_cast<void*>(this);
    return KConfigSkeleton::qt_metacast(_clname);
}

int VirtualDesktopsSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KConfigSkeleton::qt_metacall(_c, _id, _a);
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
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void VirtualDesktopsSettings::rollOverDesktopsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VirtualDesktopsSettings::perOutputVirtualDesktopsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void VirtualDesktopsSettings::desktopChangeOsdEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void VirtualDesktopsSettings::popupHideDelayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void VirtualDesktopsSettings::textOnlyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
