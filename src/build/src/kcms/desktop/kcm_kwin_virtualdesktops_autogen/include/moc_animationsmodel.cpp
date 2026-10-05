/****************************************************************************
** Meta object code from reading C++ file 'animationsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/kcms/desktop/animationsmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'animationsmodel.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin15AnimationsModelE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::AnimationsModel::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin15AnimationsModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::AnimationsModel",
        "animationEnabledChanged",
        "",
        "animationIndexChanged",
        "currentConfigurableChanged",
        "defaultAnimationEnabledChanged",
        "defaultAnimationIndexChanged",
        "animationEnabled",
        "animationIndex",
        "currentConfigurable",
        "defaultAnimationEnabled",
        "defaultAnimationIndex"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'animationEnabledChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'animationIndexChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentConfigurableChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'defaultAnimationEnabledChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'defaultAnimationIndexChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'animationEnabled'
        QtMocHelpers::PropertyData<bool>(7, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'animationIndex'
        QtMocHelpers::PropertyData<int>(8, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'currentConfigurable'
        QtMocHelpers::PropertyData<bool>(9, QMetaType::Bool, QMC::DefaultPropertyFlags, 2),
        // property 'defaultAnimationEnabled'
        QtMocHelpers::PropertyData<bool>(10, QMetaType::Bool, QMC::DefaultPropertyFlags, 3),
        // property 'defaultAnimationIndex'
        QtMocHelpers::PropertyData<int>(11, QMetaType::Int, QMC::DefaultPropertyFlags, 4),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AnimationsModel, qt_meta_tag_ZN4KWin15AnimationsModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::AnimationsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<EffectsModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin15AnimationsModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin15AnimationsModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin15AnimationsModelE_t>.metaTypes,
    nullptr
} };

void KWin::AnimationsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AnimationsModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->animationEnabledChanged(); break;
        case 1: _t->animationIndexChanged(); break;
        case 2: _t->currentConfigurableChanged(); break;
        case 3: _t->defaultAnimationEnabledChanged(); break;
        case 4: _t->defaultAnimationIndexChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AnimationsModel::*)()>(_a, &AnimationsModel::animationEnabledChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (AnimationsModel::*)()>(_a, &AnimationsModel::animationIndexChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (AnimationsModel::*)()>(_a, &AnimationsModel::currentConfigurableChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (AnimationsModel::*)()>(_a, &AnimationsModel::defaultAnimationEnabledChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (AnimationsModel::*)()>(_a, &AnimationsModel::defaultAnimationIndexChanged, 4))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->animationEnabled(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->animationIndex(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->currentConfigurable(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->defaultAnimationEnabled(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->defaultAnimationIndex(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAnimationEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 1: _t->setAnimationIndex(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::AnimationsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::AnimationsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin15AnimationsModelE_t>.strings))
        return static_cast<void*>(this);
    return EffectsModel::qt_metacast(_clname);
}

int KWin::AnimationsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EffectsModel::qt_metacall(_c, _id, _a);
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
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void KWin::AnimationsModel::animationEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::AnimationsModel::animationIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::AnimationsModel::currentConfigurableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::AnimationsModel::defaultAnimationEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWin::AnimationsModel::defaultAnimationIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
