/****************************************************************************
** Meta object code from reading C++ file 'tabbox.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/tabbox/tabbox.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabbox.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin6TabBox6TabBoxE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::TabBox::TabBox::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin6TabBox6TabBoxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::TabBox::TabBox",
        "tabBoxAdded",
        "",
        "tabBoxClosed",
        "tabBoxUpdated",
        "tabBoxKeyEvent",
        "QKeyEvent*",
        "show",
        "close",
        "abort",
        "accept",
        "closeTabBox",
        "slotWalkThroughWindows",
        "slotWalkBackThroughWindows",
        "slotWalkThroughWindowsAlternative",
        "slotWalkBackThroughWindowsAlternative",
        "slotWalkThroughCurrentAppWindows",
        "slotWalkBackThroughCurrentAppWindows",
        "slotWalkThroughCurrentAppWindowsAlternative",
        "slotWalkBackThroughCurrentAppWindowsAlternative",
        "handlerReady",
        "toggle",
        "ElectricBorder",
        "eb",
        "reconfigure",
        "globalShortcutChanged",
        "QAction*",
        "action",
        "QList<QKeySequence>",
        "seq"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'tabBoxAdded'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'tabBoxClosed'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'tabBoxUpdated'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'tabBoxKeyEvent'
        QtMocHelpers::SignalData<void(QKeyEvent *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 2 },
        }}),
        // Slot 'show'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'close'
        QtMocHelpers::SlotData<void(bool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Slot 'close'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'accept'
        QtMocHelpers::SlotData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Slot 'accept'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'slotWalkThroughWindows'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWalkBackThroughWindows'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWalkThroughWindowsAlternative'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWalkBackThroughWindowsAlternative'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWalkThroughCurrentAppWindows'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWalkBackThroughCurrentAppWindows'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWalkThroughCurrentAppWindowsAlternative'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotWalkBackThroughCurrentAppWindowsAlternative'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'handlerReady'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'toggle'
        QtMocHelpers::SlotData<bool(ElectricBorder)>(21, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Slot 'reconfigure'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'globalShortcutChanged'
        QtMocHelpers::SlotData<void(QAction *, const QList<QKeySequence> &)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 26, 27 }, { 0x80000000 | 28, 29 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TabBox, qt_meta_tag_ZN4KWin6TabBox6TabBoxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::TabBox::TabBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin6TabBox6TabBoxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin6TabBox6TabBoxE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin6TabBox6TabBoxE_t>.metaTypes,
    nullptr
} };

void KWin::TabBox::TabBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TabBox *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->tabBoxAdded((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->tabBoxClosed(); break;
        case 2: _t->tabBoxUpdated(); break;
        case 3: _t->tabBoxKeyEvent((*reinterpret_cast<std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 4: _t->show(); break;
        case 5: _t->close((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->close(); break;
        case 7: _t->accept((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->accept(); break;
        case 9: _t->slotWalkThroughWindows(); break;
        case 10: _t->slotWalkBackThroughWindows(); break;
        case 11: _t->slotWalkThroughWindowsAlternative(); break;
        case 12: _t->slotWalkBackThroughWindowsAlternative(); break;
        case 13: _t->slotWalkThroughCurrentAppWindows(); break;
        case 14: _t->slotWalkBackThroughCurrentAppWindows(); break;
        case 15: _t->slotWalkThroughCurrentAppWindowsAlternative(); break;
        case 16: _t->slotWalkBackThroughCurrentAppWindowsAlternative(); break;
        case 17: _t->handlerReady(); break;
        case 18: { bool _r = _t->toggle((*reinterpret_cast<std::add_pointer_t<ElectricBorder>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 19: _t->reconfigure(); break;
        case 20: _t->globalShortcutChanged((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QList<QKeySequence>>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TabBox::*)(int )>(_a, &TabBox::tabBoxAdded, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabBox::*)()>(_a, &TabBox::tabBoxClosed, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabBox::*)()>(_a, &TabBox::tabBoxUpdated, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabBox::*)(QKeyEvent * )>(_a, &TabBox::tabBoxKeyEvent, 3))
            return;
    }
}

const QMetaObject *KWin::TabBox::TabBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::TabBox::TabBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin6TabBox6TabBoxE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::TabBox::TabBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void KWin::TabBox::TabBox::tabBoxAdded(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void KWin::TabBox::TabBox::tabBoxClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::TabBox::TabBox::tabBoxUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::TabBox::TabBox::tabBoxKeyEvent(QKeyEvent * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
