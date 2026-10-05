/****************************************************************************
** Meta object code from reading C++ file 'backendoutput.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/core/backendoutput.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'backendoutput.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin13BackendOutputE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::BackendOutput::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin13BackendOutputE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::BackendOutput",
        "positionChanged",
        "",
        "enabledChanged",
        "scaleChanged",
        "scaleSettingChanged",
        "deviceOffsetChanged",
        "aboutToChange",
        "OutputChangeSet*",
        "changeSet",
        "changed",
        "currentModeChanged",
        "modesChanged",
        "transformChanged",
        "dpmsModeChanged",
        "capabilitiesChanged",
        "overscanChanged",
        "vrrPolicyChanged",
        "rgbRangeChanged",
        "wideColorGamutChanged",
        "referenceLuminanceChanged",
        "highDynamicRangeChanged",
        "autoRotationPolicyChanged",
        "iccProfileChanged",
        "iccProfilePathChanged",
        "brightnessMetadataChanged",
        "sdrGamutWidenessChanged",
        "colorDescriptionChanged",
        "blendingColorChanged",
        "colorProfileSourceChanged",
        "brightnessChanged",
        "colorPowerTradeoffChanged",
        "dimmingChanged",
        "uuidChanged",
        "replicationSourceChanged",
        "allowDdcCiChanged",
        "maxBitsPerColorChanged",
        "edrPolicyChanged",
        "sharpnessChanged",
        "priorityChanged",
        "automaticBrightnessChanged",
        "hdrIccProfilePathChanged",
        "hdrColorProfileSourceChanged",
        "abmLevelChanged",
        "DpmsMode",
        "On",
        "TurningOff",
        "Off",
        "SubPixel",
        "Unknown",
        "None",
        "Horizontal_RGB",
        "Horizontal_BGR",
        "Vertical_RGB",
        "Vertical_BGR",
        "RgbRange",
        "Automatic",
        "Full",
        "Limited",
        "AutoRotationPolicy",
        "Never",
        "InTabletMode",
        "Always",
        "ColorPowerTradeoff",
        "PreferEfficiency",
        "PreferAccuracy",
        "EdrPolicy",
        "BrightnessReason",
        "ManualAdjustment",
        "AutomaticBrightness"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'positionChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'enabledChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'scaleChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'scaleSettingChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'deviceOffsetChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'aboutToChange'
        QtMocHelpers::SignalData<void(OutputChangeSet *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Signal 'changed'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentModeChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'modesChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'transformChanged'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dpmsModeChanged'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'capabilitiesChanged'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'overscanChanged'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'vrrPolicyChanged'
        QtMocHelpers::SignalData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'rgbRangeChanged'
        QtMocHelpers::SignalData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'wideColorGamutChanged'
        QtMocHelpers::SignalData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'referenceLuminanceChanged'
        QtMocHelpers::SignalData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'highDynamicRangeChanged'
        QtMocHelpers::SignalData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'autoRotationPolicyChanged'
        QtMocHelpers::SignalData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'iccProfileChanged'
        QtMocHelpers::SignalData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'iccProfilePathChanged'
        QtMocHelpers::SignalData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'brightnessMetadataChanged'
        QtMocHelpers::SignalData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sdrGamutWidenessChanged'
        QtMocHelpers::SignalData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'colorDescriptionChanged'
        QtMocHelpers::SignalData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'blendingColorChanged'
        QtMocHelpers::SignalData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'colorProfileSourceChanged'
        QtMocHelpers::SignalData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'brightnessChanged'
        QtMocHelpers::SignalData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'colorPowerTradeoffChanged'
        QtMocHelpers::SignalData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dimmingChanged'
        QtMocHelpers::SignalData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'uuidChanged'
        QtMocHelpers::SignalData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'replicationSourceChanged'
        QtMocHelpers::SignalData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'allowDdcCiChanged'
        QtMocHelpers::SignalData<void()>(35, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'maxBitsPerColorChanged'
        QtMocHelpers::SignalData<void()>(36, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'edrPolicyChanged'
        QtMocHelpers::SignalData<void()>(37, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sharpnessChanged'
        QtMocHelpers::SignalData<void()>(38, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'priorityChanged'
        QtMocHelpers::SignalData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'automaticBrightnessChanged'
        QtMocHelpers::SignalData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hdrIccProfilePathChanged'
        QtMocHelpers::SignalData<void()>(41, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hdrColorProfileSourceChanged'
        QtMocHelpers::SignalData<void()>(42, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'abmLevelChanged'
        QtMocHelpers::SignalData<void()>(43, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'DpmsMode'
        QtMocHelpers::EnumData<enum DpmsMode>(44, 44, QMC::EnumIsScoped).add({
            {   45, DpmsMode::On },
            {   46, DpmsMode::TurningOff },
            {   47, DpmsMode::Off },
        }),
        // enum 'SubPixel'
        QtMocHelpers::EnumData<enum SubPixel>(48, 48, QMC::EnumIsScoped).add({
            {   49, SubPixel::Unknown },
            {   50, SubPixel::None },
            {   51, SubPixel::Horizontal_RGB },
            {   52, SubPixel::Horizontal_BGR },
            {   53, SubPixel::Vertical_RGB },
            {   54, SubPixel::Vertical_BGR },
        }),
        // enum 'RgbRange'
        QtMocHelpers::EnumData<enum RgbRange>(55, 55, QMC::EnumIsScoped).add({
            {   56, RgbRange::Automatic },
            {   57, RgbRange::Full },
            {   58, RgbRange::Limited },
        }),
        // enum 'AutoRotationPolicy'
        QtMocHelpers::EnumData<enum AutoRotationPolicy>(59, 59, QMC::EnumIsScoped).add({
            {   60, AutoRotationPolicy::Never },
            {   61, AutoRotationPolicy::InTabletMode },
            {   62, AutoRotationPolicy::Always },
        }),
        // enum 'ColorPowerTradeoff'
        QtMocHelpers::EnumData<enum ColorPowerTradeoff>(63, 63, QMC::EnumIsScoped).add({
            {   64, ColorPowerTradeoff::PreferEfficiency },
            {   65, ColorPowerTradeoff::PreferAccuracy },
        }),
        // enum 'EdrPolicy'
        QtMocHelpers::EnumData<enum EdrPolicy>(66, 66, QMC::EnumIsScoped).add({
            {   60, EdrPolicy::Never },
            {   62, EdrPolicy::Always },
        }),
        // enum 'BrightnessReason'
        QtMocHelpers::EnumData<enum BrightnessReason>(67, 67, QMC::EnumIsScoped).add({
            {   68, BrightnessReason::ManualAdjustment },
            {   69, BrightnessReason::AutomaticBrightness },
        }),
    };
    return QtMocHelpers::metaObjectData<BackendOutput, qt_meta_tag_ZN4KWin13BackendOutputE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::BackendOutput::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin13BackendOutputE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin13BackendOutputE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin13BackendOutputE_t>.metaTypes,
    nullptr
} };

void KWin::BackendOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BackendOutput *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->positionChanged(); break;
        case 1: _t->enabledChanged(); break;
        case 2: _t->scaleChanged(); break;
        case 3: _t->scaleSettingChanged(); break;
        case 4: _t->deviceOffsetChanged(); break;
        case 5: _t->aboutToChange((*reinterpret_cast<std::add_pointer_t<OutputChangeSet*>>(_a[1]))); break;
        case 6: _t->changed(); break;
        case 7: _t->currentModeChanged(); break;
        case 8: _t->modesChanged(); break;
        case 9: _t->transformChanged(); break;
        case 10: _t->dpmsModeChanged(); break;
        case 11: _t->capabilitiesChanged(); break;
        case 12: _t->overscanChanged(); break;
        case 13: _t->vrrPolicyChanged(); break;
        case 14: _t->rgbRangeChanged(); break;
        case 15: _t->wideColorGamutChanged(); break;
        case 16: _t->referenceLuminanceChanged(); break;
        case 17: _t->highDynamicRangeChanged(); break;
        case 18: _t->autoRotationPolicyChanged(); break;
        case 19: _t->iccProfileChanged(); break;
        case 20: _t->iccProfilePathChanged(); break;
        case 21: _t->brightnessMetadataChanged(); break;
        case 22: _t->sdrGamutWidenessChanged(); break;
        case 23: _t->colorDescriptionChanged(); break;
        case 24: _t->blendingColorChanged(); break;
        case 25: _t->colorProfileSourceChanged(); break;
        case 26: _t->brightnessChanged(); break;
        case 27: _t->colorPowerTradeoffChanged(); break;
        case 28: _t->dimmingChanged(); break;
        case 29: _t->uuidChanged(); break;
        case 30: _t->replicationSourceChanged(); break;
        case 31: _t->allowDdcCiChanged(); break;
        case 32: _t->maxBitsPerColorChanged(); break;
        case 33: _t->edrPolicyChanged(); break;
        case 34: _t->sharpnessChanged(); break;
        case 35: _t->priorityChanged(); break;
        case 36: _t->automaticBrightnessChanged(); break;
        case 37: _t->hdrIccProfilePathChanged(); break;
        case 38: _t->hdrColorProfileSourceChanged(); break;
        case 39: _t->abmLevelChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::positionChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::enabledChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::scaleChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::scaleSettingChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::deviceOffsetChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)(OutputChangeSet * )>(_a, &BackendOutput::aboutToChange, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::changed, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::currentModeChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::modesChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::transformChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::dpmsModeChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::capabilitiesChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::overscanChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::vrrPolicyChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::rgbRangeChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::wideColorGamutChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::referenceLuminanceChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::highDynamicRangeChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::autoRotationPolicyChanged, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::iccProfileChanged, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::iccProfilePathChanged, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::brightnessMetadataChanged, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::sdrGamutWidenessChanged, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::colorDescriptionChanged, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::blendingColorChanged, 24))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::colorProfileSourceChanged, 25))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::brightnessChanged, 26))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::colorPowerTradeoffChanged, 27))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::dimmingChanged, 28))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::uuidChanged, 29))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::replicationSourceChanged, 30))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::allowDdcCiChanged, 31))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::maxBitsPerColorChanged, 32))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::edrPolicyChanged, 33))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::sharpnessChanged, 34))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::priorityChanged, 35))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::automaticBrightnessChanged, 36))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::hdrIccProfilePathChanged, 37))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::hdrColorProfileSourceChanged, 38))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackendOutput::*)()>(_a, &BackendOutput::abmLevelChanged, 39))
            return;
    }
}

const QMetaObject *KWin::BackendOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::BackendOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin13BackendOutputE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::BackendOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 40;
    }
    return _id;
}

// SIGNAL 0
void KWin::BackendOutput::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::BackendOutput::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::BackendOutput::scaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::BackendOutput::scaleSettingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWin::BackendOutput::deviceOffsetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KWin::BackendOutput::aboutToChange(OutputChangeSet * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void KWin::BackendOutput::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void KWin::BackendOutput::currentModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void KWin::BackendOutput::modesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void KWin::BackendOutput::transformChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void KWin::BackendOutput::dpmsModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void KWin::BackendOutput::capabilitiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void KWin::BackendOutput::overscanChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void KWin::BackendOutput::vrrPolicyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void KWin::BackendOutput::rgbRangeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void KWin::BackendOutput::wideColorGamutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void KWin::BackendOutput::referenceLuminanceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void KWin::BackendOutput::highDynamicRangeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void KWin::BackendOutput::autoRotationPolicyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void KWin::BackendOutput::iccProfileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void KWin::BackendOutput::iccProfilePathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void KWin::BackendOutput::brightnessMetadataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void KWin::BackendOutput::sdrGamutWidenessChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void KWin::BackendOutput::colorDescriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void KWin::BackendOutput::blendingColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void KWin::BackendOutput::colorProfileSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void KWin::BackendOutput::brightnessChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void KWin::BackendOutput::colorPowerTradeoffChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void KWin::BackendOutput::dimmingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void KWin::BackendOutput::uuidChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void KWin::BackendOutput::replicationSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void KWin::BackendOutput::allowDdcCiChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void KWin::BackendOutput::maxBitsPerColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void KWin::BackendOutput::edrPolicyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 33, nullptr);
}

// SIGNAL 34
void KWin::BackendOutput::sharpnessChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 34, nullptr);
}

// SIGNAL 35
void KWin::BackendOutput::priorityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void KWin::BackendOutput::automaticBrightnessChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void KWin::BackendOutput::hdrIccProfilePathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 37, nullptr);
}

// SIGNAL 38
void KWin::BackendOutput::hdrColorProfileSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 38, nullptr);
}

// SIGNAL 39
void KWin::BackendOutput::abmLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 39, nullptr);
}
QT_WARNING_POP
