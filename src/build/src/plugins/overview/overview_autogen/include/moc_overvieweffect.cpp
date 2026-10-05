/****************************************************************************
** Meta object code from reading C++ file 'overvieweffect.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/plugins/overview/overvieweffect.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overvieweffect.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin14OverviewEffectE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::OverviewEffect::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin14OverviewEffectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::OverviewEffect",
        "animationDurationChanged",
        "",
        "overviewPartialActivationFactorChanged",
        "overviewGestureInProgressChanged",
        "transitionPartialActivationFactorChanged",
        "transitionGestureInProgressChanged",
        "gridPartialActivationFactorChanged",
        "gridGestureInProgressChanged",
        "ignoreMinimizedChanged",
        "filterWindowsChanged",
        "organizedGridChanged",
        "desktopOffsetChanged",
        "KWin::LogicalOutput*",
        "screen",
        "searchTextChanged",
        "activate",
        "deactivate",
        "desktopOffsetForScreen",
        "QPointF",
        "LogicalOutput*",
        "animationDuration",
        "ignoreMinimized",
        "filterWindows",
        "organizedGrid",
        "overviewPartialActivationFactor",
        "overviewGestureInProgress",
        "transitionPartialActivationFactor",
        "transitionGestureInProgress",
        "gridPartialActivationFactor",
        "gridGestureInProgress",
        "searchText"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'animationDurationChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'overviewPartialActivationFactorChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'overviewGestureInProgressChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'transitionPartialActivationFactorChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'transitionGestureInProgressChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'gridPartialActivationFactorChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'gridGestureInProgressChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'ignoreMinimizedChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'filterWindowsChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'organizedGridChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'desktopOffsetChanged'
        QtMocHelpers::SignalData<void(KWin::LogicalOutput *)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Signal 'searchTextChanged'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'activate'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'deactivate'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'desktopOffsetForScreen'
        QtMocHelpers::MethodData<QPointF(LogicalOutput *) const>(18, 2, QMC::AccessPublic, 0x80000000 | 19, {{
            { 0x80000000 | 20, 14 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'animationDuration'
        QtMocHelpers::PropertyData<int>(21, QMetaType::Int, QMC::DefaultPropertyFlags, 0),
        // property 'ignoreMinimized'
        QtMocHelpers::PropertyData<bool>(22, QMetaType::Bool, QMC::DefaultPropertyFlags, 7),
        // property 'filterWindows'
        QtMocHelpers::PropertyData<bool>(23, QMetaType::Bool, QMC::DefaultPropertyFlags, 8),
        // property 'organizedGrid'
        QtMocHelpers::PropertyData<bool>(24, QMetaType::Bool, QMC::DefaultPropertyFlags, 9),
        // property 'overviewPartialActivationFactor'
        QtMocHelpers::PropertyData<qreal>(25, QMetaType::QReal, QMC::DefaultPropertyFlags, 1),
        // property 'overviewGestureInProgress'
        QtMocHelpers::PropertyData<bool>(26, QMetaType::Bool, QMC::DefaultPropertyFlags, 2),
        // property 'transitionPartialActivationFactor'
        QtMocHelpers::PropertyData<qreal>(27, QMetaType::QReal, QMC::DefaultPropertyFlags, 3),
        // property 'transitionGestureInProgress'
        QtMocHelpers::PropertyData<bool>(28, QMetaType::Bool, QMC::DefaultPropertyFlags, 4),
        // property 'gridPartialActivationFactor'
        QtMocHelpers::PropertyData<qreal>(29, QMetaType::QReal, QMC::DefaultPropertyFlags, 5),
        // property 'gridGestureInProgress'
        QtMocHelpers::PropertyData<bool>(30, QMetaType::Bool, QMC::DefaultPropertyFlags, 6),
        // property 'searchText'
        QtMocHelpers::PropertyData<QString>(31, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable, 11),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OverviewEffect, qt_meta_tag_ZN4KWin14OverviewEffectE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::OverviewEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<QuickSceneEffect::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin14OverviewEffectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin14OverviewEffectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin14OverviewEffectE_t>.metaTypes,
    nullptr
} };

void KWin::OverviewEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OverviewEffect *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->animationDurationChanged(); break;
        case 1: _t->overviewPartialActivationFactorChanged(); break;
        case 2: _t->overviewGestureInProgressChanged(); break;
        case 3: _t->transitionPartialActivationFactorChanged(); break;
        case 4: _t->transitionGestureInProgressChanged(); break;
        case 5: _t->gridPartialActivationFactorChanged(); break;
        case 6: _t->gridGestureInProgressChanged(); break;
        case 7: _t->ignoreMinimizedChanged(); break;
        case 8: _t->filterWindowsChanged(); break;
        case 9: _t->organizedGridChanged(); break;
        case 10: _t->desktopOffsetChanged((*reinterpret_cast<std::add_pointer_t<KWin::LogicalOutput*>>(_a[1]))); break;
        case 11: _t->searchTextChanged(); break;
        case 12: _t->activate(); break;
        case 13: _t->deactivate(); break;
        case 14: { QPointF _r = _t->desktopOffsetForScreen((*reinterpret_cast<std::add_pointer_t<LogicalOutput*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QPointF*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::LogicalOutput* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LogicalOutput* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OverviewEffect::*)()>(_a, &OverviewEffect::animationDurationChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (OverviewEffect::*)()>(_a, &OverviewEffect::overviewPartialActivationFactorChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (OverviewEffect::*)()>(_a, &OverviewEffect::overviewGestureInProgressChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (OverviewEffect::*)()>(_a, &OverviewEffect::transitionPartialActivationFactorChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (OverviewEffect::*)()>(_a, &OverviewEffect::transitionGestureInProgressChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (OverviewEffect::*)()>(_a, &OverviewEffect::gridPartialActivationFactorChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (OverviewEffect::*)()>(_a, &OverviewEffect::gridGestureInProgressChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (OverviewEffect::*)()>(_a, &OverviewEffect::ignoreMinimizedChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (OverviewEffect::*)()>(_a, &OverviewEffect::filterWindowsChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (OverviewEffect::*)()>(_a, &OverviewEffect::organizedGridChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (OverviewEffect::*)(KWin::LogicalOutput * )>(_a, &OverviewEffect::desktopOffsetChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (OverviewEffect::*)()>(_a, &OverviewEffect::searchTextChanged, 11))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->animationDuration(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->ignoreMinimized(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->filterWindows(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->organizedGrid(); break;
        case 4: *reinterpret_cast<qreal*>(_v) = _t->overviewPartialActivationFactor(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->overviewGestureInProgress(); break;
        case 6: *reinterpret_cast<qreal*>(_v) = _t->transitionPartialActivationFactor(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->transitionGestureInProgress(); break;
        case 8: *reinterpret_cast<qreal*>(_v) = _t->gridPartialActivationFactor(); break;
        case 9: *reinterpret_cast<bool*>(_v) = _t->gridGestureInProgress(); break;
        case 10: *reinterpret_cast<QString*>(_v) = _t->m_searchText; break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 10:
            if (QtMocHelpers::setProperty(_t->m_searchText, *reinterpret_cast<QString*>(_v)))
                Q_EMIT _t->searchTextChanged();
            break;
        default: break;
        }
    }
}

const QMetaObject *KWin::OverviewEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::OverviewEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin14OverviewEffectE_t>.strings))
        return static_cast<void*>(this);
    return QuickSceneEffect::qt_metacast(_clname);
}

int KWin::OverviewEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QuickSceneEffect::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void KWin::OverviewEffect::animationDurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::OverviewEffect::overviewPartialActivationFactorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::OverviewEffect::overviewGestureInProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::OverviewEffect::transitionPartialActivationFactorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWin::OverviewEffect::transitionGestureInProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KWin::OverviewEffect::gridPartialActivationFactorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KWin::OverviewEffect::gridGestureInProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void KWin::OverviewEffect::ignoreMinimizedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void KWin::OverviewEffect::filterWindowsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void KWin::OverviewEffect::organizedGridChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void KWin::OverviewEffect::desktopOffsetChanged(KWin::LogicalOutput * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void KWin::OverviewEffect::searchTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
