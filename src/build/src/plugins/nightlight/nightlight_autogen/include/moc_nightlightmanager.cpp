/****************************************************************************
** Meta object code from reading C++ file 'nightlightmanager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/plugins/nightlight/nightlightmanager.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nightlightmanager.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin17NightLightManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::NightLightManager::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin17NightLightManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::NightLightManager",
        "inhibitedChanged",
        "",
        "enabledChanged",
        "runningChanged",
        "currentTemperatureChanged",
        "targetTemperatureChanged",
        "modeChanged",
        "daylightChanged",
        "previousTransitionTimingsChanged",
        "scheduledTransitionTimingsChanged",
        "quickAdjust",
        "targetTemperature"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'inhibitedChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'enabledChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'runningChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentTemperatureChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'targetTemperatureChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'modeChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'daylightChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'previousTransitionTimingsChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'scheduledTransitionTimingsChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'quickAdjust'
        QtMocHelpers::SlotData<void(int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<NightLightManager, qt_meta_tag_ZN4KWin17NightLightManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::NightLightManager::staticMetaObject = { {
    QMetaObject::SuperData::link<Plugin::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17NightLightManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17NightLightManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin17NightLightManagerE_t>.metaTypes,
    nullptr
} };

void KWin::NightLightManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NightLightManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->inhibitedChanged(); break;
        case 1: _t->enabledChanged(); break;
        case 2: _t->runningChanged(); break;
        case 3: _t->currentTemperatureChanged(); break;
        case 4: _t->targetTemperatureChanged(); break;
        case 5: _t->modeChanged(); break;
        case 6: _t->daylightChanged(); break;
        case 7: _t->previousTransitionTimingsChanged(); break;
        case 8: _t->scheduledTransitionTimingsChanged(); break;
        case 9: _t->quickAdjust((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (NightLightManager::*)()>(_a, &NightLightManager::inhibitedChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (NightLightManager::*)()>(_a, &NightLightManager::enabledChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (NightLightManager::*)()>(_a, &NightLightManager::runningChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (NightLightManager::*)()>(_a, &NightLightManager::currentTemperatureChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (NightLightManager::*)()>(_a, &NightLightManager::targetTemperatureChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (NightLightManager::*)()>(_a, &NightLightManager::modeChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (NightLightManager::*)()>(_a, &NightLightManager::daylightChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (NightLightManager::*)()>(_a, &NightLightManager::previousTransitionTimingsChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (NightLightManager::*)()>(_a, &NightLightManager::scheduledTransitionTimingsChanged, 8))
            return;
    }
}

const QMetaObject *KWin::NightLightManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::NightLightManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17NightLightManagerE_t>.strings))
        return static_cast<void*>(this);
    return Plugin::qt_metacast(_clname);
}

int KWin::NightLightManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Plugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void KWin::NightLightManager::inhibitedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::NightLightManager::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::NightLightManager::runningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::NightLightManager::currentTemperatureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWin::NightLightManager::targetTemperatureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KWin::NightLightManager::modeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KWin::NightLightManager::daylightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void KWin::NightLightManager::previousTransitionTimingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void KWin::NightLightManager::scheduledTransitionTimingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
