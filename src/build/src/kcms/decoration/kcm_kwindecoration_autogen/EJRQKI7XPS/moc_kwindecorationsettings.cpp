/****************************************************************************
** Meta object code from reading C++ file 'kwindecorationsettings.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kwindecorationsettings.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kwindecorationsettings.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN22KWinDecorationSettingsE_t {};
} // unnamed namespace

template <> constexpr inline auto KWinDecorationSettings::qt_create_metaobjectdata<qt_meta_tag_ZN22KWinDecorationSettingsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWinDecorationSettings",
        "pluginNameChanged",
        "",
        "themeChanged",
        "borderSizeChanged",
        "borderSizeAutoChanged",
        "closeOnDoubleClickOnMenuChanged",
        "showToolTipsChanged",
        "buttonsOnLeftChanged",
        "buttonsOnRightChanged",
        "alwaysShowExcludeFromCaptureChanged",
        "pluginName",
        "isPluginNameImmutable",
        "defaultPluginNameValue",
        "theme",
        "isThemeImmutable",
        "defaultThemeValue",
        "borderSize",
        "isBorderSizeImmutable",
        "defaultBorderSizeValue",
        "borderSizeAuto",
        "isBorderSizeAutoImmutable",
        "defaultBorderSizeAutoValue",
        "closeOnDoubleClickOnMenu",
        "isCloseOnDoubleClickOnMenuImmutable",
        "defaultCloseOnDoubleClickOnMenuValue",
        "showToolTips",
        "isShowToolTipsImmutable",
        "defaultShowToolTipsValue",
        "buttonsOnLeft",
        "isButtonsOnLeftImmutable",
        "defaultButtonsOnLeftValue",
        "buttonsOnRight",
        "isButtonsOnRightImmutable",
        "defaultButtonsOnRightValue",
        "alwaysShowExcludeFromCapture",
        "isAlwaysShowExcludeFromCaptureImmutable",
        "defaultAlwaysShowExcludeFromCaptureValue"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'pluginNameChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'themeChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'borderSizeChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'borderSizeAutoChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'closeOnDoubleClickOnMenuChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showToolTipsChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'buttonsOnLeftChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'buttonsOnRightChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'alwaysShowExcludeFromCaptureChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'pluginName'
        QtMocHelpers::PropertyData<QString>(11, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'isPluginNameImmutable'
        QtMocHelpers::PropertyData<bool>(12, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultPluginNameValue'
        QtMocHelpers::PropertyData<QString>(13, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'theme'
        QtMocHelpers::PropertyData<QString>(14, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'isThemeImmutable'
        QtMocHelpers::PropertyData<bool>(15, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultThemeValue'
        QtMocHelpers::PropertyData<QString>(16, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'borderSize'
        QtMocHelpers::PropertyData<QString>(17, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'isBorderSizeImmutable'
        QtMocHelpers::PropertyData<bool>(18, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultBorderSizeValue'
        QtMocHelpers::PropertyData<QString>(19, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'borderSizeAuto'
        QtMocHelpers::PropertyData<bool>(20, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'isBorderSizeAutoImmutable'
        QtMocHelpers::PropertyData<bool>(21, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultBorderSizeAutoValue'
        QtMocHelpers::PropertyData<bool>(22, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'closeOnDoubleClickOnMenu'
        QtMocHelpers::PropertyData<bool>(23, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'isCloseOnDoubleClickOnMenuImmutable'
        QtMocHelpers::PropertyData<bool>(24, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultCloseOnDoubleClickOnMenuValue'
        QtMocHelpers::PropertyData<bool>(25, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'showToolTips'
        QtMocHelpers::PropertyData<bool>(26, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'isShowToolTipsImmutable'
        QtMocHelpers::PropertyData<bool>(27, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultShowToolTipsValue'
        QtMocHelpers::PropertyData<bool>(28, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'buttonsOnLeft'
        QtMocHelpers::PropertyData<QString>(29, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'isButtonsOnLeftImmutable'
        QtMocHelpers::PropertyData<bool>(30, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultButtonsOnLeftValue'
        QtMocHelpers::PropertyData<QString>(31, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'buttonsOnRight'
        QtMocHelpers::PropertyData<QString>(32, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'isButtonsOnRightImmutable'
        QtMocHelpers::PropertyData<bool>(33, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultButtonsOnRightValue'
        QtMocHelpers::PropertyData<QString>(34, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'alwaysShowExcludeFromCapture'
        QtMocHelpers::PropertyData<bool>(35, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'isAlwaysShowExcludeFromCaptureImmutable'
        QtMocHelpers::PropertyData<bool>(36, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultAlwaysShowExcludeFromCaptureValue'
        QtMocHelpers::PropertyData<bool>(37, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<KWinDecorationSettings, qt_meta_tag_ZN22KWinDecorationSettingsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWinDecorationSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<KConfigSkeleton::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22KWinDecorationSettingsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22KWinDecorationSettingsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22KWinDecorationSettingsE_t>.metaTypes,
    nullptr
} };

void KWinDecorationSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<KWinDecorationSettings *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->pluginNameChanged(); break;
        case 1: _t->themeChanged(); break;
        case 2: _t->borderSizeChanged(); break;
        case 3: _t->borderSizeAutoChanged(); break;
        case 4: _t->closeOnDoubleClickOnMenuChanged(); break;
        case 5: _t->showToolTipsChanged(); break;
        case 6: _t->buttonsOnLeftChanged(); break;
        case 7: _t->buttonsOnRightChanged(); break;
        case 8: _t->alwaysShowExcludeFromCaptureChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (KWinDecorationSettings::*)()>(_a, &KWinDecorationSettings::pluginNameChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (KWinDecorationSettings::*)()>(_a, &KWinDecorationSettings::themeChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (KWinDecorationSettings::*)()>(_a, &KWinDecorationSettings::borderSizeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (KWinDecorationSettings::*)()>(_a, &KWinDecorationSettings::borderSizeAutoChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (KWinDecorationSettings::*)()>(_a, &KWinDecorationSettings::closeOnDoubleClickOnMenuChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (KWinDecorationSettings::*)()>(_a, &KWinDecorationSettings::showToolTipsChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (KWinDecorationSettings::*)()>(_a, &KWinDecorationSettings::buttonsOnLeftChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (KWinDecorationSettings::*)()>(_a, &KWinDecorationSettings::buttonsOnRightChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (KWinDecorationSettings::*)()>(_a, &KWinDecorationSettings::alwaysShowExcludeFromCaptureChanged, 8))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->pluginName(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isPluginNameImmutable(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->defaultPluginNameValue(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->theme(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isThemeImmutable(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->defaultThemeValue(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->borderSize(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->isBorderSizeImmutable(); break;
        case 8: *reinterpret_cast<QString*>(_v) = _t->defaultBorderSizeValue(); break;
        case 9: *reinterpret_cast<bool*>(_v) = _t->borderSizeAuto(); break;
        case 10: *reinterpret_cast<bool*>(_v) = _t->isBorderSizeAutoImmutable(); break;
        case 11: *reinterpret_cast<bool*>(_v) = _t->defaultBorderSizeAutoValue(); break;
        case 12: *reinterpret_cast<bool*>(_v) = _t->closeOnDoubleClickOnMenu(); break;
        case 13: *reinterpret_cast<bool*>(_v) = _t->isCloseOnDoubleClickOnMenuImmutable(); break;
        case 14: *reinterpret_cast<bool*>(_v) = _t->defaultCloseOnDoubleClickOnMenuValue(); break;
        case 15: *reinterpret_cast<bool*>(_v) = _t->showToolTips(); break;
        case 16: *reinterpret_cast<bool*>(_v) = _t->isShowToolTipsImmutable(); break;
        case 17: *reinterpret_cast<bool*>(_v) = _t->defaultShowToolTipsValue(); break;
        case 18: *reinterpret_cast<QString*>(_v) = _t->buttonsOnLeft(); break;
        case 19: *reinterpret_cast<bool*>(_v) = _t->isButtonsOnLeftImmutable(); break;
        case 20: *reinterpret_cast<QString*>(_v) = _t->defaultButtonsOnLeftValue(); break;
        case 21: *reinterpret_cast<QString*>(_v) = _t->buttonsOnRight(); break;
        case 22: *reinterpret_cast<bool*>(_v) = _t->isButtonsOnRightImmutable(); break;
        case 23: *reinterpret_cast<QString*>(_v) = _t->defaultButtonsOnRightValue(); break;
        case 24: *reinterpret_cast<bool*>(_v) = _t->alwaysShowExcludeFromCapture(); break;
        case 25: *reinterpret_cast<bool*>(_v) = _t->isAlwaysShowExcludeFromCaptureImmutable(); break;
        case 26: *reinterpret_cast<bool*>(_v) = _t->defaultAlwaysShowExcludeFromCaptureValue(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPluginName(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setTheme(*reinterpret_cast<QString*>(_v)); break;
        case 6: _t->setBorderSize(*reinterpret_cast<QString*>(_v)); break;
        case 9: _t->setBorderSizeAuto(*reinterpret_cast<bool*>(_v)); break;
        case 12: _t->setCloseOnDoubleClickOnMenu(*reinterpret_cast<bool*>(_v)); break;
        case 15: _t->setShowToolTips(*reinterpret_cast<bool*>(_v)); break;
        case 18: _t->setButtonsOnLeft(*reinterpret_cast<QString*>(_v)); break;
        case 21: _t->setButtonsOnRight(*reinterpret_cast<QString*>(_v)); break;
        case 24: _t->setAlwaysShowExcludeFromCapture(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KWinDecorationSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWinDecorationSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22KWinDecorationSettingsE_t>.strings))
        return static_cast<void*>(this);
    return KConfigSkeleton::qt_metacast(_clname);
}

int KWinDecorationSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KConfigSkeleton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void KWinDecorationSettings::pluginNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWinDecorationSettings::themeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWinDecorationSettings::borderSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWinDecorationSettings::borderSizeAutoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWinDecorationSettings::closeOnDoubleClickOnMenuChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KWinDecorationSettings::showToolTipsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KWinDecorationSettings::buttonsOnLeftChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void KWinDecorationSettings::buttonsOnRightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void KWinDecorationSettings::alwaysShowExcludeFromCaptureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
