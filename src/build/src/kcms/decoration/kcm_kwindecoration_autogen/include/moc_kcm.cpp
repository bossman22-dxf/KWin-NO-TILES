/****************************************************************************
** Meta object code from reading C++ file 'kcm.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/kcms/decoration/kcm.h"
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
struct qt_meta_tag_ZN17KCMKWinDecorationE_t {};
} // unnamed namespace

template <> constexpr inline auto KCMKWinDecoration::qt_create_metaobjectdata<qt_meta_tag_ZN17KCMKWinDecorationE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KCMKWinDecoration",
        "themeChanged",
        "",
        "borderIndexChanged",
        "borderSizeChanged",
        "excludeFromCaptureButtonSelectedChanged",
        "load",
        "save",
        "defaults",
        "reloadKWinSettings",
        "onLeftButtonsChanged",
        "onRightButtonsChanged",
        "checkExcludeFromCaptureButtonPresence",
        "settings",
        "KWinDecorationSettings*",
        "themesModel",
        "QSortFilterProxyModel*",
        "borderSizesModel",
        "borderIndex",
        "borderSize",
        "recommendedBorderSize",
        "theme",
        "leftButtonsModel",
        "QAbstractListModel*",
        "rightButtonsModel",
        "availableButtonsModel",
        "excludeFromCaptureButtonSelected"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'themeChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'borderIndexChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'borderSizeChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'excludeFromCaptureButtonSelectedChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'load'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'save'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'defaults'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'reloadKWinSettings'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onLeftButtonsChanged'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onRightButtonsChanged'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'checkExcludeFromCaptureButtonPresence'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'settings'
        QtMocHelpers::PropertyData<KWinDecorationSettings*>(13, 0x80000000 | 14, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'themesModel'
        QtMocHelpers::PropertyData<QSortFilterProxyModel*>(15, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'borderSizesModel'
        QtMocHelpers::PropertyData<QStringList>(17, QMetaType::QStringList, QMC::DefaultPropertyFlags, 0),
        // property 'borderIndex'
        QtMocHelpers::PropertyData<int>(18, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'borderSize'
        QtMocHelpers::PropertyData<int>(19, QMetaType::Int, QMC::DefaultPropertyFlags, 2),
        // property 'recommendedBorderSize'
        QtMocHelpers::PropertyData<int>(20, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'theme'
        QtMocHelpers::PropertyData<int>(21, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'leftButtonsModel'
        QtMocHelpers::PropertyData<QAbstractListModel*>(22, 0x80000000 | 23, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'rightButtonsModel'
        QtMocHelpers::PropertyData<QAbstractListModel*>(24, 0x80000000 | 23, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'availableButtonsModel'
        QtMocHelpers::PropertyData<QAbstractListModel*>(25, 0x80000000 | 23, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'excludeFromCaptureButtonSelected'
        QtMocHelpers::PropertyData<bool>(26, QMetaType::Bool, QMC::DefaultPropertyFlags, 3),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<KCMKWinDecoration, qt_meta_tag_ZN17KCMKWinDecorationE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KCMKWinDecoration::staticMetaObject = { {
    QMetaObject::SuperData::link<KQuickManagedConfigModule::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17KCMKWinDecorationE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17KCMKWinDecorationE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17KCMKWinDecorationE_t>.metaTypes,
    nullptr
} };

void KCMKWinDecoration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<KCMKWinDecoration *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->themeChanged(); break;
        case 1: _t->borderIndexChanged(); break;
        case 2: _t->borderSizeChanged(); break;
        case 3: _t->excludeFromCaptureButtonSelectedChanged(); break;
        case 4: _t->load(); break;
        case 5: _t->save(); break;
        case 6: _t->defaults(); break;
        case 7: _t->reloadKWinSettings(); break;
        case 8: _t->onLeftButtonsChanged(); break;
        case 9: _t->onRightButtonsChanged(); break;
        case 10: _t->checkExcludeFromCaptureButtonPresence(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (KCMKWinDecoration::*)()>(_a, &KCMKWinDecoration::themeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (KCMKWinDecoration::*)()>(_a, &KCMKWinDecoration::borderIndexChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (KCMKWinDecoration::*)()>(_a, &KCMKWinDecoration::borderSizeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (KCMKWinDecoration::*)()>(_a, &KCMKWinDecoration::excludeFromCaptureButtonSelectedChanged, 3))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
        case 8:
        case 7:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractListModel* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<KWinDecorationSettings**>(_v) = _t->settings(); break;
        case 1: *reinterpret_cast<QSortFilterProxyModel**>(_v) = _t->themesModel(); break;
        case 2: *reinterpret_cast<QStringList*>(_v) = _t->borderSizesModel(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->borderIndex(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->borderSize(); break;
        case 5: *reinterpret_cast<int*>(_v) = _t->recommendedBorderSize(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->theme(); break;
        case 7: *reinterpret_cast<QAbstractListModel**>(_v) = _t->leftButtonsModel(); break;
        case 8: *reinterpret_cast<QAbstractListModel**>(_v) = _t->rightButtonsModel(); break;
        case 9: *reinterpret_cast<QAbstractListModel**>(_v) = _t->availableButtonsModel(); break;
        case 10: *reinterpret_cast<bool*>(_v) = _t->excludeFromCaptureButtonSelected(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setBorderIndex(*reinterpret_cast<int*>(_v)); break;
        case 6: _t->setTheme(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KCMKWinDecoration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KCMKWinDecoration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17KCMKWinDecorationE_t>.strings))
        return static_cast<void*>(this);
    return KQuickManagedConfigModule::qt_metacast(_clname);
}

int KCMKWinDecoration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KQuickManagedConfigModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
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
void KCMKWinDecoration::themeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KCMKWinDecoration::borderIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KCMKWinDecoration::borderSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KCMKWinDecoration::excludeFromCaptureButtonSelectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
