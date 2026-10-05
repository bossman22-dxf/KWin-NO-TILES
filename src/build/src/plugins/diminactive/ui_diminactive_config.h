/********************************************************************************
** Form generated from reading UI file 'diminactive_config.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIMINACTIVE_CONFIG_H
#define UI_DIMINACTIVE_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include <klocalizedstring.h>

QT_BEGIN_NAMESPACE

class Ui_DimInactiveEffectConfig
{
public:
    QFormLayout *formLayout;
    QLabel *label_Strength;
    QSpinBox *kcfg_Strength;
    QLabel *label_Dim;
    QCheckBox *kcfg_DimPanels;
    QCheckBox *kcfg_DimDesktop;
    QCheckBox *kcfg_DimKeepAbove;
    QCheckBox *kcfg_DimByGroup;
    QCheckBox *kcfg_DimFullScreen;

    void setupUi(QWidget *DimInactiveEffectConfig)
    {
        if (DimInactiveEffectConfig->objectName().isEmpty())
            DimInactiveEffectConfig->setObjectName("DimInactiveEffectConfig");
        DimInactiveEffectConfig->resize(400, 160);
        formLayout = new QFormLayout(DimInactiveEffectConfig);
        formLayout->setObjectName("formLayout");
        label_Strength = new QLabel(DimInactiveEffectConfig);
        label_Strength->setObjectName("label_Strength");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_Strength);

        kcfg_Strength = new QSpinBox(DimInactiveEffectConfig);
        kcfg_Strength->setObjectName("kcfg_Strength");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(kcfg_Strength->sizePolicy().hasHeightForWidth());
        kcfg_Strength->setSizePolicy(sizePolicy);
        kcfg_Strength->setMinimum(10);
        kcfg_Strength->setMaximum(90);
        kcfg_Strength->setSingleStep(5);

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, kcfg_Strength);

        label_Dim = new QLabel(DimInactiveEffectConfig);
        label_Dim->setObjectName("label_Dim");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_Dim);

        kcfg_DimPanels = new QCheckBox(DimInactiveEffectConfig);
        kcfg_DimPanels->setObjectName("kcfg_DimPanels");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, kcfg_DimPanels);

        kcfg_DimDesktop = new QCheckBox(DimInactiveEffectConfig);
        kcfg_DimDesktop->setObjectName("kcfg_DimDesktop");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, kcfg_DimDesktop);

        kcfg_DimKeepAbove = new QCheckBox(DimInactiveEffectConfig);
        kcfg_DimKeepAbove->setObjectName("kcfg_DimKeepAbove");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, kcfg_DimKeepAbove);

        kcfg_DimByGroup = new QCheckBox(DimInactiveEffectConfig);
        kcfg_DimByGroup->setObjectName("kcfg_DimByGroup");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, kcfg_DimByGroup);

        kcfg_DimFullScreen = new QCheckBox(DimInactiveEffectConfig);
        kcfg_DimFullScreen->setObjectName("kcfg_DimFullScreen");

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, kcfg_DimFullScreen);


        retranslateUi(DimInactiveEffectConfig);

        QMetaObject::connectSlotsByName(DimInactiveEffectConfig);
    } // setupUi

    void retranslateUi(QWidget *DimInactiveEffectConfig)
    {
        label_Strength->setText(tr2i18n("Strength:", nullptr));
        label_Dim->setText(tr2i18n("Dim:", nullptr));
        kcfg_DimPanels->setText(tr2i18n("Docks and panels", nullptr));
        kcfg_DimDesktop->setText(tr2i18n("Desktop", nullptr));
        kcfg_DimKeepAbove->setText(tr2i18n("Keep above windows", nullptr));
        kcfg_DimByGroup->setText(tr2i18n("By window group", nullptr));
        kcfg_DimFullScreen->setText(tr2i18n("Fullscreen windows", nullptr));
        (void)DimInactiveEffectConfig;
    } // retranslateUi

};

namespace Ui {
    class DimInactiveEffectConfig: public Ui_DimInactiveEffectConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DIMINACTIVE_CONFIG_H

