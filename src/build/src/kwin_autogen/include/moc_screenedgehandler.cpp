/****************************************************************************
** Meta object code from reading C++ file 'screenedgehandler.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/scripting/screenedgehandler.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screenedgehandler.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin17ScreenEdgeHandlerE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::ScreenEdgeHandler::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin17ScreenEdgeHandlerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::ScreenEdgeHandler",
        "enabledChanged",
        "",
        "edgeChanged",
        "modeChanged",
        "activated",
        "setEnabled",
        "enabled",
        "setEdge",
        "Edge",
        "edge",
        "setMode",
        "Mode",
        "mode",
        "borderActivated",
        "ElectricBorder",
        "TopEdge",
        "TopRightEdge",
        "RightEdge",
        "BottomRightEdge",
        "BottomEdge",
        "BottomLeftEdge",
        "LeftEdge",
        "TopLeftEdge",
        "EDGE_COUNT",
        "NoEdge",
        "Pointer",
        "Touch"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'enabledChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'edgeChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'modeChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activated'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setEnabled'
        QtMocHelpers::SlotData<void(bool)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Slot 'setEdge'
        QtMocHelpers::SlotData<void(enum Edge)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Slot 'setMode'
        QtMocHelpers::SlotData<void(enum Mode)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'borderActivated'
        QtMocHelpers::SlotData<bool(ElectricBorder)>(14, 2, QMC::AccessPrivate, QMetaType::Bool, {{
            { 0x80000000 | 15, 10 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'enabled'
        QtMocHelpers::PropertyData<bool>(7, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'edge'
        QtMocHelpers::PropertyData<enum Edge>(10, 0x80000000 | 9, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'mode'
        QtMocHelpers::PropertyData<enum Mode>(13, 0x80000000 | 12, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 2),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Edge'
        QtMocHelpers::EnumData<enum Edge>(9, 9, QMC::EnumFlags{}).add({
            {   16, Edge::TopEdge },
            {   17, Edge::TopRightEdge },
            {   18, Edge::RightEdge },
            {   19, Edge::BottomRightEdge },
            {   20, Edge::BottomEdge },
            {   21, Edge::BottomLeftEdge },
            {   22, Edge::LeftEdge },
            {   23, Edge::TopLeftEdge },
            {   24, Edge::EDGE_COUNT },
            {   25, Edge::NoEdge },
        }),
        // enum 'Mode'
        QtMocHelpers::EnumData<enum Mode>(12, 12, QMC::EnumIsScoped).add({
            {   26, Mode::Pointer },
            {   27, Mode::Touch },
        }),
    };
    return QtMocHelpers::metaObjectData<ScreenEdgeHandler, qt_meta_tag_ZN4KWin17ScreenEdgeHandlerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::ScreenEdgeHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17ScreenEdgeHandlerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17ScreenEdgeHandlerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin17ScreenEdgeHandlerE_t>.metaTypes,
    nullptr
} };

void KWin::ScreenEdgeHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScreenEdgeHandler *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->enabledChanged(); break;
        case 1: _t->edgeChanged(); break;
        case 2: _t->modeChanged(); break;
        case 3: _t->activated(); break;
        case 4: _t->setEnabled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->setEdge((*reinterpret_cast<std::add_pointer_t<enum Edge>>(_a[1]))); break;
        case 6: _t->setMode((*reinterpret_cast<std::add_pointer_t<enum Mode>>(_a[1]))); break;
        case 7: { bool _r = _t->borderActivated((*reinterpret_cast<std::add_pointer_t<ElectricBorder>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ScreenEdgeHandler::*)()>(_a, &ScreenEdgeHandler::enabledChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScreenEdgeHandler::*)()>(_a, &ScreenEdgeHandler::edgeChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScreenEdgeHandler::*)()>(_a, &ScreenEdgeHandler::modeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScreenEdgeHandler::*)()>(_a, &ScreenEdgeHandler::activated, 3))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isEnabled(); break;
        case 1: *reinterpret_cast<enum Edge*>(_v) = _t->edge(); break;
        case 2: *reinterpret_cast<enum Mode*>(_v) = _t->mode(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 1: _t->setEdge(*reinterpret_cast<enum Edge*>(_v)); break;
        case 2: _t->setMode(*reinterpret_cast<enum Mode*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::ScreenEdgeHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::ScreenEdgeHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin17ScreenEdgeHandlerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::ScreenEdgeHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void KWin::ScreenEdgeHandler::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::ScreenEdgeHandler::edgeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::ScreenEdgeHandler::modeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::ScreenEdgeHandler::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
