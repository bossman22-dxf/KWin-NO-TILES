/****************************************************************************
** Meta object code from reading C++ file 'rulesmodel.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/kcms/rules/rulesmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rulesmodel.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin10RulesModelE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::RulesModel::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin10RulesModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::RulesModel",
        "descriptionChanged",
        "",
        "warningMessagesChanged",
        "showSuggestions",
        "showErrorMessage",
        "title",
        "message",
        "virtualDesktopsUpdated",
        "selectX11Window",
        "detectWindowProperties",
        "milliseconds",
        "description",
        "warningMessages",
        "RulesRole",
        "NameRole",
        "DescriptionRole",
        "IconRole",
        "IconNameRole",
        "KeyRole",
        "SectionRole",
        "EnabledRole",
        "SelectableRole",
        "ValueRole",
        "TypeRole",
        "PolicyRole",
        "PolicyModelRole",
        "OptionsModelRole",
        "SuggestedValueRole"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'descriptionChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'warningMessagesChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showSuggestions'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showErrorMessage'
        QtMocHelpers::SignalData<void(const QString &, const QString &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 6 }, { QMetaType::QString, 7 },
        }}),
        // Signal 'virtualDesktopsUpdated'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'selectX11Window'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Method 'detectWindowProperties'
        QtMocHelpers::MethodData<void(int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 11 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'description'
        QtMocHelpers::PropertyData<QString>(12, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'warningMessages'
        QtMocHelpers::PropertyData<QStringList>(13, QMetaType::QStringList, QMC::DefaultPropertyFlags, 1),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'RulesRole'
        QtMocHelpers::EnumData<enum RulesRole>(14, 14, QMC::EnumFlags{}).add({
            {   15, RulesRole::NameRole },
            {   16, RulesRole::DescriptionRole },
            {   17, RulesRole::IconRole },
            {   18, RulesRole::IconNameRole },
            {   19, RulesRole::KeyRole },
            {   20, RulesRole::SectionRole },
            {   21, RulesRole::EnabledRole },
            {   22, RulesRole::SelectableRole },
            {   23, RulesRole::ValueRole },
            {   24, RulesRole::TypeRole },
            {   25, RulesRole::PolicyRole },
            {   26, RulesRole::PolicyModelRole },
            {   27, RulesRole::OptionsModelRole },
            {   28, RulesRole::SuggestedValueRole },
        }),
    };
    return QtMocHelpers::metaObjectData<RulesModel, qt_meta_tag_ZN4KWin10RulesModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::RulesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin10RulesModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin10RulesModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin10RulesModelE_t>.metaTypes,
    nullptr
} };

void KWin::RulesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<RulesModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->descriptionChanged(); break;
        case 1: _t->warningMessagesChanged(); break;
        case 2: _t->showSuggestions(); break;
        case 3: _t->showErrorMessage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->virtualDesktopsUpdated(); break;
        case 5: _t->selectX11Window(); break;
        case 6: _t->detectWindowProperties((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (RulesModel::*)()>(_a, &RulesModel::descriptionChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (RulesModel::*)()>(_a, &RulesModel::warningMessagesChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (RulesModel::*)()>(_a, &RulesModel::showSuggestions, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (RulesModel::*)(const QString & , const QString & )>(_a, &RulesModel::showErrorMessage, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (RulesModel::*)()>(_a, &RulesModel::virtualDesktopsUpdated, 4))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->description(); break;
        case 1: *reinterpret_cast<QStringList*>(_v) = _t->warningMessages(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDescription(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::RulesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::RulesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin10RulesModelE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int KWin::RulesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void KWin::RulesModel::descriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::RulesModel::warningMessagesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::RulesModel::showSuggestions()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KWin::RulesModel::showErrorMessage(const QString & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}

// SIGNAL 4
void KWin::RulesModel::virtualDesktopsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
