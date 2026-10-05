/********************************************************************************
** Form generated from reading UI file 'main.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_H
#define UI_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <klocalizedstring.h>
#include "monitor.h"

QT_BEGIN_NAMESPACE

class Ui_KWinScreenEdgesConfigUI
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *infoLabel;
    QSpacerItem *verticalSpacer_2;
    KWin::Monitor *monitor;
    QFormLayout *formLayout;
    QLabel *quickMaximizeLabel;
    QCheckBox *kcfg_ElectricBorderMaximize;
    QLabel *quickTileLabel;
    QCheckBox *kcfg_ElectricBorderTiling;
    QLabel *label;
    QCheckBox *remainActiveOnFullscreen;
    QLabel *electricBorderCornerRatioLabel;
    QHBoxLayout *horizontalLayout;
    QSpinBox *electricBorderCornerRatioSpin;
    QLabel *label_1;
    QSpacerItem *verticalSpacer_1;
    QLabel *desktopSwitchLabel;
    QComboBox *kcfg_ElectricBorders;
    QLabel *activationDelayLabel;
    QSpinBox *kcfg_ElectricBorderDelay;
    QLabel *triggerCooldownLabel;
    QSpinBox *kcfg_ElectricBorderCooldown;
    QLabel *CornerBarrierLabel;
    QCheckBox *kcfg_CornerBarrier;
    QLabel *EdgeBarrierLabel;
    QSpinBox *kcfg_EdgeBarrier;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *KWinScreenEdgesConfigUI)
    {
        if (KWinScreenEdgesConfigUI->objectName().isEmpty())
            KWinScreenEdgesConfigUI->setObjectName("KWinScreenEdgesConfigUI");
        KWinScreenEdgesConfigUI->resize(500, 525);
        KWinScreenEdgesConfigUI->setMinimumSize(QSize(500, 525));
        verticalLayout = new QVBoxLayout(KWinScreenEdgesConfigUI);
        verticalLayout->setObjectName("verticalLayout");
        infoLabel = new QLabel(KWinScreenEdgesConfigUI);
        infoLabel->setObjectName("infoLabel");
        infoLabel->setWordWrap(true);

        verticalLayout->addWidget(infoLabel);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);

        monitor = new KWin::Monitor(KWinScreenEdgesConfigUI);
        monitor->setObjectName("monitor");
        monitor->setMinimumSize(QSize(200, 200));
        monitor->setFocusPolicy(Qt::StrongFocus);

        verticalLayout->addWidget(monitor);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);
        quickMaximizeLabel = new QLabel(KWinScreenEdgesConfigUI);
        quickMaximizeLabel->setObjectName("quickMaximizeLabel");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, quickMaximizeLabel);

        kcfg_ElectricBorderMaximize = new QCheckBox(KWinScreenEdgesConfigUI);
        kcfg_ElectricBorderMaximize->setObjectName("kcfg_ElectricBorderMaximize");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, kcfg_ElectricBorderMaximize);

        quickTileLabel = new QLabel(KWinScreenEdgesConfigUI);
        quickTileLabel->setObjectName("quickTileLabel");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, quickTileLabel);

        kcfg_ElectricBorderTiling = new QCheckBox(KWinScreenEdgesConfigUI);
        kcfg_ElectricBorderTiling->setObjectName("kcfg_ElectricBorderTiling");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, kcfg_ElectricBorderTiling);

        label = new QLabel(KWinScreenEdgesConfigUI);
        label->setObjectName("label");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label);

        remainActiveOnFullscreen = new QCheckBox(KWinScreenEdgesConfigUI);
        remainActiveOnFullscreen->setObjectName("remainActiveOnFullscreen");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, remainActiveOnFullscreen);

        electricBorderCornerRatioLabel = new QLabel(KWinScreenEdgesConfigUI);
        electricBorderCornerRatioLabel->setObjectName("electricBorderCornerRatioLabel");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, electricBorderCornerRatioLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        electricBorderCornerRatioSpin = new QSpinBox(KWinScreenEdgesConfigUI);
        electricBorderCornerRatioSpin->setObjectName("electricBorderCornerRatioSpin");
        electricBorderCornerRatioSpin->setEnabled(false);
        electricBorderCornerRatioSpin->setMinimum(1);
        electricBorderCornerRatioSpin->setMaximum(49);

        horizontalLayout->addWidget(electricBorderCornerRatioSpin);

        label_1 = new QLabel(KWinScreenEdgesConfigUI);
        label_1->setObjectName("label_1");
        label_1->setEnabled(false);

        horizontalLayout->addWidget(label_1);


        formLayout->setLayout(3, QFormLayout::ItemRole::FieldRole, horizontalLayout);

        verticalSpacer_1 = new QSpacerItem(20, 4, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        formLayout->setItem(4, QFormLayout::ItemRole::FieldRole, verticalSpacer_1);

        desktopSwitchLabel = new QLabel(KWinScreenEdgesConfigUI);
        desktopSwitchLabel->setObjectName("desktopSwitchLabel");

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, desktopSwitchLabel);

        kcfg_ElectricBorders = new QComboBox(KWinScreenEdgesConfigUI);
        kcfg_ElectricBorders->addItem(QString());
        kcfg_ElectricBorders->addItem(QString());
        kcfg_ElectricBorders->addItem(QString());
        kcfg_ElectricBorders->setObjectName("kcfg_ElectricBorders");

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, kcfg_ElectricBorders);

        activationDelayLabel = new QLabel(KWinScreenEdgesConfigUI);
        activationDelayLabel->setObjectName("activationDelayLabel");

        formLayout->setWidget(6, QFormLayout::ItemRole::LabelRole, activationDelayLabel);

        kcfg_ElectricBorderDelay = new QSpinBox(KWinScreenEdgesConfigUI);
        kcfg_ElectricBorderDelay->setObjectName("kcfg_ElectricBorderDelay");
        kcfg_ElectricBorderDelay->setMaximum(1000);
        kcfg_ElectricBorderDelay->setSingleStep(50);
        kcfg_ElectricBorderDelay->setValue(0);

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, kcfg_ElectricBorderDelay);

        triggerCooldownLabel = new QLabel(KWinScreenEdgesConfigUI);
        triggerCooldownLabel->setObjectName("triggerCooldownLabel");
        triggerCooldownLabel->setEnabled(true);

        formLayout->setWidget(7, QFormLayout::ItemRole::LabelRole, triggerCooldownLabel);

        kcfg_ElectricBorderCooldown = new QSpinBox(KWinScreenEdgesConfigUI);
        kcfg_ElectricBorderCooldown->setObjectName("kcfg_ElectricBorderCooldown");
        kcfg_ElectricBorderCooldown->setEnabled(true);
        kcfg_ElectricBorderCooldown->setMaximum(1000);
        kcfg_ElectricBorderCooldown->setSingleStep(50);
        kcfg_ElectricBorderCooldown->setValue(0);

        formLayout->setWidget(7, QFormLayout::ItemRole::FieldRole, kcfg_ElectricBorderCooldown);

        CornerBarrierLabel = new QLabel(KWinScreenEdgesConfigUI);
        CornerBarrierLabel->setObjectName("CornerBarrierLabel");

        formLayout->setWidget(8, QFormLayout::ItemRole::LabelRole, CornerBarrierLabel);

        kcfg_CornerBarrier = new QCheckBox(KWinScreenEdgesConfigUI);
        kcfg_CornerBarrier->setObjectName("kcfg_CornerBarrier");

        formLayout->setWidget(8, QFormLayout::ItemRole::FieldRole, kcfg_CornerBarrier);

        EdgeBarrierLabel = new QLabel(KWinScreenEdgesConfigUI);
        EdgeBarrierLabel->setObjectName("EdgeBarrierLabel");

        formLayout->setWidget(9, QFormLayout::ItemRole::LabelRole, EdgeBarrierLabel);

        kcfg_EdgeBarrier = new QSpinBox(KWinScreenEdgesConfigUI);
        kcfg_EdgeBarrier->setObjectName("kcfg_EdgeBarrier");
        kcfg_EdgeBarrier->setMinimum(0);
        kcfg_EdgeBarrier->setMaximum(1000);
        kcfg_EdgeBarrier->setValue(100);

        formLayout->setWidget(9, QFormLayout::ItemRole::FieldRole, kcfg_EdgeBarrier);


        verticalLayout->addLayout(formLayout);

        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

#if QT_CONFIG(shortcut)
        quickMaximizeLabel->setBuddy(kcfg_ElectricBorderMaximize);
        quickTileLabel->setBuddy(kcfg_ElectricBorderTiling);
        electricBorderCornerRatioLabel->setBuddy(electricBorderCornerRatioSpin);
        desktopSwitchLabel->setBuddy(kcfg_ElectricBorders);
        activationDelayLabel->setBuddy(kcfg_ElectricBorderDelay);
        triggerCooldownLabel->setBuddy(kcfg_ElectricBorderCooldown);
        CornerBarrierLabel->setBuddy(kcfg_CornerBarrier);
        EdgeBarrierLabel->setBuddy(kcfg_EdgeBarrier);
#endif // QT_CONFIG(shortcut)

        retranslateUi(KWinScreenEdgesConfigUI);
        QObject::connect(kcfg_ElectricBorderTiling, &QCheckBox::toggled, label_1, &QLabel::setEnabled);
        QObject::connect(kcfg_ElectricBorderTiling, &QCheckBox::toggled, electricBorderCornerRatioSpin, &QSpinBox::setEnabled);
        QObject::connect(kcfg_ElectricBorderTiling, &QCheckBox::toggled, electricBorderCornerRatioLabel, &QLabel::setEnabled);

        QMetaObject::connectSlotsByName(KWinScreenEdgesConfigUI);
    } // setupUi

    void retranslateUi(QWidget *KWinScreenEdgesConfigUI)
    {
        infoLabel->setText(tr2i18n("You can trigger an action by pushing the mouse pointer against the corresponding screen edge or corner.", nullptr));
        quickMaximizeLabel->setText(tr2i18n("&Maximize:", nullptr));
        kcfg_ElectricBorderMaximize->setText(tr2i18n("Windows dragged to top edge", nullptr));
        quickTileLabel->setText(tr2i18n("&Tile:", nullptr));
        kcfg_ElectricBorderTiling->setText(tr2i18n("Windows dragged to left or right edge", nullptr));
        label->setText(tr2i18n("Behavior:", nullptr));
        remainActiveOnFullscreen->setText(tr2i18n("Remain active when windows are fullscreen", nullptr));
        electricBorderCornerRatioLabel->setText(tr2i18n("Trigger &quarter tiling in:", nullptr));
        electricBorderCornerRatioSpin->setSuffix(tr2i18n("%", nullptr));
        electricBorderCornerRatioSpin->setPrefix(tr2i18n("Outer ", nullptr));
        label_1->setText(tr2i18n("of the screen", nullptr));
#if QT_CONFIG(tooltip)
        desktopSwitchLabel->setToolTip(tr2i18n("Change desktop when the mouse pointer is pushed against the edge of the screen", nullptr));
#endif // QT_CONFIG(tooltip)
        desktopSwitchLabel->setText(tr2i18n("&Switch desktop on edge:", nullptr));
        kcfg_ElectricBorders->setItemText(0, tr2i18n("Disabled", "Switch desktop on edge"));
        kcfg_ElectricBorders->setItemText(1, tr2i18n("Only when moving windows", nullptr));
        kcfg_ElectricBorders->setItemText(2, tr2i18n("Always enabled", nullptr));

#if QT_CONFIG(tooltip)
        activationDelayLabel->setToolTip(tr2i18n("Amount of time required for the mouse pointer to be pushed against the edge of the screen before the action is triggered", nullptr));
#endif // QT_CONFIG(tooltip)
        activationDelayLabel->setText(tr2i18n("Activation &delay:", nullptr));
        kcfg_ElectricBorderDelay->setSuffix(tr2i18n(" ms", nullptr));
#if QT_CONFIG(tooltip)
        triggerCooldownLabel->setToolTip(tr2i18n("Amount of time required after triggering an action until the next trigger can occur", nullptr));
#endif // QT_CONFIG(tooltip)
        triggerCooldownLabel->setText(tr2i18n("&Reactivation delay:", nullptr));
        kcfg_ElectricBorderCooldown->setSuffix(tr2i18n(" ms", nullptr));
        CornerBarrierLabel->setText(tr2i18n("&Corner barrier:", nullptr));
#if QT_CONFIG(whatsthis)
        kcfg_CornerBarrier->setWhatsThis(tr2i18n("Here you can enable or disable the virtual corner barrier between screens. The barrier prevents the pointer from moving to another screen when it is already touching a screen corner. This makes it easier to trigger user interface elements like maximized windows' close buttons when using multiple screens.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        kcfg_CornerBarrier->setToolTip(tr2i18n("Prevents the pointer from crossing at screen corners.", "@info:tooltip"));
#endif // QT_CONFIG(tooltip)
        EdgeBarrierLabel->setText(tr2i18n("&Edge barrier:", nullptr));
#if QT_CONFIG(whatsthis)
        kcfg_EdgeBarrier->setWhatsThis(tr2i18n("Here you can set size of the edge barrier between different screens. The barrier adds additional distance you have to move your pointer before it crosses the edge onto the other screen. This makes it easier to access user interface elements like Plasma Panels that are located on an edge between screens.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        kcfg_EdgeBarrier->setToolTip(tr2i18n("Additional distance the pointer needs to travel to cross screen edges.", "@info:tooltip"));
#endif // QT_CONFIG(tooltip)
        kcfg_EdgeBarrier->setSpecialValueText(tr2i18n("None", nullptr));
        kcfg_EdgeBarrier->setSuffix(tr2i18n(" px", nullptr));
        (void)KWinScreenEdgesConfigUI;
    } // retranslateUi

};

namespace Ui {
    class KWinScreenEdgesConfigUI: public Ui_KWinScreenEdgesConfigUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAIN_H

