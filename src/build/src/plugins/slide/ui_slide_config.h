/********************************************************************************
** Form generated from reading UI file 'slide_config.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLIDE_CONFIG_H
#define UI_SLIDE_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <klocalizedstring.h>

QT_BEGIN_NAMESPACE

class Ui_SlideEffectConfig
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_Gaps;
    QFormLayout *formLayout_2;
    QLabel *label_HorizontalGap;
    QSpinBox *kcfg_HorizontalGap;
    QLabel *label_VerticalGap;
    QSpinBox *kcfg_VerticalGap;
    QCheckBox *kcfg_SlideBackground;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SlideEffectConfig)
    {
        if (SlideEffectConfig->objectName().isEmpty())
            SlideEffectConfig->setObjectName("SlideEffectConfig");
        SlideEffectConfig->resize(400, 250);
        verticalLayout = new QVBoxLayout(SlideEffectConfig);
        verticalLayout->setObjectName("verticalLayout");
        groupBox_Gaps = new QGroupBox(SlideEffectConfig);
        groupBox_Gaps->setObjectName("groupBox_Gaps");
        formLayout_2 = new QFormLayout(groupBox_Gaps);
        formLayout_2->setObjectName("formLayout_2");
        label_HorizontalGap = new QLabel(groupBox_Gaps);
        label_HorizontalGap->setObjectName("label_HorizontalGap");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, label_HorizontalGap);

        kcfg_HorizontalGap = new QSpinBox(groupBox_Gaps);
        kcfg_HorizontalGap->setObjectName("kcfg_HorizontalGap");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(kcfg_HorizontalGap->sizePolicy().hasHeightForWidth());
        kcfg_HorizontalGap->setSizePolicy(sizePolicy);
        kcfg_HorizontalGap->setMaximum(1000);
        kcfg_HorizontalGap->setSingleStep(5);

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, kcfg_HorizontalGap);

        label_VerticalGap = new QLabel(groupBox_Gaps);
        label_VerticalGap->setObjectName("label_VerticalGap");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::LabelRole, label_VerticalGap);

        kcfg_VerticalGap = new QSpinBox(groupBox_Gaps);
        kcfg_VerticalGap->setObjectName("kcfg_VerticalGap");
        sizePolicy.setHeightForWidth(kcfg_VerticalGap->sizePolicy().hasHeightForWidth());
        kcfg_VerticalGap->setSizePolicy(sizePolicy);
        kcfg_VerticalGap->setMaximum(1000);
        kcfg_VerticalGap->setSingleStep(5);

        formLayout_2->setWidget(1, QFormLayout::ItemRole::FieldRole, kcfg_VerticalGap);


        verticalLayout->addWidget(groupBox_Gaps);

        kcfg_SlideBackground = new QCheckBox(SlideEffectConfig);
        kcfg_SlideBackground->setObjectName("kcfg_SlideBackground");

        verticalLayout->addWidget(kcfg_SlideBackground);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(SlideEffectConfig);

        QMetaObject::connectSlotsByName(SlideEffectConfig);
    } // setupUi

    void retranslateUi(QWidget *SlideEffectConfig)
    {
        groupBox_Gaps->setTitle(tr2i18n("Gap between desktops", nullptr));
        label_HorizontalGap->setText(tr2i18n("Horizontal:", nullptr));
        label_VerticalGap->setText(tr2i18n("Vertical:", nullptr));
        kcfg_SlideBackground->setText(tr2i18n("Slide desktop background", nullptr));
        (void)SlideEffectConfig;
    } // retranslateUi

};

namespace Ui {
    class SlideEffectConfig: public Ui_SlideEffectConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SLIDE_CONFIG_H

