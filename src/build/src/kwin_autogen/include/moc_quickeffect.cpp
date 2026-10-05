/****************************************************************************
** Meta object code from reading C++ file 'quickeffect.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/effect/quickeffect.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quickeffect.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin14QuickSceneViewE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::QuickSceneView::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin14QuickSceneViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::QuickSceneView",
        "currentDesktopChanged",
        "",
        "VirtualDesktop*",
        "newDesktop",
        "scheduleRepaint",
        "effect",
        "QuickSceneEffect*",
        "screen",
        "LogicalOutput*",
        "rootItem",
        "QQuickItem*",
        "currentDesktop"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'currentDesktopChanged'
        QtMocHelpers::SignalData<void(VirtualDesktop *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'scheduleRepaint'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'effect'
        QtMocHelpers::PropertyData<QuickSceneEffect*>(6, 0x80000000 | 7, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'screen'
        QtMocHelpers::PropertyData<LogicalOutput*>(8, 0x80000000 | 9, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'rootItem'
        QtMocHelpers::PropertyData<QQuickItem*>(10, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'currentDesktop'
        QtMocHelpers::PropertyData<VirtualDesktop*>(12, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QuickSceneView, qt_meta_tag_ZN4KWin14QuickSceneViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::QuickSceneView::staticMetaObject = { {
    QMetaObject::SuperData::link<OffscreenQuickView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin14QuickSceneViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin14QuickSceneViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin14QuickSceneViewE_t>.metaTypes,
    nullptr
} };

void KWin::QuickSceneView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QuickSceneView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->currentDesktopChanged((*reinterpret_cast<std::add_pointer_t<VirtualDesktop*>>(_a[1]))); break;
        case 1: _t->scheduleRepaint(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QuickSceneView::*)(VirtualDesktop * )>(_a, &QuickSceneView::currentDesktopChanged, 0))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LogicalOutput* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QuickSceneEffect* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QuickSceneEffect**>(_v) = _t->effect(); break;
        case 1: *reinterpret_cast<LogicalOutput**>(_v) = _t->screen(); break;
        case 2: *reinterpret_cast<QQuickItem**>(_v) = _t->rootItem(); break;
        case 3: *reinterpret_cast<VirtualDesktop**>(_v) = _t->currentDesktop(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setCurrentDesktop(*reinterpret_cast<VirtualDesktop**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::QuickSceneView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::QuickSceneView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin14QuickSceneViewE_t>.strings))
        return static_cast<void*>(this);
    return OffscreenQuickView::qt_metacast(_clname);
}

int KWin::QuickSceneView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OffscreenQuickView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void KWin::QuickSceneView::currentDesktopChanged(VirtualDesktop * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN4KWin16QuickSceneEffectE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::QuickSceneEffect::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin16QuickSceneEffectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::QuickSceneEffect",
        "itemDraggedOutOfScreen",
        "",
        "QQuickItem*",
        "item",
        "QList<LogicalOutput*>",
        "screens",
        "itemDroppedOutOfScreen",
        "QPointF",
        "globalPos",
        "LogicalOutput*",
        "screen",
        "activeViewChanged",
        "KWin::QuickSceneView*",
        "view",
        "delegateChanged",
        "activated",
        "deactivated",
        "viewForScreen",
        "QuickSceneView*",
        "viewAt",
        "QPoint",
        "pos",
        "getView",
        "Qt::Edge",
        "edge",
        "activateView",
        "checkItemDraggedOutOfScreen",
        "checkItemDroppedOutOfScreen",
        "activeView",
        "delegate",
        "QQmlComponent*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'itemDraggedOutOfScreen'
        QtMocHelpers::SignalData<void(QQuickItem *, QList<LogicalOutput*>)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
        // Signal 'itemDroppedOutOfScreen'
        QtMocHelpers::SignalData<void(const QPointF &, QQuickItem *, LogicalOutput *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { 0x80000000 | 3, 4 }, { 0x80000000 | 10, 11 },
        }}),
        // Signal 'activeViewChanged'
        QtMocHelpers::SignalData<void(KWin::QuickSceneView *)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Signal 'delegateChanged'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activated'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'deactivated'
        QtMocHelpers::SignalData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'viewForScreen'
        QtMocHelpers::MethodData<QuickSceneView *(LogicalOutput *) const>(18, 2, QMC::AccessPublic, 0x80000000 | 19, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Method 'viewAt'
        QtMocHelpers::MethodData<QuickSceneView *(const QPoint &) const>(20, 2, QMC::AccessPublic, 0x80000000 | 19, {{
            { 0x80000000 | 21, 22 },
        }}),
        // Method 'getView'
        QtMocHelpers::MethodData<KWin::QuickSceneView *(Qt::Edge)>(23, 2, QMC::AccessPublic, 0x80000000 | 13, {{
            { 0x80000000 | 24, 25 },
        }}),
        // Method 'activateView'
        QtMocHelpers::MethodData<void(QuickSceneView *)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 14 },
        }}),
        // Method 'checkItemDraggedOutOfScreen'
        QtMocHelpers::MethodData<void(QQuickItem *)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Method 'checkItemDroppedOutOfScreen'
        QtMocHelpers::MethodData<void(const QPointF &, QQuickItem *)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'activeView'
        QtMocHelpers::PropertyData<QuickSceneView*>(29, 0x80000000 | 19, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 2),
        // property 'delegate'
        QtMocHelpers::PropertyData<QQmlComponent*>(30, 0x80000000 | 31, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 3),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QuickSceneEffect, qt_meta_tag_ZN4KWin16QuickSceneEffectE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::QuickSceneEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<Effect::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin16QuickSceneEffectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin16QuickSceneEffectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin16QuickSceneEffectE_t>.metaTypes,
    nullptr
} };

void KWin::QuickSceneEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QuickSceneEffect *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemDraggedOutOfScreen((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QList<LogicalOutput*>>>(_a[2]))); break;
        case 1: _t->itemDroppedOutOfScreen((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<LogicalOutput*>>(_a[3]))); break;
        case 2: _t->activeViewChanged((*reinterpret_cast<std::add_pointer_t<KWin::QuickSceneView*>>(_a[1]))); break;
        case 3: _t->delegateChanged(); break;
        case 4: _t->activated(); break;
        case 5: _t->deactivated(); break;
        case 6: { QuickSceneView* _r = _t->viewForScreen((*reinterpret_cast<std::add_pointer_t<LogicalOutput*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QuickSceneView**>(_a[0]) = std::move(_r); }  break;
        case 7: { QuickSceneView* _r = _t->viewAt((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QuickSceneView**>(_a[0]) = std::move(_r); }  break;
        case 8: { KWin::QuickSceneView* _r = _t->getView((*reinterpret_cast<std::add_pointer_t<Qt::Edge>>(_a[1])));
            if (_a[0]) *reinterpret_cast<KWin::QuickSceneView**>(_a[0]) = std::move(_r); }  break;
        case 9: _t->activateView((*reinterpret_cast<std::add_pointer_t<QuickSceneView*>>(_a[1]))); break;
        case 10: _t->checkItemDraggedOutOfScreen((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        case 11: _t->checkItemDroppedOutOfScreen((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<LogicalOutput*> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LogicalOutput* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KWin::QuickSceneView* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LogicalOutput* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QuickSceneView* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QuickSceneEffect::*)(QQuickItem * , QList<LogicalOutput*> )>(_a, &QuickSceneEffect::itemDraggedOutOfScreen, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QuickSceneEffect::*)(const QPointF & , QQuickItem * , LogicalOutput * )>(_a, &QuickSceneEffect::itemDroppedOutOfScreen, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (QuickSceneEffect::*)(KWin::QuickSceneView * )>(_a, &QuickSceneEffect::activeViewChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (QuickSceneEffect::*)()>(_a, &QuickSceneEffect::delegateChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (QuickSceneEffect::*)()>(_a, &QuickSceneEffect::activated, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (QuickSceneEffect::*)()>(_a, &QuickSceneEffect::deactivated, 5))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlComponent* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QuickSceneView* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QuickSceneView**>(_v) = _t->activeView(); break;
        case 1: *reinterpret_cast<QQmlComponent**>(_v) = _t->delegate(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setDelegate(*reinterpret_cast<QQmlComponent**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::QuickSceneEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::QuickSceneEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin16QuickSceneEffectE_t>.strings))
        return static_cast<void*>(this);
    return Effect::qt_metacast(_clname);
}

int KWin::QuickSceneEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Effect::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
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
void KWin::QuickSceneEffect::itemDraggedOutOfScreen(QQuickItem * _t1, QList<LogicalOutput*> _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void KWin::QuickSceneEffect::itemDroppedOutOfScreen(const QPointF & _t1, QQuickItem * _t2, LogicalOutput * _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3);
}

// SIGNAL 2
void KWin::QuickSceneEffect::activeViewChanged(KWin::QuickSceneView * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void KWin::QuickSceneEffect::delegateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWin::QuickSceneEffect::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KWin::QuickSceneEffect::deactivated()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
