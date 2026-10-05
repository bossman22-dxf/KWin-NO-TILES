/********************************************************************************
** Form generated from reading UI file 'wobblywindows_config.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WOBBLYWINDOWS_CONFIG_H
#define UI_WOBBLYWINDOWS_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include <klocalizedstring.h>

QT_BEGIN_NAMESPACE

class Ui_WobblyWindowsEffectConfigForm
{
public:
    QGridLayout *gridLayout;
    QGroupBox *advancedGroup;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QSlider *kcfg_Stiffness;
    QSpinBox *stiffnessSpin;
    QLabel *label_5;
    QLabel *label_6;
    QSlider *kcfg_Drag;
    QSpinBox *dragSpin;
    QSlider *kcfg_MoveFactor;
    QSpinBox *moveFactorSpin;
    QCheckBox *kcfg_MoveWobble;
    QCheckBox *kcfg_ResizeWobble;
    QSpacerItem *verticalSpacer;
    QCheckBox *kcfg_AdvancedMode;
    QGroupBox *basicGroup;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QSlider *kcfg_WobblynessLevel;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *WobblyWindowsEffectConfigForm)
    {
        if (WobblyWindowsEffectConfigForm->objectName().isEmpty())
            WobblyWindowsEffectConfigForm->setObjectName("WobblyWindowsEffectConfigForm");
        WobblyWindowsEffectConfigForm->resize(399, 229);
        gridLayout = new QGridLayout(WobblyWindowsEffectConfigForm);
        gridLayout->setObjectName("gridLayout");
        advancedGroup = new QGroupBox(WobblyWindowsEffectConfigForm);
        advancedGroup->setObjectName("advancedGroup");
        advancedGroup->setEnabled(false);
        gridLayout_3 = new QGridLayout(advancedGroup);
        gridLayout_3->setObjectName("gridLayout_3");
        label_4 = new QLabel(advancedGroup);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        kcfg_Stiffness = new QSlider(advancedGroup);
        kcfg_Stiffness->setObjectName("kcfg_Stiffness");
        kcfg_Stiffness->setMinimum(1);
        kcfg_Stiffness->setMaximum(50);
        kcfg_Stiffness->setValue(15);
        kcfg_Stiffness->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(kcfg_Stiffness, 0, 1, 1, 1);

        stiffnessSpin = new QSpinBox(advancedGroup);
        stiffnessSpin->setObjectName("stiffnessSpin");
        stiffnessSpin->setMinimum(1);
        stiffnessSpin->setMaximum(50);
        stiffnessSpin->setValue(15);

        gridLayout_3->addWidget(stiffnessSpin, 0, 2, 1, 1);

        label_5 = new QLabel(advancedGroup);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        label_6 = new QLabel(advancedGroup);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_6, 2, 0, 1, 1);

        kcfg_Drag = new QSlider(advancedGroup);
        kcfg_Drag->setObjectName("kcfg_Drag");
        kcfg_Drag->setMinimum(50);
        kcfg_Drag->setMaximum(100);
        kcfg_Drag->setValue(85);
        kcfg_Drag->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(kcfg_Drag, 1, 1, 1, 1);

        dragSpin = new QSpinBox(advancedGroup);
        dragSpin->setObjectName("dragSpin");
        dragSpin->setMinimum(50);
        dragSpin->setMaximum(100);
        dragSpin->setValue(85);

        gridLayout_3->addWidget(dragSpin, 1, 2, 1, 1);

        kcfg_MoveFactor = new QSlider(advancedGroup);
        kcfg_MoveFactor->setObjectName("kcfg_MoveFactor");
        kcfg_MoveFactor->setMinimum(1);
        kcfg_MoveFactor->setMaximum(25);
        kcfg_MoveFactor->setValue(10);
        kcfg_MoveFactor->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(kcfg_MoveFactor, 2, 1, 1, 1);

        moveFactorSpin = new QSpinBox(advancedGroup);
        moveFactorSpin->setObjectName("moveFactorSpin");
        moveFactorSpin->setMinimum(1);
        moveFactorSpin->setMaximum(25);
        moveFactorSpin->setValue(10);

        gridLayout_3->addWidget(moveFactorSpin, 2, 2, 1, 1);


        gridLayout->addWidget(advancedGroup, 6, 0, 1, 2);

        kcfg_MoveWobble = new QCheckBox(WobblyWindowsEffectConfigForm);
        kcfg_MoveWobble->setObjectName("kcfg_MoveWobble");

        gridLayout->addWidget(kcfg_MoveWobble, 2, 1, 1, 1);

        kcfg_ResizeWobble = new QCheckBox(WobblyWindowsEffectConfigForm);
        kcfg_ResizeWobble->setObjectName("kcfg_ResizeWobble");

        gridLayout->addWidget(kcfg_ResizeWobble, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);

        kcfg_AdvancedMode = new QCheckBox(WobblyWindowsEffectConfigForm);
        kcfg_AdvancedMode->setObjectName("kcfg_AdvancedMode");

        gridLayout->addWidget(kcfg_AdvancedMode, 5, 1, 1, 1);

        basicGroup = new QGroupBox(WobblyWindowsEffectConfigForm);
        basicGroup->setObjectName("basicGroup");
        basicGroup->setEnabled(true);
        basicGroup->setCheckable(false);
        gridLayout_2 = new QGridLayout(basicGroup);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(basicGroup);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        kcfg_WobblynessLevel = new QSlider(basicGroup);
        kcfg_WobblynessLevel->setObjectName("kcfg_WobblynessLevel");
        kcfg_WobblynessLevel->setMinimumSize(QSize(120, 0));
        kcfg_WobblynessLevel->setMaximum(4);
        kcfg_WobblynessLevel->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(kcfg_WobblynessLevel, 0, 1, 1, 1);

        label_2 = new QLabel(basicGroup);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 0, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 1, 1, 1, 1);


        gridLayout->addWidget(basicGroup, 1, 0, 5, 1);

#if QT_CONFIG(shortcut)
        label_4->setBuddy(kcfg_Stiffness);
        label_5->setBuddy(kcfg_Drag);
        label_6->setBuddy(kcfg_MoveFactor);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(kcfg_WobblynessLevel, kcfg_MoveWobble);
        QWidget::setTabOrder(kcfg_MoveWobble, kcfg_ResizeWobble);
        QWidget::setTabOrder(kcfg_ResizeWobble, kcfg_AdvancedMode);
        QWidget::setTabOrder(kcfg_AdvancedMode, kcfg_Stiffness);
        QWidget::setTabOrder(kcfg_Stiffness, stiffnessSpin);
        QWidget::setTabOrder(stiffnessSpin, kcfg_Drag);
        QWidget::setTabOrder(kcfg_Drag, dragSpin);
        QWidget::setTabOrder(dragSpin, kcfg_MoveFactor);
        QWidget::setTabOrder(kcfg_MoveFactor, moveFactorSpin);

        retranslateUi(WobblyWindowsEffectConfigForm);
        QObject::connect(kcfg_Stiffness, &QSlider::valueChanged, stiffnessSpin, &QSpinBox::setValue);
        QObject::connect(stiffnessSpin, &QSpinBox::valueChanged, kcfg_Stiffness, &QSlider::setValue);
        QObject::connect(kcfg_Drag, &QSlider::valueChanged, dragSpin, &QSpinBox::setValue);
        QObject::connect(dragSpin, &QSpinBox::valueChanged, kcfg_Drag, &QSlider::setValue);
        QObject::connect(kcfg_MoveFactor, &QSlider::valueChanged, moveFactorSpin, &QSpinBox::setValue);
        QObject::connect(moveFactorSpin, &QSpinBox::valueChanged, kcfg_MoveFactor, &QSlider::setValue);
        QObject::connect(kcfg_AdvancedMode, &QCheckBox::toggled, advancedGroup, &QGroupBox::setEnabled);

        QMetaObject::connectSlotsByName(WobblyWindowsEffectConfigForm);
    } // setupUi

    void retranslateUi(QWidget *WobblyWindowsEffectConfigForm)
    {
        advancedGroup->setTitle(tr2i18n("Advanced", nullptr));
        label_4->setText(tr2i18n("&Stiffness:", nullptr));
        label_5->setText(tr2i18n("Dra&g:", nullptr));
        label_6->setText(tr2i18n("&Move factor:", nullptr));
        kcfg_MoveWobble->setText(tr2i18n("Wo&bble when moving", nullptr));
        kcfg_ResizeWobble->setText(tr2i18n("Wobble when &resizing", nullptr));
        kcfg_AdvancedMode->setText(tr2i18n("Enable &advanced mode", nullptr));
        basicGroup->setTitle(tr2i18n("&Wobbliness", nullptr));
        label->setText(tr2i18n("Less", nullptr));
        label_2->setText(tr2i18n("More", nullptr));
        (void)WobblyWindowsEffectConfigForm;
    } // retranslateUi

};

namespace Ui {
    class WobblyWindowsEffectConfigForm: public Ui_WobblyWindowsEffectConfigForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // WOBBLYWINDOWS_CONFIG_H

