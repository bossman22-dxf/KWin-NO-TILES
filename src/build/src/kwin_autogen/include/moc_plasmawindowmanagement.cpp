/****************************************************************************
** Meta object code from reading C++ file 'plasmawindowmanagement.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/wayland/plasmawindowmanagement.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plasmawindowmanagement.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin39PlasmaWindowActivationFeedbackInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::PlasmaWindowActivationFeedbackInterface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin39PlasmaWindowActivationFeedbackInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::PlasmaWindowActivationFeedbackInterface"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PlasmaWindowActivationFeedbackInterface, qt_meta_tag_ZN4KWin39PlasmaWindowActivationFeedbackInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::PlasmaWindowActivationFeedbackInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin39PlasmaWindowActivationFeedbackInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin39PlasmaWindowActivationFeedbackInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin39PlasmaWindowActivationFeedbackInterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::PlasmaWindowActivationFeedbackInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlasmaWindowActivationFeedbackInterface *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::PlasmaWindowActivationFeedbackInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::PlasmaWindowActivationFeedbackInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin39PlasmaWindowActivationFeedbackInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::PlasmaWindowActivationFeedbackInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin31PlasmaWindowManagementInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::PlasmaWindowManagementInterface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin31PlasmaWindowManagementInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::PlasmaWindowManagementInterface",
        "requestChangeShowingDesktop",
        "",
        "ShowingDesktopState",
        "requestedState"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'requestChangeShowingDesktop'
        QtMocHelpers::SignalData<void(enum ShowingDesktopState)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PlasmaWindowManagementInterface, qt_meta_tag_ZN4KWin31PlasmaWindowManagementInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::PlasmaWindowManagementInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin31PlasmaWindowManagementInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin31PlasmaWindowManagementInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin31PlasmaWindowManagementInterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::PlasmaWindowManagementInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlasmaWindowManagementInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->requestChangeShowingDesktop((*reinterpret_cast<std::add_pointer_t<enum ShowingDesktopState>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowManagementInterface::*)(ShowingDesktopState )>(_a, &PlasmaWindowManagementInterface::requestChangeShowingDesktop, 0))
            return;
    }
}

const QMetaObject *KWin::PlasmaWindowManagementInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::PlasmaWindowManagementInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin31PlasmaWindowManagementInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::PlasmaWindowManagementInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void KWin::PlasmaWindowManagementInterface::requestChangeShowingDesktop(ShowingDesktopState _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN4KWin21PlasmaWindowInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::PlasmaWindowInterface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin21PlasmaWindowInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::PlasmaWindowInterface",
        "closeRequested",
        "",
        "moveRequested",
        "resizeRequested",
        "activeRequested",
        "set",
        "minimizedRequested",
        "maximizedRequested",
        "fullscreenRequested",
        "keepAboveRequested",
        "keepBelowRequested",
        "demandsAttentionRequested",
        "closeableRequested",
        "minimizeableRequested",
        "maximizeableRequested",
        "fullscreenableRequested",
        "skipTaskbarRequested",
        "skipSwitcherRequested",
        "minimizedGeometriesChanged",
        "shadeableRequested",
        "shadedRequested",
        "movableRequested",
        "resizableRequested",
        "virtualDesktopChangeableRequested",
        "enterPlasmaVirtualDesktopRequested",
        "desktop",
        "enterNewPlasmaVirtualDesktopRequested",
        "leavePlasmaVirtualDesktopRequested",
        "enterPlasmaActivityRequested",
        "activity",
        "leavePlasmaActivityRequested",
        "sendToOutput",
        "KWin::OutputInterface*",
        "output",
        "clientGeometryChanged",
        "KWin::Rect",
        "geometry",
        "noBorderRequested",
        "noBorder",
        "excludeFromCaptureRequested",
        "exclude"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'closeRequested'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'moveRequested'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'resizeRequested'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activeRequested'
        QtMocHelpers::SignalData<void(bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'minimizedRequested'
        QtMocHelpers::SignalData<void(bool)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'maximizedRequested'
        QtMocHelpers::SignalData<void(bool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'fullscreenRequested'
        QtMocHelpers::SignalData<void(bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'keepAboveRequested'
        QtMocHelpers::SignalData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'keepBelowRequested'
        QtMocHelpers::SignalData<void(bool)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'demandsAttentionRequested'
        QtMocHelpers::SignalData<void(bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'closeableRequested'
        QtMocHelpers::SignalData<void(bool)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'minimizeableRequested'
        QtMocHelpers::SignalData<void(bool)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'maximizeableRequested'
        QtMocHelpers::SignalData<void(bool)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'fullscreenableRequested'
        QtMocHelpers::SignalData<void(bool)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'skipTaskbarRequested'
        QtMocHelpers::SignalData<void(bool)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'skipSwitcherRequested'
        QtMocHelpers::SignalData<void(bool)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'minimizedGeometriesChanged'
        QtMocHelpers::SignalData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'shadeableRequested'
        QtMocHelpers::SignalData<void(bool)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'shadedRequested'
        QtMocHelpers::SignalData<void(bool)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'movableRequested'
        QtMocHelpers::SignalData<void(bool)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'resizableRequested'
        QtMocHelpers::SignalData<void(bool)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'virtualDesktopChangeableRequested'
        QtMocHelpers::SignalData<void(bool)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'enterPlasmaVirtualDesktopRequested'
        QtMocHelpers::SignalData<void(const QString &)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 26 },
        }}),
        // Signal 'enterNewPlasmaVirtualDesktopRequested'
        QtMocHelpers::SignalData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'leavePlasmaVirtualDesktopRequested'
        QtMocHelpers::SignalData<void(const QString &)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 26 },
        }}),
        // Signal 'enterPlasmaActivityRequested'
        QtMocHelpers::SignalData<void(const QString &)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 30 },
        }}),
        // Signal 'leavePlasmaActivityRequested'
        QtMocHelpers::SignalData<void(const QString &)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 30 },
        }}),
        // Signal 'sendToOutput'
        QtMocHelpers::SignalData<void(KWin::OutputInterface *)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 33, 34 },
        }}),
        // Signal 'clientGeometryChanged'
        QtMocHelpers::SignalData<void(const KWin::Rect &)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 36, 37 },
        }}),
        // Signal 'noBorderRequested'
        QtMocHelpers::SignalData<void(bool)>(38, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 39 },
        }}),
        // Signal 'excludeFromCaptureRequested'
        QtMocHelpers::SignalData<void(bool)>(40, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 41 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PlasmaWindowInterface, qt_meta_tag_ZN4KWin21PlasmaWindowInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::PlasmaWindowInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21PlasmaWindowInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21PlasmaWindowInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin21PlasmaWindowInterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::PlasmaWindowInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlasmaWindowInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->closeRequested(); break;
        case 1: _t->moveRequested(); break;
        case 2: _t->resizeRequested(); break;
        case 3: _t->activeRequested((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->minimizedRequested((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->maximizedRequested((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->fullscreenRequested((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->keepAboveRequested((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->keepBelowRequested((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->demandsAttentionRequested((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->closeableRequested((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->minimizeableRequested((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->maximizeableRequested((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->fullscreenableRequested((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->skipTaskbarRequested((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->skipSwitcherRequested((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->minimizedGeometriesChanged(); break;
        case 17: _t->shadeableRequested((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->shadedRequested((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->movableRequested((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->resizableRequested((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 21: _t->virtualDesktopChangeableRequested((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->enterPlasmaVirtualDesktopRequested((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 23: _t->enterNewPlasmaVirtualDesktopRequested(); break;
        case 24: _t->leavePlasmaVirtualDesktopRequested((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 25: _t->enterPlasmaActivityRequested((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 26: _t->leavePlasmaActivityRequested((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 27: _t->sendToOutput((*reinterpret_cast<std::add_pointer_t<KWin::OutputInterface*>>(_a[1]))); break;
        case 28: _t->clientGeometryChanged((*reinterpret_cast<std::add_pointer_t<KWin::Rect>>(_a[1]))); break;
        case 29: _t->noBorderRequested((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 30: _t->excludeFromCaptureRequested((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)()>(_a, &PlasmaWindowInterface::closeRequested, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)()>(_a, &PlasmaWindowInterface::moveRequested, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)()>(_a, &PlasmaWindowInterface::resizeRequested, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)(bool )>(_a, &PlasmaWindowInterface::activeRequested, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)(bool )>(_a, &PlasmaWindowInterface::minimizedRequested, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)(bool )>(_a, &PlasmaWindowInterface::maximizedRequested, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)(bool )>(_a, &PlasmaWindowInterface::fullscreenRequested, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)(bool )>(_a, &PlasmaWindowInterface::keepAboveRequested, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)(bool )>(_a, &PlasmaWindowInterface::keepBelowRequested, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)(bool )>(_a, &PlasmaWindowInterface::demandsAttentionRequested, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)(bool )>(_a, &PlasmaWindowInterface::closeableRequested, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)(bool )>(_a, &PlasmaWindowInterface::minimizeableRequested, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)(bool )>(_a, &PlasmaWindowInterface::maximizeableRequested, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)(bool )>(_a, &PlasmaWindowInterface::fullscreenableRequested, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)(bool )>(_a, &PlasmaWindowInterface::skipTaskbarRequested, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)(bool )>(_a, &PlasmaWindowInterface::skipSwitcherRequested, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)()>(_a, &PlasmaWindowInterface::minimizedGeometriesChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)(bool )>(_a, &PlasmaWindowInterface::shadeableRequested, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)(bool )>(_a, &PlasmaWindowInterface::shadedRequested, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)(bool )>(_a, &PlasmaWindowInterface::movableRequested, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)(bool )>(_a, &PlasmaWindowInterface::resizableRequested, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)(bool )>(_a, &PlasmaWindowInterface::virtualDesktopChangeableRequested, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)(const QString & )>(_a, &PlasmaWindowInterface::enterPlasmaVirtualDesktopRequested, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)()>(_a, &PlasmaWindowInterface::enterNewPlasmaVirtualDesktopRequested, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)(const QString & )>(_a, &PlasmaWindowInterface::leavePlasmaVirtualDesktopRequested, 24))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)(const QString & )>(_a, &PlasmaWindowInterface::enterPlasmaActivityRequested, 25))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)(const QString & )>(_a, &PlasmaWindowInterface::leavePlasmaActivityRequested, 26))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)(KWin::OutputInterface * )>(_a, &PlasmaWindowInterface::sendToOutput, 27))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)(const KWin::Rect & )>(_a, &PlasmaWindowInterface::clientGeometryChanged, 28))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)(bool )>(_a, &PlasmaWindowInterface::noBorderRequested, 29))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlasmaWindowInterface::*)(bool )>(_a, &PlasmaWindowInterface::excludeFromCaptureRequested, 30))
            return;
    }
}

const QMetaObject *KWin::PlasmaWindowInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::PlasmaWindowInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21PlasmaWindowInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::PlasmaWindowInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 31;
    }
    return _id;
}

// SIGNAL 0
void KWin::PlasmaWindowInterface::closeRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::PlasmaWindowInterface::moveRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::PlasmaWindowInterface::resizeRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::PlasmaWindowInterface::activeRequested(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void KWin::PlasmaWindowInterface::minimizedRequested(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void KWin::PlasmaWindowInterface::maximizedRequested(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void KWin::PlasmaWindowInterface::fullscreenRequested(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void KWin::PlasmaWindowInterface::keepAboveRequested(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void KWin::PlasmaWindowInterface::keepBelowRequested(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void KWin::PlasmaWindowInterface::demandsAttentionRequested(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void KWin::PlasmaWindowInterface::closeableRequested(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void KWin::PlasmaWindowInterface::minimizeableRequested(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void KWin::PlasmaWindowInterface::maximizeableRequested(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void KWin::PlasmaWindowInterface::fullscreenableRequested(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void KWin::PlasmaWindowInterface::skipTaskbarRequested(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1);
}

// SIGNAL 15
void KWin::PlasmaWindowInterface::skipSwitcherRequested(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}

// SIGNAL 16
void KWin::PlasmaWindowInterface::minimizedGeometriesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void KWin::PlasmaWindowInterface::shadeableRequested(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 17, nullptr, _t1);
}

// SIGNAL 18
void KWin::PlasmaWindowInterface::shadedRequested(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 18, nullptr, _t1);
}

// SIGNAL 19
void KWin::PlasmaWindowInterface::movableRequested(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 19, nullptr, _t1);
}

// SIGNAL 20
void KWin::PlasmaWindowInterface::resizableRequested(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 20, nullptr, _t1);
}

// SIGNAL 21
void KWin::PlasmaWindowInterface::virtualDesktopChangeableRequested(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 21, nullptr, _t1);
}

// SIGNAL 22
void KWin::PlasmaWindowInterface::enterPlasmaVirtualDesktopRequested(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 22, nullptr, _t1);
}

// SIGNAL 23
void KWin::PlasmaWindowInterface::enterNewPlasmaVirtualDesktopRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void KWin::PlasmaWindowInterface::leavePlasmaVirtualDesktopRequested(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 24, nullptr, _t1);
}

// SIGNAL 25
void KWin::PlasmaWindowInterface::enterPlasmaActivityRequested(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 25, nullptr, _t1);
}

// SIGNAL 26
void KWin::PlasmaWindowInterface::leavePlasmaActivityRequested(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 26, nullptr, _t1);
}

// SIGNAL 27
void KWin::PlasmaWindowInterface::sendToOutput(KWin::OutputInterface * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 27, nullptr, _t1);
}

// SIGNAL 28
void KWin::PlasmaWindowInterface::clientGeometryChanged(const KWin::Rect & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 28, nullptr, _t1);
}

// SIGNAL 29
void KWin::PlasmaWindowInterface::noBorderRequested(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 29, nullptr, _t1);
}

// SIGNAL 30
void KWin::PlasmaWindowInterface::excludeFromCaptureRequested(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 30, nullptr, _t1);
}
QT_WARNING_POP
