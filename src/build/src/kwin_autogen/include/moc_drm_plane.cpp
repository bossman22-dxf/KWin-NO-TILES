/****************************************************************************
** Meta object code from reading C++ file 'drm_plane.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kwin-6.7.5/src/backends/drm/drm_plane.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drm_plane.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4KWin8DrmPlaneE_t {};
} // unnamed namespace

template <> constexpr inline auto KWin::DrmPlane::qt_create_metaobjectdata<qt_meta_tag_ZN4KWin8DrmPlaneE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KWin::DrmPlane",
        "Transformation",
        "Rotate0",
        "Rotate90",
        "Rotate180",
        "Rotate270",
        "ReflectX",
        "ReflectY"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Transformation'
        QtMocHelpers::EnumData<enum Transformation>(1, 1, QMC::EnumIsScoped).add({
            {    2, Transformation::Rotate0 },
            {    3, Transformation::Rotate90 },
            {    4, Transformation::Rotate180 },
            {    5, Transformation::Rotate270 },
            {    6, Transformation::ReflectX },
            {    7, Transformation::ReflectY },
        }),
    };
    return QtMocHelpers::metaObjectData<DrmPlane, qt_meta_tag_ZN4KWin8DrmPlaneE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KWin::DrmPlane::staticMetaObject = { {
    QtPrivate::MetaObjectForType<DrmObject>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin8DrmPlaneE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4KWin8DrmPlaneE_t>.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4KWin8DrmPlaneE_t>.metaTypes,
    nullptr
} };

QT_WARNING_POP
