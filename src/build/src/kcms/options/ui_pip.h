/********************************************************************************
** Form generated from reading UI file 'pip.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIP_H
#define UI_PIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include <klocalizedstring.h>

QT_BEGIN_NAMESPACE

class Ui_KWinPipConfigForm
{
public:
    QFormLayout *formLayout;
    QLabel *homeCornerLabel;
    QComboBox *kcfg_PictureInPictureHomeCorner;
    QLabel *marginLabel;
    QSpinBox *kcfg_PictureInPictureMargin;

    void setupUi(QWidget *KWinPipConfigForm)
    {
        if (KWinPipConfigForm->objectName().isEmpty())
            KWinPipConfigForm->setObjectName("KWinPipConfigForm");
        KWinPipConfigForm->resize(1001, 297);
        formLayout = new QFormLayout(KWinPipConfigForm);
        formLayout->setObjectName("formLayout");
        formLayout->setFormAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        homeCornerLabel = new QLabel(KWinPipConfigForm);
        homeCornerLabel->setObjectName("homeCornerLabel");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, homeCornerLabel);

        kcfg_PictureInPictureHomeCorner = new QComboBox(KWinPipConfigForm);
        kcfg_PictureInPictureHomeCorner->addItem(QString());
        kcfg_PictureInPictureHomeCorner->addItem(QString());
        kcfg_PictureInPictureHomeCorner->addItem(QString());
        kcfg_PictureInPictureHomeCorner->addItem(QString());
        kcfg_PictureInPictureHomeCorner->setObjectName("kcfg_PictureInPictureHomeCorner");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, kcfg_PictureInPictureHomeCorner);

        marginLabel = new QLabel(KWinPipConfigForm);
        marginLabel->setObjectName("marginLabel");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, marginLabel);

        kcfg_PictureInPictureMargin = new QSpinBox(KWinPipConfigForm);
        kcfg_PictureInPictureMargin->setObjectName("kcfg_PictureInPictureMargin");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, kcfg_PictureInPictureMargin);

#if QT_CONFIG(shortcut)
        homeCornerLabel->setBuddy(kcfg_PictureInPictureHomeCorner);
#endif // QT_CONFIG(shortcut)

        retranslateUi(KWinPipConfigForm);

        QMetaObject::connectSlotsByName(KWinPipConfigForm);
    } // setupUi

    void retranslateUi(QWidget *KWinPipConfigForm)
    {
        homeCornerLabel->setText(tr2i18n("Open in screen corner:", nullptr));
        kcfg_PictureInPictureHomeCorner->setItemText(0, tr2i18n("Top-left", nullptr));
        kcfg_PictureInPictureHomeCorner->setItemText(1, tr2i18n("Top-right", nullptr));
        kcfg_PictureInPictureHomeCorner->setItemText(2, tr2i18n("Bottom-left", nullptr));
        kcfg_PictureInPictureHomeCorner->setItemText(3, tr2i18n("Bottom-right", nullptr));

        marginLabel->setText(tr2i18n("Margin:", nullptr));
        kcfg_PictureInPictureMargin->setSuffix(tr2i18n(" px", nullptr));
        (void)KWinPipConfigForm;
    } // retranslateUi

};

namespace Ui {
    class KWinPipConfigForm: public Ui_KWinPipConfigForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PIP_H

