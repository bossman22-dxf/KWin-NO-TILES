/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<buttonsmodel.h>)
#  include <buttonsmodel.h>
#endif
#if __has_include(<previewbridge.h>)
#  include <previewbridge.h>
#endif
#if __has_include(<previewbutton.h>)
#  include <previewbutton.h>
#endif
#if __has_include(<previewclient.h>)
#  include <previewclient.h>
#endif
#if __has_include(<previewitem.h>)
#  include <previewitem.h>
#endif
#if __has_include(<previewsettings.h>)
#  include <previewsettings.h>
#endif
#if __has_include(<types.h>)
#  include <types.h>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_org_kde_kwin_private_kdecoration()
{
    qmlRegisterModule("org.kde.kwin.private.kdecoration", 254, 0);
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<DecorationForeign>("org.kde.kwin.private.kdecoration", 254);
    qmlRegisterTypesAndRevisions<DecorationShadowForeign>("org.kde.kwin.private.kdecoration", 254);
    qmlRegisterTypesAndRevisions<KDecoration3::Preview::BridgeItem>("org.kde.kwin.private.kdecoration", 254);
    qmlRegisterTypesAndRevisions<KDecoration3::Preview::ButtonsModel>("org.kde.kwin.private.kdecoration", 254);
    qmlRegisterTypesAndRevisions<KDecoration3::Preview::PreviewBridge>("org.kde.kwin.private.kdecoration", 254);
    qmlRegisterTypesAndRevisions<KDecoration3::Preview::PreviewButtonItem>("org.kde.kwin.private.kdecoration", 254);
    qmlRegisterAnonymousType<QQuickItem, 254>("org.kde.kwin.private.kdecoration", 254);
    qmlRegisterTypesAndRevisions<KDecoration3::Preview::PreviewClient>("org.kde.kwin.private.kdecoration", 254);
    qmlRegisterTypesAndRevisions<KDecoration3::Preview::PreviewItem>("org.kde.kwin.private.kdecoration", 254);
    qmlRegisterTypesAndRevisions<KDecoration3::Preview::Settings>("org.kde.kwin.private.kdecoration", 254);
    QMetaType::fromType<QAbstractItemModel *>().id();
    qmlRegisterEnum<QAbstractItemModel::LayoutChangeHint>("QAbstractItemModel::LayoutChangeHint");
    qmlRegisterEnum<QAbstractItemModel::CheckIndexOption>("QAbstractItemModel::CheckIndexOption");
    QMetaType::fromType<QAbstractListModel *>().id();
    QT_WARNING_POP
    qmlRegisterModule("org.kde.kwin.private.kdecoration", 254, 254);
}

static const QQmlModuleRegistration orgkdekwinprivatekdecorationRegistration("org.kde.kwin.private.kdecoration", qml_register_types_org_kde_kwin_private_kdecoration);
