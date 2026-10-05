/****************************************************************************
** Meta object code from reading C++ file 'kcm.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/kcms/animations/kcm.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kcm.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin13AnimationsKCME_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::AnimationsKCM::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin13AnimationsKCME_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::AnimationsKCM",
        "load",
        "",
        "save",
        "defaults",
        "updateNeedsSave",
        "configure",
        "pluginId",
        "QQuickItem*",
        "context",
        "effectsKCMData",
        "QVariantMap",
        "launchEffectsKCM",
        "globalsSettings",
        "AnimationsGlobalsSettings*",
        "windowOpenCloseAnimations",
        "EffectsSubsetModel*",
        "windowMaximizeAnimations",
        "windowMinimizeAnimations",
        "windowFullscreenAnimations",
        "peekDesktopAnimations",
        "virtualDesktopAnimations",
        "otherEffects"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'load'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'save'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'defaults'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateNeedsSave'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Method 'configure'
        QtMocHelpers::MethodData<void(const QString &, QQuickItem *) const>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Method 'effectsKCMData'
        QtMocHelpers::MethodData<QVariantMap() const>(10, 2, QMC::AccessPublic, 0x80000000 | 11),
        // Method 'launchEffectsKCM'
        QtMocHelpers::MethodData<void() const>(12, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'globalsSettings'
        QtMocHelpers::PropertyData<AnimationsGlobalsSettings*>(13, 0x80000000 | 14, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'windowOpenCloseAnimations'
        QtMocHelpers::PropertyData<EffectsSubsetModel*>(15, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'windowMaximizeAnimations'
        QtMocHelpers::PropertyData<EffectsSubsetModel*>(17, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'windowMinimizeAnimations'
        QtMocHelpers::PropertyData<EffectsSubsetModel*>(18, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'windowFullscreenAnimations'
        QtMocHelpers::PropertyData<EffectsSubsetModel*>(19, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'peekDesktopAnimations'
        QtMocHelpers::PropertyData<EffectsSubsetModel*>(20, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'virtualDesktopAnimations'
        QtMocHelpers::PropertyData<EffectsSubsetModel*>(21, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'otherEffects'
        QtMocHelpers::PropertyData<EffectsSubsetModel*>(22, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AnimationsKCM, qt_meta_tag_ZN4KWin13AnimationsKCME_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::AnimationsKCM::staticMetaObject = { {
    QMetaObject::SuperData::link<KQuickConfigModule::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin13AnimationsKCME_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin13AnimationsKCME_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin13AnimationsKCME_t>.metaTypes,
    nullptr
} };

void KWin::AnimationsKCM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AnimationsKCM *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->load(); break;
        case 1: _t->save(); break;
        case 2: _t->defaults(); break;
        case 3: _t->updateNeedsSave(); break;
        case 4: _t->configure((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[2]))); break;
        case 5: { QVariantMap _r = _t->effectsKCMData();
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->launchEffectsKCM(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<AnimationsGlobalsSettings**>(_v) = _t->globalsSettings(); break;
        case 1: *reinterpret_cast<EffectsSubsetModel**>(_v) = _t->windowOpenCloseAnimations(); break;
        case 2: *reinterpret_cast<EffectsSubsetModel**>(_v) = _t->windowMaximizeAnimations(); break;
        case 3: *reinterpret_cast<EffectsSubsetModel**>(_v) = _t->windowMinimizeAnimations(); break;
        case 4: *reinterpret_cast<EffectsSubsetModel**>(_v) = _t->windowFullscreenAnimations(); break;
        case 5: *reinterpret_cast<EffectsSubsetModel**>(_v) = _t->peekDesktopAnimations(); break;
        case 6: *reinterpret_cast<EffectsSubsetModel**>(_v) = _t->virtualDesktopAnimations(); break;
        case 7: *reinterpret_cast<EffectsSubsetModel**>(_v) = _t->otherEffects(); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::AnimationsKCM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::AnimationsKCM::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin13AnimationsKCME_t>.strings))
        return static_cast<void*>(this);
    return KQuickConfigModule::qt_metacast(_clname);
}

int KWin::AnimationsKCM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KQuickConfigModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
