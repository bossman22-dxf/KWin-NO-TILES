/****************************************************************************
** Meta object code from reading C++ file 'switcheritem.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/tabbox/switcheritem.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'switcheritem.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin6TabBox12SwitcherItemE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::TabBox::SwitcherItem::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin6TabBox12SwitcherItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::TabBox::SwitcherItem",
        "DefaultProperty",
        "item",
        "visibleChanged",
        "",
        "currentIndexChanged",
        "index",
        "modelChanged",
        "allDesktopsChanged",
        "screenGeometryChanged",
        "itemChanged",
        "noModifierGrabChanged",
        "compositingChanged",
        "automaticallyHideChanged",
        "aboutToShow",
        "aboutToHide",
        "model",
        "QAbstractItemModel*",
        "screenGeometry",
        "QRect",
        "visible",
        "allDesktops",
        "currentIndex",
        "noModifierGrab",
        "compositing",
        "automaticallyHide"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'visibleChanged'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentIndexChanged'
        QtMocHelpers::SignalData<void(int)>(5, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Signal 'modelChanged'
        QtMocHelpers::SignalData<void()>(7, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'allDesktopsChanged'
        QtMocHelpers::SignalData<void()>(8, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'screenGeometryChanged'
        QtMocHelpers::SignalData<void()>(9, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'itemChanged'
        QtMocHelpers::SignalData<void()>(10, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'noModifierGrabChanged'
        QtMocHelpers::SignalData<void()>(11, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'compositingChanged'
        QtMocHelpers::SignalData<void()>(12, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'automaticallyHideChanged'
        QtMocHelpers::SignalData<void()>(13, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'aboutToShow'
        QtMocHelpers::SignalData<void()>(14, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'aboutToHide'
        QtMocHelpers::SignalData<void()>(15, 4, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'model'
        QtMocHelpers::PropertyData<QAbstractItemModel*>(16, 0x80000000 | 17, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 2),
        // property 'screenGeometry'
        QtMocHelpers::PropertyData<QRect>(18, 0x80000000 | 19, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 4),
        // property 'visible'
        QtMocHelpers::PropertyData<bool>(20, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'allDesktops'
        QtMocHelpers::PropertyData<bool>(21, QMetaType::Bool, QMC::DefaultPropertyFlags, 3),
        // property 'currentIndex'
        QtMocHelpers::PropertyData<int>(22, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'noModifierGrab'
        QtMocHelpers::PropertyData<bool>(23, QMetaType::Bool, QMC::DefaultPropertyFlags, 6),
        // property 'compositing'
        QtMocHelpers::PropertyData<bool>(24, QMetaType::Bool, QMC::DefaultPropertyFlags, 7),
        // property 'automaticallyHide'
        QtMocHelpers::PropertyData<bool>(25, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'item'
        QtMocHelpers::PropertyData<QObject*>(2, QMetaType::QObjectStar, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<SwitcherItem, qt_meta_tag_ZN4KWin6TabBox12SwitcherItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject KWin::TabBox::SwitcherItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin6TabBox12SwitcherItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin6TabBox12SwitcherItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin6TabBox12SwitcherItemE_t>.metaTypes,
    nullptr
} };

void KWin::TabBox::SwitcherItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SwitcherItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->visibleChanged(); break;
        case 1: _t->currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->modelChanged(); break;
        case 3: _t->allDesktopsChanged(); break;
        case 4: _t->screenGeometryChanged(); break;
        case 5: _t->itemChanged(); break;
        case 6: _t->noModifierGrabChanged(); break;
        case 7: _t->compositingChanged(); break;
        case 8: _t->automaticallyHideChanged(); break;
        case 9: _t->aboutToShow(); break;
        case 10: _t->aboutToHide(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SwitcherItem::*)()>(_a, &SwitcherItem::visibleChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SwitcherItem::*)(int )>(_a, &SwitcherItem::currentIndexChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SwitcherItem::*)()>(_a, &SwitcherItem::modelChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SwitcherItem::*)()>(_a, &SwitcherItem::allDesktopsChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (SwitcherItem::*)()>(_a, &SwitcherItem::screenGeometryChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (SwitcherItem::*)()>(_a, &SwitcherItem::itemChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (SwitcherItem::*)()>(_a, &SwitcherItem::noModifierGrabChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (SwitcherItem::*)()>(_a, &SwitcherItem::compositingChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (SwitcherItem::*)()>(_a, &SwitcherItem::automaticallyHideChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (SwitcherItem::*)()>(_a, &SwitcherItem::aboutToShow, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (SwitcherItem::*)()>(_a, &SwitcherItem::aboutToHide, 10))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QAbstractItemModel**>(_v) = _t->model(); break;
        case 1: *reinterpret_cast<QRect*>(_v) = _t->screenGeometry(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isVisible(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isAllDesktops(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->currentIndex(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->noModifierGrab(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->compositing(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->automaticallyHide(); break;
        case 8: *reinterpret_cast<QObject**>(_v) = _t->item(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setVisible(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setCurrentIndex(*reinterpret_cast<int*>(_v)); break;
        case 7: _t->setAutomaticallyHide(*reinterpret_cast<bool*>(_v)); break;
        case 8: _t->setItem(*reinterpret_cast<QObject**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::TabBox::SwitcherItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::TabBox::SwitcherItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin6TabBox12SwitcherItemE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::TabBox::SwitcherItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void KWin::TabBox::SwitcherItem::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::TabBox::SwitcherItem::currentIndexChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void KWin::TabBox::SwitcherItem::modelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::TabBox::SwitcherItem::allDesktopsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWin::TabBox::SwitcherItem::screenGeometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KWin::TabBox::SwitcherItem::itemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KWin::TabBox::SwitcherItem::noModifierGrabChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void KWin::TabBox::SwitcherItem::compositingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void KWin::TabBox::SwitcherItem::automaticallyHideChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void KWin::TabBox::SwitcherItem::aboutToShow()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void KWin::TabBox::SwitcherItem::aboutToHide()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
