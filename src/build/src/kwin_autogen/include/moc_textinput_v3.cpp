/****************************************************************************
** Meta object code from reading C++ file 'textinput_v3.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/wayland/textinput_v3.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textinput_v3.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin27TextInputManagerV3InterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::TextInputManagerV3Interface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin27TextInputManagerV3InterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::TextInputManagerV3Interface"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TextInputManagerV3Interface, qt_meta_tag_ZN4KWin27TextInputManagerV3InterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::TextInputManagerV3Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin27TextInputManagerV3InterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin27TextInputManagerV3InterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin27TextInputManagerV3InterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::TextInputManagerV3Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TextInputManagerV3Interface *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *KWin::TextInputManagerV3Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::TextInputManagerV3Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin27TextInputManagerV3InterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::TextInputManagerV3Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4KWin20TextInputV3InterfaceE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::TextInputV3Interface::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin20TextInputV3InterfaceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::TextInputV3Interface",
        "cursorRectangleChanged",
        "",
        "RectF",
        "rect",
        "contentTypeChanged",
        "surroundingTextChanged",
        "enabledChanged",
        "stateCommitted",
        "serial",
        "enableRequested",
        "requestShowInputPanel",
        "requestHideInputPanel",
        "availableActionsChanged",
        "Action",
        "None",
        "Submit",
        "PreeditHint",
        "Whole",
        "Selection",
        "Prediction",
        "Prefix",
        "Suffix",
        "SpellingError",
        "ComposeError"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'cursorRectangleChanged'
        QtMocHelpers::SignalData<void(const RectF &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'contentTypeChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'surroundingTextChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'enabledChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'stateCommitted'
        QtMocHelpers::SignalData<void(quint32)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 9 },
        }}),
        // Signal 'enableRequested'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'requestShowInputPanel'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'requestHideInputPanel'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'availableActionsChanged'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Action'
        QtMocHelpers::EnumData<enum Action>(14, 14, QMC::EnumIsScoped).add({
            {   15, Action::None },
            {   16, Action::Submit },
        }),
        // enum 'PreeditHint'
        QtMocHelpers::EnumData<enum PreeditHint>(17, 17, QMC::EnumIsScoped).add({
            {   18, PreeditHint::Whole },
            {   19, PreeditHint::Selection },
            {   20, PreeditHint::Prediction },
            {   21, PreeditHint::Prefix },
            {   22, PreeditHint::Suffix },
            {   23, PreeditHint::SpellingError },
            {   24, PreeditHint::ComposeError },
        }),
    };
    return QtMocHelpers::metaObjectData<TextInputV3Interface, qt_meta_tag_ZN4KWin20TextInputV3InterfaceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::TextInputV3Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin20TextInputV3InterfaceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin20TextInputV3InterfaceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin20TextInputV3InterfaceE_t>.metaTypes,
    nullptr
} };

void KWin::TextInputV3Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TextInputV3Interface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->cursorRectangleChanged((*reinterpret_cast<std::add_pointer_t<RectF>>(_a[1]))); break;
        case 1: _t->contentTypeChanged(); break;
        case 2: _t->surroundingTextChanged(); break;
        case 3: _t->enabledChanged(); break;
        case 4: _t->stateCommitted((*reinterpret_cast<std::add_pointer_t<quint32>>(_a[1]))); break;
        case 5: _t->enableRequested(); break;
        case 6: _t->requestShowInputPanel(); break;
        case 7: _t->requestHideInputPanel(); break;
        case 8: _t->availableActionsChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TextInputV3Interface::*)(const RectF & )>(_a, &TextInputV3Interface::cursorRectangleChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextInputV3Interface::*)()>(_a, &TextInputV3Interface::contentTypeChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextInputV3Interface::*)()>(_a, &TextInputV3Interface::surroundingTextChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextInputV3Interface::*)()>(_a, &TextInputV3Interface::enabledChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextInputV3Interface::*)(quint32 )>(_a, &TextInputV3Interface::stateCommitted, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextInputV3Interface::*)()>(_a, &TextInputV3Interface::enableRequested, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextInputV3Interface::*)()>(_a, &TextInputV3Interface::requestShowInputPanel, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextInputV3Interface::*)()>(_a, &TextInputV3Interface::requestHideInputPanel, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextInputV3Interface::*)()>(_a, &TextInputV3Interface::availableActionsChanged, 8))
            return;
    }
}

const QMetaObject *KWin::TextInputV3Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::TextInputV3Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin20TextInputV3InterfaceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::TextInputV3Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void KWin::TextInputV3Interface::cursorRectangleChanged(const RectF & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void KWin::TextInputV3Interface::contentTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::TextInputV3Interface::surroundingTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::TextInputV3Interface::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWin::TextInputV3Interface::stateCommitted(quint32 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void KWin::TextInputV3Interface::enableRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KWin::TextInputV3Interface::requestShowInputPanel()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void KWin::TextInputV3Interface::requestHideInputPanel()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void KWin::TextInputV3Interface::availableActionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
