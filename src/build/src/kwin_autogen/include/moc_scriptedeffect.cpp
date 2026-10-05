/****************************************************************************
** Meta object code from reading C++ file 'scriptedeffect.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/scripting/scriptedeffect.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scriptedeffect.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin14ScriptedEffectE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::ScriptedEffect::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin14ScriptedEffectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::ScriptedEffect",
        "configChanged",
        "",
        "animationEnded",
        "KWin::EffectWindow*",
        "w",
        "animationId",
        "isActiveFullScreenEffectChanged",
        "borderActivated",
        "ElectricBorder",
        "border",
        "isGrabbed",
        "DataRole",
        "grabRole",
        "grab",
        "force",
        "ungrab",
        "readConfig",
        "QJSValue",
        "key",
        "defaultValue",
        "displayWidth",
        "displayHeight",
        "animationTime",
        "defaultTime",
        "registerShortcut",
        "objectName",
        "text",
        "keySequence",
        "callback",
        "registerScreenEdge",
        "edge",
        "registerRealtimeScreenEdge",
        "unregisterScreenEdge",
        "registerTouchScreenEdge",
        "unregisterTouchScreenEdge",
        "animate",
        "window",
        "Attribute",
        "attribute",
        "ms",
        "to",
        "from",
        "metaData",
        "curve",
        "delay",
        "fullScreen",
        "keepAlive",
        "shaderId",
        "object",
        "set",
        "retarget",
        "newTarget",
        "newRemainingTime",
        "QList<quint64>",
        "animationIds",
        "freezeInTime",
        "frozenTime",
        "redirect",
        "Direction",
        "direction",
        "TerminationFlags",
        "terminationFlags",
        "complete",
        "cancel",
        "touchEdgesForAction",
        "QList<int>",
        "action",
        "addFragmentShader",
        "ShaderTrait",
        "traits",
        "fragmentShaderFile",
        "setUniform",
        "name",
        "value",
        "pluginId",
        "isActiveFullScreenEffect",
        "WindowAddedGrabRole",
        "WindowClosedGrabRole",
        "WindowMinimizedGrabRole",
        "WindowUnminimizedGrabRole",
        "WindowForceBlurRole",
        "WindowForceBackgroundContrastRole",
        "EasingCurve",
        "GaussianCurve",
        "MapTexture",
        "UniformColor",
        "Modulate",
        "AdjustSaturation"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'configChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'animationEnded'
        QtMocHelpers::SignalData<void(KWin::EffectWindow *, quint64)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { QMetaType::ULongLong, 6 },
        }}),
        // Signal 'isActiveFullScreenEffectChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'borderActivated'
        QtMocHelpers::SlotData<bool(ElectricBorder)>(8, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Method 'isGrabbed'
        QtMocHelpers::MethodData<bool(KWin::EffectWindow *, enum DataRole)>(11, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 12, 13 },
        }}),
        // Method 'grab'
        QtMocHelpers::MethodData<bool(KWin::EffectWindow *, enum DataRole, bool)>(14, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 12, 13 }, { QMetaType::Bool, 15 },
        }}),
        // Method 'grab'
        QtMocHelpers::MethodData<bool(KWin::EffectWindow *, enum DataRole)>(14, 2, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::Bool, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 12, 13 },
        }}),
        // Method 'ungrab'
        QtMocHelpers::MethodData<bool(KWin::EffectWindow *, enum DataRole)>(16, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 12, 13 },
        }}),
        // Method 'readConfig'
        QtMocHelpers::MethodData<QJSValue(const QString &, const QJSValue &)>(17, 2, QMC::AccessPublic | QMC::MethodScriptable, 0x80000000 | 18, {{
            { QMetaType::QString, 19 }, { 0x80000000 | 18, 20 },
        }}),
        // Method 'readConfig'
        QtMocHelpers::MethodData<QJSValue(const QString &)>(17, 2, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, 0x80000000 | 18, {{
            { QMetaType::QString, 19 },
        }}),
        // Method 'displayWidth'
        QtMocHelpers::MethodData<int() const>(21, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Int),
        // Method 'displayHeight'
        QtMocHelpers::MethodData<int() const>(22, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Int),
        // Method 'animationTime'
        QtMocHelpers::MethodData<int(int) const>(23, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Int, {{
            { QMetaType::Int, 24 },
        }}),
        // Method 'registerShortcut'
        QtMocHelpers::MethodData<void(const QString &, const QString &, const QString &, const QJSValue &)>(25, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::QString, 26 }, { QMetaType::QString, 27 }, { QMetaType::QString, 28 }, { 0x80000000 | 18, 29 },
        }}),
        // Method 'registerScreenEdge'
        QtMocHelpers::MethodData<bool(int, const QJSValue &)>(30, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { QMetaType::Int, 31 }, { 0x80000000 | 18, 29 },
        }}),
        // Method 'registerRealtimeScreenEdge'
        QtMocHelpers::MethodData<bool(int, const QJSValue &)>(32, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { QMetaType::Int, 31 }, { 0x80000000 | 18, 29 },
        }}),
        // Method 'unregisterScreenEdge'
        QtMocHelpers::MethodData<bool(int)>(33, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { QMetaType::Int, 31 },
        }}),
        // Method 'registerTouchScreenEdge'
        QtMocHelpers::MethodData<bool(int, const QJSValue &)>(34, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { QMetaType::Int, 31 }, { 0x80000000 | 18, 29 },
        }}),
        // Method 'unregisterTouchScreenEdge'
        QtMocHelpers::MethodData<bool(int)>(35, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { QMetaType::Int, 31 },
        }}),
        // Method 'animate'
        QtMocHelpers::MethodData<quint64(KWin::EffectWindow *, Attribute, int, const QJSValue &, const QJSValue &, uint, int, int, bool, bool, uint)>(36, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::ULongLong, {{
            { 0x80000000 | 4, 37 }, { 0x80000000 | 38, 39 }, { QMetaType::Int, 40 }, { 0x80000000 | 18, 41 },
            { 0x80000000 | 18, 42 }, { QMetaType::UInt, 43 }, { QMetaType::Int, 44 }, { QMetaType::Int, 45 },
            { QMetaType::Bool, 46 }, { QMetaType::Bool, 47 }, { QMetaType::UInt, 48 },
        }}),
        // Method 'animate'
        QtMocHelpers::MethodData<quint64(KWin::EffectWindow *, Attribute, int, const QJSValue &, const QJSValue &, uint, int, int, bool, bool)>(36, 2, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::ULongLong, {{
            { 0x80000000 | 4, 37 }, { 0x80000000 | 38, 39 }, { QMetaType::Int, 40 }, { 0x80000000 | 18, 41 },
            { 0x80000000 | 18, 42 }, { QMetaType::UInt, 43 }, { QMetaType::Int, 44 }, { QMetaType::Int, 45 },
            { QMetaType::Bool, 46 }, { QMetaType::Bool, 47 },
        }}),
        // Method 'animate'
        QtMocHelpers::MethodData<quint64(KWin::EffectWindow *, Attribute, int, const QJSValue &, const QJSValue &, uint, int, int, bool)>(36, 2, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::ULongLong, {{
            { 0x80000000 | 4, 37 }, { 0x80000000 | 38, 39 }, { QMetaType::Int, 40 }, { 0x80000000 | 18, 41 },
            { 0x80000000 | 18, 42 }, { QMetaType::UInt, 43 }, { QMetaType::Int, 44 }, { QMetaType::Int, 45 },
            { QMetaType::Bool, 46 },
        }}),
        // Method 'animate'
        QtMocHelpers::MethodData<quint64(KWin::EffectWindow *, Attribute, int, const QJSValue &, const QJSValue &, uint, int, int)>(36, 2, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::ULongLong, {{
            { 0x80000000 | 4, 37 }, { 0x80000000 | 38, 39 }, { QMetaType::Int, 40 }, { 0x80000000 | 18, 41 },
            { 0x80000000 | 18, 42 }, { QMetaType::UInt, 43 }, { QMetaType::Int, 44 }, { QMetaType::Int, 45 },
        }}),
        // Method 'animate'
        QtMocHelpers::MethodData<quint64(KWin::EffectWindow *, Attribute, int, const QJSValue &, const QJSValue &, uint, int)>(36, 2, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::ULongLong, {{
            { 0x80000000 | 4, 37 }, { 0x80000000 | 38, 39 }, { QMetaType::Int, 40 }, { 0x80000000 | 18, 41 },
            { 0x80000000 | 18, 42 }, { QMetaType::UInt, 43 }, { QMetaType::Int, 44 },
        }}),
        // Method 'animate'
        QtMocHelpers::MethodData<quint64(KWin::EffectWindow *, Attribute, int, const QJSValue &, const QJSValue &, uint)>(36, 2, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::ULongLong, {{
            { 0x80000000 | 4, 37 }, { 0x80000000 | 38, 39 }, { QMetaType::Int, 40 }, { 0x80000000 | 18, 41 },
            { 0x80000000 | 18, 42 }, { QMetaType::UInt, 43 },
        }}),
        // Method 'animate'
        QtMocHelpers::MethodData<quint64(KWin::EffectWindow *, Attribute, int, const QJSValue &, const QJSValue &)>(36, 2, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::ULongLong, {{
            { 0x80000000 | 4, 37 }, { 0x80000000 | 38, 39 }, { QMetaType::Int, 40 }, { 0x80000000 | 18, 41 },
            { 0x80000000 | 18, 42 },
        }}),
        // Method 'animate'
        QtMocHelpers::MethodData<quint64(KWin::EffectWindow *, Attribute, int, const QJSValue &)>(36, 2, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::ULongLong, {{
            { 0x80000000 | 4, 37 }, { 0x80000000 | 38, 39 }, { QMetaType::Int, 40 }, { 0x80000000 | 18, 41 },
        }}),
        // Method 'animate'
        QtMocHelpers::MethodData<QJSValue(const QJSValue &)>(36, 2, QMC::AccessPublic | QMC::MethodScriptable, 0x80000000 | 18, {{
            { 0x80000000 | 18, 49 },
        }}),
        // Method 'set'
        QtMocHelpers::MethodData<quint64(KWin::EffectWindow *, Attribute, int, const QJSValue &, const QJSValue &, uint, int, int, bool, bool, uint)>(50, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::ULongLong, {{
            { 0x80000000 | 4, 37 }, { 0x80000000 | 38, 39 }, { QMetaType::Int, 40 }, { 0x80000000 | 18, 41 },
            { 0x80000000 | 18, 42 }, { QMetaType::UInt, 43 }, { QMetaType::Int, 44 }, { QMetaType::Int, 45 },
            { QMetaType::Bool, 46 }, { QMetaType::Bool, 47 }, { QMetaType::UInt, 48 },
        }}),
        // Method 'set'
        QtMocHelpers::MethodData<quint64(KWin::EffectWindow *, Attribute, int, const QJSValue &, const QJSValue &, uint, int, int, bool, bool)>(50, 2, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::ULongLong, {{
            { 0x80000000 | 4, 37 }, { 0x80000000 | 38, 39 }, { QMetaType::Int, 40 }, { 0x80000000 | 18, 41 },
            { 0x80000000 | 18, 42 }, { QMetaType::UInt, 43 }, { QMetaType::Int, 44 }, { QMetaType::Int, 45 },
            { QMetaType::Bool, 46 }, { QMetaType::Bool, 47 },
        }}),
        // Method 'set'
        QtMocHelpers::MethodData<quint64(KWin::EffectWindow *, Attribute, int, const QJSValue &, const QJSValue &, uint, int, int, bool)>(50, 2, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::ULongLong, {{
            { 0x80000000 | 4, 37 }, { 0x80000000 | 38, 39 }, { QMetaType::Int, 40 }, { 0x80000000 | 18, 41 },
            { 0x80000000 | 18, 42 }, { QMetaType::UInt, 43 }, { QMetaType::Int, 44 }, { QMetaType::Int, 45 },
            { QMetaType::Bool, 46 },
        }}),
        // Method 'set'
        QtMocHelpers::MethodData<quint64(KWin::EffectWindow *, Attribute, int, const QJSValue &, const QJSValue &, uint, int, int)>(50, 2, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::ULongLong, {{
            { 0x80000000 | 4, 37 }, { 0x80000000 | 38, 39 }, { QMetaType::Int, 40 }, { 0x80000000 | 18, 41 },
            { 0x80000000 | 18, 42 }, { QMetaType::UInt, 43 }, { QMetaType::Int, 44 }, { QMetaType::Int, 45 },
        }}),
        // Method 'set'
        QtMocHelpers::MethodData<quint64(KWin::EffectWindow *, Attribute, int, const QJSValue &, const QJSValue &, uint, int)>(50, 2, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::ULongLong, {{
            { 0x80000000 | 4, 37 }, { 0x80000000 | 38, 39 }, { QMetaType::Int, 40 }, { 0x80000000 | 18, 41 },
            { 0x80000000 | 18, 42 }, { QMetaType::UInt, 43 }, { QMetaType::Int, 44 },
        }}),
        // Method 'set'
        QtMocHelpers::MethodData<quint64(KWin::EffectWindow *, Attribute, int, const QJSValue &, const QJSValue &, uint)>(50, 2, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::ULongLong, {{
            { 0x80000000 | 4, 37 }, { 0x80000000 | 38, 39 }, { QMetaType::Int, 40 }, { 0x80000000 | 18, 41 },
            { 0x80000000 | 18, 42 }, { QMetaType::UInt, 43 },
        }}),
        // Method 'set'
        QtMocHelpers::MethodData<quint64(KWin::EffectWindow *, Attribute, int, const QJSValue &, const QJSValue &)>(50, 2, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::ULongLong, {{
            { 0x80000000 | 4, 37 }, { 0x80000000 | 38, 39 }, { QMetaType::Int, 40 }, { 0x80000000 | 18, 41 },
            { 0x80000000 | 18, 42 },
        }}),
        // Method 'set'
        QtMocHelpers::MethodData<quint64(KWin::EffectWindow *, Attribute, int, const QJSValue &)>(50, 2, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::ULongLong, {{
            { 0x80000000 | 4, 37 }, { 0x80000000 | 38, 39 }, { QMetaType::Int, 40 }, { 0x80000000 | 18, 41 },
        }}),
        // Method 'set'
        QtMocHelpers::MethodData<QJSValue(const QJSValue &)>(50, 2, QMC::AccessPublic | QMC::MethodScriptable, 0x80000000 | 18, {{
            { 0x80000000 | 18, 49 },
        }}),
        // Method 'retarget'
        QtMocHelpers::MethodData<bool(quint64, const QJSValue &, int)>(51, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { QMetaType::ULongLong, 6 }, { 0x80000000 | 18, 52 }, { QMetaType::Int, 53 },
        }}),
        // Method 'retarget'
        QtMocHelpers::MethodData<bool(quint64, const QJSValue &)>(51, 2, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::Bool, {{
            { QMetaType::ULongLong, 6 }, { 0x80000000 | 18, 52 },
        }}),
        // Method 'retarget'
        QtMocHelpers::MethodData<bool(const QList<quint64> &, const QJSValue &, int)>(51, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { 0x80000000 | 54, 55 }, { 0x80000000 | 18, 52 }, { QMetaType::Int, 53 },
        }}),
        // Method 'retarget'
        QtMocHelpers::MethodData<bool(const QList<quint64> &, const QJSValue &)>(51, 2, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::Bool, {{
            { 0x80000000 | 54, 55 }, { 0x80000000 | 18, 52 },
        }}),
        // Method 'freezeInTime'
        QtMocHelpers::MethodData<bool(quint64, qint64)>(56, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { QMetaType::ULongLong, 6 }, { QMetaType::LongLong, 57 },
        }}),
        // Method 'freezeInTime'
        QtMocHelpers::MethodData<bool(const QList<quint64> &, qint64)>(56, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { 0x80000000 | 54, 55 }, { QMetaType::LongLong, 57 },
        }}),
        // Method 'redirect'
        QtMocHelpers::MethodData<bool(quint64, Direction, TerminationFlags)>(58, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { QMetaType::ULongLong, 6 }, { 0x80000000 | 59, 60 }, { 0x80000000 | 61, 62 },
        }}),
        // Method 'redirect'
        QtMocHelpers::MethodData<bool(quint64, Direction)>(58, 2, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::Bool, {{
            { QMetaType::ULongLong, 6 }, { 0x80000000 | 59, 60 },
        }}),
        // Method 'redirect'
        QtMocHelpers::MethodData<bool(const QList<quint64> &, Direction, TerminationFlags)>(58, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { 0x80000000 | 54, 55 }, { 0x80000000 | 59, 60 }, { 0x80000000 | 61, 62 },
        }}),
        // Method 'redirect'
        QtMocHelpers::MethodData<bool(const QList<quint64> &, Direction)>(58, 2, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::Bool, {{
            { 0x80000000 | 54, 55 }, { 0x80000000 | 59, 60 },
        }}),
        // Method 'complete'
        QtMocHelpers::MethodData<bool(quint64)>(63, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { QMetaType::ULongLong, 6 },
        }}),
        // Method 'complete'
        QtMocHelpers::MethodData<bool(const QList<quint64> &)>(63, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { 0x80000000 | 54, 55 },
        }}),
        // Method 'cancel'
        QtMocHelpers::MethodData<bool(quint64)>(64, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { QMetaType::ULongLong, 6 },
        }}),
        // Method 'cancel'
        QtMocHelpers::MethodData<bool(const QList<quint64> &)>(64, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { 0x80000000 | 54, 55 },
        }}),
        // Method 'touchEdgesForAction'
        QtMocHelpers::MethodData<QList<int>(const QString &) const>(65, 2, QMC::AccessPublic | QMC::MethodScriptable, 0x80000000 | 66, {{
            { QMetaType::QString, 67 },
        }}),
        // Method 'addFragmentShader'
        QtMocHelpers::MethodData<uint(enum ShaderTrait, const QString &)>(68, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::UInt, {{
            { 0x80000000 | 69, 70 }, { QMetaType::QString, 71 },
        }}),
        // Method 'addFragmentShader'
        QtMocHelpers::MethodData<uint(enum ShaderTrait)>(68, 2, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::UInt, {{
            { 0x80000000 | 69, 70 },
        }}),
        // Method 'setUniform'
        QtMocHelpers::MethodData<void(uint, const QString &, const QJSValue &)>(72, 2, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::UInt, 48 }, { QMetaType::QString, 73 }, { 0x80000000 | 18, 74 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'pluginId'
        QtMocHelpers::PropertyData<QString>(75, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'isActiveFullScreenEffect'
        QtMocHelpers::PropertyData<bool>(76, QMetaType::Bool, QMC::DefaultPropertyFlags, 2),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'DataRole'
        QtMocHelpers::EnumData<enum DataRole>(12, 12, QMC::EnumFlags{}).add({
            {   77, DataRole::WindowAddedGrabRole },
            {   78, DataRole::WindowClosedGrabRole },
            {   79, DataRole::WindowMinimizedGrabRole },
            {   80, DataRole::WindowUnminimizedGrabRole },
            {   81, DataRole::WindowForceBlurRole },
            {   82, DataRole::WindowForceBackgroundContrastRole },
        }),
        // enum 'EasingCurve'
        QtMocHelpers::EnumData<enum EasingCurve>(83, 83, QMC::EnumFlags{}).add({
            {   84, EasingCurve::GaussianCurve },
        }),
        // enum 'ShaderTrait'
        QtMocHelpers::EnumData<enum ShaderTrait>(69, 69, QMC::EnumIsScoped).add({
            {   85, ShaderTrait::MapTexture },
            {   86, ShaderTrait::UniformColor },
            {   87, ShaderTrait::Modulate },
            {   88, ShaderTrait::AdjustSaturation },
        }),
    };
    return QtMocHelpers::metaObjectData<ScriptedEffect, qt_meta_tag_ZN4KWin14ScriptedEffectE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::ScriptedEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<KWin::AnimationEffect::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin14ScriptedEffectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin14ScriptedEffectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin14ScriptedEffectE_t>.metaTypes,
    nullptr
} };

void KWin::ScriptedEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScriptedEffect *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->configChanged(); break;
        case 1: _t->animationEnded((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint64>>(_a[2]))); break;
        case 2: _t->isActiveFullScreenEffectChanged(); break;
        case 3: { bool _r = _t->borderActivated((*reinterpret_cast<std::add_pointer_t<ElectricBorder>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->isGrabbed((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<enum DataRole>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->grab((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<enum DataRole>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->grab((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<enum DataRole>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->ungrab((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<enum DataRole>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { QJSValue _r = _t->readConfig((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 9: { QJSValue _r = _t->readConfig((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 10: { int _r = _t->displayWidth();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 11: { int _r = _t->displayHeight();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 12: { int _r = _t->animationTime((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->registerShortcut((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[4]))); break;
        case 14: { bool _r = _t->registerScreenEdge((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { bool _r = _t->registerRealtimeScreenEdge((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 16: { bool _r = _t->unregisterScreenEdge((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->registerTouchScreenEdge((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 18: { bool _r = _t->unregisterTouchScreenEdge((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 19: { quint64 _r = _t->animate((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Attribute>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[7])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[8])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[9])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[10])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[11])));
            if (_a[0]) *reinterpret_cast<quint64*>(_a[0]) = std::move(_r); }  break;
        case 20: { quint64 _r = _t->animate((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Attribute>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[7])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[8])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[9])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[10])));
            if (_a[0]) *reinterpret_cast<quint64*>(_a[0]) = std::move(_r); }  break;
        case 21: { quint64 _r = _t->animate((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Attribute>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[7])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[8])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[9])));
            if (_a[0]) *reinterpret_cast<quint64*>(_a[0]) = std::move(_r); }  break;
        case 22: { quint64 _r = _t->animate((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Attribute>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[7])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[8])));
            if (_a[0]) *reinterpret_cast<quint64*>(_a[0]) = std::move(_r); }  break;
        case 23: { quint64 _r = _t->animate((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Attribute>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[7])));
            if (_a[0]) *reinterpret_cast<quint64*>(_a[0]) = std::move(_r); }  break;
        case 24: { quint64 _r = _t->animate((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Attribute>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[6])));
            if (_a[0]) *reinterpret_cast<quint64*>(_a[0]) = std::move(_r); }  break;
        case 25: { quint64 _r = _t->animate((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Attribute>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[5])));
            if (_a[0]) *reinterpret_cast<quint64*>(_a[0]) = std::move(_r); }  break;
        case 26: { quint64 _r = _t->animate((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Attribute>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[4])));
            if (_a[0]) *reinterpret_cast<quint64*>(_a[0]) = std::move(_r); }  break;
        case 27: { QJSValue _r = _t->animate((*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 28: { quint64 _r = _t->set((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Attribute>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[7])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[8])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[9])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[10])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[11])));
            if (_a[0]) *reinterpret_cast<quint64*>(_a[0]) = std::move(_r); }  break;
        case 29: { quint64 _r = _t->set((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Attribute>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[7])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[8])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[9])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[10])));
            if (_a[0]) *reinterpret_cast<quint64*>(_a[0]) = std::move(_r); }  break;
        case 30: { quint64 _r = _t->set((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Attribute>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[7])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[8])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[9])));
            if (_a[0]) *reinterpret_cast<quint64*>(_a[0]) = std::move(_r); }  break;
        case 31: { quint64 _r = _t->set((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Attribute>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[7])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[8])));
            if (_a[0]) *reinterpret_cast<quint64*>(_a[0]) = std::move(_r); }  break;
        case 32: { quint64 _r = _t->set((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Attribute>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[7])));
            if (_a[0]) *reinterpret_cast<quint64*>(_a[0]) = std::move(_r); }  break;
        case 33: { quint64 _r = _t->set((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Attribute>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[6])));
            if (_a[0]) *reinterpret_cast<quint64*>(_a[0]) = std::move(_r); }  break;
        case 34: { quint64 _r = _t->set((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Attribute>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[5])));
            if (_a[0]) *reinterpret_cast<quint64*>(_a[0]) = std::move(_r); }  break;
        case 35: { quint64 _r = _t->set((*reinterpret_cast<std::add_pointer_t<KWin::EffectWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Attribute>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[4])));
            if (_a[0]) *reinterpret_cast<quint64*>(_a[0]) = std::move(_r); }  break;
        case 36: { QJSValue _r = _t->set((*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 37: { bool _r = _t->retarget((*reinterpret_cast<std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 38: { bool _r = _t->retarget((*reinterpret_cast<std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 39: { bool _r = _t->retarget((*reinterpret_cast<std::add_pointer_t<QList<quint64>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 40: { bool _r = _t->retarget((*reinterpret_cast<std::add_pointer_t<QList<quint64>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 41: { bool _r = _t->freezeInTime((*reinterpret_cast<std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qint64>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 42: { bool _r = _t->freezeInTime((*reinterpret_cast<std::add_pointer_t<QList<quint64>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qint64>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 43: { bool _r = _t->redirect((*reinterpret_cast<std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Direction>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<TerminationFlags>>(_a[3])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 44: { bool _r = _t->redirect((*reinterpret_cast<std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Direction>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 45: { bool _r = _t->redirect((*reinterpret_cast<std::add_pointer_t<QList<quint64>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Direction>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<TerminationFlags>>(_a[3])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 46: { bool _r = _t->redirect((*reinterpret_cast<std::add_pointer_t<QList<quint64>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Direction>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 47: { bool _r = _t->complete((*reinterpret_cast<std::add_pointer_t<quint64>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 48: { bool _r = _t->complete((*reinterpret_cast<std::add_pointer_t<QList<quint64>>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 49: { bool _r = _t->cancel((*reinterpret_cast<std::add_pointer_t<quint64>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 50: { bool _r = _t->cancel((*reinterpret_cast<std::add_pointer_t<QList<quint64>>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 51: { QList<int> _r = _t->touchEdgesForAction((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QList<int>*>(_a[0]) = std::move(_r); }  break;
        case 52: { uint _r = _t->addFragmentShader((*reinterpret_cast<std::add_pointer_t<enum ShaderTrait>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<uint*>(_a[0]) = std::move(_r); }  break;
        case 53: { uint _r = _t->addFragmentShader((*reinterpret_cast<std::add_pointer_t<enum ShaderTrait>>(_a[1])));
            if (_a[0]) *reinterpret_cast<uint*>(_a[0]) = std::move(_r); }  break;
        case 54: _t->setUniform((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[3]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<quint64> >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<quint64> >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<quint64> >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<quint64> >(); break;
            }
            break;
        case 46:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<quint64> >(); break;
            }
            break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<quint64> >(); break;
            }
            break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<quint64> >(); break;
            }
            break;
        case 54:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ScriptedEffect::*)()>(_a, &ScriptedEffect::configChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScriptedEffect::*)(KWin::EffectWindow * , quint64 )>(_a, &ScriptedEffect::animationEnded, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScriptedEffect::*)()>(_a, &ScriptedEffect::isActiveFullScreenEffectChanged, 2))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->pluginId(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isActiveFullScreenEffect(); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::ScriptedEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::ScriptedEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin14ScriptedEffectE_t>.strings))
        return static_cast<void*>(this);
    return KWin::AnimationEffect::qt_metacast(_clname);
}

int KWin::ScriptedEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KWin::AnimationEffect::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void KWin::ScriptedEffect::configChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::ScriptedEffect::animationEnded(KWin::EffectWindow * _t1, quint64 _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void KWin::ScriptedEffect::isActiveFullScreenEffectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
