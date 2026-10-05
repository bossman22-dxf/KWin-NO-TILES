/****************************************************************************
** Meta object code from reading C++ file 'window.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/window.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin6WindowE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::Window::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin6WindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::Window",
        "stackingOrderChanged",
        "",
        "opacityChanged",
        "KWin::Window*",
        "window",
        "oldOpacity",
        "damaged",
        "inputTransformationChanged",
        "closed",
        "outputChanged",
        "LogicalOutput*",
        "oldOutput",
        "skipCloseAnimationChanged",
        "windowRoleChanged",
        "windowClassChanged",
        "surfaceChanged",
        "shadowChanged",
        "bufferGeometryChanged",
        "KWin::RectF",
        "oldGeometry",
        "frameGeometryChanged",
        "clientGeometryChanged",
        "frameGeometryAboutToChange",
        "tileChanged",
        "KWin::Tile*",
        "tile",
        "requestedTileChanged",
        "fullScreenChanged",
        "skipTaskbarChanged",
        "skipPagerChanged",
        "skipSwitcherChanged",
        "iconChanged",
        "activeChanged",
        "keepAboveChanged",
        "keepBelowChanged",
        "demandsAttentionChanged",
        "desktopsChanged",
        "activitiesChanged",
        "minimizedChanged",
        "paletteChanged",
        "QPalette",
        "p",
        "colorSchemeChanged",
        "captionChanged",
        "captionNormalChanged",
        "maximizedAboutToChange",
        "MaximizeMode",
        "mode",
        "maximizedChanged",
        "transientChanged",
        "modalChanged",
        "quickTileModeChanged",
        "moveResizedChanged",
        "moveResizeCursorChanged",
        "CursorShape",
        "interactiveMoveResizeStarted",
        "interactiveMoveResizeStepped",
        "geometry",
        "interactiveMoveResizeFinished",
        "closeableChanged",
        "minimizeableChanged",
        "maximizeableChanged",
        "desktopFileNameChanged",
        "applicationMenuChanged",
        "hasApplicationMenuChanged",
        "applicationMenuActiveChanged",
        "unresponsiveChanged",
        "decorationChanged",
        "hiddenChanged",
        "hiddenByShowDesktopChanged",
        "lockScreenOverlayChanged",
        "readyForPaintingChanged",
        "maximizeGeometryRestoreChanged",
        "fullscreenGeometryRestoreChanged",
        "offscreenRenderingChanged",
        "targetScaleChanged",
        "nextTargetScaleChanged",
        "tagChanged",
        "descriptionChanged",
        "borderRadiusChanged",
        "excludeFromCaptureChanged",
        "decorationPolicyChanged",
        "closeWindow",
        "setReadyForPainting",
        "setMaximize",
        "vertically",
        "horizontally",
        "RectF",
        "restore",
        "bufferGeometry",
        "clientGeometry",
        "pos",
        "QPointF",
        "size",
        "QSizeF",
        "x",
        "y",
        "width",
        "height",
        "opacity",
        "output",
        "KWin::LogicalOutput*",
        "rect",
        "resourceName",
        "resourceClass",
        "windowRole",
        "desktopWindow",
        "dock",
        "toolbar",
        "menu",
        "normalWindow",
        "dialog",
        "splash",
        "utility",
        "dropdownMenu",
        "popupMenu",
        "tooltip",
        "notification",
        "criticalNotification",
        "appletPopup",
        "onScreenDisplay",
        "comboBox",
        "dndIcon",
        "windowType",
        "WindowType",
        "managed",
        "deleted",
        "skipsCloseAnimation",
        "popupWindow",
        "outline",
        "internalId",
        "QUuid",
        "pid",
        "stackingOrder",
        "fullScreen",
        "fullScreenable",
        "active",
        "desktops",
        "QList<KWin::VirtualDesktop*>",
        "onAllDesktops",
        "activities",
        "skipTaskbar",
        "skipPager",
        "skipSwitcher",
        "closeable",
        "icon",
        "QIcon",
        "keepAbove",
        "keepBelow",
        "minimizable",
        "minimized",
        "iconGeometry",
        "specialWindow",
        "demandsAttention",
        "caption",
        "captionNormal",
        "minSize",
        "maxSize",
        "wantsInput",
        "transient",
        "transientFor",
        "modal",
        "frameGeometry",
        "move",
        "resize",
        "decorationHasAlpha",
        "noBorder",
        "providesContextHelp",
        "maximizable",
        "maximizeMode",
        "KWin::MaximizeMode",
        "moveable",
        "moveableAcrossScreens",
        "resizeable",
        "desktopFileName",
        "hasApplicationMenu",
        "applicationMenuActive",
        "unresponsive",
        "colorScheme",
        "layer",
        "KWin::Layer",
        "hidden",
        "inputMethod",
        "tag",
        "description",
        "excludeFromCapture"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'stackingOrderChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'opacityChanged'
        QtMocHelpers::SignalData<void(KWin::Window *, qreal)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { QMetaType::QReal, 6 },
        }}),
        // Signal 'damaged'
        QtMocHelpers::SignalData<void(KWin::Window *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Signal 'inputTransformationChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'closed'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'outputChanged'
        QtMocHelpers::SignalData<void(LogicalOutput *)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Signal 'skipCloseAnimationChanged'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'windowRoleChanged'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'windowClassChanged'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'surfaceChanged'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'shadowChanged'
        QtMocHelpers::SignalData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'bufferGeometryChanged'
        QtMocHelpers::SignalData<void(const KWin::RectF &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Signal 'frameGeometryChanged'
        QtMocHelpers::SignalData<void(const KWin::RectF &)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Signal 'clientGeometryChanged'
        QtMocHelpers::SignalData<void(const KWin::RectF &)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Signal 'frameGeometryAboutToChange'
        QtMocHelpers::SignalData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'tileChanged'
        QtMocHelpers::SignalData<void(KWin::Tile *)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 25, 26 },
        }}),
        // Signal 'requestedTileChanged'
        QtMocHelpers::SignalData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fullScreenChanged'
        QtMocHelpers::SignalData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'skipTaskbarChanged'
        QtMocHelpers::SignalData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'skipPagerChanged'
        QtMocHelpers::SignalData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'skipSwitcherChanged'
        QtMocHelpers::SignalData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'iconChanged'
        QtMocHelpers::SignalData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activeChanged'
        QtMocHelpers::SignalData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'keepAboveChanged'
        QtMocHelpers::SignalData<void(bool)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'keepBelowChanged'
        QtMocHelpers::SignalData<void(bool)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'demandsAttentionChanged'
        QtMocHelpers::SignalData<void()>(36, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'desktopsChanged'
        QtMocHelpers::SignalData<void()>(37, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activitiesChanged'
        QtMocHelpers::SignalData<void()>(38, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'minimizedChanged'
        QtMocHelpers::SignalData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'paletteChanged'
        QtMocHelpers::SignalData<void(const QPalette &)>(40, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 41, 42 },
        }}),
        // Signal 'colorSchemeChanged'
        QtMocHelpers::SignalData<void()>(43, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'captionChanged'
        QtMocHelpers::SignalData<void()>(44, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'captionNormalChanged'
        QtMocHelpers::SignalData<void()>(45, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'maximizedAboutToChange'
        QtMocHelpers::SignalData<void(MaximizeMode)>(46, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 47, 48 },
        }}),
        // Signal 'maximizedChanged'
        QtMocHelpers::SignalData<void()>(49, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'transientChanged'
        QtMocHelpers::SignalData<void()>(50, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'modalChanged'
        QtMocHelpers::SignalData<void()>(51, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'quickTileModeChanged'
        QtMocHelpers::SignalData<void()>(52, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'moveResizedChanged'
        QtMocHelpers::SignalData<void()>(53, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'moveResizeCursorChanged'
        QtMocHelpers::SignalData<void(CursorShape)>(54, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 55, 2 },
        }}),
        // Signal 'interactiveMoveResizeStarted'
        QtMocHelpers::SignalData<void()>(56, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'interactiveMoveResizeStepped'
        QtMocHelpers::SignalData<void(const KWin::RectF &)>(57, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 58 },
        }}),
        // Signal 'interactiveMoveResizeFinished'
        QtMocHelpers::SignalData<void()>(59, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'closeableChanged'
        QtMocHelpers::SignalData<void(bool)>(60, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'minimizeableChanged'
        QtMocHelpers::SignalData<void(bool)>(61, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'maximizeableChanged'
        QtMocHelpers::SignalData<void(bool)>(62, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'desktopFileNameChanged'
        QtMocHelpers::SignalData<void()>(63, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'applicationMenuChanged'
        QtMocHelpers::SignalData<void()>(64, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hasApplicationMenuChanged'
        QtMocHelpers::SignalData<void(bool)>(65, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'applicationMenuActiveChanged'
        QtMocHelpers::SignalData<void(bool)>(66, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'unresponsiveChanged'
        QtMocHelpers::SignalData<void(bool)>(67, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'decorationChanged'
        QtMocHelpers::SignalData<void()>(68, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hiddenChanged'
        QtMocHelpers::SignalData<void()>(69, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hiddenByShowDesktopChanged'
        QtMocHelpers::SignalData<void()>(70, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'lockScreenOverlayChanged'
        QtMocHelpers::SignalData<void()>(71, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'readyForPaintingChanged'
        QtMocHelpers::SignalData<void()>(72, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'maximizeGeometryRestoreChanged'
        QtMocHelpers::SignalData<void()>(73, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fullscreenGeometryRestoreChanged'
        QtMocHelpers::SignalData<void()>(74, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'offscreenRenderingChanged'
        QtMocHelpers::SignalData<void()>(75, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'targetScaleChanged'
        QtMocHelpers::SignalData<void()>(76, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'nextTargetScaleChanged'
        QtMocHelpers::SignalData<void()>(77, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'tagChanged'
        QtMocHelpers::SignalData<void()>(78, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'descriptionChanged'
        QtMocHelpers::SignalData<void()>(79, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'borderRadiusChanged'
        QtMocHelpers::SignalData<void()>(80, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'excludeFromCaptureChanged'
        QtMocHelpers::SignalData<void()>(81, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'decorationPolicyChanged'
        QtMocHelpers::SignalData<void()>(82, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'closeWindow'
        QtMocHelpers::SlotData<void()>(83, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setReadyForPainting'
        QtMocHelpers::SlotData<void()>(84, 2, QMC::AccessProtected, QMetaType::Void),
        // Method 'setMaximize'
        QtMocHelpers::MethodData<void(bool, bool, const RectF &)>(85, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 86 }, { QMetaType::Bool, 87 }, { 0x80000000 | 88, 89 },
        }}),
        // Method 'setMaximize'
        QtMocHelpers::MethodData<void(bool, bool)>(85, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::Bool, 86 }, { QMetaType::Bool, 87 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'bufferGeometry'
        QtMocHelpers::PropertyData<KWin::RectF>(90, 0x80000000 | 19, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 11),
        // property 'clientGeometry'
        QtMocHelpers::PropertyData<KWin::RectF>(91, 0x80000000 | 19, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 13),
        // property 'pos'
        QtMocHelpers::PropertyData<QPointF>(92, 0x80000000 | 93, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'size'
        QtMocHelpers::PropertyData<QSizeF>(94, 0x80000000 | 95, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'x'
        QtMocHelpers::PropertyData<qreal>(96, QMetaType::QReal, QMC::DefaultPropertyFlags, 12),
        // property 'y'
        QtMocHelpers::PropertyData<qreal>(97, QMetaType::QReal, QMC::DefaultPropertyFlags, 12),
        // property 'width'
        QtMocHelpers::PropertyData<qreal>(98, QMetaType::QReal, QMC::DefaultPropertyFlags, 12),
        // property 'height'
        QtMocHelpers::PropertyData<qreal>(99, QMetaType::QReal, QMC::DefaultPropertyFlags, 12),
        // property 'opacity'
        QtMocHelpers::PropertyData<qreal>(100, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'output'
        QtMocHelpers::PropertyData<KWin::LogicalOutput*>(101, 0x80000000 | 102, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 5),
        // property 'rect'
        QtMocHelpers::PropertyData<KWin::RectF>(103, 0x80000000 | 19, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'resourceName'
        QtMocHelpers::PropertyData<QString>(104, QMetaType::QString, QMC::DefaultPropertyFlags, 8),
        // property 'resourceClass'
        QtMocHelpers::PropertyData<QString>(105, QMetaType::QString, QMC::DefaultPropertyFlags, 8),
        // property 'windowRole'
        QtMocHelpers::PropertyData<QString>(106, QMetaType::QString, QMC::DefaultPropertyFlags, 7),
        // property 'desktopWindow'
        QtMocHelpers::PropertyData<bool>(107, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'dock'
        QtMocHelpers::PropertyData<bool>(108, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'toolbar'
        QtMocHelpers::PropertyData<bool>(109, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'menu'
        QtMocHelpers::PropertyData<bool>(110, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'normalWindow'
        QtMocHelpers::PropertyData<bool>(111, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'dialog'
        QtMocHelpers::PropertyData<bool>(112, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'splash'
        QtMocHelpers::PropertyData<bool>(113, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'utility'
        QtMocHelpers::PropertyData<bool>(114, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'dropdownMenu'
        QtMocHelpers::PropertyData<bool>(115, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'popupMenu'
        QtMocHelpers::PropertyData<bool>(116, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'tooltip'
        QtMocHelpers::PropertyData<bool>(117, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'notification'
        QtMocHelpers::PropertyData<bool>(118, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'criticalNotification'
        QtMocHelpers::PropertyData<bool>(119, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'appletPopup'
        QtMocHelpers::PropertyData<bool>(120, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'onScreenDisplay'
        QtMocHelpers::PropertyData<bool>(121, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'comboBox'
        QtMocHelpers::PropertyData<bool>(122, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'dndIcon'
        QtMocHelpers::PropertyData<bool>(123, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'windowType'
        QtMocHelpers::PropertyData<WindowType>(124, 0x80000000 | 125, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'managed'
        QtMocHelpers::PropertyData<bool>(126, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'deleted'
        QtMocHelpers::PropertyData<bool>(127, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'skipsCloseAnimation'
        QtMocHelpers::PropertyData<bool>(128, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable, 6),
        // property 'popupWindow'
        QtMocHelpers::PropertyData<bool>(129, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'outline'
        QtMocHelpers::PropertyData<bool>(130, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'internalId'
        QtMocHelpers::PropertyData<QUuid>(131, 0x80000000 | 132, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'pid'
        QtMocHelpers::PropertyData<int>(133, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'stackingOrder'
        QtMocHelpers::PropertyData<int>(134, QMetaType::Int, QMC::DefaultPropertyFlags, 0),
        // property 'fullScreen'
        QtMocHelpers::PropertyData<bool>(135, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 17),
        // property 'fullScreenable'
        QtMocHelpers::PropertyData<bool>(136, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'active'
        QtMocHelpers::PropertyData<bool>(137, QMetaType::Bool, QMC::DefaultPropertyFlags, 22),
        // property 'desktops'
        QtMocHelpers::PropertyData<QList<KWin::VirtualDesktop*>>(138, 0x80000000 | 139, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 26),
        // property 'onAllDesktops'
        QtMocHelpers::PropertyData<bool>(140, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 26),
        // property 'activities'
        QtMocHelpers::PropertyData<QStringList>(141, QMetaType::QStringList, QMC::DefaultPropertyFlags | QMC::Writable, 27),
        // property 'skipTaskbar'
        QtMocHelpers::PropertyData<bool>(142, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 18),
        // property 'skipPager'
        QtMocHelpers::PropertyData<bool>(143, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 19),
        // property 'skipSwitcher'
        QtMocHelpers::PropertyData<bool>(144, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 20),
        // property 'closeable'
        QtMocHelpers::PropertyData<bool>(145, QMetaType::Bool, QMC::DefaultPropertyFlags, 43),
        // property 'icon'
        QtMocHelpers::PropertyData<QIcon>(146, 0x80000000 | 147, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 21),
        // property 'keepAbove'
        QtMocHelpers::PropertyData<bool>(148, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 23),
        // property 'keepBelow'
        QtMocHelpers::PropertyData<bool>(149, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 24),
        // property 'minimizable'
        QtMocHelpers::PropertyData<bool>(150, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'minimized'
        QtMocHelpers::PropertyData<bool>(151, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 28),
        // property 'iconGeometry'
        QtMocHelpers::PropertyData<KWin::RectF>(152, 0x80000000 | 19, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'specialWindow'
        QtMocHelpers::PropertyData<bool>(153, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'demandsAttention'
        QtMocHelpers::PropertyData<bool>(154, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable, 25),
        // property 'caption'
        QtMocHelpers::PropertyData<QString>(155, QMetaType::QString, QMC::DefaultPropertyFlags, 31),
        // property 'captionNormal'
        QtMocHelpers::PropertyData<QString>(156, QMetaType::QString, QMC::DefaultPropertyFlags, 32),
        // property 'minSize'
        QtMocHelpers::PropertyData<QSizeF>(157, 0x80000000 | 95, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'maxSize'
        QtMocHelpers::PropertyData<QSizeF>(158, 0x80000000 | 95, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'wantsInput'
        QtMocHelpers::PropertyData<bool>(159, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'transient'
        QtMocHelpers::PropertyData<bool>(160, QMetaType::Bool, QMC::DefaultPropertyFlags, 35),
        // property 'transientFor'
        QtMocHelpers::PropertyData<KWin::Window*>(161, 0x80000000 | 4, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 35),
        // property 'modal'
        QtMocHelpers::PropertyData<bool>(162, QMetaType::Bool, QMC::DefaultPropertyFlags, 36),
        // property 'frameGeometry'
        QtMocHelpers::PropertyData<KWin::RectF>(163, 0x80000000 | 19, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag, 12),
        // property 'move'
        QtMocHelpers::PropertyData<bool>(164, QMetaType::Bool, QMC::DefaultPropertyFlags, 38),
        // property 'resize'
        QtMocHelpers::PropertyData<bool>(165, QMetaType::Bool, QMC::DefaultPropertyFlags, 38),
        // property 'decorationHasAlpha'
        QtMocHelpers::PropertyData<bool>(166, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'noBorder'
        QtMocHelpers::PropertyData<bool>(167, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 65),
        // property 'providesContextHelp'
        QtMocHelpers::PropertyData<bool>(168, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'maximizable'
        QtMocHelpers::PropertyData<bool>(169, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'maximizeMode'
        QtMocHelpers::PropertyData<KWin::MaximizeMode>(170, 0x80000000 | 171, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 34),
        // property 'moveable'
        QtMocHelpers::PropertyData<bool>(172, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'moveableAcrossScreens'
        QtMocHelpers::PropertyData<bool>(173, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'resizeable'
        QtMocHelpers::PropertyData<bool>(174, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'desktopFileName'
        QtMocHelpers::PropertyData<QString>(175, QMetaType::QString, QMC::DefaultPropertyFlags, 46),
        // property 'hasApplicationMenu'
        QtMocHelpers::PropertyData<bool>(176, QMetaType::Bool, QMC::DefaultPropertyFlags, 48),
        // property 'applicationMenuActive'
        QtMocHelpers::PropertyData<bool>(177, QMetaType::Bool, QMC::DefaultPropertyFlags, 49),
        // property 'unresponsive'
        QtMocHelpers::PropertyData<bool>(178, QMetaType::Bool, QMC::DefaultPropertyFlags, 50),
        // property 'colorScheme'
        QtMocHelpers::PropertyData<QString>(179, QMetaType::QString, QMC::DefaultPropertyFlags, 30),
        // property 'layer'
        QtMocHelpers::PropertyData<KWin::Layer>(180, 0x80000000 | 181, QMC::DefaultPropertyFlags | QMC::EnumOrFlag),
        // property 'hidden'
        QtMocHelpers::PropertyData<bool>(182, QMetaType::Bool, QMC::DefaultPropertyFlags, 52),
        // property 'tile'
        QtMocHelpers::PropertyData<KWin::Tile*>(26, 0x80000000 | 25, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag, 15),
        // property 'inputMethod'
        QtMocHelpers::PropertyData<bool>(183, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'tag'
        QtMocHelpers::PropertyData<QString>(184, QMetaType::QString, QMC::DefaultPropertyFlags, 61),
        // property 'description'
        QtMocHelpers::PropertyData<QString>(185, QMetaType::QString, QMC::DefaultPropertyFlags, 62),
        // property 'excludeFromCapture'
        QtMocHelpers::PropertyData<bool>(186, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 64),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Window, qt_meta_tag_ZN4KWin6WindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN4KWin6WindowE[] = {
    QMetaObject::SuperData::link<KWin::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject KWin::Window::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin6WindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin6WindowE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN4KWin6WindowE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin6WindowE_t>.metaTypes,
    nullptr
} };

void KWin::Window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Window *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->stackingOrderChanged(); break;
        case 1: _t->opacityChanged((*reinterpret_cast<std::add_pointer_t<KWin::Window*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[2]))); break;
        case 2: _t->damaged((*reinterpret_cast<std::add_pointer_t<KWin::Window*>>(_a[1]))); break;
        case 3: _t->inputTransformationChanged(); break;
        case 4: _t->closed(); break;
        case 5: _t->outputChanged((*reinterpret_cast<std::add_pointer_t<LogicalOutput*>>(_a[1]))); break;
        case 6: _t->skipCloseAnimationChanged(); break;
        case 7: _t->windowRoleChanged(); break;
        case 8: _t->windowClassChanged(); break;
        case 9: _t->surfaceChanged(); break;
        case 10: _t->shadowChanged(); break;
        case 11: _t->bufferGeometryChanged((*reinterpret_cast<std::add_pointer_t<KWin::RectF>>(_a[1]))); break;
        case 12: _t->frameGeometryChanged((*reinterpret_cast<std::add_pointer_t<KWin::RectF>>(_a[1]))); break;
        case 13: _t->clientGeometryChanged((*reinterpret_cast<std::add_pointer_t<KWin::RectF>>(_a[1]))); break;
        case 14: _t->frameGeometryAboutToChange(); break;
        case 15: _t->tileChanged((*reinterpret_cast<std::add_pointer_t<KWin::Tile*>>(_a[1]))); break;
        case 16: _t->requestedTileChanged(); break;
        case 17: _t->fullScreenChanged(); break;
        case 18: _t->skipTaskbarChanged(); break;
        case 19: _t->skipPagerChanged(); break;
        case 20: _t->skipSwitcherChanged(); break;
        case 21: _t->iconChanged(); break;
        case 22: _t->activeChanged(); break;
        case 23: _t->keepAboveChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 24: _t->keepBelowChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 25: _t->demandsAttentionChanged(); break;
        case 26: _t->desktopsChanged(); break;
        case 27: _t->activitiesChanged(); break;
        case 28: _t->minimizedChanged(); break;
        case 29: _t->paletteChanged((*reinterpret_cast<std::add_pointer_t<QPalette>>(_a[1]))); break;
        case 30: _t->colorSchemeChanged(); break;
        case 31: _t->captionChanged(); break;
        case 32: _t->captionNormalChanged(); break;
        case 33: _t->maximizedAboutToChange((*reinterpret_cast<std::add_pointer_t<MaximizeMode>>(_a[1]))); break;
        case 34: _t->maximizedChanged(); break;
        case 35: _t->transientChanged(); break;
        case 36: _t->modalChanged(); break;
        case 37: _t->quickTileModeChanged(); break;
        case 38: _t->moveResizedChanged(); break;
        case 39: _t->moveResizeCursorChanged((*reinterpret_cast<std::add_pointer_t<CursorShape>>(_a[1]))); break;
        case 40: _t->interactiveMoveResizeStarted(); break;
        case 41: _t->interactiveMoveResizeStepped((*reinterpret_cast<std::add_pointer_t<KWin::RectF>>(_a[1]))); break;
        case 42: _t->interactiveMoveResizeFinished(); break;
        case 43: _t->closeableChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 44: _t->minimizeableChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 45: _t->maximizeableChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 46: _t->desktopFileNameChanged(); break;
        case 47: _t->applicationMenuChanged(); break;
        case 48: _t->hasApplicationMenuChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 49: _t->applicationMenuActiveChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 50: _t->unresponsiveChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 51: _t->decorationChanged(); break;
        case 52: _t->hiddenChanged(); break;
        case 53: _t->hiddenByShowDesktopChanged(); break;
        case 54: _t->lockScreenOverlayChanged(); break;
        case 55: _t->readyForPaintingChanged(); break;
        case 56: _t->maximizeGeometryRestoreChanged(); break;
        case 57: _t->fullscreenGeometryRestoreChanged(); break;
        case 58: _t->offscreenRenderingChanged(); break;
        case 59: _t->targetScaleChanged(); break;
        case 60: _t->nextTargetScaleChanged(); break;
        case 61: _t->tagChanged(); break;
        case 62: _t->descriptionChanged(); break;
        case 63: _t->borderRadiusChanged(); break;
        case 64: _t->excludeFromCaptureChanged(); break;
        case 65: _t->decorationPolicyChanged(); break;
        case 66: _t->closeWindow(); break;
        case 67: _t->setReadyForPainting(); break;
        case 68: _t->setMaximize((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<RectF>>(_a[3]))); break;
        case 69: _t->setMaximize((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::Window* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::Window* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LogicalOutput* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::stackingOrderChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)(KWin::Window * , qreal )>(_a, &Window::opacityChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)(KWin::Window * )>(_a, &Window::damaged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::inputTransformationChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::closed, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)(LogicalOutput * )>(_a, &Window::outputChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::skipCloseAnimationChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::windowRoleChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::windowClassChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::surfaceChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::shadowChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)(const KWin::RectF & )>(_a, &Window::bufferGeometryChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)(const KWin::RectF & )>(_a, &Window::frameGeometryChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)(const KWin::RectF & )>(_a, &Window::clientGeometryChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::frameGeometryAboutToChange, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)(KWin::Tile * )>(_a, &Window::tileChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::requestedTileChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::fullScreenChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::skipTaskbarChanged, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::skipPagerChanged, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::skipSwitcherChanged, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::iconChanged, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::activeChanged, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)(bool )>(_a, &Window::keepAboveChanged, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)(bool )>(_a, &Window::keepBelowChanged, 24))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::demandsAttentionChanged, 25))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::desktopsChanged, 26))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::activitiesChanged, 27))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::minimizedChanged, 28))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)(const QPalette & )>(_a, &Window::paletteChanged, 29))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::colorSchemeChanged, 30))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::captionChanged, 31))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::captionNormalChanged, 32))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)(MaximizeMode )>(_a, &Window::maximizedAboutToChange, 33))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::maximizedChanged, 34))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::transientChanged, 35))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::modalChanged, 36))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::quickTileModeChanged, 37))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::moveResizedChanged, 38))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)(CursorShape )>(_a, &Window::moveResizeCursorChanged, 39))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::interactiveMoveResizeStarted, 40))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)(const KWin::RectF & )>(_a, &Window::interactiveMoveResizeStepped, 41))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::interactiveMoveResizeFinished, 42))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)(bool )>(_a, &Window::closeableChanged, 43))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)(bool )>(_a, &Window::minimizeableChanged, 44))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)(bool )>(_a, &Window::maximizeableChanged, 45))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::desktopFileNameChanged, 46))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::applicationMenuChanged, 47))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)(bool )>(_a, &Window::hasApplicationMenuChanged, 48))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)(bool )>(_a, &Window::applicationMenuActiveChanged, 49))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)(bool )>(_a, &Window::unresponsiveChanged, 50))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::decorationChanged, 51))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::hiddenChanged, 52))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::hiddenByShowDesktopChanged, 53))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::lockScreenOverlayChanged, 54))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::readyForPaintingChanged, 55))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::maximizeGeometryRestoreChanged, 56))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::fullscreenGeometryRestoreChanged, 57))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::offscreenRenderingChanged, 58))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::targetScaleChanged, 59))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::nextTargetScaleChanged, 60))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::tagChanged, 61))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::descriptionChanged, 62))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::borderRadiusChanged, 63))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::excludeFromCaptureChanged, 64))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::decorationPolicyChanged, 65))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KWin::LogicalOutput* >(); break;
        case 64:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KWin::Window* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<KWin::RectF*>(_v) = _t->bufferGeometry(); break;
        case 1: *reinterpret_cast<KWin::RectF*>(_v) = _t->clientGeometry(); break;
        case 2: *reinterpret_cast<QPointF*>(_v) = _t->pos(); break;
        case 3: *reinterpret_cast<QSizeF*>(_v) = _t->size(); break;
        case 4: *reinterpret_cast<qreal*>(_v) = _t->x(); break;
        case 5: *reinterpret_cast<qreal*>(_v) = _t->y(); break;
        case 6: *reinterpret_cast<qreal*>(_v) = _t->width(); break;
        case 7: *reinterpret_cast<qreal*>(_v) = _t->height(); break;
        case 8: *reinterpret_cast<qreal*>(_v) = _t->opacity(); break;
        case 9: *reinterpret_cast<KWin::LogicalOutput**>(_v) = _t->output(); break;
        case 10: *reinterpret_cast<KWin::RectF*>(_v) = _t->rect(); break;
        case 11: *reinterpret_cast<QString*>(_v) = _t->resourceName(); break;
        case 12: *reinterpret_cast<QString*>(_v) = _t->resourceClass(); break;
        case 13: *reinterpret_cast<QString*>(_v) = _t->windowRole(); break;
        case 14: *reinterpret_cast<bool*>(_v) = _t->isDesktop(); break;
        case 15: *reinterpret_cast<bool*>(_v) = _t->isDock(); break;
        case 16: *reinterpret_cast<bool*>(_v) = _t->isToolbar(); break;
        case 17: *reinterpret_cast<bool*>(_v) = _t->isMenu(); break;
        case 18: *reinterpret_cast<bool*>(_v) = _t->isNormalWindow(); break;
        case 19: *reinterpret_cast<bool*>(_v) = _t->isDialog(); break;
        case 20: *reinterpret_cast<bool*>(_v) = _t->isSplash(); break;
        case 21: *reinterpret_cast<bool*>(_v) = _t->isUtility(); break;
        case 22: *reinterpret_cast<bool*>(_v) = _t->isDropdownMenu(); break;
        case 23: *reinterpret_cast<bool*>(_v) = _t->isPopupMenu(); break;
        case 24: *reinterpret_cast<bool*>(_v) = _t->isTooltip(); break;
        case 25: *reinterpret_cast<bool*>(_v) = _t->isNotification(); break;
        case 26: *reinterpret_cast<bool*>(_v) = _t->isCriticalNotification(); break;
        case 27: *reinterpret_cast<bool*>(_v) = _t->isAppletPopup(); break;
        case 28: *reinterpret_cast<bool*>(_v) = _t->isOnScreenDisplay(); break;
        case 29: *reinterpret_cast<bool*>(_v) = _t->isComboBox(); break;
        case 30: *reinterpret_cast<bool*>(_v) = _t->isDNDIcon(); break;
        case 31: *reinterpret_cast<WindowType*>(_v) = _t->windowType(); break;
        case 32: *reinterpret_cast<bool*>(_v) = _t->isClient(); break;
        case 33: *reinterpret_cast<bool*>(_v) = _t->isDeleted(); break;
        case 34: *reinterpret_cast<bool*>(_v) = _t->skipsCloseAnimation(); break;
        case 35: *reinterpret_cast<bool*>(_v) = _t->isPopupWindow(); break;
        case 36: *reinterpret_cast<bool*>(_v) = _t->isOutline(); break;
        case 37: *reinterpret_cast<QUuid*>(_v) = _t->internalId(); break;
        case 38: *reinterpret_cast<int*>(_v) = _t->pid(); break;
        case 39: *reinterpret_cast<int*>(_v) = _t->stackingOrder(); break;
        case 40: *reinterpret_cast<bool*>(_v) = _t->isFullScreen(); break;
        case 41: *reinterpret_cast<bool*>(_v) = _t->isFullScreenable(); break;
        case 42: *reinterpret_cast<bool*>(_v) = _t->isActive(); break;
        case 43: *reinterpret_cast<QList<KWin::VirtualDesktop*>*>(_v) = _t->desktops(); break;
        case 44: *reinterpret_cast<bool*>(_v) = _t->isOnAllDesktops(); break;
        case 45: *reinterpret_cast<QStringList*>(_v) = _t->activities(); break;
        case 46: *reinterpret_cast<bool*>(_v) = _t->skipTaskbar(); break;
        case 47: *reinterpret_cast<bool*>(_v) = _t->skipPager(); break;
        case 48: *reinterpret_cast<bool*>(_v) = _t->skipSwitcher(); break;
        case 49: *reinterpret_cast<bool*>(_v) = _t->isCloseable(); break;
        case 50: *reinterpret_cast<QIcon*>(_v) = _t->icon(); break;
        case 51: *reinterpret_cast<bool*>(_v) = _t->keepAbove(); break;
        case 52: *reinterpret_cast<bool*>(_v) = _t->keepBelow(); break;
        case 53: *reinterpret_cast<bool*>(_v) = _t->isMinimizable(); break;
        case 54: *reinterpret_cast<bool*>(_v) = _t->isMinimized(); break;
        case 55: *reinterpret_cast<KWin::RectF*>(_v) = _t->iconGeometry(); break;
        case 56: *reinterpret_cast<bool*>(_v) = _t->isSpecialWindow(); break;
        case 57: *reinterpret_cast<bool*>(_v) = _t->isDemandingAttention(); break;
        case 58: *reinterpret_cast<QString*>(_v) = _t->caption(); break;
        case 59: *reinterpret_cast<QString*>(_v) = _t->captionNormal(); break;
        case 60: *reinterpret_cast<QSizeF*>(_v) = _t->minSize(); break;
        case 61: *reinterpret_cast<QSizeF*>(_v) = _t->maxSize(); break;
        case 62: *reinterpret_cast<bool*>(_v) = _t->wantsInput(); break;
        case 63: *reinterpret_cast<bool*>(_v) = _t->isTransient(); break;
        case 64: *reinterpret_cast<KWin::Window**>(_v) = _t->transientFor(); break;
        case 65: *reinterpret_cast<bool*>(_v) = _t->isModal(); break;
        case 66: *reinterpret_cast<KWin::RectF*>(_v) = _t->frameGeometry(); break;
        case 67: *reinterpret_cast<bool*>(_v) = _t->isInteractiveMove(); break;
        case 68: *reinterpret_cast<bool*>(_v) = _t->isInteractiveResize(); break;
        case 69: *reinterpret_cast<bool*>(_v) = _t->decorationHasAlpha(); break;
        case 70: *reinterpret_cast<bool*>(_v) = _t->noBorder(); break;
        case 71: *reinterpret_cast<bool*>(_v) = _t->providesContextHelp(); break;
        case 72: *reinterpret_cast<bool*>(_v) = _t->isMaximizable(); break;
        case 73: *reinterpret_cast<KWin::MaximizeMode*>(_v) = _t->maximizeMode(); break;
        case 74: *reinterpret_cast<bool*>(_v) = _t->isMovable(); break;
        case 75: *reinterpret_cast<bool*>(_v) = _t->isMovableAcrossScreens(); break;
        case 76: *reinterpret_cast<bool*>(_v) = _t->isResizable(); break;
        case 77: *reinterpret_cast<QString*>(_v) = _t->desktopFileName(); break;
        case 78: *reinterpret_cast<bool*>(_v) = _t->hasApplicationMenu(); break;
        case 79: *reinterpret_cast<bool*>(_v) = _t->applicationMenuActive(); break;
        case 80: *reinterpret_cast<bool*>(_v) = _t->unresponsive(); break;
        case 81: *reinterpret_cast<QString*>(_v) = _t->colorScheme(); break;
        case 82: *reinterpret_cast<KWin::Layer*>(_v) = _t->layer(); break;
        case 83: *reinterpret_cast<bool*>(_v) = _t->isHidden(); break;
        case 84: *reinterpret_cast<KWin::Tile**>(_v) = _t->requestedTile(); break;
        case 85: *reinterpret_cast<bool*>(_v) = _t->isInputMethod(); break;
        case 86: *reinterpret_cast<QString*>(_v) = _t->tag(); break;
        case 87: *reinterpret_cast<QString*>(_v) = _t->description(); break;
        case 88: *reinterpret_cast<bool*>(_v) = _t->excludeFromCapture(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 8: _t->setOpacity(*reinterpret_cast<qreal*>(_v)); break;
        case 34: _t->setSkipCloseAnimation(*reinterpret_cast<bool*>(_v)); break;
        case 40: _t->setFullScreen(*reinterpret_cast<bool*>(_v)); break;
        case 43: _t->setDesktops(*reinterpret_cast<QList<KWin::VirtualDesktop*>*>(_v)); break;
        case 44: _t->setOnAllDesktops(*reinterpret_cast<bool*>(_v)); break;
        case 45: _t->setOnActivities(*reinterpret_cast<QStringList*>(_v)); break;
        case 46: _t->setSkipTaskbar(*reinterpret_cast<bool*>(_v)); break;
        case 47: _t->setSkipPager(*reinterpret_cast<bool*>(_v)); break;
        case 48: _t->setSkipSwitcher(*reinterpret_cast<bool*>(_v)); break;
        case 51: _t->setKeepAbove(*reinterpret_cast<bool*>(_v)); break;
        case 52: _t->setKeepBelow(*reinterpret_cast<bool*>(_v)); break;
        case 54: _t->setMinimized(*reinterpret_cast<bool*>(_v)); break;
        case 57: _t->demandAttention(*reinterpret_cast<bool*>(_v)); break;
        case 66: _t->moveResize(*reinterpret_cast<KWin::RectF*>(_v)); break;
        case 70: _t->setNoBorder(*reinterpret_cast<bool*>(_v)); break;
        case 84: _t->setTileCompatibility(*reinterpret_cast<KWin::Tile**>(_v)); break;
        case 88: _t->setExcludeFromCapture(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::Window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin6WindowE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 70)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 70;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 70)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 70;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 89;
    }
    return _id;
}

// SIGNAL 0
void KWin::Window::stackingOrderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::Window::opacityChanged(KWin::Window * _t1, qreal _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void KWin::Window::damaged(KWin::Window * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void KWin::Window::inputTransformationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWin::Window::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KWin::Window::outputChanged(LogicalOutput * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void KWin::Window::skipCloseAnimationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void KWin::Window::windowRoleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void KWin::Window::windowClassChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void KWin::Window::surfaceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void KWin::Window::shadowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void KWin::Window::bufferGeometryChanged(const KWin::RectF & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void KWin::Window::frameGeometryChanged(const KWin::RectF & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void KWin::Window::clientGeometryChanged(const KWin::RectF & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void KWin::Window::frameGeometryAboutToChange()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void KWin::Window::tileChanged(KWin::Tile * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}

// SIGNAL 16
void KWin::Window::requestedTileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void KWin::Window::fullScreenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void KWin::Window::skipTaskbarChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void KWin::Window::skipPagerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void KWin::Window::skipSwitcherChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void KWin::Window::iconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void KWin::Window::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void KWin::Window::keepAboveChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 23, nullptr, _t1);
}

// SIGNAL 24
void KWin::Window::keepBelowChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 24, nullptr, _t1);
}

// SIGNAL 25
void KWin::Window::demandsAttentionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void KWin::Window::desktopsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void KWin::Window::activitiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void KWin::Window::minimizedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void KWin::Window::paletteChanged(const QPalette & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 29, nullptr, _t1);
}

// SIGNAL 30
void KWin::Window::colorSchemeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void KWin::Window::captionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void KWin::Window::captionNormalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void KWin::Window::maximizedAboutToChange(MaximizeMode _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 33, nullptr, _t1);
}

// SIGNAL 34
void KWin::Window::maximizedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 34, nullptr);
}

// SIGNAL 35
void KWin::Window::transientChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void KWin::Window::modalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void KWin::Window::quickTileModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 37, nullptr);
}

// SIGNAL 38
void KWin::Window::moveResizedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 38, nullptr);
}

// SIGNAL 39
void KWin::Window::moveResizeCursorChanged(CursorShape _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 39, nullptr, _t1);
}

// SIGNAL 40
void KWin::Window::interactiveMoveResizeStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 40, nullptr);
}

// SIGNAL 41
void KWin::Window::interactiveMoveResizeStepped(const KWin::RectF & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 41, nullptr, _t1);
}

// SIGNAL 42
void KWin::Window::interactiveMoveResizeFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 42, nullptr);
}

// SIGNAL 43
void KWin::Window::closeableChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 43, nullptr, _t1);
}

// SIGNAL 44
void KWin::Window::minimizeableChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 44, nullptr, _t1);
}

// SIGNAL 45
void KWin::Window::maximizeableChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 45, nullptr, _t1);
}

// SIGNAL 46
void KWin::Window::desktopFileNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 46, nullptr);
}

// SIGNAL 47
void KWin::Window::applicationMenuChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 47, nullptr);
}

// SIGNAL 48
void KWin::Window::hasApplicationMenuChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 48, nullptr, _t1);
}

// SIGNAL 49
void KWin::Window::applicationMenuActiveChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 49, nullptr, _t1);
}

// SIGNAL 50
void KWin::Window::unresponsiveChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 50, nullptr, _t1);
}

// SIGNAL 51
void KWin::Window::decorationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 51, nullptr);
}

// SIGNAL 52
void KWin::Window::hiddenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 52, nullptr);
}

// SIGNAL 53
void KWin::Window::hiddenByShowDesktopChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 53, nullptr);
}

// SIGNAL 54
void KWin::Window::lockScreenOverlayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 54, nullptr);
}

// SIGNAL 55
void KWin::Window::readyForPaintingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 55, nullptr);
}

// SIGNAL 56
void KWin::Window::maximizeGeometryRestoreChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 56, nullptr);
}

// SIGNAL 57
void KWin::Window::fullscreenGeometryRestoreChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 57, nullptr);
}

// SIGNAL 58
void KWin::Window::offscreenRenderingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 58, nullptr);
}

// SIGNAL 59
void KWin::Window::targetScaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 59, nullptr);
}

// SIGNAL 60
void KWin::Window::nextTargetScaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 60, nullptr);
}

// SIGNAL 61
void KWin::Window::tagChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 61, nullptr);
}

// SIGNAL 62
void KWin::Window::descriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 62, nullptr);
}

// SIGNAL 63
void KWin::Window::borderRadiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 63, nullptr);
}

// SIGNAL 64
void KWin::Window::excludeFromCaptureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 64, nullptr);
}

// SIGNAL 65
void KWin::Window::decorationPolicyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 65, nullptr);
}
QT_WARNING_POP
