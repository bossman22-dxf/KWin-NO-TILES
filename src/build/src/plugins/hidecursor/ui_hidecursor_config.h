/********************************************************************************
** Form generated from reading UI file 'hidecursor_config.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HIDECURSOR_CONFIG_H
#define UI_HIDECURSOR_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include <klocalizedstring.h>

QT_BEGIN_NAMESPACE

class Ui_HideCursorEffectConfig
{
public:
    QFormLayout *formLayout;
    QLabel *label_InactivityDuration;
    QCheckBox *kcfg_HideOnTyping;

    void setupUi(QWidget *HideCursorEffectConfig)
    {
        if (HideCursorEffectConfig->objectName().isEmpty())
            HideCursorEffectConfig->setObjectName("HideCursorEffectConfig");
        HideCursorEffectConfig->resize(251, 70);
        formLayout = new QFormLayout(HideCursorEffectConfig);
        formLayout->setObjectName("formLayout");
        label_InactivityDuration = new QLabel(HideCursorEffectConfig);
        label_InactivityDuration->setObjectName("label_InactivityDuration");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_InactivityDuration);

        kcfg_HideOnTyping = new QCheckBox(HideCursorEffectConfig);
        kcfg_HideOnTyping->setObjectName("kcfg_HideOnTyping");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, kcfg_HideOnTyping);


        retranslateUi(HideCursorEffectConfig);

        QMetaObject::connectSlotsByName(HideCursorEffectConfig);
    } // setupUi

    void retranslateUi(QWidget *HideCursorEffectConfig)
    {
        label_InactivityDuration->setText(tr2i18n("Hide pointer on inactivity:", nullptr));
        kcfg_HideOnTyping->setText(tr2i18n("Hide pointer on typing", nullptr));
        (void)HideCursorEffectConfig;
    } // retranslateUi

};

namespace Ui {
    class HideCursorEffectConfig: public Ui_HideCursorEffectConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // HIDECURSOR_CONFIG_H

