/********************************************************************************
** Form generated from reading UI file 'magiclamp_config.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGICLAMP_CONFIG_H
#define UI_MAGICLAMP_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include <klocalizedstring.h>

namespace KWin {

class Ui_MagicLampEffectConfigForm
{
public:
    QFormLayout *formLayout;
    QLabel *label_3;
    QSpinBox *kcfg_AnimationDuration;

    void setupUi(QWidget *KWin__MagicLampEffectConfigForm)
    {
        if (KWin__MagicLampEffectConfigForm->objectName().isEmpty())
            KWin__MagicLampEffectConfigForm->setObjectName("KWin__MagicLampEffectConfigForm");
        KWin__MagicLampEffectConfigForm->resize(400, 300);
        formLayout = new QFormLayout(KWin__MagicLampEffectConfigForm);
        formLayout->setObjectName("formLayout");
        label_3 = new QLabel(KWin__MagicLampEffectConfigForm);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_3);

        kcfg_AnimationDuration = new QSpinBox(KWin__MagicLampEffectConfigForm);
        kcfg_AnimationDuration->setObjectName("kcfg_AnimationDuration");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(kcfg_AnimationDuration->sizePolicy().hasHeightForWidth());
        kcfg_AnimationDuration->setSizePolicy(sizePolicy);
        kcfg_AnimationDuration->setMaximum(5000);
        kcfg_AnimationDuration->setSingleStep(10);

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, kcfg_AnimationDuration);

#if QT_CONFIG(shortcut)
        label_3->setBuddy(kcfg_AnimationDuration);
#endif // QT_CONFIG(shortcut)

        retranslateUi(KWin__MagicLampEffectConfigForm);

        QMetaObject::connectSlotsByName(KWin__MagicLampEffectConfigForm);
    } // setupUi

    void retranslateUi(QWidget *KWin__MagicLampEffectConfigForm)
    {
        label_3->setText(tr2i18n("Animation duration:", nullptr));
        kcfg_AnimationDuration->setSpecialValueText(tr2i18n("Default", "Duration of rotation"));
        kcfg_AnimationDuration->setSuffix(tr2i18n(" milliseconds", nullptr));
        (void)KWin__MagicLampEffectConfigForm;
    } // retranslateUi

};

} // namespace KWin

namespace KWin {
namespace Ui {
    class MagicLampEffectConfigForm: public Ui_MagicLampEffectConfigForm {};
} // namespace Ui
} // namespace KWin

#endif // MAGICLAMP_CONFIG_H

