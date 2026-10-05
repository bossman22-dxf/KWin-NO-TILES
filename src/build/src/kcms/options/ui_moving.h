/********************************************************************************
** Form generated from reading UI file 'moving.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVING_H
#define UI_MOVING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include <klocalizedstring.h>

QT_BEGIN_NAMESPACE

class Ui_KWinMovingConfigForm
{
public:
    QFormLayout *formLayout;
    QLabel *borderSnapLabel;
    QSpinBox *kcfg_BorderSnapZone;
    QLabel *windowSnapLabel;
    QSpinBox *kcfg_WindowSnapZone;
    QLabel *centerSnaplabel;
    QSpinBox *kcfg_CenterSnapZone;
    QLabel *OverlapSnapLabel;
    QCheckBox *kcfg_SnapOnlyWhenOverlapping;

    void setupUi(QWidget *KWinMovingConfigForm)
    {
        if (KWinMovingConfigForm->objectName().isEmpty())
            KWinMovingConfigForm->setObjectName("KWinMovingConfigForm");
        KWinMovingConfigForm->resize(600, 500);
        formLayout = new QFormLayout(KWinMovingConfigForm);
        formLayout->setObjectName("formLayout");
        formLayout->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);
        borderSnapLabel = new QLabel(KWinMovingConfigForm);
        borderSnapLabel->setObjectName("borderSnapLabel");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, borderSnapLabel);

        kcfg_BorderSnapZone = new QSpinBox(KWinMovingConfigForm);
        kcfg_BorderSnapZone->setObjectName("kcfg_BorderSnapZone");
        kcfg_BorderSnapZone->setMinimum(0);
        kcfg_BorderSnapZone->setMaximum(100);
        kcfg_BorderSnapZone->setValue(10);

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, kcfg_BorderSnapZone);

        windowSnapLabel = new QLabel(KWinMovingConfigForm);
        windowSnapLabel->setObjectName("windowSnapLabel");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, windowSnapLabel);

        kcfg_WindowSnapZone = new QSpinBox(KWinMovingConfigForm);
        kcfg_WindowSnapZone->setObjectName("kcfg_WindowSnapZone");
        kcfg_WindowSnapZone->setMinimum(0);
        kcfg_WindowSnapZone->setMaximum(100);
        kcfg_WindowSnapZone->setValue(10);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, kcfg_WindowSnapZone);

        centerSnaplabel = new QLabel(KWinMovingConfigForm);
        centerSnaplabel->setObjectName("centerSnaplabel");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, centerSnaplabel);

        kcfg_CenterSnapZone = new QSpinBox(KWinMovingConfigForm);
        kcfg_CenterSnapZone->setObjectName("kcfg_CenterSnapZone");
        kcfg_CenterSnapZone->setMinimum(0);
        kcfg_CenterSnapZone->setMaximum(100);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, kcfg_CenterSnapZone);

        OverlapSnapLabel = new QLabel(KWinMovingConfigForm);
        OverlapSnapLabel->setObjectName("OverlapSnapLabel");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, OverlapSnapLabel);

        kcfg_SnapOnlyWhenOverlapping = new QCheckBox(KWinMovingConfigForm);
        kcfg_SnapOnlyWhenOverlapping->setObjectName("kcfg_SnapOnlyWhenOverlapping");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, kcfg_SnapOnlyWhenOverlapping);

#if QT_CONFIG(shortcut)
        borderSnapLabel->setBuddy(kcfg_BorderSnapZone);
        windowSnapLabel->setBuddy(kcfg_WindowSnapZone);
        centerSnaplabel->setBuddy(kcfg_CenterSnapZone);
        OverlapSnapLabel->setBuddy(kcfg_SnapOnlyWhenOverlapping);
#endif // QT_CONFIG(shortcut)

        retranslateUi(KWinMovingConfigForm);

        QMetaObject::connectSlotsByName(KWinMovingConfigForm);
    } // setupUi

    void retranslateUi(QWidget *KWinMovingConfigForm)
    {
        borderSnapLabel->setText(tr2i18n("Screen &edge snap zone:", nullptr));
#if QT_CONFIG(whatsthis)
        kcfg_BorderSnapZone->setWhatsThis(tr2i18n("Here you can set the snap zone for screen edges, i.e. the 'strength' of the magnetic field which will make windows snap to the border when moved near it.", nullptr));
#endif // QT_CONFIG(whatsthis)
        kcfg_BorderSnapZone->setSpecialValueText(tr2i18n("None", nullptr));
        kcfg_BorderSnapZone->setSuffix(tr2i18n(" px", nullptr));
        windowSnapLabel->setText(tr2i18n("&Window snap zone:", nullptr));
#if QT_CONFIG(whatsthis)
        kcfg_WindowSnapZone->setWhatsThis(tr2i18n("Here you can set the snap zone for windows, i.e. the 'strength' of the magnetic field which will make windows snap to each other when they are moved near another window.", nullptr));
#endif // QT_CONFIG(whatsthis)
        kcfg_WindowSnapZone->setSpecialValueText(tr2i18n("None", nullptr));
        kcfg_WindowSnapZone->setSuffix(tr2i18n(" px", nullptr));
        centerSnaplabel->setText(tr2i18n("&Center snap zone:", nullptr));
#if QT_CONFIG(whatsthis)
        kcfg_CenterSnapZone->setWhatsThis(tr2i18n("Here you can set the snap zone for the screen center, i.e. the 'strength' of the magnetic field which will make windows snap to the center of the screen when moved near it.", nullptr));
#endif // QT_CONFIG(whatsthis)
        kcfg_CenterSnapZone->setSpecialValueText(tr2i18n("None", nullptr));
        kcfg_CenterSnapZone->setSuffix(tr2i18n(" px", nullptr));
        OverlapSnapLabel->setText(tr2i18n("&Snap windows:", nullptr));
#if QT_CONFIG(whatsthis)
        kcfg_SnapOnlyWhenOverlapping->setWhatsThis(tr2i18n("Here you can set that windows will be only snapped if you try to overlap them, i.e. they will not be snapped if the windows comes only near another window or border.", nullptr));
#endif // QT_CONFIG(whatsthis)
        kcfg_SnapOnlyWhenOverlapping->setText(tr2i18n("Only when overlapping", nullptr));
        (void)KWinMovingConfigForm;
    } // retranslateUi

};

namespace Ui {
    class KWinMovingConfigForm: public Ui_KWinMovingConfigForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MOVING_H

