/****************************************************************************
** Meta object code from reading C++ file 'screenshotdbusinterface2.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/plugins/screenshot/screenshotdbusinterface2.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screenshotdbusinterface2.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin24ScreenShotDBusInterface2E_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::ScreenShotDBusInterface2::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin24ScreenShotDBusInterface2E_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::ScreenShotDBusInterface2",
        "CaptureWindow",
        "QVariantMap",
        "",
        "handle",
        "options",
        "QDBusUnixFileDescriptor",
        "pipe",
        "CaptureActiveWindow",
        "CaptureArea",
        "x",
        "y",
        "width",
        "height",
        "CaptureScreen",
        "name",
        "CaptureActiveScreen",
        "CaptureInteractive",
        "kind",
        "CaptureWorkspace",
        "Version"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'CaptureWindow'
        QtMocHelpers::SlotData<QVariantMap(const QString &, const QVariantMap &, QDBusUnixFileDescriptor)>(1, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::QString, 4 }, { 0x80000000 | 2, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'CaptureActiveWindow'
        QtMocHelpers::SlotData<QVariantMap(const QVariantMap &, QDBusUnixFileDescriptor)>(8, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { 0x80000000 | 2, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'CaptureArea'
        QtMocHelpers::SlotData<QVariantMap(int, int, int, int, const QVariantMap &, QDBusUnixFileDescriptor)>(9, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::Int, 10 }, { QMetaType::Int, 11 }, { QMetaType::Int, 12 }, { QMetaType::Int, 13 },
            { 0x80000000 | 2, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'CaptureScreen'
        QtMocHelpers::SlotData<QVariantMap(const QString &, const QVariantMap &, QDBusUnixFileDescriptor)>(14, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::QString, 15 }, { 0x80000000 | 2, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'CaptureActiveScreen'
        QtMocHelpers::SlotData<QVariantMap(const QVariantMap &, QDBusUnixFileDescriptor)>(16, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { 0x80000000 | 2, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'CaptureInteractive'
        QtMocHelpers::SlotData<QVariantMap(uint, const QVariantMap &, QDBusUnixFileDescriptor)>(17, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::UInt, 18 }, { 0x80000000 | 2, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'CaptureWorkspace'
        QtMocHelpers::SlotData<QVariantMap(const QVariantMap &, QDBusUnixFileDescriptor)>(19, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { 0x80000000 | 2, 5 }, { 0x80000000 | 6, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'Version'
        QtMocHelpers::PropertyData<int>(20, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ScreenShotDBusInterface2, qt_meta_tag_ZN4KWin24ScreenShotDBusInterface2E_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::ScreenShotDBusInterface2::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin24ScreenShotDBusInterface2E_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin24ScreenShotDBusInterface2E_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin24ScreenShotDBusInterface2E_t>.metaTypes,
    nullptr
} };

void KWin::ScreenShotDBusInterface2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScreenShotDBusInterface2 *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QVariantMap _r = _t->CaptureWindow((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QDBusUnixFileDescriptor>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 1: { QVariantMap _r = _t->CaptureActiveWindow((*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QDBusUnixFileDescriptor>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 2: { QVariantMap _r = _t->CaptureArea((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<QDBusUnixFileDescriptor>>(_a[6])));
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 3: { QVariantMap _r = _t->CaptureScreen((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QDBusUnixFileDescriptor>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 4: { QVariantMap _r = _t->CaptureActiveScreen((*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QDBusUnixFileDescriptor>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 5: { QVariantMap _r = _t->CaptureInteractive((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QDBusUnixFileDescriptor>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 6: { QVariantMap _r = _t->CaptureWorkspace((*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QDBusUnixFileDescriptor>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QDBusUnixFileDescriptor >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QDBusUnixFileDescriptor >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 5:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QDBusUnixFileDescriptor >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QDBusUnixFileDescriptor >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QDBusUnixFileDescriptor >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QDBusUnixFileDescriptor >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QDBusUnixFileDescriptor >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->version(); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::ScreenShotDBusInterface2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::ScreenShotDBusInterface2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin24ScreenShotDBusInterface2E_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QDBusContext"))
        return static_cast< QDBusContext*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::ScreenShotDBusInterface2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
