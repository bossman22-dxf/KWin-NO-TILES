/********************************************************************************
** Form generated from reading UI file 'overvieweffectkcm.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWEFFECTKCM_H
#define UI_OVERVIEWEFFECTKCM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include <klocalizedstring.h>
#include "kshortcutseditor.h"

QT_BEGIN_NAMESPACE

class Ui_OverviewEffectConfig
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QCheckBox *kcfg_IgnoreMinimized;
    QLabel *label_OrganizedGrid;
    QCheckBox *kcfg_OrganizedGrid;
    QLabel *label_FilterWindows;
    QCheckBox *kcfg_FilterWindows;
    KShortcutsEditor *shortcutsEditor;

    void setupUi(QWidget *OverviewEffectConfig)
    {
        if (OverviewEffectConfig->objectName().isEmpty())
            OverviewEffectConfig->setObjectName("OverviewEffectConfig");
        OverviewEffectConfig->resize(455, 201);
        formLayout = new QFormLayout(OverviewEffectConfig);
        formLayout->setObjectName("formLayout");
        label = new QLabel(OverviewEffectConfig);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        kcfg_IgnoreMinimized = new QCheckBox(OverviewEffectConfig);
        kcfg_IgnoreMinimized->setObjectName("kcfg_IgnoreMinimized");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, kcfg_IgnoreMinimized);

        label_OrganizedGrid = new QLabel(OverviewEffectConfig);
        label_OrganizedGrid->setObjectName("label_OrganizedGrid");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_OrganizedGrid);

        kcfg_OrganizedGrid = new QCheckBox(OverviewEffectConfig);
        kcfg_OrganizedGrid->setObjectName("kcfg_OrganizedGrid");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, kcfg_OrganizedGrid);

        label_FilterWindows = new QLabel(OverviewEffectConfig);
        label_FilterWindows->setObjectName("label_FilterWindows");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_FilterWindows);

        kcfg_FilterWindows = new QCheckBox(OverviewEffectConfig);
        kcfg_FilterWindows->setObjectName("kcfg_FilterWindows");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, kcfg_FilterWindows);

        shortcutsEditor = new KShortcutsEditor(OverviewEffectConfig);
        shortcutsEditor->setObjectName("shortcutsEditor");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(shortcutsEditor->sizePolicy().hasHeightForWidth());
        shortcutsEditor->setSizePolicy(sizePolicy);
        shortcutsEditor->setActionTypes(KShortcutsEditor::GlobalAction);

        formLayout->setWidget(3, QFormLayout::ItemRole::SpanningRole, shortcutsEditor);


        retranslateUi(OverviewEffectConfig);

        QMetaObject::connectSlotsByName(OverviewEffectConfig);
    } // setupUi

    void retranslateUi(QWidget *OverviewEffectConfig)
    {
        label->setText(tr2i18n("Ignore minimized windows:", nullptr));
        kcfg_IgnoreMinimized->setText(QString());
        label_OrganizedGrid->setText(tr2i18n("Organize windows in the Grid View:", nullptr));
        kcfg_OrganizedGrid->setText(QString());
        label_FilterWindows->setText(tr2i18n("Search results include filtered windows:", nullptr));
        kcfg_FilterWindows->setText(QString());
        (void)OverviewEffectConfig;
    } // retranslateUi

};

namespace Ui {
    class OverviewEffectConfig: public Ui_OverviewEffectConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // OVERVIEWEFFECTKCM_H

