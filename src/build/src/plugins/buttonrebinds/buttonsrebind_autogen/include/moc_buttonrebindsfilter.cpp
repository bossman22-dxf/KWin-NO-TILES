/****************************************************************************
** Meta object code from reading C++ file 'buttonrebindsfilter.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/plugins/buttonrebinds/buttonrebindsfilter.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buttonrebindsfilter.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN19ButtonRebindsFilterE_t {};
} // unnamed namespace

template <> constexpr inline auto ButtonRebindsFilter::qt_create_metaobjectdata<qt_meta_tag_ZN19ButtonRebindsFilterE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ButtonRebindsFilter",
        "TriggerType",
        "Pointer",
        "TabletPad",
        "TabletToolButtonType",
        "TabletDial",
        "TabletRing",
        "LastType"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'TriggerType'
        QtMocHelpers::EnumData<enum TriggerType>(1, 1, QMC::EnumFlags{}).add({
            {    2, TriggerType::Pointer },
            {    3, TriggerType::TabletPad },
            {    4, TriggerType::TabletToolButtonType },
            {    5, TriggerType::TabletDial },
            {    6, TriggerType::TabletRing },
            {    7, TriggerType::LastType },
        }),
    };
    return QtMocHelpers::metaObjectData<ButtonRebindsFilter, qt_meta_tag_ZN19ButtonRebindsFilterE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ButtonRebindsFilter::staticMetaObject = { {
    QMetaObject::SuperData::link<KWin::Plugin::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19ButtonRebindsFilterE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19ButtonRebindsFilterE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19ButtonRebindsFilterE_t>.metaTypes,
    nullptr
} };

void ButtonRebindsFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ButtonRebindsFilter *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *ButtonRebindsFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ButtonRebindsFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19ButtonRebindsFilterE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "KWin::InputEventFilter"))
        return static_cast< KWin::InputEventFilter*>(this);
    return KWin::Plugin::qt_metacast(_clname);
}

int ButtonRebindsFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KWin::Plugin::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
