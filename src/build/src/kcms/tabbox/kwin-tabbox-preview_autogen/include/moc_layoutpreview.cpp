/****************************************************************************
** Meta object code from reading C++ file 'layoutpreview.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/kcms/tabbox/layoutpreview.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layoutpreview.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin6TabBox13LayoutPreviewE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::TabBox::LayoutPreview::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin6TabBox13LayoutPreviewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::TabBox::LayoutPreview"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<LayoutPreview, qt_meta_tag_ZN4KWin6TabBox13LayoutPreviewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::TabBox::LayoutPreview::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin6TabBox13LayoutPreviewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin6TabBox13LayoutPreviewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin6TabBox13LayoutPreviewE_t>.metaTypes,
    nullptr
} };

void KWin::TabBox::LayoutPreview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LayoutPreview *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::TabBox::LayoutPreview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::TabBox::LayoutPreview::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin6TabBox13LayoutPreviewE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::TabBox::LayoutPreview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin6TabBox18ExampleClientModelE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::TabBox::ExampleClientModel::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin6TabBox18ExampleClientModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::TabBox::ExampleClientModel",
        "longestCaption",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'longestCaption'
        QtMocHelpers::MethodData<QString() const>(1, 2, QMC::AccessPublic, QMetaType::QString),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ExampleClientModel, qt_meta_tag_ZN4KWin6TabBox18ExampleClientModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::TabBox::ExampleClientModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin6TabBox18ExampleClientModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin6TabBox18ExampleClientModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin6TabBox18ExampleClientModelE_t>.metaTypes,
    nullptr
} };

void KWin::TabBox::ExampleClientModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ExampleClientModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QString _r = _t->longestCaption();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *KWin::TabBox::ExampleClientModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::TabBox::ExampleClientModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin6TabBox18ExampleClientModelE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int KWin::TabBox::ExampleClientModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
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
        "aboutToShow",
        "aboutToHide",
        "model",
        "QAbstractItemModel*",
        "screenGeometry",
        "QRect",
        "visible",
        "allDesktops",
        "currentIndex"
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
        // Signal 'aboutToShow'
        QtMocHelpers::SignalData<void()>(11, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'aboutToHide'
        QtMocHelpers::SignalData<void()>(12, 4, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'model'
        QtMocHelpers::PropertyData<QAbstractItemModel*>(13, 0x80000000 | 14, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 2),
        // property 'screenGeometry'
        QtMocHelpers::PropertyData<QRect>(15, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 4),
        // property 'visible'
        QtMocHelpers::PropertyData<bool>(17, QMetaType::Bool, QMC::DefaultPropertyFlags, 0),
        // property 'allDesktops'
        QtMocHelpers::PropertyData<bool>(18, QMetaType::Bool, QMC::DefaultPropertyFlags, 3),
        // property 'currentIndex'
        QtMocHelpers::PropertyData<int>(19, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
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
        case 6: _t->aboutToShow(); break;
        case 7: _t->aboutToHide(); break;
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
        if (QtMocHelpers::indexOfMethod<void (SwitcherItem::*)()>(_a, &SwitcherItem::aboutToShow, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (SwitcherItem::*)()>(_a, &SwitcherItem::aboutToHide, 7))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QAbstractItemModel**>(_v) = _t->model(); break;
        case 1: *reinterpret_cast<QRect*>(_v) = _t->screenGeometry(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isVisible(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isAllDesktops(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->currentIndex(); break;
        case 5: *reinterpret_cast<QObject**>(_v) = _t->item(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setCurrentIndex(*reinterpret_cast<int*>(_v)); break;
        case 5: _t->setItem(*reinterpret_cast<QObject**>(_v)); break;
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
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
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
void KWin::TabBox::SwitcherItem::aboutToShow()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void KWin::TabBox::SwitcherItem::aboutToHide()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
namespace {
struct qt_meta_tag_ZN4KWin6TabBox17DesktopBackgroundE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::TabBox::DesktopBackground::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin6TabBox17DesktopBackgroundE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::TabBox::DesktopBackground",
        "stretchToScreen",
        "",
        "activity",
        "QVariant",
        "desktop",
        "outputName"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'stretchToScreen'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'activity'
        QtMocHelpers::PropertyData<QVariant>(3, 0x80000000 | 4, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'desktop'
        QtMocHelpers::PropertyData<QVariant>(5, 0x80000000 | 4, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'outputName'
        QtMocHelpers::PropertyData<QString>(6, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DesktopBackground, qt_meta_tag_ZN4KWin6TabBox17DesktopBackgroundE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::TabBox::DesktopBackground::staticMetaObject = { {
    QMetaObject::SuperData::link<WindowThumbnailItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin6TabBox17DesktopBackgroundE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin6TabBox17DesktopBackgroundE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin6TabBox17DesktopBackgroundE_t>.metaTypes,
    nullptr
} };

void KWin::TabBox::DesktopBackground::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DesktopBackground *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->stretchToScreen(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QVariant*>(_v) = _t->m_activity; break;
        case 1: *reinterpret_cast<QVariant*>(_v) = _t->m_desktop; break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->m_outputName; break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: QtMocHelpers::setProperty(_t->m_activity, *reinterpret_cast<QVariant*>(_v)); break;
        case 1: QtMocHelpers::setProperty(_t->m_desktop, *reinterpret_cast<QVariant*>(_v)); break;
        case 2: QtMocHelpers::setProperty(_t->m_outputName, *reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::TabBox::DesktopBackground::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::TabBox::DesktopBackground::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin6TabBox17DesktopBackgroundE_t>.strings))
        return static_cast<void*>(this);
    return WindowThumbnailItem::qt_metacast(_clname);
}

int KWin::TabBox::DesktopBackground::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WindowThumbnailItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
