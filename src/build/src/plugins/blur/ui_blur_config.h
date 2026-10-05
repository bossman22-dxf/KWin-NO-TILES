/********************************************************************************
** Form generated from reading UI file 'blur_config.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLUR_CONFIG_H
#define UI_BLUR_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <klocalizedstring.h>

QT_BEGIN_NAMESPACE

class Ui_BlurEffectConfig
{
public:
    QFormLayout *formLayout;
    QLabel *labelConstantBlurDescription;
    QVBoxLayout *verticalLayout;
    QSlider *kcfg_BlurStrength;
    QHBoxLayout *horizontalLayout;
    QLabel *labelConstantBlurLight;
    QLabel *labelConstantBlurStrong;
    QLabel *labelConstantNoiseDescription;
    QVBoxLayout *verticalLayout_2;
    QSlider *kcfg_NoiseStrength;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelConstantNoiseLight;
    QLabel *labelConstantNoiseStrong;
    QLabel *labelSaturation;
    QVBoxLayout *verticalLayout_3;
    QSlider *kcfg_Saturation;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelSaturationStrong;
    QLabel *labelSaturationNone;

    void setupUi(QWidget *BlurEffectConfig)
    {
        if (BlurEffectConfig->objectName().isEmpty())
            BlurEffectConfig->setObjectName("BlurEffectConfig");
        BlurEffectConfig->resize(480, 184);
        formLayout = new QFormLayout(BlurEffectConfig);
        formLayout->setObjectName("formLayout");
        labelConstantBlurDescription = new QLabel(BlurEffectConfig);
        labelConstantBlurDescription->setObjectName("labelConstantBlurDescription");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, labelConstantBlurDescription);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        kcfg_BlurStrength = new QSlider(BlurEffectConfig);
        kcfg_BlurStrength->setObjectName("kcfg_BlurStrength");
        kcfg_BlurStrength->setMinimum(1);
        kcfg_BlurStrength->setMaximum(15);
        kcfg_BlurStrength->setSingleStep(1);
        kcfg_BlurStrength->setPageStep(1);
        kcfg_BlurStrength->setValue(10);
        kcfg_BlurStrength->setOrientation(Qt::Orientation::Horizontal);
        kcfg_BlurStrength->setTickPosition(QSlider::TickPosition::TicksBelow);

        verticalLayout->addWidget(kcfg_BlurStrength);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelConstantBlurLight = new QLabel(BlurEffectConfig);
        labelConstantBlurLight->setObjectName("labelConstantBlurLight");

        horizontalLayout->addWidget(labelConstantBlurLight);

        labelConstantBlurStrong = new QLabel(BlurEffectConfig);
        labelConstantBlurStrong->setObjectName("labelConstantBlurStrong");
        labelConstantBlurStrong->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(labelConstantBlurStrong);


        verticalLayout->addLayout(horizontalLayout);


        formLayout->setLayout(0, QFormLayout::ItemRole::FieldRole, verticalLayout);

        labelConstantNoiseDescription = new QLabel(BlurEffectConfig);
        labelConstantNoiseDescription->setObjectName("labelConstantNoiseDescription");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, labelConstantNoiseDescription);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        kcfg_NoiseStrength = new QSlider(BlurEffectConfig);
        kcfg_NoiseStrength->setObjectName("kcfg_NoiseStrength");
        kcfg_NoiseStrength->setMaximum(14);
        kcfg_NoiseStrength->setPageStep(5);
        kcfg_NoiseStrength->setValue(5);
        kcfg_NoiseStrength->setOrientation(Qt::Orientation::Horizontal);
        kcfg_NoiseStrength->setTickPosition(QSlider::TickPosition::TicksBelow);
        kcfg_NoiseStrength->setTickInterval(1);

        verticalLayout_2->addWidget(kcfg_NoiseStrength);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelConstantNoiseLight = new QLabel(BlurEffectConfig);
        labelConstantNoiseLight->setObjectName("labelConstantNoiseLight");

        horizontalLayout_2->addWidget(labelConstantNoiseLight);

        labelConstantNoiseStrong = new QLabel(BlurEffectConfig);
        labelConstantNoiseStrong->setObjectName("labelConstantNoiseStrong");
        labelConstantNoiseStrong->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_2->addWidget(labelConstantNoiseStrong);


        verticalLayout_2->addLayout(horizontalLayout_2);


        formLayout->setLayout(2, QFormLayout::ItemRole::FieldRole, verticalLayout_2);

        labelSaturation = new QLabel(BlurEffectConfig);
        labelSaturation->setObjectName("labelSaturation");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, labelSaturation);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        kcfg_Saturation = new QSlider(BlurEffectConfig);
        kcfg_Saturation->setObjectName("kcfg_Saturation");
        kcfg_Saturation->setMinimum(100);
        kcfg_Saturation->setMaximum(500);
        kcfg_Saturation->setSingleStep(25);
        kcfg_Saturation->setPageStep(25);
        kcfg_Saturation->setOrientation(Qt::Orientation::Horizontal);
        kcfg_Saturation->setTickPosition(QSlider::TickPosition::TicksBelow);

        verticalLayout_3->addWidget(kcfg_Saturation);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        labelSaturationStrong = new QLabel(BlurEffectConfig);
        labelSaturationStrong->setObjectName("labelSaturationStrong");

        horizontalLayout_3->addWidget(labelSaturationStrong);

        labelSaturationNone = new QLabel(BlurEffectConfig);
        labelSaturationNone->setObjectName("labelSaturationNone");
        labelSaturationNone->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_3->addWidget(labelSaturationNone);


        verticalLayout_3->addLayout(horizontalLayout_3);


        formLayout->setLayout(3, QFormLayout::ItemRole::FieldRole, verticalLayout_3);


        retranslateUi(BlurEffectConfig);

        QMetaObject::connectSlotsByName(BlurEffectConfig);
    } // setupUi

    void retranslateUi(QWidget *BlurEffectConfig)
    {
        labelConstantBlurDescription->setText(tr2i18n("Blur strength:", nullptr));
        labelConstantBlurLight->setText(tr2i18n("Light", nullptr));
        labelConstantBlurStrong->setText(tr2i18n("Strong", nullptr));
        labelConstantNoiseDescription->setText(tr2i18n("Noise strength:", nullptr));
        labelConstantNoiseLight->setText(tr2i18n("Light", nullptr));
        labelConstantNoiseStrong->setText(tr2i18n("Strong", nullptr));
        labelSaturation->setText(tr2i18n("Saturation:", nullptr));
        labelSaturationStrong->setText(tr2i18n("None", nullptr));
        labelSaturationNone->setText(tr2i18n("Strong", nullptr));
        (void)BlurEffectConfig;
    } // retranslateUi

};

namespace Ui {
    class BlurEffectConfig: public Ui_BlurEffectConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BLUR_CONFIG_H

