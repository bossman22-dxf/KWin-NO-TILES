/****************************************************************************
** Meta object code from reading C++ file 'surface.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/wayland/surface.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'surface.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin16SurfaceInterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::SurfaceInterface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin16SurfaceInterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::SurfaceInterface",
        "aboutToBeDestroyed",
        "",
        "damaged",
        "Region",
        "opaqueChanged",
        "RegionF",
        "inputChanged",
        "bufferTransformChanged",
        "KWin::OutputTransform",
        "bufferSourceBoxChanged",
        "bufferChanged",
        "mapped",
        "unmapped",
        "sizeChanged",
        "shadowChanged",
        "blurChanged",
        "slideOnShowHideChanged",
        "childSubSurfaceAdded",
        "SubSurfaceInterface*",
        "subSurface",
        "childSubSurfaceRemoved",
        "childSubSurfacesChanged",
        "pointerConstraintsChanged",
        "inhibitsIdleChanged",
        "colorDescriptionChanged",
        "presentationModeHintChanged",
        "bufferReleasePointChanged",
        "alphaMultiplierChanged",
        "committed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'aboutToBeDestroyed'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'damaged'
        QtMocHelpers::SignalData<void(const Region &)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 2 },
        }}),
        // Signal 'opaqueChanged'
        QtMocHelpers::SignalData<void(const RegionF &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 2 },
        }}),
        // Signal 'inputChanged'
        QtMocHelpers::SignalData<void(const RegionF &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 2 },
        }}),
        // Signal 'bufferTransformChanged'
        QtMocHelpers::SignalData<void(KWin::OutputTransform)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 2 },
        }}),
        // Signal 'bufferSourceBoxChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'bufferChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'mapped'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'unmapped'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sizeChanged'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'shadowChanged'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'blurChanged'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'slideOnShowHideChanged'
        QtMocHelpers::SignalData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'childSubSurfaceAdded'
        QtMocHelpers::SignalData<void(SubSurfaceInterface *)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Signal 'childSubSurfaceRemoved'
        QtMocHelpers::SignalData<void(SubSurfaceInterface *)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Signal 'childSubSurfacesChanged'
        QtMocHelpers::SignalData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pointerConstraintsChanged'
        QtMocHelpers::SignalData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'inhibitsIdleChanged'
        QtMocHelpers::SignalData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'colorDescriptionChanged'
        QtMocHelpers::SignalData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'presentationModeHintChanged'
        QtMocHelpers::SignalData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'bufferReleasePointChanged'
        QtMocHelpers::SignalData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'alphaMultiplierChanged'
        QtMocHelpers::SignalData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'committed'
        QtMocHelpers::SignalData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SurfaceInterface, qt_meta_tag_ZN4KWin16SurfaceInterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::SurfaceInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin16SurfaceInterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin16SurfaceInterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin16SurfaceInterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::SurfaceInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SurfaceInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->aboutToBeDestroyed(); break;
        case 1: _t->damaged((*reinterpret_cast<std::add_pointer_t<Region>>(_a[1]))); break;
        case 2: _t->opaqueChanged((*reinterpret_cast<std::add_pointer_t<RegionF>>(_a[1]))); break;
        case 3: _t->inputChanged((*reinterpret_cast<std::add_pointer_t<RegionF>>(_a[1]))); break;
        case 4: _t->bufferTransformChanged((*reinterpret_cast<std::add_pointer_t<KWin::OutputTransform>>(_a[1]))); break;
        case 5: _t->bufferSourceBoxChanged(); break;
        case 6: _t->bufferChanged(); break;
        case 7: _t->mapped(); break;
        case 8: _t->unmapped(); break;
        case 9: _t->sizeChanged(); break;
        case 10: _t->shadowChanged(); break;
        case 11: _t->blurChanged(); break;
        case 12: _t->slideOnShowHideChanged(); break;
        case 13: _t->childSubSurfaceAdded((*reinterpret_cast<std::add_pointer_t<SubSurfaceInterface*>>(_a[1]))); break;
        case 14: _t->childSubSurfaceRemoved((*reinterpret_cast<std::add_pointer_t<SubSurfaceInterface*>>(_a[1]))); break;
        case 15: _t->childSubSurfacesChanged(); break;
        case 16: _t->pointerConstraintsChanged(); break;
        case 17: _t->inhibitsIdleChanged(); break;
        case 18: _t->colorDescriptionChanged(); break;
        case 19: _t->presentationModeHintChanged(); break;
        case 20: _t->bufferReleasePointChanged(); break;
        case 21: _t->alphaMultiplierChanged(); break;
        case 22: _t->committed(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SurfaceInterface::*)()>(_a, &SurfaceInterface::aboutToBeDestroyed, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SurfaceInterface::*)(const Region & )>(_a, &SurfaceInterface::damaged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SurfaceInterface::*)(const RegionF & )>(_a, &SurfaceInterface::opaqueChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SurfaceInterface::*)(const RegionF & )>(_a, &SurfaceInterface::inputChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (SurfaceInterface::*)(KWin::OutputTransform )>(_a, &SurfaceInterface::bufferTransformChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (SurfaceInterface::*)()>(_a, &SurfaceInterface::bufferSourceBoxChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (SurfaceInterface::*)()>(_a, &SurfaceInterface::bufferChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (SurfaceInterface::*)()>(_a, &SurfaceInterface::mapped, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (SurfaceInterface::*)()>(_a, &SurfaceInterface::unmapped, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (SurfaceInterface::*)()>(_a, &SurfaceInterface::sizeChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (SurfaceInterface::*)()>(_a, &SurfaceInterface::shadowChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (SurfaceInterface::*)()>(_a, &SurfaceInterface::blurChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (SurfaceInterface::*)()>(_a, &SurfaceInterface::slideOnShowHideChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (SurfaceInterface::*)(SubSurfaceInterface * )>(_a, &SurfaceInterface::childSubSurfaceAdded, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (SurfaceInterface::*)(SubSurfaceInterface * )>(_a, &SurfaceInterface::childSubSurfaceRemoved, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (SurfaceInterface::*)()>(_a, &SurfaceInterface::childSubSurfacesChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (SurfaceInterface::*)()>(_a, &SurfaceInterface::pointerConstraintsChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (SurfaceInterface::*)()>(_a, &SurfaceInterface::inhibitsIdleChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (SurfaceInterface::*)()>(_a, &SurfaceInterface::colorDescriptionChanged, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (SurfaceInterface::*)()>(_a, &SurfaceInterface::presentationModeHintChanged, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (SurfaceInterface::*)()>(_a, &SurfaceInterface::bufferReleasePointChanged, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (SurfaceInterface::*)()>(_a, &SurfaceInterface::alphaMultiplierChanged, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (SurfaceInterface::*)()>(_a, &SurfaceInterface::committed, 22))
            return;
    }
}

const QMetaObject *KWin::SurfaceInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::SurfaceInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin16SurfaceInterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::SurfaceInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void KWin::SurfaceInterface::aboutToBeDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::SurfaceInterface::damaged(const Region & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void KWin::SurfaceInterface::opaqueChanged(const RegionF & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void KWin::SurfaceInterface::inputChanged(const RegionF & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void KWin::SurfaceInterface::bufferTransformChanged(KWin::OutputTransform _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void KWin::SurfaceInterface::bufferSourceBoxChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KWin::SurfaceInterface::bufferChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void KWin::SurfaceInterface::mapped()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void KWin::SurfaceInterface::unmapped()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void KWin::SurfaceInterface::sizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void KWin::SurfaceInterface::shadowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void KWin::SurfaceInterface::blurChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void KWin::SurfaceInterface::slideOnShowHideChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void KWin::SurfaceInterface::childSubSurfaceAdded(SubSurfaceInterface * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void KWin::SurfaceInterface::childSubSurfaceRemoved(SubSurfaceInterface * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1);
}

// SIGNAL 15
void KWin::SurfaceInterface::childSubSurfacesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void KWin::SurfaceInterface::pointerConstraintsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void KWin::SurfaceInterface::inhibitsIdleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void KWin::SurfaceInterface::colorDescriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void KWin::SurfaceInterface::presentationModeHintChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void KWin::SurfaceInterface::bufferReleasePointChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void KWin::SurfaceInterface::alphaMultiplierChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void KWin::SurfaceInterface::committed()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}
QT_WARNING_POP
