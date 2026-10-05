/****************************************************************************
** Meta object code from reading C++ file 'internalinputmethodcontext.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/internalinputmethodcontext.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'internalinputmethodcontext.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin26InternalInputMethodContextE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::InternalInputMethodContext::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin26InternalInputMethodContextE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::InternalInputMethodContext",
        "cursorRectangleChanged",
        "",
        "QRect",
        "rect",
        "contentTypeChanged",
        "surroundingTextChanged",
        "enabledChanged",
        "stateCommitted",
        "serial",
        "enableRequested",
        "showInputPanelRequested",
        "hideInputPanelRequested"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'cursorRectangleChanged'
        QtMocHelpers::SignalData<void(const QRect &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
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
        // Signal 'showInputPanelRequested'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hideInputPanelRequested'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<InternalInputMethodContext, qt_meta_tag_ZN4KWin26InternalInputMethodContextE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::InternalInputMethodContext::staticMetaObject = { {
    QMetaObject::SuperData::link<QPlatformInputContext::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin26InternalInputMethodContextE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin26InternalInputMethodContextE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin26InternalInputMethodContextE_t>.metaTypes,
    nullptr
} };

void KWin::InternalInputMethodContext::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InternalInputMethodContext *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->cursorRectangleChanged((*reinterpret_cast<std::add_pointer_t<QRect>>(_a[1]))); break;
        case 1: _t->contentTypeChanged(); break;
        case 2: _t->surroundingTextChanged(); break;
        case 3: _t->enabledChanged(); break;
        case 4: _t->stateCommitted((*reinterpret_cast<std::add_pointer_t<quint32>>(_a[1]))); break;
        case 5: _t->enableRequested(); break;
        case 6: _t->showInputPanelRequested(); break;
        case 7: _t->hideInputPanelRequested(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (InternalInputMethodContext::*)(const QRect & )>(_a, &InternalInputMethodContext::cursorRectangleChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (InternalInputMethodContext::*)()>(_a, &InternalInputMethodContext::contentTypeChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (InternalInputMethodContext::*)()>(_a, &InternalInputMethodContext::surroundingTextChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (InternalInputMethodContext::*)()>(_a, &InternalInputMethodContext::enabledChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (InternalInputMethodContext::*)(quint32 )>(_a, &InternalInputMethodContext::stateCommitted, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (InternalInputMethodContext::*)()>(_a, &InternalInputMethodContext::enableRequested, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (InternalInputMethodContext::*)()>(_a, &InternalInputMethodContext::showInputPanelRequested, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (InternalInputMethodContext::*)()>(_a, &InternalInputMethodContext::hideInputPanelRequested, 7))
            return;
    }
}

const QMetaObject *KWin::InternalInputMethodContext::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::InternalInputMethodContext::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin26InternalInputMethodContextE_t>.strings))
        return static_cast<void*>(this);
    return QPlatformInputContext::qt_metacast(_clname);
}

int KWin::InternalInputMethodContext::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformInputContext::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void KWin::InternalInputMethodContext::cursorRectangleChanged(const QRect & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void KWin::InternalInputMethodContext::contentTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::InternalInputMethodContext::surroundingTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::InternalInputMethodContext::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWin::InternalInputMethodContext::stateCommitted(quint32 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void KWin::InternalInputMethodContext::enableRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KWin::InternalInputMethodContext::showInputPanelRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void KWin::InternalInputMethodContext::hideInputPanelRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
