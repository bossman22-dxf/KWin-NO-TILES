/****************************************************************************
** Meta object code from reading C++ file 'output.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/core/output.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'output.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin13LogicalOutputE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::LogicalOutput::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin13LogicalOutputE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::LogicalOutput",
        "geometryChanged",
        "",
        "scaleChanged",
        "aboutToChange",
        "OutputChangeSet*",
        "changeSet",
        "changed",
        "blendingColorChanged",
        "transformChanged",
        "currentModeChanged",
        "descriptionChanged",
        "mapToGlobal",
        "QPointF",
        "pos",
        "mapFromGlobal",
        "geometry",
        "KWin::Rect",
        "devicePixelRatio",
        "name",
        "manufacturer",
        "model",
        "serialNumber"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'geometryChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'scaleChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'aboutToChange'
        QtMocHelpers::SignalData<void(OutputChangeSet *)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'changed'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'blendingColorChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'transformChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentModeChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'descriptionChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'mapToGlobal'
        QtMocHelpers::MethodData<QPointF(const QPointF &) const>(12, 2, QMC::AccessPublic, 0x80000000 | 13, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Method 'mapFromGlobal'
        QtMocHelpers::MethodData<QPointF(const QPointF &) const>(15, 2, QMC::AccessPublic, 0x80000000 | 13, {{
            { 0x80000000 | 13, 14 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'geometry'
        QtMocHelpers::PropertyData<KWin::Rect>(16, 0x80000000 | 17, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
        // property 'devicePixelRatio'
        QtMocHelpers::PropertyData<qreal>(18, QMetaType::QReal, QMC::DefaultPropertyFlags, 1),
        // property 'name'
        QtMocHelpers::PropertyData<QString>(19, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'manufacturer'
        QtMocHelpers::PropertyData<QString>(20, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'model'
        QtMocHelpers::PropertyData<QString>(21, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'serialNumber'
        QtMocHelpers::PropertyData<QString>(22, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<LogicalOutput, qt_meta_tag_ZN4KWin13LogicalOutputE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN4KWin13LogicalOutputE[] = {
    QMetaObject::SuperData::link<KWin::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject KWin::LogicalOutput::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin13LogicalOutputE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin13LogicalOutputE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN4KWin13LogicalOutputE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin13LogicalOutputE_t>.metaTypes,
    nullptr
} };

void KWin::LogicalOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LogicalOutput *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->geometryChanged(); break;
        case 1: _t->scaleChanged(); break;
        case 2: _t->aboutToChange((*reinterpret_cast<std::add_pointer_t<OutputChangeSet*>>(_a[1]))); break;
        case 3: _t->changed(); break;
        case 4: _t->blendingColorChanged(); break;
        case 5: _t->transformChanged(); break;
        case 6: _t->currentModeChanged(); break;
        case 7: _t->descriptionChanged(); break;
        case 8: { QPointF _r = _t->mapToGlobal((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QPointF*>(_a[0]) = std::move(_r); }  break;
        case 9: { QPointF _r = _t->mapFromGlobal((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QPointF*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (LogicalOutput::*)()>(_a, &LogicalOutput::geometryChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (LogicalOutput::*)()>(_a, &LogicalOutput::scaleChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (LogicalOutput::*)(OutputChangeSet * )>(_a, &LogicalOutput::aboutToChange, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (LogicalOutput::*)()>(_a, &LogicalOutput::changed, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (LogicalOutput::*)()>(_a, &LogicalOutput::blendingColorChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (LogicalOutput::*)()>(_a, &LogicalOutput::transformChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (LogicalOutput::*)()>(_a, &LogicalOutput::currentModeChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (LogicalOutput::*)()>(_a, &LogicalOutput::descriptionChanged, 7))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<KWin::Rect*>(_v) = _t->geometry(); break;
        case 1: *reinterpret_cast<qreal*>(_v) = _t->scale(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->name(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->manufacturer(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->model(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->serialNumber(); break;
        default: break;
        }
    }
}

const QMetaObject *KWin::LogicalOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::LogicalOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin13LogicalOutputE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KWin::LogicalOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void KWin::LogicalOutput::geometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KWin::LogicalOutput::scaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KWin::LogicalOutput::aboutToChange(OutputChangeSet * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void KWin::LogicalOutput::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KWin::LogicalOutput::blendingColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KWin::LogicalOutput::transformChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KWin::LogicalOutput::currentModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void KWin::LogicalOutput::descriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
