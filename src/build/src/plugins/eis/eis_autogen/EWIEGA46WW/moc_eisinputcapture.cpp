/****************************************************************************
** Meta object code from reading C++ file 'eisinputcapture.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/plugins/eis/eisinputcapture.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eisinputcapture.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin15EisInputCaptureE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::EisInputCapture::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin15EisInputCaptureE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::EisInputCapture",
        "D-Bus Interface",
        "org.kde.KWin.EIS.InputCapture",
        "disabled",
        "",
        "activated",
        "activationId",
        "id",
        "QPointF",
        "cursorPosition",
        "deactivated",
        "connectToEIS",
        "QDBusUnixFileDescriptor",
        "enable",
        "QList<std::tuple<uint,QPoint,QPoint>>",
        "barriers",
        "disable",
        "release",
        "applyPosition"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'disabled'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activated'
        QtMocHelpers::SignalData<void(uint, uint, const QPointF &)>(5, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 6 }, { QMetaType::UInt, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Signal 'deactivated'
        QtMocHelpers::SignalData<void(uint)>(10, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 6 },
        }}),
        // Method 'connectToEIS'
        QtMocHelpers::MethodData<QDBusUnixFileDescriptor()>(11, 4, QMC::AccessPublic, 0x80000000 | 12),
        // Method 'enable'
        QtMocHelpers::MethodData<void(const QList<std::tuple<uint,QPoint,QPoint>> &)>(13, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Method 'disable'
        QtMocHelpers::MethodData<void()>(16, 4, QMC::AccessPublic, QMetaType::Void),
        // Method 'release'
        QtMocHelpers::MethodData<void(const QPointF &, bool)>(17, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { QMetaType::Bool, 18 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<EisInputCapture, qt_meta_tag_ZN4KWin15EisInputCaptureE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject KWin::EisInputCapture::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin15EisInputCaptureE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin15EisInputCaptureE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin15EisInputCaptureE_t>.metaTypes,
    nullptr
} };

void KWin::EisInputCapture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EisInputCapture *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->disabled(); break;
        case 1: _t->activated((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[3]))); break;
        case 2: _t->deactivated((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 3: { QDBusUnixFileDescriptor _r = _t->connectToEIS();
            if (_a[0]) *reinterpret_cast<QDBusUnixFileDescriptor*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->enable((*reinterpret_cast<std::add_pointer_t<QList<std::tuple<uint,QPoint,QPoint>>>>(_a[1]))); break;
        case 5: _t->disable(); break;
        case 6: _t->release((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (EisInputCapture::*)()>(_a, &EisInputCapture::disabled, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (EisInputCapture::*)(uint , uint , const QPointF & )>(_a, &EisInputCapture::activated, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (EisInputCapture::*)(uint )>(_a, &EisInputCapture::deactivated, 2))
            return;
    }
}

const QMetaObject *KWin::EisInputCapture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::EisInputCapture::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin15EisInputCaptureE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::EisInputCapture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void KWin::EisInputCapture::disabled()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::EisInputCapture::activated(uint _t1, uint _t2, const QPointF & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3);
}

// SIGNAL 2
void KWin::EisInputCapture::deactivated(uint _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP
