/********************************************************************************
** Form generated from reading UI file 'glide_config.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLIDE_CONFIG_H
#define UI_GLIDE_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <klocalizedstring.h>

QT_BEGIN_NAMESPACE

class Ui_GlideEffectConfig
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *layout_Duration;
    QLabel *label_Duration;
    QSpinBox *kcfg_Duration;
    QGroupBox *groupBox_InAnimation;
    QFormLayout *formLayout;
    QLabel *label_InRotationEdge;
    QComboBox *kcfg_InRotationEdge;
    QLabel *label_InRotationAngle;
    QSpinBox *kcfg_InRotationAngle;
    QLabel *label_InDistance;
    QSpinBox *kcfg_InDistance;
    QGroupBox *groupBox_OutAnimation;
    QFormLayout *formLayout_2;
    QLabel *label_OutRotationEdge;
    QComboBox *kcfg_OutRotationEdge;
    QLabel *label_OutRotationAngle;
    QLabel *label_OutDistance;
    QSpinBox *kcfg_OutRotationAngle;
    QSpinBox *kcfg_OutDistance;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *GlideEffectConfig)
    {
        if (GlideEffectConfig->objectName().isEmpty())
            GlideEffectConfig->setObjectName("GlideEffectConfig");
        GlideEffectConfig->resize(440, 375);
        verticalLayout = new QVBoxLayout(GlideEffectConfig);
        verticalLayout->setObjectName("verticalLayout");
        layout_Duration = new QFormLayout();
        layout_Duration->setObjectName("layout_Duration");
        label_Duration = new QLabel(GlideEffectConfig);
        label_Duration->setObjectName("label_Duration");

        layout_Duration->setWidget(0, QFormLayout::ItemRole::LabelRole, label_Duration);

        kcfg_Duration = new QSpinBox(GlideEffectConfig);
        kcfg_Duration->setObjectName("kcfg_Duration");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(kcfg_Duration->sizePolicy().hasHeightForWidth());
        kcfg_Duration->setSizePolicy(sizePolicy);
        kcfg_Duration->setMaximum(9999);
        kcfg_Duration->setSingleStep(5);

        layout_Duration->setWidget(0, QFormLayout::ItemRole::FieldRole, kcfg_Duration);


        verticalLayout->addLayout(layout_Duration);

        groupBox_InAnimation = new QGroupBox(GlideEffectConfig);
        groupBox_InAnimation->setObjectName("groupBox_InAnimation");
        formLayout = new QFormLayout(groupBox_InAnimation);
        formLayout->setObjectName("formLayout");
        label_InRotationEdge = new QLabel(groupBox_InAnimation);
        label_InRotationEdge->setObjectName("label_InRotationEdge");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_InRotationEdge);

        kcfg_InRotationEdge = new QComboBox(groupBox_InAnimation);
        kcfg_InRotationEdge->addItem(QString());
        kcfg_InRotationEdge->addItem(QString());
        kcfg_InRotationEdge->addItem(QString());
        kcfg_InRotationEdge->addItem(QString());
        kcfg_InRotationEdge->setObjectName("kcfg_InRotationEdge");
        sizePolicy.setHeightForWidth(kcfg_InRotationEdge->sizePolicy().hasHeightForWidth());
        kcfg_InRotationEdge->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, kcfg_InRotationEdge);

        label_InRotationAngle = new QLabel(groupBox_InAnimation);
        label_InRotationAngle->setObjectName("label_InRotationAngle");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_InRotationAngle);

        kcfg_InRotationAngle = new QSpinBox(groupBox_InAnimation);
        kcfg_InRotationAngle->setObjectName("kcfg_InRotationAngle");
        sizePolicy.setHeightForWidth(kcfg_InRotationAngle->sizePolicy().hasHeightForWidth());
        kcfg_InRotationAngle->setSizePolicy(sizePolicy);
        kcfg_InRotationAngle->setMinimum(-360);
        kcfg_InRotationAngle->setMaximum(360);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, kcfg_InRotationAngle);

        label_InDistance = new QLabel(groupBox_InAnimation);
        label_InDistance->setObjectName("label_InDistance");

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, label_InDistance);

        kcfg_InDistance = new QSpinBox(groupBox_InAnimation);
        kcfg_InDistance->setObjectName("kcfg_InDistance");
        sizePolicy.setHeightForWidth(kcfg_InDistance->sizePolicy().hasHeightForWidth());
        kcfg_InDistance->setSizePolicy(sizePolicy);
        kcfg_InDistance->setMinimum(-5000);
        kcfg_InDistance->setMaximum(5000);
        kcfg_InDistance->setSingleStep(5);

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, kcfg_InDistance);


        verticalLayout->addWidget(groupBox_InAnimation);

        groupBox_OutAnimation = new QGroupBox(GlideEffectConfig);
        groupBox_OutAnimation->setObjectName("groupBox_OutAnimation");
        formLayout_2 = new QFormLayout(groupBox_OutAnimation);
        formLayout_2->setObjectName("formLayout_2");
        label_OutRotationEdge = new QLabel(groupBox_OutAnimation);
        label_OutRotationEdge->setObjectName("label_OutRotationEdge");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, label_OutRotationEdge);

        kcfg_OutRotationEdge = new QComboBox(groupBox_OutAnimation);
        kcfg_OutRotationEdge->addItem(QString());
        kcfg_OutRotationEdge->addItem(QString());
        kcfg_OutRotationEdge->addItem(QString());
        kcfg_OutRotationEdge->addItem(QString());
        kcfg_OutRotationEdge->setObjectName("kcfg_OutRotationEdge");
        sizePolicy.setHeightForWidth(kcfg_OutRotationEdge->sizePolicy().hasHeightForWidth());
        kcfg_OutRotationEdge->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, kcfg_OutRotationEdge);

        label_OutRotationAngle = new QLabel(groupBox_OutAnimation);
        label_OutRotationAngle->setObjectName("label_OutRotationAngle");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::LabelRole, label_OutRotationAngle);

        label_OutDistance = new QLabel(groupBox_OutAnimation);
        label_OutDistance->setObjectName("label_OutDistance");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::LabelRole, label_OutDistance);

        kcfg_OutRotationAngle = new QSpinBox(groupBox_OutAnimation);
        kcfg_OutRotationAngle->setObjectName("kcfg_OutRotationAngle");
        sizePolicy.setHeightForWidth(kcfg_OutRotationAngle->sizePolicy().hasHeightForWidth());
        kcfg_OutRotationAngle->setSizePolicy(sizePolicy);
        kcfg_OutRotationAngle->setMinimum(-360);
        kcfg_OutRotationAngle->setMaximum(360);

        formLayout_2->setWidget(1, QFormLayout::ItemRole::FieldRole, kcfg_OutRotationAngle);

        kcfg_OutDistance = new QSpinBox(groupBox_OutAnimation);
        kcfg_OutDistance->setObjectName("kcfg_OutDistance");
        sizePolicy.setHeightForWidth(kcfg_OutDistance->sizePolicy().hasHeightForWidth());
        kcfg_OutDistance->setSizePolicy(sizePolicy);
        kcfg_OutDistance->setMinimum(-5000);
        kcfg_OutDistance->setMaximum(5000);
        kcfg_OutDistance->setSingleStep(5);

        formLayout_2->setWidget(2, QFormLayout::ItemRole::FieldRole, kcfg_OutDistance);


        verticalLayout->addWidget(groupBox_OutAnimation);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(GlideEffectConfig);

        QMetaObject::connectSlotsByName(GlideEffectConfig);
    } // setupUi

    void retranslateUi(QWidget *GlideEffectConfig)
    {
        label_Duration->setText(tr2i18n("Duration:", nullptr));
        kcfg_Duration->setSpecialValueText(tr2i18n("Default", nullptr));
        kcfg_Duration->setSuffix(tr2i18n(" milliseconds", nullptr));
        groupBox_InAnimation->setTitle(tr2i18n("Window Open Animation", nullptr));
        label_InRotationEdge->setText(tr2i18n("Rotation edge:", nullptr));
        kcfg_InRotationEdge->setItemText(0, tr2i18n("Top", nullptr));
        kcfg_InRotationEdge->setItemText(1, tr2i18n("Right", nullptr));
        kcfg_InRotationEdge->setItemText(2, tr2i18n("Bottom", nullptr));
        kcfg_InRotationEdge->setItemText(3, tr2i18n("Left", nullptr));

        label_InRotationAngle->setText(tr2i18n("Rotation angle:", nullptr));
        kcfg_InRotationAngle->setSuffix(QString());
        label_InDistance->setText(tr2i18n("Distance:", nullptr));
        groupBox_OutAnimation->setTitle(tr2i18n("Window Close Animation", nullptr));
        label_OutRotationEdge->setText(tr2i18n("Rotation edge:", nullptr));
        kcfg_OutRotationEdge->setItemText(0, tr2i18n("Top", nullptr));
        kcfg_OutRotationEdge->setItemText(1, tr2i18n("Right", nullptr));
        kcfg_OutRotationEdge->setItemText(2, tr2i18n("Bottom", nullptr));
        kcfg_OutRotationEdge->setItemText(3, tr2i18n("Left", nullptr));

        label_OutRotationAngle->setText(tr2i18n("Rotation angle:", nullptr));
        label_OutDistance->setText(tr2i18n("Distance:", nullptr));
        kcfg_OutRotationAngle->setSuffix(QString());
        (void)GlideEffectConfig;
    } // retranslateUi

};

namespace Ui {
    class GlideEffectConfig: public Ui_GlideEffectConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GLIDE_CONFIG_H

