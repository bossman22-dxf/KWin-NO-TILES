/****************************************************************************
** Meta object code from reading C++ file 'windowmodel.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/scripting/windowmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowmodel.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin11WindowModelE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::WindowModel::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin11WindowModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::WindowModel"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WindowModel, qt_meta_tag_ZN4KWin11WindowModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::WindowModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin11WindowModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin11WindowModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin11WindowModelE_t>.metaTypes,
    nullptr
} };

void KWin::WindowModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WindowModel *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::WindowModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::WindowModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin11WindowModelE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int KWin::WindowModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin17WindowFilterModelE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::WindowFilterModel::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin17WindowFilterModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::WindowFilterModel",
        "activityChanged",
        "",
        "desktopChanged",
        "screenNameChanged",
        "windowModelChanged",
        "filterChanged",
        "windowTypeChanged",
        "minimizedWindowsChanged",
        "windowModel",
        "WindowModel*",
        "activity",
        "desktop",
        "KWin::VirtualDesktop*",
        "filter",
        "screenName",
        "windowType",
        "WindowTypes",
        "minimizedWindows",
        "WindowType",
        "Normal",
        "Dialog",
        "Dock",
        "Desktop",
        "Notification",
        "CriticalNotification"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'activityChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'desktopChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'screenNameChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'windowModelChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'filterChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'windowTypeChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'minimizedWindowsChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'windowModel'
        QtMocHelpers::PropertyData<WindowModel*>(9, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 3),
        // property 'activity'
        QtMocHelpers::PropertyData<QString>(11, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Resettable | QMC::StdCppSet, 0),
        // property 'desktop'
        QtMocHelpers::PropertyData<KWin::VirtualDesktop*>(12, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Resettable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'filter'
        QtMocHelpers::PropertyData<QString>(14, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'screenName'
        QtMocHelpers::PropertyData<QString>(15, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Resettable | QMC::StdCppSet, 2),
        // property 'windowType'
        QtMocHelpers::PropertyData<WindowTypes>(16, 0x80000000 | 17, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Resettable | QMC::EnumOrFlag | QMC::StdCppSet, 5),
        // property 'minimizedWindows'
        QtMocHelpers::PropertyData<bool>(18, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
    };
    QtMocHelpers::UintData qt_enums {
        // flag 'WindowTypes'
        QtMocHelpers::EnumData<WindowTypes>(17, 19, QMC::EnumIsFlag).add({
            {   20, WindowType::Normal },
            {   21, WindowType::Dialog },
            {   22, WindowType::Dock },
            {   23, WindowType::Desktop },
            {   24, WindowType::Notification },
            {   25, WindowType::CriticalNotification },
        }),
    };
    return QtMocHelpers::metaObjectData<WindowFilterModel, qt_meta_tag_ZN4KWin17WindowFilterModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::WindowFilterModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17WindowFilterModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17WindowFilterModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin17WindowFilterModelE_t>.metaTypes,
    nullptr
} };

void KWin::WindowFilterModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WindowFilterModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->activityChanged(); break;
        case 1: _t->desktopChanged(); break;
        case 2: _t->screenNameChanged(); break;
        case 3: _t->windowModelChanged(); break;
        case 4: _t->filterChanged(); break;
        case 5: _t->windowTypeChanged(); break;
        case 6: _t->minimizedWindowsChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (WindowFilterModel::*)()>(_a, &WindowFilterModel::activityChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (WindowFilterModel::*)()>(_a, &WindowFilterModel::desktopChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (WindowFilterModel::*)()>(_a, &WindowFilterModel::screenNameChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (WindowFilterModel::*)()>(_a, &WindowFilterModel::windowModelChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (WindowFilterModel::*)()>(_a, &WindowFilterModel::filterChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (WindowFilterModel::*)()>(_a, &WindowFilterModel::windowTypeChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (WindowFilterModel::*)()>(_a, &WindowFilterModel::minimizedWindowsChanged, 6))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KWin::VirtualDesktop* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WindowModel* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<WindowModel**>(_v) = _t->windowModel(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->activity(); break;
        case 2: *reinterpret_cast<KWin::VirtualDesktop**>(_v) = _t->desktop(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->filter(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->screenName(); break;
        case 5: QtMocHelpers::assignFlags<WindowTypes>(_v, _t->windowType()); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->minimizedWindows(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWindowModel(*reinterpret_cast<WindowModel**>(_v)); break;
        case 1: _t->setActivity(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setDesktop(*reinterpret_cast<KWin::VirtualDesktop**>(_v)); break;
        case 3: _t->setFilter(*reinterpret_cast<QString*>(_v)); break;
        case 4: _t->setScreenName(*reinterpret_cast<QString*>(_v)); break;
        case 5: _t->setWindowType(*reinterpret_cast<WindowTypes*>(_v)); break;
        case 6: _t->setMinimizedWindows(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
    if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 1: _t->resetActivity(); break;
        case 2: _t->resetDesktop(); break;
        case 4: _t->resetScreenName(); break;
        case 5: _t->resetWindowType(); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::WindowFilterModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::WindowFilterModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17WindowFilterModelE_t>.strings))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int KWin::WindowFilterModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
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
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void KWin::WindowFilterModel::activityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::WindowFilterModel::desktopChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::WindowFilterModel::screenNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::WindowFilterModel::windowModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWin::WindowFilterModel::filterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KWin::WindowFilterModel::windowTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KWin::WindowFilterModel::minimizedWindowsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
