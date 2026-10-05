/****************************************************************************
** Meta object code from reading C++ file 'expolayout.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/plugins/private/expolayout.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'expolayout.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10ExpoLayoutE_t {};
} // unnamed namespace

template <> constexpr inline auto ExpoLayout::qt_create_metaobjectdata<qt_meta_tag_ZN10ExpoLayoutE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ExpoLayout",
        "placementModeChanged",
        "",
        "readyChanged",
        "searchToleranceChanged",
        "idealWidthRatioChanged",
        "relativeMarginLeftChanged",
        "relativeMarginRightChanged",
        "relativeMarginTopChanged",
        "relativeMarginBottomChanged",
        "relativeMinLengthChanged",
        "maxGapRatioChanged",
        "maxScaleChanged",
        "forceLayout",
        "updateCellsMapping",
        "placementMode",
        "PlacementMode",
        "ready",
        "searchTolerance",
        "idealWidthRatio",
        "relativeMarginLeft",
        "relativeMarginRight",
        "relativeMarginTop",
        "relativeMarginBottom",
        "relativeMinLength",
        "maxGapRatio",
        "maxScale",
        "Rows",
        "Columns"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'placementModeChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'readyChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'searchToleranceChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'idealWidthRatioChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'relativeMarginLeftChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'relativeMarginRightChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'relativeMarginTopChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'relativeMarginBottomChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'relativeMinLengthChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'maxGapRatioChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'maxScaleChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'forceLayout'
        QtMocHelpers::MethodData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'updateCellsMapping'
        QtMocHelpers::MethodData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'placementMode'
        QtMocHelpers::PropertyData<enum PlacementMode>(15, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'ready'
        QtMocHelpers::PropertyData<bool>(17, QMetaType::Bool, QMC::DefaultPropertyFlags, 1),
        // property 'searchTolerance'
        QtMocHelpers::PropertyData<qreal>(18, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable, 2),
        // property 'idealWidthRatio'
        QtMocHelpers::PropertyData<qreal>(19, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable, 3),
        // property 'relativeMarginLeft'
        QtMocHelpers::PropertyData<qreal>(20, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable, 4),
        // property 'relativeMarginRight'
        QtMocHelpers::PropertyData<qreal>(21, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable, 5),
        // property 'relativeMarginTop'
        QtMocHelpers::PropertyData<qreal>(22, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable, 6),
        // property 'relativeMarginBottom'
        QtMocHelpers::PropertyData<qreal>(23, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable, 7),
        // property 'relativeMinLength'
        QtMocHelpers::PropertyData<qreal>(24, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable, 8),
        // property 'maxGapRatio'
        QtMocHelpers::PropertyData<qreal>(25, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable, 9),
        // property 'maxScale'
        QtMocHelpers::PropertyData<qreal>(26, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable, 10),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'PlacementMode'
        QtMocHelpers::EnumData<enum PlacementMode>(16, 16, QMC::EnumFlags{}).add({
            {   27, PlacementMode::Rows },
            {   28, PlacementMode::Columns },
        }),
    };
    return QtMocHelpers::metaObjectData<ExpoLayout, qt_meta_tag_ZN10ExpoLayoutE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ExpoLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ExpoLayoutE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ExpoLayoutE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10ExpoLayoutE_t>.metaTypes,
    nullptr
} };

void ExpoLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ExpoLayout *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->placementModeChanged(); break;
        case 1: _t->readyChanged(); break;
        case 2: _t->searchToleranceChanged(); break;
        case 3: _t->idealWidthRatioChanged(); break;
        case 4: _t->relativeMarginLeftChanged(); break;
        case 5: _t->relativeMarginRightChanged(); break;
        case 6: _t->relativeMarginTopChanged(); break;
        case 7: _t->relativeMarginBottomChanged(); break;
        case 8: _t->relativeMinLengthChanged(); break;
        case 9: _t->maxGapRatioChanged(); break;
        case 10: _t->maxScaleChanged(); break;
        case 11: _t->forceLayout(); break;
        case 12: _t->updateCellsMapping(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ExpoLayout::*)()>(_a, &ExpoLayout::placementModeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ExpoLayout::*)()>(_a, &ExpoLayout::readyChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ExpoLayout::*)()>(_a, &ExpoLayout::searchToleranceChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ExpoLayout::*)()>(_a, &ExpoLayout::idealWidthRatioChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ExpoLayout::*)()>(_a, &ExpoLayout::relativeMarginLeftChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ExpoLayout::*)()>(_a, &ExpoLayout::relativeMarginRightChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (ExpoLayout::*)()>(_a, &ExpoLayout::relativeMarginTopChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (ExpoLayout::*)()>(_a, &ExpoLayout::relativeMarginBottomChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (ExpoLayout::*)()>(_a, &ExpoLayout::relativeMinLengthChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (ExpoLayout::*)()>(_a, &ExpoLayout::maxGapRatioChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (ExpoLayout::*)()>(_a, &ExpoLayout::maxScaleChanged, 10))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<enum PlacementMode*>(_v) = _t->placementMode(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isReady(); break;
        case 2: *reinterpret_cast<qreal*>(_v) = _t->m_searchTolerance; break;
        case 3: *reinterpret_cast<qreal*>(_v) = _t->m_idealWidthRatio; break;
        case 4: *reinterpret_cast<qreal*>(_v) = _t->m_relativeMarginLeft; break;
        case 5: *reinterpret_cast<qreal*>(_v) = _t->m_relativeMarginRight; break;
        case 6: *reinterpret_cast<qreal*>(_v) = _t->m_relativeMarginTop; break;
        case 7: *reinterpret_cast<qreal*>(_v) = _t->m_relativeMarginBottom; break;
        case 8: *reinterpret_cast<qreal*>(_v) = _t->m_relativeMinLength; break;
        case 9: *reinterpret_cast<qreal*>(_v) = _t->m_maxGapRatio; break;
        case 10: *reinterpret_cast<qreal*>(_v) = _t->m_maxScale; break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPlacementMode(*reinterpret_cast<enum PlacementMode*>(_v)); break;
        case 2:
            if (QtMocHelpers::setProperty(_t->m_searchTolerance, *reinterpret_cast<qreal*>(_v)))
                Q_EMIT _t->searchToleranceChanged();
            break;
        case 3:
            if (QtMocHelpers::setProperty(_t->m_idealWidthRatio, *reinterpret_cast<qreal*>(_v)))
                Q_EMIT _t->idealWidthRatioChanged();
            break;
        case 4:
            if (QtMocHelpers::setProperty(_t->m_relativeMarginLeft, *reinterpret_cast<qreal*>(_v)))
                Q_EMIT _t->relativeMarginLeftChanged();
            break;
        case 5:
            if (QtMocHelpers::setProperty(_t->m_relativeMarginRight, *reinterpret_cast<qreal*>(_v)))
                Q_EMIT _t->relativeMarginRightChanged();
            break;
        case 6:
            if (QtMocHelpers::setProperty(_t->m_relativeMarginTop, *reinterpret_cast<qreal*>(_v)))
                Q_EMIT _t->relativeMarginTopChanged();
            break;
        case 7:
            if (QtMocHelpers::setProperty(_t->m_relativeMarginBottom, *reinterpret_cast<qreal*>(_v)))
                Q_EMIT _t->relativeMarginBottomChanged();
            break;
        case 8:
            if (QtMocHelpers::setProperty(_t->m_relativeMinLength, *reinterpret_cast<qreal*>(_v)))
                Q_EMIT _t->relativeMinLengthChanged();
            break;
        case 9:
            if (QtMocHelpers::setProperty(_t->m_maxGapRatio, *reinterpret_cast<qreal*>(_v)))
                Q_EMIT _t->maxGapRatioChanged();
            break;
        case 10:
            if (QtMocHelpers::setProperty(_t->m_maxScale, *reinterpret_cast<qreal*>(_v)))
                Q_EMIT _t->maxScaleChanged();
            break;
        default: break;
        }
    }
}

const QMetaObject *ExpoLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExpoLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ExpoLayoutE_t>.strings))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int ExpoLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
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
void ExpoLayout::placementModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ExpoLayout::readyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ExpoLayout::searchToleranceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ExpoLayout::idealWidthRatioChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ExpoLayout::relativeMarginLeftChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ExpoLayout::relativeMarginRightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ExpoLayout::relativeMarginTopChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ExpoLayout::relativeMarginBottomChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ExpoLayout::relativeMinLengthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void ExpoLayout::maxGapRatioChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void ExpoLayout::maxScaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
namespace {
struct qt_meta_tag_ZN8ExpoCellE_t {};
} // unnamed namespace

template <> constexpr inline auto ExpoCell::qt_create_metaobjectdata<qt_meta_tag_ZN8ExpoCellE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ExpoCell",
        "layoutChanged",
        "",
        "shouldLayoutChanged",
        "contentItemChanged",
        "partialActivationFactorChanged",
        "offsetXChanged",
        "offsetYChanged",
        "naturalXChanged",
        "naturalYChanged",
        "naturalWidthChanged",
        "naturalHeightChanged",
        "persistentKeyChanged",
        "bottomMarginChanged",
        "updateContentItemGeometry",
        "layout",
        "ExpoLayout*",
        "contentItem",
        "QQuickItem*",
        "partialActivationFactor",
        "shouldLayout",
        "offsetX",
        "offsetY",
        "naturalX",
        "naturalY",
        "naturalWidth",
        "naturalHeight",
        "persistentKey",
        "bottomMargin"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'layoutChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'shouldLayoutChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'contentItemChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'partialActivationFactorChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'offsetXChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'offsetYChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'naturalXChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'naturalYChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'naturalWidthChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'naturalHeightChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'persistentKeyChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'bottomMarginChanged'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateContentItemGeometry'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'layout'
        QtMocHelpers::PropertyData<ExpoLayout*>(15, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'contentItem'
        QtMocHelpers::PropertyData<QQuickItem*>(17, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 2),
        // property 'partialActivationFactor'
        QtMocHelpers::PropertyData<qreal>(19, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'shouldLayout'
        QtMocHelpers::PropertyData<bool>(20, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'offsetX'
        QtMocHelpers::PropertyData<qreal>(21, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'offsetY'
        QtMocHelpers::PropertyData<qreal>(22, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'naturalX'
        QtMocHelpers::PropertyData<qreal>(23, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'naturalY'
        QtMocHelpers::PropertyData<qreal>(24, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'naturalWidth'
        QtMocHelpers::PropertyData<qreal>(25, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'naturalHeight'
        QtMocHelpers::PropertyData<qreal>(26, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
        // property 'persistentKey'
        QtMocHelpers::PropertyData<QString>(27, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
        // property 'bottomMargin'
        QtMocHelpers::PropertyData<qreal>(28, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 11),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ExpoCell, qt_meta_tag_ZN8ExpoCellE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ExpoCell::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8ExpoCellE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8ExpoCellE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8ExpoCellE_t>.metaTypes,
    nullptr
} };

void ExpoCell::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ExpoCell *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->layoutChanged(); break;
        case 1: _t->shouldLayoutChanged(); break;
        case 2: _t->contentItemChanged(); break;
        case 3: _t->partialActivationFactorChanged(); break;
        case 4: _t->offsetXChanged(); break;
        case 5: _t->offsetYChanged(); break;
        case 6: _t->naturalXChanged(); break;
        case 7: _t->naturalYChanged(); break;
        case 8: _t->naturalWidthChanged(); break;
        case 9: _t->naturalHeightChanged(); break;
        case 10: _t->persistentKeyChanged(); break;
        case 11: _t->bottomMarginChanged(); break;
        case 12: _t->updateContentItemGeometry(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ExpoCell::*)()>(_a, &ExpoCell::layoutChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ExpoCell::*)()>(_a, &ExpoCell::shouldLayoutChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ExpoCell::*)()>(_a, &ExpoCell::contentItemChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ExpoCell::*)()>(_a, &ExpoCell::partialActivationFactorChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ExpoCell::*)()>(_a, &ExpoCell::offsetXChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ExpoCell::*)()>(_a, &ExpoCell::offsetYChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (ExpoCell::*)()>(_a, &ExpoCell::naturalXChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (ExpoCell::*)()>(_a, &ExpoCell::naturalYChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (ExpoCell::*)()>(_a, &ExpoCell::naturalWidthChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (ExpoCell::*)()>(_a, &ExpoCell::naturalHeightChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (ExpoCell::*)()>(_a, &ExpoCell::persistentKeyChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (ExpoCell::*)()>(_a, &ExpoCell::bottomMarginChanged, 11))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ExpoLayout* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<ExpoLayout**>(_v) = _t->layout(); break;
        case 1: *reinterpret_cast<QQuickItem**>(_v) = _t->contentItem(); break;
        case 2: *reinterpret_cast<qreal*>(_v) = _t->partialActivationFactor(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->shouldLayout(); break;
        case 4: *reinterpret_cast<qreal*>(_v) = _t->offsetX(); break;
        case 5: *reinterpret_cast<qreal*>(_v) = _t->offsetY(); break;
        case 6: *reinterpret_cast<qreal*>(_v) = _t->naturalX(); break;
        case 7: *reinterpret_cast<qreal*>(_v) = _t->naturalY(); break;
        case 8: *reinterpret_cast<qreal*>(_v) = _t->naturalWidth(); break;
        case 9: *reinterpret_cast<qreal*>(_v) = _t->naturalHeight(); break;
        case 10: *reinterpret_cast<QString*>(_v) = _t->persistentKey(); break;
        case 11: *reinterpret_cast<qreal*>(_v) = _t->bottomMargin(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLayout(*reinterpret_cast<ExpoLayout**>(_v)); break;
        case 1: _t->setContentItem(*reinterpret_cast<QQuickItem**>(_v)); break;
        case 2: _t->setPartialActivationFactor(*reinterpret_cast<qreal*>(_v)); break;
        case 3: _t->setShouldLayout(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setOffsetX(*reinterpret_cast<qreal*>(_v)); break;
        case 5: _t->setOffsetY(*reinterpret_cast<qreal*>(_v)); break;
        case 6: _t->setNaturalX(*reinterpret_cast<qreal*>(_v)); break;
        case 7: _t->setNaturalY(*reinterpret_cast<qreal*>(_v)); break;
        case 8: _t->setNaturalWidth(*reinterpret_cast<qreal*>(_v)); break;
        case 9: _t->setNaturalHeight(*reinterpret_cast<qreal*>(_v)); break;
        case 10: _t->setPersistentKey(*reinterpret_cast<QString*>(_v)); break;
        case 11: _t->setBottomMargin(*reinterpret_cast<qreal*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *ExpoCell::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExpoCell::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8ExpoCellE_t>.strings))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int ExpoCell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void ExpoCell::layoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ExpoCell::shouldLayoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ExpoCell::contentItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ExpoCell::partialActivationFactorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ExpoCell::offsetXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ExpoCell::offsetYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ExpoCell::naturalXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ExpoCell::naturalYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ExpoCell::naturalWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void ExpoCell::naturalHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void ExpoCell::persistentKeyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void ExpoCell::bottomMarginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
