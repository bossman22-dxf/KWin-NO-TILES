/****************************************************************************
** Meta object code from reading C++ file 'poller.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../kwin-6.7.5/src/plugins/idletime/poller.h"
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'poller.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin18KWinIdleTimePollerE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::KWinIdleTimePoller::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin18KWinIdleTimePollerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::KWinIdleTimePoller",
        "addTimeout",
        "",
        "nextTimeout",
        "removeTimeout",
        "timeouts",
        "QList<int>",
        "forcePollRequest",
        "catchIdleEvent",
        "stopCatchingIdleEvents",
        "simulateUserActivity"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'addTimeout'
        QtMocHelpers::SlotData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'removeTimeout'
        QtMocHelpers::SlotData<void(int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'timeouts'
        QtMocHelpers::SlotData<QList<int>() const>(5, 2, QMC::AccessPublic, 0x80000000 | 6),
        // Slot 'forcePollRequest'
        QtMocHelpers::SlotData<int()>(7, 2, QMC::AccessPublic, QMetaType::Int),
        // Slot 'catchIdleEvent'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'stopCatchingIdleEvents'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'simulateUserActivity'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<KWinIdleTimePoller, qt_meta_tag_ZN4KWin18KWinIdleTimePollerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::KWinIdleTimePoller::staticMetaObject = { {
    QMetaObject::SuperData::link<KAbstractIdleTimePoller::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin18KWinIdleTimePollerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin18KWinIdleTimePollerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin18KWinIdleTimePollerE_t>.metaTypes,
    nullptr
} };

void KWin::KWinIdleTimePoller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<KWinIdleTimePoller *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->addTimeout((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->removeTimeout((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: { QList<int> _r = _t->timeouts();
            if (_a[0]) *reinterpret_cast<QList<int>*>(_a[0]) = std::move(_r); }  break;
        case 3: { int _r = _t->forcePollRequest();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->catchIdleEvent(); break;
        case 5: _t->stopCatchingIdleEvents(); break;
        case 6: _t->simulateUserActivity(); break;
        default: ;
        }
    }
}

const QMetaObject *KWin::KWinIdleTimePoller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KWin::KWinIdleTimePoller::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin18KWinIdleTimePollerE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.kde.kidletime.KAbstractIdleTimePoller"))
        return static_cast< KAbstractIdleTimePoller*>(this);
    return KAbstractIdleTimePoller::qt_metacast(_clname);
}

int KWin::KWinIdleTimePoller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KAbstractIdleTimePoller::qt_metacall(_c, _id, _a);
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
using namespace KWin;

#ifdef QT_MOC_EXPORT_PLUGIN_V2
static constexpr unsigned char qt_pluginMetaDataV2_KWinIdleTimePoller[] = {
    0xbf, 
    // "IID"
    0x02,  0x78,  0x29,  'o',  'r',  'g',  '.',  'k', 
    'd',  'e',  '.',  'k',  'i',  'd',  'l',  'e', 
    't',  'i',  'm',  'e',  '.',  'K',  'A',  'b', 
    's',  't',  'r',  'a',  'c',  't',  'I',  'd', 
    'l',  'e',  'T',  'i',  'm',  'e',  'P',  'o', 
    'l',  'l',  'e',  'r', 
    // "className"
    0x03,  0x72,  'K',  'W',  'i',  'n',  'I',  'd', 
    'l',  'e',  'T',  'i',  'm',  'e',  'P',  'o', 
    'l',  'l',  'e',  'r', 
    // "MetaData"
    0x04,  0xa1,  0x69,  'p',  'l',  'a',  't',  'f', 
    'o',  'r',  'm',  's',  0x81,  0x78,  0x18,  'w', 
    'a',  'y',  'l',  'a',  'n',  'd',  '-',  'o', 
    'r',  'g',  '.',  'k',  'd',  'e',  '.',  'k', 
    'w',  'i',  'n',  '.',  'q',  'p',  'a', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN_V2(KWin::KWinIdleTimePoller, KWinIdleTimePoller, qt_pluginMetaDataV2_KWinIdleTimePoller)
#else
QT_PLUGIN_METADATA_SECTION
Q_CONSTINIT static constexpr unsigned char qt_pluginMetaData_KWinIdleTimePoller[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x29,  'o',  'r',  'g',  '.',  'k', 
    'd',  'e',  '.',  'k',  'i',  'd',  'l',  'e', 
    't',  'i',  'm',  'e',  '.',  'K',  'A',  'b', 
    's',  't',  'r',  'a',  'c',  't',  'I',  'd', 
    'l',  'e',  'T',  'i',  'm',  'e',  'P',  'o', 
    'l',  'l',  'e',  'r', 
    // "className"
    0x03,  0x72,  'K',  'W',  'i',  'n',  'I',  'd', 
    'l',  'e',  'T',  'i',  'm',  'e',  'P',  'o', 
    'l',  'l',  'e',  'r', 
    // "MetaData"
    0x04,  0xa1,  0x69,  'p',  'l',  'a',  't',  'f', 
    'o',  'r',  'm',  's',  0x81,  0x78,  0x18,  'w', 
    'a',  'y',  'l',  'a',  'n',  'd',  '-',  'o', 
    'r',  'g',  '.',  'k',  'd',  'e',  '.',  'k', 
    'w',  'i',  'n',  '.',  'q',  'p',  'a', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(KWin::KWinIdleTimePoller, KWinIdleTimePoller)
#endif  // QT_MOC_EXPORT_PLUGIN_V2

QT_WARNING_POP
