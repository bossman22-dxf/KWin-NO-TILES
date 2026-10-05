/****************************************************************************
** Meta object code from reading C++ file 'device.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/backends/libinput/device.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'device.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin8LibInput10TabletToolE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::LibInput::TabletTool::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin8LibInput10TabletToolE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::LibInput::TabletTool"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TabletTool, qt_meta_tag_ZN4KWin8LibInput10TabletToolE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::LibInput::TabletTool::staticMetaObject = { {
    QMetaObject::SuperData::link<InputDeviceTabletTool::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin8LibInput10TabletToolE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin8LibInput10TabletToolE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin8LibInput10TabletToolE_t>.metaTypes,
    nullptr
} };

void KWin::LibInput::TabletTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TabletTool *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::LibInput::TabletTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::LibInput::TabletTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin8LibInput10TabletToolE_t>.strings))
        return static_cast<void*>(this);
    return InputDeviceTabletTool::qt_metacast(_clname);
}

int KWin::LibInput::TabletTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InputDeviceTabletTool::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin8LibInput6DeviceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::LibInput::Device::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin8LibInput6DeviceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::LibInput::Device",
        "D-Bus Interface",
        "org.kde.KWin.InputDevice",
        "tapButtonMapChanged",
        "",
        "calibrationMatrixChanged",
        "orientationChanged",
        "outputNameChanged",
        "leftHandedChanged",
        "disableWhileTypingChanged",
        "pointerAccelerationChanged",
        "pointerAccelerationProfileChanged",
        "enabledChanged",
        "disableEventsOnExternalMouseChanged",
        "tapToClickChanged",
        "tapAndDragChanged",
        "tapDragLockChanged",
        "middleEmulationChanged",
        "naturalScrollChanged",
        "scrollMethodChanged",
        "scrollButtonChanged",
        "scrollFactorChanged",
        "clickMethodChanged",
        "outputAreaChanged",
        "mapToWorkspaceChanged",
        "pressureCurveChanged",
        "supportsPressureRangeChanged",
        "pressureRangeMinChanged",
        "pressureRangeMaxChanged",
        "inputAreaChanged",
        "tabletToolRelativeChanged",
        "rotationChanged",
        "currentModesChanged",
        "keyboard",
        "alphaNumericKeyboard",
        "pointer",
        "touchpad",
        "touch",
        "tabletTool",
        "tabletPad",
        "gestureSupport",
        "name",
        "sysName",
        "outputName",
        "size",
        "QSizeF",
        "product",
        "vendor",
        "supportsDisableEvents",
        "enabled",
        "enabledByDefault",
        "supportedButtons",
        "supportsCalibrationMatrix",
        "defaultCalibrationMatrix",
        "calibrationMatrix",
        "orientation",
        "Qt::ScreenOrientation",
        "orientationDBus",
        "supportsLeftHanded",
        "leftHandedEnabledByDefault",
        "leftHanded",
        "supportsDisableEventsOnExternalMouse",
        "disableEventsOnExternalMouseEnabledByDefault",
        "disableEventsOnExternalMouse",
        "supportsDisableWhileTyping",
        "disableWhileTypingEnabledByDefault",
        "disableWhileTyping",
        "supportsPointerAcceleration",
        "defaultPointerAcceleration",
        "pointerAcceleration",
        "supportsPointerAccelerationProfileFlat",
        "defaultPointerAccelerationProfileFlat",
        "pointerAccelerationProfileFlat",
        "supportsPointerAccelerationProfileAdaptive",
        "defaultPointerAccelerationProfileAdaptive",
        "pointerAccelerationProfileAdaptive",
        "tapFingerCount",
        "tapToClickEnabledByDefault",
        "tapToClick",
        "supportsLmrTapButtonMap",
        "lmrTapButtonMapEnabledByDefault",
        "lmrTapButtonMap",
        "tapAndDragEnabledByDefault",
        "tapAndDrag",
        "tapDragLockEnabledByDefault",
        "tapDragLock",
        "supportsMiddleEmulation",
        "middleEmulationEnabledByDefault",
        "middleEmulation",
        "supportsNaturalScroll",
        "naturalScrollEnabledByDefault",
        "naturalScroll",
        "supportsScrollTwoFinger",
        "scrollTwoFingerEnabledByDefault",
        "scrollTwoFinger",
        "supportsScrollEdge",
        "scrollEdgeEnabledByDefault",
        "scrollEdge",
        "supportsScrollOnButtonDown",
        "scrollOnButtonDownEnabledByDefault",
        "defaultScrollButton",
        "scrollOnButtonDown",
        "scrollButton",
        "scrollFactor",
        "switchDevice",
        "lidSwitch",
        "tabletModeSwitch",
        "supportsClickMethodAreas",
        "defaultClickMethodAreas",
        "clickMethodAreas",
        "supportsClickMethodClickfinger",
        "defaultClickMethodClickfinger",
        "clickMethodClickfinger",
        "supportsOutputArea",
        "defaultOutputArea",
        "QRectF",
        "outputArea",
        "defaultMapToWorkspace",
        "mapToWorkspace",
        "deviceGroupId",
        "defaultPressureCurve",
        "pressureCurve",
        "tabletPadButtonCount",
        "tabletPadDialCount",
        "tabletPadRingCount",
        "tabletPadStripCount",
        "supportsInputArea",
        "defaultInputArea",
        "inputArea",
        "numModes",
        "QList<uint>",
        "currentModes",
        "supportsPressureRange",
        "pressureRangeMin",
        "pressureRangeMax",
        "defaultPressureRangeMin",
        "defaultPressureRangeMax",
        "tabletToolIsRelative",
        "supportsRotation",
        "rotation",
        "uint32_t",
        "defaultRotation",
        "isVirtual"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'tapButtonMapChanged'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'calibrationMatrixChanged'
        QtMocHelpers::SignalData<void()>(5, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'orientationChanged'
        QtMocHelpers::SignalData<void()>(6, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'outputNameChanged'
        QtMocHelpers::SignalData<void()>(7, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'leftHandedChanged'
        QtMocHelpers::SignalData<void()>(8, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'disableWhileTypingChanged'
        QtMocHelpers::SignalData<void()>(9, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pointerAccelerationChanged'
        QtMocHelpers::SignalData<void()>(10, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pointerAccelerationProfileChanged'
        QtMocHelpers::SignalData<void()>(11, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'enabledChanged'
        QtMocHelpers::SignalData<void()>(12, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'disableEventsOnExternalMouseChanged'
        QtMocHelpers::SignalData<void()>(13, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'tapToClickChanged'
        QtMocHelpers::SignalData<void()>(14, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'tapAndDragChanged'
        QtMocHelpers::SignalData<void()>(15, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'tapDragLockChanged'
        QtMocHelpers::SignalData<void()>(16, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'middleEmulationChanged'
        QtMocHelpers::SignalData<void()>(17, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'naturalScrollChanged'
        QtMocHelpers::SignalData<void()>(18, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'scrollMethodChanged'
        QtMocHelpers::SignalData<void()>(19, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'scrollButtonChanged'
        QtMocHelpers::SignalData<void()>(20, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'scrollFactorChanged'
        QtMocHelpers::SignalData<void()>(21, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'clickMethodChanged'
        QtMocHelpers::SignalData<void()>(22, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'outputAreaChanged'
        QtMocHelpers::SignalData<void()>(23, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'mapToWorkspaceChanged'
        QtMocHelpers::SignalData<void()>(24, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pressureCurveChanged'
        QtMocHelpers::SignalData<void()>(25, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'supportsPressureRangeChanged'
        QtMocHelpers::SignalData<void()>(26, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pressureRangeMinChanged'
        QtMocHelpers::SignalData<void()>(27, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pressureRangeMaxChanged'
        QtMocHelpers::SignalData<void()>(28, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'inputAreaChanged'
        QtMocHelpers::SignalData<void()>(29, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'tabletToolRelativeChanged'
        QtMocHelpers::SignalData<void()>(30, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'rotationChanged'
        QtMocHelpers::SignalData<void()>(31, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentModesChanged'
        QtMocHelpers::SignalData<void()>(32, 4, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'keyboard'
        QtMocHelpers::PropertyData<bool>(33, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'alphaNumericKeyboard'
        QtMocHelpers::PropertyData<bool>(34, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'pointer'
        QtMocHelpers::PropertyData<bool>(35, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'touchpad'
        QtMocHelpers::PropertyData<bool>(36, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'touch'
        QtMocHelpers::PropertyData<bool>(37, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'tabletTool'
        QtMocHelpers::PropertyData<bool>(38, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'tabletPad'
        QtMocHelpers::PropertyData<bool>(39, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'gestureSupport'
        QtMocHelpers::PropertyData<bool>(40, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'name'
        QtMocHelpers::PropertyData<QString>(41, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'sysName'
        QtMocHelpers::PropertyData<QString>(42, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'outputName'
        QtMocHelpers::PropertyData<QString>(43, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'size'
        QtMocHelpers::PropertyData<QSizeF>(44, 0x80000000 | 45, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'product'
        QtMocHelpers::PropertyData<quint32>(46, QMetaType::UInt, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'vendor'
        QtMocHelpers::PropertyData<quint32>(47, QMetaType::UInt, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'supportsDisableEvents'
        QtMocHelpers::PropertyData<bool>(48, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'enabled'
        QtMocHelpers::PropertyData<bool>(49, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'enabledByDefault'
        QtMocHelpers::PropertyData<bool>(50, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'supportedButtons'
        QtMocHelpers::PropertyData<int>(51, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'supportsCalibrationMatrix'
        QtMocHelpers::PropertyData<bool>(52, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultCalibrationMatrix'
        QtMocHelpers::PropertyData<QString>(53, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'calibrationMatrix'
        QtMocHelpers::PropertyData<QString>(54, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'orientation'
        QtMocHelpers::PropertyData<Qt::ScreenOrientation>(55, 0x80000000 | 56, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 2),
        // property 'orientationDBus'
        QtMocHelpers::PropertyData<int>(57, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'supportsLeftHanded'
        QtMocHelpers::PropertyData<bool>(58, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'leftHandedEnabledByDefault'
        QtMocHelpers::PropertyData<bool>(59, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'leftHanded'
        QtMocHelpers::PropertyData<bool>(60, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'supportsDisableEventsOnExternalMouse'
        QtMocHelpers::PropertyData<bool>(61, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'disableEventsOnExternalMouseEnabledByDefault'
        QtMocHelpers::PropertyData<bool>(62, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'disableEventsOnExternalMouse'
        QtMocHelpers::PropertyData<bool>(63, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
        // property 'supportsDisableWhileTyping'
        QtMocHelpers::PropertyData<bool>(64, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'disableWhileTypingEnabledByDefault'
        QtMocHelpers::PropertyData<bool>(65, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'disableWhileTyping'
        QtMocHelpers::PropertyData<bool>(66, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'supportsPointerAcceleration'
        QtMocHelpers::PropertyData<bool>(67, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultPointerAcceleration'
        QtMocHelpers::PropertyData<qreal>(68, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'pointerAcceleration'
        QtMocHelpers::PropertyData<qreal>(69, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'supportsPointerAccelerationProfileFlat'
        QtMocHelpers::PropertyData<bool>(70, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultPointerAccelerationProfileFlat'
        QtMocHelpers::PropertyData<bool>(71, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'pointerAccelerationProfileFlat'
        QtMocHelpers::PropertyData<bool>(72, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'supportsPointerAccelerationProfileAdaptive'
        QtMocHelpers::PropertyData<bool>(73, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultPointerAccelerationProfileAdaptive'
        QtMocHelpers::PropertyData<bool>(74, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'pointerAccelerationProfileAdaptive'
        QtMocHelpers::PropertyData<bool>(75, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'tapFingerCount'
        QtMocHelpers::PropertyData<int>(76, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'tapToClickEnabledByDefault'
        QtMocHelpers::PropertyData<bool>(77, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'tapToClick'
        QtMocHelpers::PropertyData<bool>(78, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
        // property 'supportsLmrTapButtonMap'
        QtMocHelpers::PropertyData<bool>(79, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'lmrTapButtonMapEnabledByDefault'
        QtMocHelpers::PropertyData<bool>(80, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'lmrTapButtonMap'
        QtMocHelpers::PropertyData<bool>(81, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'tapAndDragEnabledByDefault'
        QtMocHelpers::PropertyData<bool>(82, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'tapAndDrag'
        QtMocHelpers::PropertyData<bool>(83, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 11),
        // property 'tapDragLockEnabledByDefault'
        QtMocHelpers::PropertyData<bool>(84, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'tapDragLock'
        QtMocHelpers::PropertyData<bool>(85, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 12),
        // property 'supportsMiddleEmulation'
        QtMocHelpers::PropertyData<bool>(86, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'middleEmulationEnabledByDefault'
        QtMocHelpers::PropertyData<bool>(87, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'middleEmulation'
        QtMocHelpers::PropertyData<bool>(88, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 13),
        // property 'supportsNaturalScroll'
        QtMocHelpers::PropertyData<bool>(89, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'naturalScrollEnabledByDefault'
        QtMocHelpers::PropertyData<bool>(90, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'naturalScroll'
        QtMocHelpers::PropertyData<bool>(91, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 14),
        // property 'supportsScrollTwoFinger'
        QtMocHelpers::PropertyData<bool>(92, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'scrollTwoFingerEnabledByDefault'
        QtMocHelpers::PropertyData<bool>(93, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'scrollTwoFinger'
        QtMocHelpers::PropertyData<bool>(94, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 15),
        // property 'supportsScrollEdge'
        QtMocHelpers::PropertyData<bool>(95, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'scrollEdgeEnabledByDefault'
        QtMocHelpers::PropertyData<bool>(96, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'scrollEdge'
        QtMocHelpers::PropertyData<bool>(97, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 15),
        // property 'supportsScrollOnButtonDown'
        QtMocHelpers::PropertyData<bool>(98, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'scrollOnButtonDownEnabledByDefault'
        QtMocHelpers::PropertyData<bool>(99, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultScrollButton'
        QtMocHelpers::PropertyData<quint32>(100, QMetaType::UInt, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'scrollOnButtonDown'
        QtMocHelpers::PropertyData<bool>(101, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 15),
        // property 'scrollButton'
        QtMocHelpers::PropertyData<quint32>(102, QMetaType::UInt, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 16),
        // property 'scrollFactor'
        QtMocHelpers::PropertyData<qreal>(103, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 17),
        // property 'switchDevice'
        QtMocHelpers::PropertyData<bool>(104, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'lidSwitch'
        QtMocHelpers::PropertyData<bool>(105, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'tabletModeSwitch'
        QtMocHelpers::PropertyData<bool>(106, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'supportsClickMethodAreas'
        QtMocHelpers::PropertyData<bool>(107, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultClickMethodAreas'
        QtMocHelpers::PropertyData<bool>(108, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'clickMethodAreas'
        QtMocHelpers::PropertyData<bool>(109, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 18),
        // property 'supportsClickMethodClickfinger'
        QtMocHelpers::PropertyData<bool>(110, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultClickMethodClickfinger'
        QtMocHelpers::PropertyData<bool>(111, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'clickMethodClickfinger'
        QtMocHelpers::PropertyData<bool>(112, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 18),
        // property 'supportsOutputArea'
        QtMocHelpers::PropertyData<bool>(113, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultOutputArea'
        QtMocHelpers::PropertyData<QRectF>(114, 0x80000000 | 115, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'outputArea'
        QtMocHelpers::PropertyData<QRectF>(116, 0x80000000 | 115, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 19),
        // property 'defaultMapToWorkspace'
        QtMocHelpers::PropertyData<bool>(117, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'mapToWorkspace'
        QtMocHelpers::PropertyData<bool>(118, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 20),
        // property 'deviceGroupId'
        QtMocHelpers::PropertyData<QString>(119, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultPressureCurve'
        QtMocHelpers::PropertyData<QString>(120, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'pressureCurve'
        QtMocHelpers::PropertyData<QString>(121, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 21),
        // property 'tabletPadButtonCount'
        QtMocHelpers::PropertyData<quint32>(122, QMetaType::UInt, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'tabletPadDialCount'
        QtMocHelpers::PropertyData<quint32>(123, QMetaType::UInt, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'tabletPadRingCount'
        QtMocHelpers::PropertyData<quint32>(124, QMetaType::UInt, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'tabletPadStripCount'
        QtMocHelpers::PropertyData<quint32>(125, QMetaType::UInt, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'supportsInputArea'
        QtMocHelpers::PropertyData<bool>(126, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultInputArea'
        QtMocHelpers::PropertyData<QRectF>(127, 0x80000000 | 115, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'inputArea'
        QtMocHelpers::PropertyData<QRectF>(128, 0x80000000 | 115, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 25),
        // property 'numModes'
        QtMocHelpers::PropertyData<QList<uint>>(129, 0x80000000 | 130, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'currentModes'
        QtMocHelpers::PropertyData<QList<uint>>(131, 0x80000000 | 130, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 28),
        // property 'supportsPressureRange'
        QtMocHelpers::PropertyData<bool>(132, QMetaType::Bool, QMC::DefaultPropertyFlags, 22),
        // property 'pressureRangeMin'
        QtMocHelpers::PropertyData<double>(133, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 23),
        // property 'pressureRangeMax'
        QtMocHelpers::PropertyData<double>(134, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 24),
        // property 'defaultPressureRangeMin'
        QtMocHelpers::PropertyData<double>(135, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'defaultPressureRangeMax'
        QtMocHelpers::PropertyData<double>(136, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'tabletToolIsRelative'
        QtMocHelpers::PropertyData<bool>(137, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable, 26),
        // property 'supportsRotation'
        QtMocHelpers::PropertyData<bool>(138, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'rotation'
        QtMocHelpers::PropertyData<uint32_t>(139, 0x80000000 | 140, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 27),
        // property 'defaultRotation'
        QtMocHelpers::PropertyData<uint32_t>(141, 0x80000000 | 140, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'isVirtual'
        QtMocHelpers::PropertyData<bool>(142, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<Device, qt_meta_tag_ZN4KWin8LibInput6DeviceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject KWin::LibInput::Device::staticMetaObject = { {
    QMetaObject::SuperData::link<InputDevice::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin8LibInput6DeviceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin8LibInput6DeviceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin8LibInput6DeviceE_t>.metaTypes,
    nullptr
} };

void KWin::LibInput::Device::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Device *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->tapButtonMapChanged(); break;
        case 1: _t->calibrationMatrixChanged(); break;
        case 2: _t->orientationChanged(); break;
        case 3: _t->outputNameChanged(); break;
        case 4: _t->leftHandedChanged(); break;
        case 5: _t->disableWhileTypingChanged(); break;
        case 6: _t->pointerAccelerationChanged(); break;
        case 7: _t->pointerAccelerationProfileChanged(); break;
        case 8: _t->enabledChanged(); break;
        case 9: _t->disableEventsOnExternalMouseChanged(); break;
        case 10: _t->tapToClickChanged(); break;
        case 11: _t->tapAndDragChanged(); break;
        case 12: _t->tapDragLockChanged(); break;
        case 13: _t->middleEmulationChanged(); break;
        case 14: _t->naturalScrollChanged(); break;
        case 15: _t->scrollMethodChanged(); break;
        case 16: _t->scrollButtonChanged(); break;
        case 17: _t->scrollFactorChanged(); break;
        case 18: _t->clickMethodChanged(); break;
        case 19: _t->outputAreaChanged(); break;
        case 20: _t->mapToWorkspaceChanged(); break;
        case 21: _t->pressureCurveChanged(); break;
        case 22: _t->supportsPressureRangeChanged(); break;
        case 23: _t->pressureRangeMinChanged(); break;
        case 24: _t->pressureRangeMaxChanged(); break;
        case 25: _t->inputAreaChanged(); break;
        case 26: _t->tabletToolRelativeChanged(); break;
        case 27: _t->rotationChanged(); break;
        case 28: _t->currentModesChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::tapButtonMapChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::calibrationMatrixChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::orientationChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::outputNameChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::leftHandedChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::disableWhileTypingChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::pointerAccelerationChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::pointerAccelerationProfileChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::enabledChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::disableEventsOnExternalMouseChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::tapToClickChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::tapAndDragChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::tapDragLockChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::middleEmulationChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::naturalScrollChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::scrollMethodChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::scrollButtonChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::scrollFactorChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::clickMethodChanged, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::outputAreaChanged, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::mapToWorkspaceChanged, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::pressureCurveChanged, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::supportsPressureRangeChanged, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::pressureRangeMinChanged, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::pressureRangeMaxChanged, 24))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::inputAreaChanged, 25))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::tabletToolRelativeChanged, 26))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::rotationChanged, 27))
            return;
        if (QtMocHelpers::indexOfMethod<void (Device::*)()>(_a, &Device::currentModesChanged, 28))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 94:
        case 93:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<uint> >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isKeyboard(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isAlphaNumericKeyboard(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isPointer(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isTouchpad(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isTouch(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->isTabletTool(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->isTabletPad(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->supportsGesture(); break;
        case 8: *reinterpret_cast<QString*>(_v) = _t->name(); break;
        case 9: *reinterpret_cast<QString*>(_v) = _t->sysName(); break;
        case 10: *reinterpret_cast<QString*>(_v) = _t->outputName(); break;
        case 11: *reinterpret_cast<QSizeF*>(_v) = _t->size(); break;
        case 12: *reinterpret_cast<quint32*>(_v) = _t->product(); break;
        case 13: *reinterpret_cast<quint32*>(_v) = _t->vendor(); break;
        case 14: *reinterpret_cast<bool*>(_v) = _t->supportsDisableEvents(); break;
        case 15: *reinterpret_cast<bool*>(_v) = _t->isEnabled(); break;
        case 16: *reinterpret_cast<bool*>(_v) = _t->isEnabledByDefault(); break;
        case 17: *reinterpret_cast<int*>(_v) = _t->supportedButtons(); break;
        case 18: *reinterpret_cast<bool*>(_v) = _t->supportsCalibrationMatrix(); break;
        case 19: *reinterpret_cast<QString*>(_v) = _t->defaultCalibrationMatrix(); break;
        case 20: *reinterpret_cast<QString*>(_v) = _t->serializedCalibrationMatrix(); break;
        case 21: *reinterpret_cast<Qt::ScreenOrientation*>(_v) = _t->orientation(); break;
        case 22: *reinterpret_cast<int*>(_v) = _t->orientation(); break;
        case 23: *reinterpret_cast<bool*>(_v) = _t->supportsLeftHanded(); break;
        case 24: *reinterpret_cast<bool*>(_v) = _t->leftHandedEnabledByDefault(); break;
        case 25: *reinterpret_cast<bool*>(_v) = _t->isLeftHanded(); break;
        case 26: *reinterpret_cast<bool*>(_v) = _t->supportsDisableEventsOnExternalMouse(); break;
        case 27: *reinterpret_cast<bool*>(_v) = _t->disableEventsOnExternalMouseEnabledByDefault(); break;
        case 28: *reinterpret_cast<bool*>(_v) = _t->isDisableEventsOnExternalMouse(); break;
        case 29: *reinterpret_cast<bool*>(_v) = _t->supportsDisableWhileTyping(); break;
        case 30: *reinterpret_cast<bool*>(_v) = _t->disableWhileTypingEnabledByDefault(); break;
        case 31: *reinterpret_cast<bool*>(_v) = _t->isDisableWhileTyping(); break;
        case 32: *reinterpret_cast<bool*>(_v) = _t->supportsPointerAcceleration(); break;
        case 33: *reinterpret_cast<qreal*>(_v) = _t->defaultPointerAcceleration(); break;
        case 34: *reinterpret_cast<qreal*>(_v) = _t->pointerAcceleration(); break;
        case 35: *reinterpret_cast<bool*>(_v) = _t->supportsPointerAccelerationProfileFlat(); break;
        case 36: *reinterpret_cast<bool*>(_v) = _t->defaultPointerAccelerationProfileFlat(); break;
        case 37: *reinterpret_cast<bool*>(_v) = _t->pointerAccelerationProfileFlat(); break;
        case 38: *reinterpret_cast<bool*>(_v) = _t->supportsPointerAccelerationProfileAdaptive(); break;
        case 39: *reinterpret_cast<bool*>(_v) = _t->defaultPointerAccelerationProfileAdaptive(); break;
        case 40: *reinterpret_cast<bool*>(_v) = _t->pointerAccelerationProfileAdaptive(); break;
        case 41: *reinterpret_cast<int*>(_v) = _t->tapFingerCount(); break;
        case 42: *reinterpret_cast<bool*>(_v) = _t->tapToClickEnabledByDefault(); break;
        case 43: *reinterpret_cast<bool*>(_v) = _t->isTapToClick(); break;
        case 44: *reinterpret_cast<bool*>(_v) = _t->supportsLmrTapButtonMap(); break;
        case 45: *reinterpret_cast<bool*>(_v) = _t->lmrTapButtonMapEnabledByDefault(); break;
        case 46: *reinterpret_cast<bool*>(_v) = _t->lmrTapButtonMap(); break;
        case 47: *reinterpret_cast<bool*>(_v) = _t->tapAndDragEnabledByDefault(); break;
        case 48: *reinterpret_cast<bool*>(_v) = _t->isTapAndDrag(); break;
        case 49: *reinterpret_cast<bool*>(_v) = _t->tapDragLockEnabledByDefault(); break;
        case 50: *reinterpret_cast<bool*>(_v) = _t->isTapDragLock(); break;
        case 51: *reinterpret_cast<bool*>(_v) = _t->supportsMiddleEmulation(); break;
        case 52: *reinterpret_cast<bool*>(_v) = _t->middleEmulationEnabledByDefault(); break;
        case 53: *reinterpret_cast<bool*>(_v) = _t->isMiddleEmulation(); break;
        case 54: *reinterpret_cast<bool*>(_v) = _t->supportsNaturalScroll(); break;
        case 55: *reinterpret_cast<bool*>(_v) = _t->naturalScrollEnabledByDefault(); break;
        case 56: *reinterpret_cast<bool*>(_v) = _t->isNaturalScroll(); break;
        case 57: *reinterpret_cast<bool*>(_v) = _t->supportsScrollTwoFinger(); break;
        case 58: *reinterpret_cast<bool*>(_v) = _t->scrollTwoFingerEnabledByDefault(); break;
        case 59: *reinterpret_cast<bool*>(_v) = _t->isScrollTwoFinger(); break;
        case 60: *reinterpret_cast<bool*>(_v) = _t->supportsScrollEdge(); break;
        case 61: *reinterpret_cast<bool*>(_v) = _t->scrollEdgeEnabledByDefault(); break;
        case 62: *reinterpret_cast<bool*>(_v) = _t->isScrollEdge(); break;
        case 63: *reinterpret_cast<bool*>(_v) = _t->supportsScrollOnButtonDown(); break;
        case 64: *reinterpret_cast<bool*>(_v) = _t->scrollOnButtonDownEnabledByDefault(); break;
        case 65: *reinterpret_cast<quint32*>(_v) = _t->defaultScrollButton(); break;
        case 66: *reinterpret_cast<bool*>(_v) = _t->isScrollOnButtonDown(); break;
        case 67: *reinterpret_cast<quint32*>(_v) = _t->scrollButton(); break;
        case 68: *reinterpret_cast<qreal*>(_v) = _t->scrollFactor(); break;
        case 69: *reinterpret_cast<bool*>(_v) = _t->isSwitch(); break;
        case 70: *reinterpret_cast<bool*>(_v) = _t->isLidSwitch(); break;
        case 71: *reinterpret_cast<bool*>(_v) = _t->isTabletModeSwitch(); break;
        case 72: *reinterpret_cast<bool*>(_v) = _t->supportsClickMethodAreas(); break;
        case 73: *reinterpret_cast<bool*>(_v) = _t->defaultClickMethodAreas(); break;
        case 74: *reinterpret_cast<bool*>(_v) = _t->isClickMethodAreas(); break;
        case 75: *reinterpret_cast<bool*>(_v) = _t->supportsClickMethodClickfinger(); break;
        case 76: *reinterpret_cast<bool*>(_v) = _t->defaultClickMethodClickfinger(); break;
        case 77: *reinterpret_cast<bool*>(_v) = _t->isClickMethodClickfinger(); break;
        case 78: *reinterpret_cast<bool*>(_v) = _t->supportsOutputArea(); break;
        case 79: *reinterpret_cast<QRectF*>(_v) = _t->defaultOutputArea(); break;
        case 80: *reinterpret_cast<QRectF*>(_v) = _t->outputArea(); break;
        case 81: *reinterpret_cast<bool*>(_v) = _t->defaultMapToWorkspace(); break;
        case 82: *reinterpret_cast<bool*>(_v) = _t->isMapToWorkspace(); break;
        case 83: *reinterpret_cast<QString*>(_v) = _t->deviceGroupId(); break;
        case 84: *reinterpret_cast<QString*>(_v) = _t->defaultPressureCurve(); break;
        case 85: *reinterpret_cast<QString*>(_v) = _t->serializedPressureCurve(); break;
        case 86: *reinterpret_cast<quint32*>(_v) = _t->tabletPadButtonCount(); break;
        case 87: *reinterpret_cast<quint32*>(_v) = _t->tabletPadDialCount(); break;
        case 88: *reinterpret_cast<quint32*>(_v) = _t->tabletPadRingCount(); break;
        case 89: *reinterpret_cast<quint32*>(_v) = _t->tabletPadStripCount(); break;
        case 90: *reinterpret_cast<bool*>(_v) = _t->supportsInputArea(); break;
        case 91: *reinterpret_cast<QRectF*>(_v) = _t->defaultInputArea(); break;
        case 92: *reinterpret_cast<QRectF*>(_v) = _t->inputArea(); break;
        case 93: *reinterpret_cast<QList<uint>*>(_v) = _t->numModes(); break;
        case 94: *reinterpret_cast<QList<uint>*>(_v) = _t->currentModes(); break;
        case 95: *reinterpret_cast<bool*>(_v) = _t->supportsPressureRange(); break;
        case 96: *reinterpret_cast<double*>(_v) = _t->pressureRangeMin(); break;
        case 97: *reinterpret_cast<double*>(_v) = _t->pressureRangeMax(); break;
        case 98: *reinterpret_cast<double*>(_v) = _t->defaultPressureRangeMin(); break;
        case 99: *reinterpret_cast<double*>(_v) = _t->defaultPressureRangeMax(); break;
        case 100: *reinterpret_cast<bool*>(_v) = _t->tabletToolIsRelative(); break;
        case 101: *reinterpret_cast<bool*>(_v) = _t->supportsRotation(); break;
        case 102: *reinterpret_cast<uint32_t*>(_v) = _t->rotation(); break;
        case 103: *reinterpret_cast<uint32_t*>(_v) = _t->defaultRotation(); break;
        case 104: *reinterpret_cast<bool*>(_v) = _t->isVirtual(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 10: _t->setOutputName(*reinterpret_cast<QString*>(_v)); break;
        case 15: _t->setEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 20: _t->setCalibrationMatrix(*reinterpret_cast<QString*>(_v)); break;
        case 21: _t->setOrientation(*reinterpret_cast<Qt::ScreenOrientation*>(_v)); break;
        case 22: _t->setOrientationDBus(*reinterpret_cast<int*>(_v)); break;
        case 25: _t->setLeftHanded(*reinterpret_cast<bool*>(_v)); break;
        case 28: _t->setDisableEventsOnExternalMouse(*reinterpret_cast<bool*>(_v)); break;
        case 31: _t->setDisableWhileTyping(*reinterpret_cast<bool*>(_v)); break;
        case 34: _t->setPointerAcceleration(*reinterpret_cast<qreal*>(_v)); break;
        case 37: _t->setPointerAccelerationProfileFlat(*reinterpret_cast<bool*>(_v)); break;
        case 40: _t->setPointerAccelerationProfileAdaptive(*reinterpret_cast<bool*>(_v)); break;
        case 43: _t->setTapToClick(*reinterpret_cast<bool*>(_v)); break;
        case 46: _t->setLmrTapButtonMap(*reinterpret_cast<bool*>(_v)); break;
        case 48: _t->setTapAndDrag(*reinterpret_cast<bool*>(_v)); break;
        case 50: _t->setTapDragLock(*reinterpret_cast<bool*>(_v)); break;
        case 53: _t->setMiddleEmulation(*reinterpret_cast<bool*>(_v)); break;
        case 56: _t->setNaturalScroll(*reinterpret_cast<bool*>(_v)); break;
        case 59: _t->setScrollTwoFinger(*reinterpret_cast<bool*>(_v)); break;
        case 62: _t->setScrollEdge(*reinterpret_cast<bool*>(_v)); break;
        case 66: _t->setScrollOnButtonDown(*reinterpret_cast<bool*>(_v)); break;
        case 67: _t->setScrollButton(*reinterpret_cast<quint32*>(_v)); break;
        case 68: _t->setScrollFactor(*reinterpret_cast<qreal*>(_v)); break;
        case 74: _t->setClickMethodAreas(*reinterpret_cast<bool*>(_v)); break;
        case 77: _t->setClickMethodClickfinger(*reinterpret_cast<bool*>(_v)); break;
        case 80: _t->setOutputArea(*reinterpret_cast<QRectF*>(_v)); break;
        case 82: _t->setMapToWorkspace(*reinterpret_cast<bool*>(_v)); break;
        case 85: _t->setPressureCurve(*reinterpret_cast<QString*>(_v)); break;
        case 92: _t->setInputArea(*reinterpret_cast<QRectF*>(_v)); break;
        case 96: _t->setPressureRangeMin(*reinterpret_cast<double*>(_v)); break;
        case 97: _t->setPressureRangeMax(*reinterpret_cast<double*>(_v)); break;
        case 100: _t->setTabletToolRelative(*reinterpret_cast<bool*>(_v)); break;
        case 102: _t->setRotation(*reinterpret_cast<uint32_t*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::LibInput::Device::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::LibInput::Device::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin8LibInput6DeviceE_t>.strings))
        return static_cast<void*>(this);
    return InputDevice::qt_metacast(_clname);
}

int KWin::LibInput::Device::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InputDevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 29;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 105;
    }
    return _id;
}

// SIGNAL 0
void KWin::LibInput::Device::tapButtonMapChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::LibInput::Device::calibrationMatrixChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::LibInput::Device::orientationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::LibInput::Device::outputNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWin::LibInput::Device::leftHandedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KWin::LibInput::Device::disableWhileTypingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KWin::LibInput::Device::pointerAccelerationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void KWin::LibInput::Device::pointerAccelerationProfileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void KWin::LibInput::Device::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void KWin::LibInput::Device::disableEventsOnExternalMouseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void KWin::LibInput::Device::tapToClickChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void KWin::LibInput::Device::tapAndDragChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void KWin::LibInput::Device::tapDragLockChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void KWin::LibInput::Device::middleEmulationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void KWin::LibInput::Device::naturalScrollChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void KWin::LibInput::Device::scrollMethodChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void KWin::LibInput::Device::scrollButtonChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void KWin::LibInput::Device::scrollFactorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void KWin::LibInput::Device::clickMethodChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void KWin::LibInput::Device::outputAreaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void KWin::LibInput::Device::mapToWorkspaceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void KWin::LibInput::Device::pressureCurveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void KWin::LibInput::Device::supportsPressureRangeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void KWin::LibInput::Device::pressureRangeMinChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void KWin::LibInput::Device::pressureRangeMaxChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void KWin::LibInput::Device::inputAreaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void KWin::LibInput::Device::tabletToolRelativeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void KWin::LibInput::Device::rotationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void KWin::LibInput::Device::currentModesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}
QT_WARNING_POP
