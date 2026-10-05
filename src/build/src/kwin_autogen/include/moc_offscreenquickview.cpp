/****************************************************************************
** Meta object code from reading C++ file 'offscreenquickview.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/effect/offscreenquickview.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'offscreenquickview.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin18OffscreenQuickViewE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::OffscreenQuickView::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin18OffscreenQuickViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::OffscreenQuickView",
        "geometryChanged",
        "",
        "KWin::Rect",
        "oldGeometry",
        "newGeometry",
        "renderRequested",
        "sceneChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'geometryChanged'
        QtMocHelpers::SignalData<void(const KWin::Rect &, const KWin::Rect &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 3, 5 },
        }}),
        // Signal 'renderRequested'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sceneChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OffscreenQuickView, qt_meta_tag_ZN4KWin18OffscreenQuickViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::OffscreenQuickView::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin18OffscreenQuickViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin18OffscreenQuickViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin18OffscreenQuickViewE_t>.metaTypes,
    nullptr
} };

void KWin::OffscreenQuickView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OffscreenQuickView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->geometryChanged((*reinterpret_cast<std::add_pointer_t<KWin::Rect>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<KWin::Rect>>(_a[2]))); break;
        case 1: _t->renderRequested(); break;
        case 2: _t->sceneChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OffscreenQuickView::*)(const KWin::Rect & , const KWin::Rect & )>(_a, &OffscreenQuickView::geometryChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (OffscreenQuickView::*)()>(_a, &OffscreenQuickView::renderRequested, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (OffscreenQuickView::*)()>(_a, &OffscreenQuickView::sceneChanged, 2))
            return;
    }
}

const QMetaObject *KWin::OffscreenQuickView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::OffscreenQuickView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin18OffscreenQuickViewE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::OffscreenQuickView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void KWin::OffscreenQuickView::geometryChanged(const KWin::Rect & _t1, const KWin::Rect & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void KWin::OffscreenQuickView::renderRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::OffscreenQuickView::sceneChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
