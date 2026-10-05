/****************************************************************************
** Meta object code from reading C++ file 'optionsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/kcms/rules/optionsmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optionsmodel.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin12OptionsModelE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::OptionsModel::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin12OptionsModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::OptionsModel",
        "selectedIndexChanged",
        "",
        "index",
        "modelUpdated",
        "indexOf",
        "QVariant",
        "value",
        "textOfValue",
        "selectedIndex",
        "allOptionsMask",
        "useFlags",
        "OptionsRole",
        "ValueRole",
        "IconNameRole",
        "OptionTypeRole",
        "BitMaskRole",
        "OptionType",
        "NormalOption",
        "ExclusiveOption",
        "SelectAllOption"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'selectedIndexChanged'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'modelUpdated'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'indexOf'
        QtMocHelpers::MethodData<int(const QVariant &) const>(5, 2, QMC::AccessPublic, QMetaType::Int, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Method 'textOfValue'
        QtMocHelpers::MethodData<QString(const QVariant &) const>(8, 2, QMC::AccessPublic, QMetaType::QString, {{
            { 0x80000000 | 6, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'selectedIndex'
        QtMocHelpers::PropertyData<int>(9, QMetaType::Int, QMC::DefaultPropertyFlags, 0),
        // property 'allOptionsMask'
        QtMocHelpers::PropertyData<int>(10, QMetaType::Int, QMC::DefaultPropertyFlags, 1),
        // property 'useFlags'
        QtMocHelpers::PropertyData<int>(11, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'OptionsRole'
        QtMocHelpers::EnumData<enum OptionsRole>(12, 12, QMC::EnumFlags{}).add({
            {   13, OptionsRole::ValueRole },
            {   14, OptionsRole::IconNameRole },
            {   15, OptionsRole::OptionTypeRole },
            {   16, OptionsRole::BitMaskRole },
        }),
        // enum 'OptionType'
        QtMocHelpers::EnumData<enum OptionType>(17, 17, QMC::EnumFlags{}).add({
            {   18, OptionType::NormalOption },
            {   19, OptionType::ExclusiveOption },
            {   20, OptionType::SelectAllOption },
        }),
    };
    return QtMocHelpers::metaObjectData<OptionsModel, qt_meta_tag_ZN4KWin12OptionsModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::OptionsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin12OptionsModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin12OptionsModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin12OptionsModelE_t>.metaTypes,
    nullptr
} };

void KWin::OptionsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OptionsModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->selectedIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->modelUpdated(); break;
        case 2: { int _r = _t->indexOf((*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[1])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->textOfValue((*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OptionsModel::*)(int )>(_a, &OptionsModel::selectedIndexChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (OptionsModel::*)()>(_a, &OptionsModel::modelUpdated, 1))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->selectedIndex(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->allOptionsMask(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->useFlags(); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::OptionsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::OptionsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin12OptionsModelE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int KWin::OptionsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
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
void KWin::OptionsModel::selectedIndexChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void KWin::OptionsModel::modelUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
