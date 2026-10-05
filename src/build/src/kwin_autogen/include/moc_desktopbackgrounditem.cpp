/****************************************************************************
** Meta object code from reading C++ file 'desktopbackgrounditem.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/scripting/desktopbackgrounditem.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'desktopbackgrounditem.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin21DesktopBackgroundItemE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::DesktopBackgroundItem::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin21DesktopBackgroundItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::DesktopBackgroundItem",
        "outputChanged",
        "",
        "desktopChanged",
        "activityChanged",
        "outputName",
        "output",
        "KWin::LogicalOutput*",
        "activity",
        "desktop",
        "KWin::VirtualDesktop*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'outputChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'desktopChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activityChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'outputName'
        QtMocHelpers::PropertyData<QString>(5, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'output'
        QtMocHelpers::PropertyData<KWin::LogicalOutput*>(6, 0x80000000 | 7, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'activity'
        QtMocHelpers::PropertyData<QString>(8, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'desktop'
        QtMocHelpers::PropertyData<KWin::VirtualDesktop*>(9, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DesktopBackgroundItem, qt_meta_tag_ZN4KWin21DesktopBackgroundItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::DesktopBackgroundItem::staticMetaObject = { {
    QMetaObject::SuperData::link<WindowThumbnailItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21DesktopBackgroundItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21DesktopBackgroundItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin21DesktopBackgroundItemE_t>.metaTypes,
    nullptr
} };

void KWin::DesktopBackgroundItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DesktopBackgroundItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->outputChanged(); break;
        case 1: _t->desktopChanged(); break;
        case 2: _t->activityChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DesktopBackgroundItem::*)()>(_a, &DesktopBackgroundItem::outputChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DesktopBackgroundItem::*)()>(_a, &DesktopBackgroundItem::desktopChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (DesktopBackgroundItem::*)()>(_a, &DesktopBackgroundItem::activityChanged, 2))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->outputName(); break;
        case 1: *reinterpret_cast<KWin::LogicalOutput**>(_v) = _t->output(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->activity(); break;
        case 3: *reinterpret_cast<KWin::VirtualDesktop**>(_v) = _t->desktop(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOutputName(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setOutput(*reinterpret_cast<KWin::LogicalOutput**>(_v)); break;
        case 2: _t->setActivity(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setDesktop(*reinterpret_cast<KWin::VirtualDesktop**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::DesktopBackgroundItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::DesktopBackgroundItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21DesktopBackgroundItemE_t>.strings))
        return static_cast<void*>(this);
    return WindowThumbnailItem::qt_metacast(_clname);
}

int KWin::DesktopBackgroundItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WindowThumbnailItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
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
void KWin::DesktopBackgroundItem::outputChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::DesktopBackgroundItem::desktopChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::DesktopBackgroundItem::activityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
