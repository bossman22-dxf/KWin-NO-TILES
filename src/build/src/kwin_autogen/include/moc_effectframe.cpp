/****************************************************************************
** Meta object code from reading C++ file 'effectframe.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/effect/effectframe.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'effectframe.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin21EffectFrameQuickSceneE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::EffectFrameQuickScene::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin21EffectFrameQuickSceneE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::EffectFrameQuickScene",
        "fontChanged",
        "",
        "QFont",
        "font",
        "iconChanged",
        "QIcon",
        "icon",
        "iconSizeChanged",
        "QSize",
        "iconSize",
        "textChanged",
        "text",
        "frameOpacityChanged",
        "frameOpacity",
        "crossFadeEnabledChanged",
        "enabled",
        "crossFadeProgressChanged",
        "progress",
        "crossFadeEnabled",
        "crossFadeProgress"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'fontChanged'
        QtMocHelpers::SignalData<void(const QFont &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'iconChanged'
        QtMocHelpers::SignalData<void(const QIcon &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Signal 'iconSizeChanged'
        QtMocHelpers::SignalData<void(const QSize &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Signal 'textChanged'
        QtMocHelpers::SignalData<void(const QString &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 12 },
        }}),
        // Signal 'frameOpacityChanged'
        QtMocHelpers::SignalData<void(qreal)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 14 },
        }}),
        // Signal 'crossFadeEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 16 },
        }}),
        // Signal 'crossFadeProgressChanged'
        QtMocHelpers::SignalData<void(qreal)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 18 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'font'
        QtMocHelpers::PropertyData<QFont>(4, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
        // property 'icon'
        QtMocHelpers::PropertyData<QIcon>(7, 0x80000000 | 6, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 1),
        // property 'iconSize'
        QtMocHelpers::PropertyData<QSize>(10, 0x80000000 | 9, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 2),
        // property 'text'
        QtMocHelpers::PropertyData<QString>(12, QMetaType::QString, QMC::DefaultPropertyFlags, 3),
        // property 'frameOpacity'
        QtMocHelpers::PropertyData<qreal>(14, QMetaType::QReal, QMC::DefaultPropertyFlags, 4),
        // property 'crossFadeEnabled'
        QtMocHelpers::PropertyData<bool>(19, QMetaType::Bool, QMC::DefaultPropertyFlags, 5),
        // property 'crossFadeProgress'
        QtMocHelpers::PropertyData<qreal>(20, QMetaType::QReal, QMC::DefaultPropertyFlags, 6),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EffectFrameQuickScene, qt_meta_tag_ZN4KWin21EffectFrameQuickSceneE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::EffectFrameQuickScene::staticMetaObject = { {
    QMetaObject::SuperData::link<OffscreenQuickScene::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21EffectFrameQuickSceneE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21EffectFrameQuickSceneE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin21EffectFrameQuickSceneE_t>.metaTypes,
    nullptr
} };

void KWin::EffectFrameQuickScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EffectFrameQuickScene *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->fontChanged((*reinterpret_cast<std::add_pointer_t<QFont>>(_a[1]))); break;
        case 1: _t->iconChanged((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 2: _t->iconSizeChanged((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 3: _t->textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->frameOpacityChanged((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 5: _t->crossFadeEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->crossFadeProgressChanged((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (EffectFrameQuickScene::*)(const QFont & )>(_a, &EffectFrameQuickScene::fontChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectFrameQuickScene::*)(const QIcon & )>(_a, &EffectFrameQuickScene::iconChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectFrameQuickScene::*)(const QSize & )>(_a, &EffectFrameQuickScene::iconSizeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectFrameQuickScene::*)(const QString & )>(_a, &EffectFrameQuickScene::textChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectFrameQuickScene::*)(qreal )>(_a, &EffectFrameQuickScene::frameOpacityChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectFrameQuickScene::*)(bool )>(_a, &EffectFrameQuickScene::crossFadeEnabledChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (EffectFrameQuickScene::*)(qreal )>(_a, &EffectFrameQuickScene::crossFadeProgressChanged, 6))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QFont*>(_v) = _t->font(); break;
        case 1: *reinterpret_cast<QIcon*>(_v) = _t->icon(); break;
        case 2: *reinterpret_cast<QSize*>(_v) = _t->iconSize(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->text(); break;
        case 4: *reinterpret_cast<qreal*>(_v) = _t->frameOpacity(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->crossFadeEnabled(); break;
        case 6: *reinterpret_cast<qreal*>(_v) = _t->crossFadeProgress(); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::EffectFrameQuickScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::EffectFrameQuickScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin21EffectFrameQuickSceneE_t>.strings))
        return static_cast<void*>(this);
    return OffscreenQuickScene::qt_metacast(_clname);
}

int KWin::EffectFrameQuickScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OffscreenQuickScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void KWin::EffectFrameQuickScene::fontChanged(const QFont & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void KWin::EffectFrameQuickScene::iconChanged(const QIcon & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void KWin::EffectFrameQuickScene::iconSizeChanged(const QSize & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void KWin::EffectFrameQuickScene::textChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void KWin::EffectFrameQuickScene::frameOpacityChanged(qreal _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void KWin::EffectFrameQuickScene::crossFadeEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void KWin::EffectFrameQuickScene::crossFadeProgressChanged(qreal _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN4KWin11EffectFrameE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::EffectFrame::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin11EffectFrameE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::EffectFrame"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EffectFrame, qt_meta_tag_ZN4KWin11EffectFrameE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::EffectFrame::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin11EffectFrameE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin11EffectFrameE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin11EffectFrameE_t>.metaTypes,
    nullptr
} };

void KWin::EffectFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EffectFrame *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::EffectFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::EffectFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin11EffectFrameE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::EffectFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
