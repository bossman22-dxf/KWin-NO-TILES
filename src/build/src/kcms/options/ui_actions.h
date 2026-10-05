/********************************************************************************
** Form generated from reading UI file 'actions.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIONS_H
#define UI_ACTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <klocalizedstring.h>

QT_BEGIN_NAMESPACE

class Ui_KWinActionsConfigForm
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_1;
    QFormLayout *formLayout_1;
    QLabel *label_1;
    QComboBox *kcfg_CommandWindow1;
    QLabel *label_2;
    QComboBox *kcfg_CommandWindow2;
    QLabel *label_3;
    QComboBox *kcfg_CommandWindow3;
    QLabel *label_4;
    QComboBox *kcfg_CommandWindowWheel;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_1;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QComboBox *kcfg_CommandAllKey;
    QLabel *label_6;
    QFormLayout *formLayout_3;
    QLabel *label_7;
    QComboBox *kcfg_CommandAll1;
    QLabel *label_8;
    QComboBox *kcfg_CommandAll2;
    QLabel *label_9;
    QComboBox *kcfg_CommandAll3;
    QLabel *label_10;
    QComboBox *kcfg_CommandAllWheel;
    QSpacerItem *verticalSpacer_1;

    void setupUi(QWidget *KWinActionsConfigForm)
    {
        if (KWinActionsConfigForm->objectName().isEmpty())
            KWinActionsConfigForm->setObjectName("KWinActionsConfigForm");
        KWinActionsConfigForm->resize(600, 500);
        verticalLayout = new QVBoxLayout(KWinActionsConfigForm);
        verticalLayout->setObjectName("verticalLayout");
        groupBox_1 = new QGroupBox(KWinActionsConfigForm);
        groupBox_1->setObjectName("groupBox_1");
        groupBox_1->setFlat(true);
        formLayout_1 = new QFormLayout(groupBox_1);
        formLayout_1->setObjectName("formLayout_1");
        formLayout_1->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_1 = new QLabel(groupBox_1);
        label_1->setObjectName("label_1");
        label_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_1->setWidget(0, QFormLayout::ItemRole::LabelRole, label_1);

        kcfg_CommandWindow1 = new QComboBox(groupBox_1);
        kcfg_CommandWindow1->addItem(QString());
        kcfg_CommandWindow1->addItem(QString());
        kcfg_CommandWindow1->addItem(QString());
        kcfg_CommandWindow1->addItem(QString());
        kcfg_CommandWindow1->addItem(QString());
        kcfg_CommandWindow1->setObjectName("kcfg_CommandWindow1");

        formLayout_1->setWidget(0, QFormLayout::ItemRole::FieldRole, kcfg_CommandWindow1);

        label_2 = new QLabel(groupBox_1);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_1->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        kcfg_CommandWindow2 = new QComboBox(groupBox_1);
        kcfg_CommandWindow2->addItem(QString());
        kcfg_CommandWindow2->addItem(QString());
        kcfg_CommandWindow2->addItem(QString());
        kcfg_CommandWindow2->addItem(QString());
        kcfg_CommandWindow2->setObjectName("kcfg_CommandWindow2");

        formLayout_1->setWidget(1, QFormLayout::ItemRole::FieldRole, kcfg_CommandWindow2);

        label_3 = new QLabel(groupBox_1);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_1->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        kcfg_CommandWindow3 = new QComboBox(groupBox_1);
        kcfg_CommandWindow3->addItem(QString());
        kcfg_CommandWindow3->addItem(QString());
        kcfg_CommandWindow3->addItem(QString());
        kcfg_CommandWindow3->addItem(QString());
        kcfg_CommandWindow3->setObjectName("kcfg_CommandWindow3");

        formLayout_1->setWidget(2, QFormLayout::ItemRole::FieldRole, kcfg_CommandWindow3);

        label_4 = new QLabel(groupBox_1);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_1->setWidget(3, QFormLayout::ItemRole::LabelRole, label_4);

        kcfg_CommandWindowWheel = new QComboBox(groupBox_1);
        kcfg_CommandWindowWheel->addItem(QString());
        kcfg_CommandWindowWheel->addItem(QString());
        kcfg_CommandWindowWheel->addItem(QString());
        kcfg_CommandWindowWheel->setObjectName("kcfg_CommandWindowWheel");

        formLayout_1->setWidget(3, QFormLayout::ItemRole::FieldRole, kcfg_CommandWindowWheel);


        verticalLayout->addWidget(groupBox_1);

        groupBox_2 = new QGroupBox(KWinActionsConfigForm);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setFlat(true);
        horizontalLayout_1 = new QHBoxLayout(groupBox_2);
        horizontalLayout_1->setObjectName("horizontalLayout_1");
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setFormAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, label_5);

        kcfg_CommandAllKey = new QComboBox(groupBox_2);
        kcfg_CommandAllKey->addItem(QString());
        kcfg_CommandAllKey->addItem(QString());
        kcfg_CommandAllKey->setObjectName("kcfg_CommandAllKey");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, kcfg_CommandAllKey);


        horizontalLayout_1->addLayout(formLayout_2);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(24, 0));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_1->addWidget(label_6);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName("formLayout_3");
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(0, QFormLayout::ItemRole::LabelRole, label_7);

        kcfg_CommandAll1 = new QComboBox(groupBox_2);
        kcfg_CommandAll1->addItem(QString());
        kcfg_CommandAll1->addItem(QString());
        kcfg_CommandAll1->addItem(QString());
        kcfg_CommandAll1->addItem(QString());
        kcfg_CommandAll1->addItem(QString());
        kcfg_CommandAll1->addItem(QString());
        kcfg_CommandAll1->addItem(QString());
        kcfg_CommandAll1->addItem(QString());
        kcfg_CommandAll1->addItem(QString());
        kcfg_CommandAll1->addItem(QString());
        kcfg_CommandAll1->addItem(QString());
        kcfg_CommandAll1->setObjectName("kcfg_CommandAll1");

        formLayout_3->setWidget(0, QFormLayout::ItemRole::FieldRole, kcfg_CommandAll1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(1, QFormLayout::ItemRole::LabelRole, label_8);

        kcfg_CommandAll2 = new QComboBox(groupBox_2);
        kcfg_CommandAll2->addItem(QString());
        kcfg_CommandAll2->addItem(QString());
        kcfg_CommandAll2->addItem(QString());
        kcfg_CommandAll2->addItem(QString());
        kcfg_CommandAll2->addItem(QString());
        kcfg_CommandAll2->addItem(QString());
        kcfg_CommandAll2->addItem(QString());
        kcfg_CommandAll2->addItem(QString());
        kcfg_CommandAll2->addItem(QString());
        kcfg_CommandAll2->addItem(QString());
        kcfg_CommandAll2->addItem(QString());
        kcfg_CommandAll2->setObjectName("kcfg_CommandAll2");

        formLayout_3->setWidget(1, QFormLayout::ItemRole::FieldRole, kcfg_CommandAll2);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(2, QFormLayout::ItemRole::LabelRole, label_9);

        kcfg_CommandAll3 = new QComboBox(groupBox_2);
        kcfg_CommandAll3->addItem(QString());
        kcfg_CommandAll3->addItem(QString());
        kcfg_CommandAll3->addItem(QString());
        kcfg_CommandAll3->addItem(QString());
        kcfg_CommandAll3->addItem(QString());
        kcfg_CommandAll3->addItem(QString());
        kcfg_CommandAll3->addItem(QString());
        kcfg_CommandAll3->addItem(QString());
        kcfg_CommandAll3->addItem(QString());
        kcfg_CommandAll3->addItem(QString());
        kcfg_CommandAll3->addItem(QString());
        kcfg_CommandAll3->setObjectName("kcfg_CommandAll3");

        formLayout_3->setWidget(2, QFormLayout::ItemRole::FieldRole, kcfg_CommandAll3);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName("label_10");
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(3, QFormLayout::ItemRole::LabelRole, label_10);

        kcfg_CommandAllWheel = new QComboBox(groupBox_2);
        kcfg_CommandAllWheel->addItem(QString());
        kcfg_CommandAllWheel->addItem(QString());
        kcfg_CommandAllWheel->addItem(QString());
        kcfg_CommandAllWheel->addItem(QString());
        kcfg_CommandAllWheel->addItem(QString());
        kcfg_CommandAllWheel->addItem(QString());
        kcfg_CommandAllWheel->setObjectName("kcfg_CommandAllWheel");

        formLayout_3->setWidget(3, QFormLayout::ItemRole::FieldRole, kcfg_CommandAllWheel);


        horizontalLayout_1->addLayout(formLayout_3);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer_1 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_1);

#if QT_CONFIG(shortcut)
        label_1->setBuddy(kcfg_CommandWindow1);
        label_2->setBuddy(kcfg_CommandWindow2);
        label_3->setBuddy(kcfg_CommandWindow3);
        label_4->setBuddy(kcfg_CommandWindowWheel);
        label_5->setBuddy(kcfg_CommandAllKey);
        label_7->setBuddy(kcfg_CommandAll1);
        label_8->setBuddy(kcfg_CommandAll2);
        label_9->setBuddy(kcfg_CommandAll3);
        label_10->setBuddy(kcfg_CommandAllWheel);
#endif // QT_CONFIG(shortcut)

        retranslateUi(KWinActionsConfigForm);

        QMetaObject::connectSlotsByName(KWinActionsConfigForm);
    } // setupUi

    void retranslateUi(QWidget *KWinActionsConfigForm)
    {
        groupBox_1->setTitle(tr2i18n("Inactive Inner Window Actions", nullptr));
        label_1->setText(tr2i18n("&Left click:", nullptr));
        kcfg_CommandWindow1->setItemText(0, tr2i18n("Activate, pass click and raise on release", nullptr));
        kcfg_CommandWindow1->setItemText(1, tr2i18n("Activate, raise and pass click", nullptr));
        kcfg_CommandWindow1->setItemText(2, tr2i18n("Activate and pass click", nullptr));
        kcfg_CommandWindow1->setItemText(3, tr2i18n("Activate", nullptr));
        kcfg_CommandWindow1->setItemText(4, tr2i18n("Activate and raise", nullptr));

#if QT_CONFIG(whatsthis)
        kcfg_CommandWindow1->setWhatsThis(tr2i18n("In this row you can customize left click behavior when clicking into an inactive inner window ('inner' means: not titlebar, not frame).", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_2->setText(tr2i18n("&Middle click:", nullptr));
        kcfg_CommandWindow2->setItemText(0, tr2i18n("Activate, raise and pass click", nullptr));
        kcfg_CommandWindow2->setItemText(1, tr2i18n("Activate and pass click", nullptr));
        kcfg_CommandWindow2->setItemText(2, tr2i18n("Activate", nullptr));
        kcfg_CommandWindow2->setItemText(3, tr2i18n("Activate and raise", nullptr));

#if QT_CONFIG(whatsthis)
        kcfg_CommandWindow2->setWhatsThis(tr2i18n("In this row you can customize middle click behavior when clicking into an inactive inner window ('inner' means: not titlebar, not frame).", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_3->setText(tr2i18n("&Right click:", nullptr));
        kcfg_CommandWindow3->setItemText(0, tr2i18n("Activate, raise and pass click", nullptr));
        kcfg_CommandWindow3->setItemText(1, tr2i18n("Activate and pass click", nullptr));
        kcfg_CommandWindow3->setItemText(2, tr2i18n("Activate", nullptr));
        kcfg_CommandWindow3->setItemText(3, tr2i18n("Activate and raise", nullptr));

#if QT_CONFIG(whatsthis)
        kcfg_CommandWindow3->setWhatsThis(tr2i18n("In this row you can customize right click behavior when clicking into an inactive inner window ('inner' means: not titlebar, not frame).", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_4->setText(tr2i18n("Mouse &wheel:", nullptr));
        kcfg_CommandWindowWheel->setItemText(0, tr2i18n("Scroll", nullptr));
        kcfg_CommandWindowWheel->setItemText(1, tr2i18n("Activate and scroll", nullptr));
        kcfg_CommandWindowWheel->setItemText(2, tr2i18n("Activate, raise and scroll", nullptr));

#if QT_CONFIG(whatsthis)
        kcfg_CommandWindowWheel->setWhatsThis(tr2i18n("In this row you can customize behavior when scrolling into an inactive inner window ('inner' means: not titlebar, not frame).", nullptr));
#endif // QT_CONFIG(whatsthis)
        groupBox_2->setTitle(tr2i18n("Inner Window, Titlebar and Frame Actions", nullptr));
        label_5->setText(tr2i18n("Mo&difier key:", nullptr));
        kcfg_CommandAllKey->setItemText(0, tr2i18n("Meta", nullptr));
        kcfg_CommandAllKey->setItemText(1, tr2i18n("Alt", nullptr));

#if QT_CONFIG(whatsthis)
        kcfg_CommandAllKey->setWhatsThis(tr2i18n("Here you select whether holding the Meta key or Alt key will allow you to perform the following actions.", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_6->setText(tr2i18n("  + ", nullptr));
        label_7->setText(tr2i18n("L&eft click:", nullptr));
        kcfg_CommandAll1->setItemText(0, tr2i18n("Move", nullptr));
        kcfg_CommandAll1->setItemText(1, tr2i18n("Activate, raise and move", nullptr));
        kcfg_CommandAll1->setItemText(2, tr2i18n("Toggle raise and lower", nullptr));
        kcfg_CommandAll1->setItemText(3, tr2i18n("Resize", nullptr));
        kcfg_CommandAll1->setItemText(4, tr2i18n("Raise", nullptr));
        kcfg_CommandAll1->setItemText(5, tr2i18n("Lower", nullptr));
        kcfg_CommandAll1->setItemText(6, tr2i18n("Minimize", nullptr));
        kcfg_CommandAll1->setItemText(7, tr2i18n("Decrease opacity", nullptr));
        kcfg_CommandAll1->setItemText(8, tr2i18n("Increase opacity", nullptr));
        kcfg_CommandAll1->setItemText(9, tr2i18n("Window menu", nullptr));
        kcfg_CommandAll1->setItemText(10, tr2i18n("Do nothing", nullptr));

#if QT_CONFIG(whatsthis)
        kcfg_CommandAll1->setWhatsThis(tr2i18n("In this row you can customize left click behavior when clicking into the titlebar or the frame.", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_8->setText(tr2i18n("Middle &click:", nullptr));
        kcfg_CommandAll2->setItemText(0, tr2i18n("Move", nullptr));
        kcfg_CommandAll2->setItemText(1, tr2i18n("Activate, raise and move", nullptr));
        kcfg_CommandAll2->setItemText(2, tr2i18n("Toggle raise and lower", nullptr));
        kcfg_CommandAll2->setItemText(3, tr2i18n("Resize", nullptr));
        kcfg_CommandAll2->setItemText(4, tr2i18n("Raise", nullptr));
        kcfg_CommandAll2->setItemText(5, tr2i18n("Lower", nullptr));
        kcfg_CommandAll2->setItemText(6, tr2i18n("Minimize", nullptr));
        kcfg_CommandAll2->setItemText(7, tr2i18n("Decrease opacity", nullptr));
        kcfg_CommandAll2->setItemText(8, tr2i18n("Increase opacity", nullptr));
        kcfg_CommandAll2->setItemText(9, tr2i18n("Window menu", nullptr));
        kcfg_CommandAll2->setItemText(10, tr2i18n("Do nothing", nullptr));

#if QT_CONFIG(whatsthis)
        kcfg_CommandAll2->setWhatsThis(tr2i18n("In this row you can customize middle click behavior when clicking into the titlebar or the frame.", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_9->setText(tr2i18n("Right clic&k:", nullptr));
        kcfg_CommandAll3->setItemText(0, tr2i18n("Move", nullptr));
        kcfg_CommandAll3->setItemText(1, tr2i18n("Activate, raise and move", nullptr));
        kcfg_CommandAll3->setItemText(2, tr2i18n("Toggle raise and lower", nullptr));
        kcfg_CommandAll3->setItemText(3, tr2i18n("Resize", nullptr));
        kcfg_CommandAll3->setItemText(4, tr2i18n("Raise", nullptr));
        kcfg_CommandAll3->setItemText(5, tr2i18n("Lower", nullptr));
        kcfg_CommandAll3->setItemText(6, tr2i18n("Minimize", nullptr));
        kcfg_CommandAll3->setItemText(7, tr2i18n("Decrease opacity", nullptr));
        kcfg_CommandAll3->setItemText(8, tr2i18n("Increase opacity", nullptr));
        kcfg_CommandAll3->setItemText(9, tr2i18n("Window menu", nullptr));
        kcfg_CommandAll3->setItemText(10, tr2i18n("Do nothing", nullptr));

#if QT_CONFIG(whatsthis)
        kcfg_CommandAll3->setWhatsThis(tr2i18n("In this row you can customize right click behavior when clicking into the titlebar or the frame.", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_10->setText(tr2i18n("Mo&use wheel:", nullptr));
        kcfg_CommandAllWheel->setItemText(0, tr2i18n("Raise/lower", nullptr));
        kcfg_CommandAllWheel->setItemText(1, tr2i18n("Maximize/restore", nullptr));
        kcfg_CommandAllWheel->setItemText(2, tr2i18n("Keep above/below", nullptr));
        kcfg_CommandAllWheel->setItemText(3, tr2i18n("Move to previous/next desktop", nullptr));
        kcfg_CommandAllWheel->setItemText(4, tr2i18n("Change opacity", nullptr));
        kcfg_CommandAllWheel->setItemText(5, tr2i18n("Do nothing", nullptr));

#if QT_CONFIG(whatsthis)
        kcfg_CommandAllWheel->setWhatsThis(tr2i18n("Here you can customize KDE's behavior when scrolling with the mouse wheel in a window while pressing the modifier key.", nullptr));
#endif // QT_CONFIG(whatsthis)
        (void)KWinActionsConfigForm;
    } // retranslateUi

};

namespace Ui {
    class KWinActionsConfigForm: public Ui_KWinActionsConfigForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ACTIONS_H

