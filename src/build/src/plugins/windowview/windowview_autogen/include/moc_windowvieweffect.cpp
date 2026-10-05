/****************************************************************************
** Meta object code from reading C++ file 'windowvieweffect.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/plugins/windowview/windowvieweffect.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowvieweffect.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin16WindowViewEffectE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::WindowViewEffect::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin16WindowViewEffectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::WindowViewEffect",
        "animationDurationChanged",
        "",
        "partialActivationFactorChanged",
        "gestureInProgressChanged",
        "modeChanged",
        "ignoreMinimizedChanged",
        "searchTextChanged",
        "selectedIdsChanged",
        "activate",
        "windowIds",
        "deactivate",
        "timeout",
        "partialActivate",
        "factor",
        "cancelPartialActivate",
        "partialDeactivate",
        "cancelPartialDeactivate",
        "animationDuration",
        "ignoreMinimized",
        "mode",
        "PresentWindowsMode",
        "partialActivationFactor",
        "gestureInProgress",
        "searchText",
        "selectedIds",
        "QList<QUuid>",
        "ModeAllDesktops",
        "ModeCurrentDesktop",
        "ModeWindowGroup",
        "ModeWindowClass",
        "ModeWindowClassCurrentDesktop"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'animationDurationChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'partialActivationFactorChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'gestureInProgressChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'modeChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'ignoreMinimizedChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'searchTextChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'selectedIdsChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'activate'
        QtMocHelpers::SlotData<void(const QStringList &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 10 },
        }}),
        // Slot 'activate'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'deactivate'
        QtMocHelpers::SlotData<void(int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
        // Slot 'partialActivate'
        QtMocHelpers::SlotData<void(qreal)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 14 },
        }}),
        // Slot 'cancelPartialActivate'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'partialDeactivate'
        QtMocHelpers::SlotData<void(qreal)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 14 },
        }}),
        // Slot 'cancelPartialDeactivate'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'animationDuration'
        QtMocHelpers::PropertyData<int>(18, QMetaType::Int, QMC::DefaultPropertyFlags, 0),
        // property 'ignoreMinimized'
        QtMocHelpers::PropertyData<bool>(19, QMetaType::Bool, QMC::DefaultPropertyFlags, 4),
        // property 'mode'
        QtMocHelpers::PropertyData<enum PresentWindowsMode>(20, 0x80000000 | 21, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 3),
        // property 'partialActivationFactor'
        QtMocHelpers::PropertyData<qreal>(22, QMetaType::QReal, QMC::DefaultPropertyFlags, 1),
        // property 'gestureInProgress'
        QtMocHelpers::PropertyData<bool>(23, QMetaType::Bool, QMC::DefaultPropertyFlags, 2),
        // property 'searchText'
        QtMocHelpers::PropertyData<QString>(24, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable, 5),
        // property 'selectedIds'
        QtMocHelpers::PropertyData<QList<QUuid>>(25, 0x80000000 | 26, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag, 6),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'PresentWindowsMode'
        QtMocHelpers::EnumData<enum PresentWindowsMode>(21, 21, QMC::EnumFlags{}).add({
            {   27, PresentWindowsMode::ModeAllDesktops },
            {   28, PresentWindowsMode::ModeCurrentDesktop },
            {   29, PresentWindowsMode::ModeWindowGroup },
            {   30, PresentWindowsMode::ModeWindowClass },
            {   31, PresentWindowsMode::ModeWindowClassCurrentDesktop },
        }),
    };
    return QtMocHelpers::metaObjectData<WindowViewEffect, qt_meta_tag_ZN4KWin16WindowViewEffectE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::WindowViewEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<QuickSceneEffect::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin16WindowViewEffectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin16WindowViewEffectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin16WindowViewEffectE_t>.metaTypes,
    nullptr
} };

void KWin::WindowViewEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WindowViewEffect *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->animationDurationChanged(); break;
        case 1: _t->partialActivationFactorChanged(); break;
        case 2: _t->gestureInProgressChanged(); break;
        case 3: _t->modeChanged(); break;
        case 4: _t->ignoreMinimizedChanged(); break;
        case 5: _t->searchTextChanged(); break;
        case 6: _t->selectedIdsChanged(); break;
        case 7: _t->activate((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 8: _t->activate(); break;
        case 9: _t->deactivate((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->partialActivate((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 11: _t->cancelPartialActivate(); break;
        case 12: _t->partialDeactivate((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 13: _t->cancelPartialDeactivate(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (WindowViewEffect::*)()>(_a, &WindowViewEffect::animationDurationChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (WindowViewEffect::*)()>(_a, &WindowViewEffect::partialActivationFactorChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (WindowViewEffect::*)()>(_a, &WindowViewEffect::gestureInProgressChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (WindowViewEffect::*)()>(_a, &WindowViewEffect::modeChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (WindowViewEffect::*)()>(_a, &WindowViewEffect::ignoreMinimizedChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (WindowViewEffect::*)()>(_a, &WindowViewEffect::searchTextChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (WindowViewEffect::*)()>(_a, &WindowViewEffect::selectedIdsChanged, 6))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->animationDuration(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->ignoreMinimized(); break;
        case 2: *reinterpret_cast<enum PresentWindowsMode*>(_v) = _t->mode(); break;
        case 3: *reinterpret_cast<qreal*>(_v) = _t->partialActivationFactor(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->gestureInProgress(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->m_searchText; break;
        case 6: *reinterpret_cast<QList<QUuid>*>(_v) = _t->m_windowIds; break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 5:
            if (QtMocHelpers::setProperty(_t->m_searchText, *reinterpret_cast<QString*>(_v)))
                Q_EMIT _t->searchTextChanged();
            break;
        case 6:
            if (QtMocHelpers::setProperty(_t->m_windowIds, *reinterpret_cast<QList<QUuid>*>(_v)))
                Q_EMIT _t->selectedIdsChanged();
            break;
        default: break;
        }
    }
}

const QMetaObject *KWin::WindowViewEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::WindowViewEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin16WindowViewEffectE_t>.strings))
        return static_cast<void*>(this);
    return QuickSceneEffect::qt_metacast(_clname);
}

int KWin::WindowViewEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QuickSceneEffect::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void KWin::WindowViewEffect::animationDurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::WindowViewEffect::partialActivationFactorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::WindowViewEffect::gestureInProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::WindowViewEffect::modeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWin::WindowViewEffect::ignoreMinimizedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KWin::WindowViewEffect::searchTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KWin::WindowViewEffect::selectedIdsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
