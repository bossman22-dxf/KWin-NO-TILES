/****************************************************************************
** Meta object code from reading C++ file 'screenshot2adaptor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "screenshot2adaptor.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screenshot2adaptor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18ScreenShot2AdaptorE_t {};
} // unnamed namespace

template <> constexpr inline auto ScreenShot2Adaptor::qt_create_metaobjectdata<qt_meta_tag_ZN18ScreenShot2AdaptorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ScreenShot2Adaptor",
        "D-Bus Interface",
        "org.kde.KWin.ScreenShot2",
        "D-Bus Introspection",
        "  <interface name=\"org.kde.KWin.ScreenShot2\">\n    <property acc"
        "ess=\"read\" type=\"u\" name=\"Version\"/>\n    <method name=\"Cap"
        "tureWindow\">\n      <arg direction=\"in\" type=\"s\" name=\"handl"
        "e\"/>\n      <annotation value=\"QVariantMap\" name=\"org.qtprojec"
        "t.QtDBus.QtTypeName.In1\"/>\n      <arg direction=\"in\" type=\"a{"
        "sv}\" name=\"options\"/>\n      <arg direction=\"in\" type=\"h\" n"
        "ame=\"pipe\"/>\n      <annotation value=\"QVariantMap\" name=\"org"
        ".qtproject.QtDBus.QtTypeName.Out0\"/>\n      <arg direction=\"out\""
        " type=\"a{sv}\" name=\"results\"/>\n    </method>\n    <method nam"
        "e=\"CaptureActiveWindow\">\n      <annotation value=\"QVariantMap\""
        " name=\"org.qtproject.QtDBus.QtTypeName.In0\"/>\n      <arg direct"
        "ion=\"in\" type=\"a{sv}\" name=\"options\"/>\n      <arg direction"
        "=\"in\" type=\"h\" name=\"pipe\"/>\n      <annotation value=\"QVar"
        "iantMap\" name=\"org.qtproject.QtDBus.QtTypeName.Out0\"/>\n      <"
        "arg direction=\"out\" type=\"a{sv}\" name=\"results\"/>\n    </met"
        "hod>\n    <method name=\"CaptureArea\">\n      <arg direction=\"in"
        "\" type=\"i\" name=\"x\"/>\n      <arg direction=\"in\" type=\"i\""
        " name=\"y\"/>\n      <arg direction=\"in\" type=\"u\" name=\"width"
        "\"/>\n      <arg direction=\"in\" type=\"u\" name=\"height\"/>\n  "
        "    <annotation value=\"QVariantMap\" name=\"org.qtproject.QtDBus."
        "QtTypeName.In4\"/>\n      <arg direction=\"in\" type=\"a{sv}\" nam"
        "e=\"options\"/>\n      <arg direction=\"in\" type=\"h\" name=\"pip"
        "e\"/>\n      <annotation value=\"QVariantMap\" name=\"org.qtprojec"
        "t.QtDBus.QtTypeName.Out0\"/>\n      <arg direction=\"out\" type=\""
        "a{sv}\" name=\"results\"/>\n    </method>\n    <method name=\"Capt"
        "ureScreen\">\n      <arg direction=\"in\" type=\"s\" name=\"name\""
        "/>\n      <annotation value=\"QVariantMap\" name=\"org.qtproject.Q"
        "tDBus.QtTypeName.In1\"/>\n      <arg direction=\"in\" type=\"a{sv}"
        "\" name=\"options\"/>\n      <arg direction=\"in\" type=\"h\" name"
        "=\"pipe\"/>\n      <annotation value=\"QVariantMap\" name=\"org.qt"
        "project.QtDBus.QtTypeName.Out0\"/>\n      <arg direction=\"out\" t"
        "ype=\"a{sv}\" name=\"results\"/>\n    </method>\n    <method name="
        "\"CaptureActiveScreen\">\n      <annotation value=\"QVariantMap\" "
        "name=\"org.qtproject.QtDBus.QtTypeName.In0\"/>\n      <arg directi"
        "on=\"in\" type=\"a{sv}\" name=\"options\"/>\n      <arg direction="
        "\"in\" type=\"h\" name=\"pipe\"/>\n      <annotation value=\"QVari"
        "antMap\" name=\"org.qtproject.QtDBus.QtTypeName.Out0\"/>\n      <a"
        "rg direction=\"out\" type=\"a{sv}\" name=\"results\"/>\n    </meth"
        "od>\n    <method name=\"CaptureInteractive\">\n      <arg directio"
        "n=\"in\" type=\"u\" name=\"kind\"/>\n      <annotation value=\"QVa"
        "riantMap\" name=\"org.qtproject.QtDBus.QtTypeName.In1\"/>\n      <"
        "arg direction=\"in\" type=\"a{sv}\" name=\"options\"/>\n      <arg"
        " direction=\"in\" type=\"h\" name=\"pipe\"/>\n      <annotation va"
        "lue=\"QVariantMap\" name=\"org.qtproject.QtDBus.QtTypeName.Out0\"/"
        ">\n      <arg direction=\"out\" type=\"a{sv}\" name=\"results\"/>\n"
        "    </method>\n    <method name=\"CaptureWorkspace\">\n      <anno"
        "tation value=\"QVariantMap\" name=\"org.qtproject.QtDBus.QtTypeNam"
        "e.In0\"/>\n      <arg direction=\"in\" type=\"a{sv}\" name=\"optio"
        "ns\"/>\n      <arg direction=\"in\" type=\"h\" name=\"pipe\"/>\n  "
        "    <annotation value=\"QVariantMap\" name=\"org.qtproject.QtDBus."
        "QtTypeName.Out0\"/>\n      <arg direction=\"out\" type=\"a{sv}\" n"
        "ame=\"results\"/>\n    </method>\n  </interface>\n",
        "CaptureActiveScreen",
        "QVariantMap",
        "",
        "options",
        "QDBusUnixFileDescriptor",
        "pipe",
        "CaptureActiveWindow",
        "CaptureArea",
        "x",
        "y",
        "width",
        "height",
        "CaptureInteractive",
        "kind",
        "CaptureScreen",
        "name",
        "CaptureWindow",
        "handle",
        "CaptureWorkspace",
        "Version"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'CaptureActiveScreen'
        QtMocHelpers::SlotData<QVariantMap(const QVariantMap &, const QDBusUnixFileDescriptor &)>(5, 7, QMC::AccessPublic, 0x80000000 | 6, {{
            { 0x80000000 | 6, 8 }, { 0x80000000 | 9, 10 },
        }}),
        // Slot 'CaptureActiveWindow'
        QtMocHelpers::SlotData<QVariantMap(const QVariantMap &, const QDBusUnixFileDescriptor &)>(11, 7, QMC::AccessPublic, 0x80000000 | 6, {{
            { 0x80000000 | 6, 8 }, { 0x80000000 | 9, 10 },
        }}),
        // Slot 'CaptureArea'
        QtMocHelpers::SlotData<QVariantMap(int, int, uint, uint, const QVariantMap &, const QDBusUnixFileDescriptor &)>(12, 7, QMC::AccessPublic, 0x80000000 | 6, {{
            { QMetaType::Int, 13 }, { QMetaType::Int, 14 }, { QMetaType::UInt, 15 }, { QMetaType::UInt, 16 },
            { 0x80000000 | 6, 8 }, { 0x80000000 | 9, 10 },
        }}),
        // Slot 'CaptureInteractive'
        QtMocHelpers::SlotData<QVariantMap(uint, const QVariantMap &, const QDBusUnixFileDescriptor &)>(17, 7, QMC::AccessPublic, 0x80000000 | 6, {{
            { QMetaType::UInt, 18 }, { 0x80000000 | 6, 8 }, { 0x80000000 | 9, 10 },
        }}),
        // Slot 'CaptureScreen'
        QtMocHelpers::SlotData<QVariantMap(const QString &, const QVariantMap &, const QDBusUnixFileDescriptor &)>(19, 7, QMC::AccessPublic, 0x80000000 | 6, {{
            { QMetaType::QString, 20 }, { 0x80000000 | 6, 8 }, { 0x80000000 | 9, 10 },
        }}),
        // Slot 'CaptureWindow'
        QtMocHelpers::SlotData<QVariantMap(const QString &, const QVariantMap &, const QDBusUnixFileDescriptor &)>(21, 7, QMC::AccessPublic, 0x80000000 | 6, {{
            { QMetaType::QString, 22 }, { 0x80000000 | 6, 8 }, { 0x80000000 | 9, 10 },
        }}),
        // Slot 'CaptureWorkspace'
        QtMocHelpers::SlotData<QVariantMap(const QVariantMap &, const QDBusUnixFileDescriptor &)>(23, 7, QMC::AccessPublic, 0x80000000 | 6, {{
            { 0x80000000 | 6, 8 }, { 0x80000000 | 9, 10 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'Version'
        QtMocHelpers::PropertyData<uint>(24, QMetaType::UInt, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<ScreenShot2Adaptor, qt_meta_tag_ZN18ScreenShot2AdaptorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject ScreenShot2Adaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18ScreenShot2AdaptorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18ScreenShot2AdaptorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18ScreenShot2AdaptorE_t>.metaTypes,
    nullptr
} };

void ScreenShot2Adaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScreenShot2Adaptor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QVariantMap _r = _t->CaptureActiveScreen((*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QDBusUnixFileDescriptor>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 1: { QVariantMap _r = _t->CaptureActiveWindow((*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QDBusUnixFileDescriptor>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 2: { QVariantMap _r = _t->CaptureArea((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<QDBusUnixFileDescriptor>>(_a[6])));
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 3: { QVariantMap _r = _t->CaptureInteractive((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QDBusUnixFileDescriptor>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 4: { QVariantMap _r = _t->CaptureScreen((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QDBusUnixFileDescriptor>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 5: { QVariantMap _r = _t->CaptureWindow((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QDBusUnixFileDescriptor>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 6: { QVariantMap _r = _t->CaptureWorkspace((*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QDBusUnixFileDescriptor>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<uint*>(_v) = _t->version(); break;
        default: break;
        }
    }
}

const QMetaObject *ScreenShot2Adaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreenShot2Adaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18ScreenShot2AdaptorE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int ScreenShot2Adaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
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
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
