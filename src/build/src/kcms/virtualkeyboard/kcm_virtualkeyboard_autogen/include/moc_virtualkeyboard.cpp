/****************************************************************************
** Meta object code from reading C++ file 'virtualkeyboard.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/kcms/virtualkeyboard/virtualkeyboard.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'virtualkeyboard.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN19KWinVirtualKeyboardE_t {};
} // unnamed namespace

template <> constexpr inline auto KWinVirtualKeyboard::qt_create_metaobjectdata<qt_meta_tag_ZN19KWinVirtualKeyboardE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWinVirtualKeyboard",
        "QML.Element",
        "auto",
        "activeChanged",
        "modeChanged",
        "visibleChanged",
        "availableChanged",
        "activeClientSupportsTextInputChanged",
        "active",
        "mode",
        "visible",
        "available",
        "activeClientSupportsTextInput",
        "VirtualKeyboardMode",
        "Off",
        "TouchOnly",
        "On"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'active'
        QtMocHelpers::PropertyData<bool>(8, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0x70000000 | 3),
        // property 'mode'
        QtMocHelpers::PropertyData<int>(9, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0x70000000 | 4),
        // property 'visible'
        QtMocHelpers::PropertyData<bool>(10, QMetaType::Bool, QMC::DefaultPropertyFlags, 0x70000000 | 5),
        // property 'available'
        QtMocHelpers::PropertyData<bool>(11, QMetaType::Bool, QMC::DefaultPropertyFlags, 0x70000000 | 6),
        // property 'activeClientSupportsTextInput'
        QtMocHelpers::PropertyData<bool>(12, QMetaType::Bool, QMC::DefaultPropertyFlags, 0x70000000 | 7),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'VirtualKeyboardMode'
        QtMocHelpers::EnumData<enum VirtualKeyboardMode>(13, 13, QMC::EnumIsScoped).add({
            {   14, VirtualKeyboardMode::Off },
            {   15, VirtualKeyboardMode::TouchOnly },
            {   16, VirtualKeyboardMode::On },
        }),
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<KWinVirtualKeyboard, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject KWinVirtualKeyboard::staticMetaObject = { {
    QMetaObject::SuperData::link<OrgKdeKwinVirtualKeyboardInterface::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19KWinVirtualKeyboardE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19KWinVirtualKeyboardE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19KWinVirtualKeyboardE_t>.metaTypes,
    nullptr
} };

void KWinVirtualKeyboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<KWinVirtualKeyboard *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->active(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->mode(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->visible(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->available(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->activeClientSupportsTextInput(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setActive(*reinterpret_cast<bool*>(_v)); break;
        case 1: _t->setMode(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KWinVirtualKeyboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWinVirtualKeyboard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19KWinVirtualKeyboardE_t>.strings))
        return static_cast<void*>(this);
    return OrgKdeKwinVirtualKeyboardInterface::qt_metacast(_clname);
}

int KWinVirtualKeyboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OrgKdeKwinVirtualKeyboardInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
namespace CheckNotifySignalValidity_ZN19KWinVirtualKeyboardE {
template<typename T> using has_nullary_activeChanged = decltype(std::declval<T>().activeChanged());
template<typename T> using has_unary_activeChanged = decltype(std::declval<T>().activeChanged(std::declval<bool>()));
static_assert(qxp::is_detected_v<has_nullary_activeChanged, KWinVirtualKeyboard> || qxp::is_detected_v<has_unary_activeChanged, KWinVirtualKeyboard>,
              "NOTIFY signal activeChanged does not exist in class (or is private in its parent)");
template<typename T> using has_nullary_modeChanged = decltype(std::declval<T>().modeChanged());
template<typename T> using has_unary_modeChanged = decltype(std::declval<T>().modeChanged(std::declval<int>()));
static_assert(qxp::is_detected_v<has_nullary_modeChanged, KWinVirtualKeyboard> || qxp::is_detected_v<has_unary_modeChanged, KWinVirtualKeyboard>,
              "NOTIFY signal modeChanged does not exist in class (or is private in its parent)");
template<typename T> using has_nullary_visibleChanged = decltype(std::declval<T>().visibleChanged());
template<typename T> using has_unary_visibleChanged = decltype(std::declval<T>().visibleChanged(std::declval<bool>()));
static_assert(qxp::is_detected_v<has_nullary_visibleChanged, KWinVirtualKeyboard> || qxp::is_detected_v<has_unary_visibleChanged, KWinVirtualKeyboard>,
              "NOTIFY signal visibleChanged does not exist in class (or is private in its parent)");
template<typename T> using has_nullary_availableChanged = decltype(std::declval<T>().availableChanged());
template<typename T> using has_unary_availableChanged = decltype(std::declval<T>().availableChanged(std::declval<bool>()));
static_assert(qxp::is_detected_v<has_nullary_availableChanged, KWinVirtualKeyboard> || qxp::is_detected_v<has_unary_availableChanged, KWinVirtualKeyboard>,
              "NOTIFY signal availableChanged does not exist in class (or is private in its parent)");
template<typename T> using has_nullary_activeClientSupportsTextInputChanged = decltype(std::declval<T>().activeClientSupportsTextInputChanged());
template<typename T> using has_unary_activeClientSupportsTextInputChanged = decltype(std::declval<T>().activeClientSupportsTextInputChanged(std::declval<bool>()));
static_assert(qxp::is_detected_v<has_nullary_activeClientSupportsTextInputChanged, KWinVirtualKeyboard> || qxp::is_detected_v<has_unary_activeClientSupportsTextInputChanged, KWinVirtualKeyboard>,
              "NOTIFY signal activeClientSupportsTextInputChanged does not exist in class (or is private in its parent)");
}
QT_WARNING_POP
