/********************************************************************************
** Form generated from reading UI file 'mouse.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOUSE_H
#define UI_MOUSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <klocalizedstring.h>

QT_BEGIN_NAMESPACE

class Ui_KWinMouseConfigForm
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_1;
    QFormLayout *formLayout_1;
    QLabel *label_1;
    QComboBox *kcfg_TitlebarDoubleClickCommand;
    QLabel *label_2;
    QComboBox *kcfg_CommandTitlebarWheel;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_1;
    QSpacerItem *horizontalSpacer_1;
    QGridLayout *gridLayout_1;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *kcfg_CommandActiveTitlebar1;
    QComboBox *kcfg_CommandInactiveTitlebar1;
    QComboBox *kcfg_CommandActiveTitlebar2;
    QComboBox *kcfg_CommandInactiveTitlebar2;
    QComboBox *kcfg_CommandActiveTitlebar3;
    QComboBox *kcfg_CommandInactiveTitlebar3;
    QCheckBox *kcfg_DoubleClickBorderToMaximize;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_2;
    QLabel *label_8;
    QComboBox *kcfg_MaximizeButtonLeftClickCommand;
    QLabel *label_9;
    QComboBox *kcfg_MaximizeButtonMiddleClickCommand;
    QLabel *label_10;
    QComboBox *kcfg_MaximizeButtonRightClickCommand;
    QSpacerItem *verticalSpacer_1;

    void setupUi(QWidget *KWinMouseConfigForm)
    {
        if (KWinMouseConfigForm->objectName().isEmpty())
            KWinMouseConfigForm->setObjectName("KWinMouseConfigForm");
        KWinMouseConfigForm->resize(600, 500);
        verticalLayout = new QVBoxLayout(KWinMouseConfigForm);
        verticalLayout->setObjectName("verticalLayout");
        groupBox_1 = new QGroupBox(KWinMouseConfigForm);
        groupBox_1->setObjectName("groupBox_1");
        groupBox_1->setFlat(true);
        formLayout_1 = new QFormLayout(groupBox_1);
        formLayout_1->setObjectName("formLayout_1");
        formLayout_1->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_1 = new QLabel(groupBox_1);
        label_1->setObjectName("label_1");

        formLayout_1->setWidget(0, QFormLayout::ItemRole::LabelRole, label_1);

        kcfg_TitlebarDoubleClickCommand = new QComboBox(groupBox_1);
        kcfg_TitlebarDoubleClickCommand->addItem(QString());
        kcfg_TitlebarDoubleClickCommand->addItem(QString());
        kcfg_TitlebarDoubleClickCommand->addItem(QString());
        kcfg_TitlebarDoubleClickCommand->addItem(QString());
        kcfg_TitlebarDoubleClickCommand->addItem(QString());
        kcfg_TitlebarDoubleClickCommand->addItem(QString());
        kcfg_TitlebarDoubleClickCommand->addItem(QString());
        kcfg_TitlebarDoubleClickCommand->addItem(QString());
        kcfg_TitlebarDoubleClickCommand->setObjectName("kcfg_TitlebarDoubleClickCommand");

        formLayout_1->setWidget(0, QFormLayout::ItemRole::FieldRole, kcfg_TitlebarDoubleClickCommand);

        label_2 = new QLabel(groupBox_1);
        label_2->setObjectName("label_2");

        formLayout_1->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        kcfg_CommandTitlebarWheel = new QComboBox(groupBox_1);
        kcfg_CommandTitlebarWheel->addItem(QString());
        kcfg_CommandTitlebarWheel->addItem(QString());
        kcfg_CommandTitlebarWheel->addItem(QString());
        kcfg_CommandTitlebarWheel->addItem(QString());
        kcfg_CommandTitlebarWheel->addItem(QString());
        kcfg_CommandTitlebarWheel->addItem(QString());
        kcfg_CommandTitlebarWheel->setObjectName("kcfg_CommandTitlebarWheel");

        formLayout_1->setWidget(1, QFormLayout::ItemRole::FieldRole, kcfg_CommandTitlebarWheel);


        verticalLayout->addWidget(groupBox_1);

        groupBox_2 = new QGroupBox(KWinMouseConfigForm);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setFlat(true);
        groupBox_2->setAlignment(Qt::AlignCenter);
        horizontalLayout_1 = new QHBoxLayout(groupBox_2);
        horizontalLayout_1->setObjectName("horizontalLayout_1");
        horizontalSpacer_1 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_1->addItem(horizontalSpacer_1);

        gridLayout_1 = new QGridLayout();
        gridLayout_1->setObjectName("gridLayout_1");
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_1->addWidget(label_3, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_1->addWidget(label_5, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_1->addWidget(label_4, 0, 2, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_1->addWidget(label_6, 2, 0, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_1->addWidget(label_7, 3, 0, 1, 1);

        kcfg_CommandActiveTitlebar1 = new QComboBox(groupBox_2);
        kcfg_CommandActiveTitlebar1->addItem(QString());
        kcfg_CommandActiveTitlebar1->addItem(QString());
        kcfg_CommandActiveTitlebar1->addItem(QString());
        kcfg_CommandActiveTitlebar1->addItem(QString());
        kcfg_CommandActiveTitlebar1->addItem(QString());
        kcfg_CommandActiveTitlebar1->addItem(QString());
        kcfg_CommandActiveTitlebar1->addItem(QString());
        kcfg_CommandActiveTitlebar1->setObjectName("kcfg_CommandActiveTitlebar1");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(kcfg_CommandActiveTitlebar1->sizePolicy().hasHeightForWidth());
        kcfg_CommandActiveTitlebar1->setSizePolicy(sizePolicy);

        gridLayout_1->addWidget(kcfg_CommandActiveTitlebar1, 1, 1, 1, 1);

        kcfg_CommandInactiveTitlebar1 = new QComboBox(groupBox_2);
        kcfg_CommandInactiveTitlebar1->addItem(QString());
        kcfg_CommandInactiveTitlebar1->addItem(QString());
        kcfg_CommandInactiveTitlebar1->addItem(QString());
        kcfg_CommandInactiveTitlebar1->addItem(QString());
        kcfg_CommandInactiveTitlebar1->addItem(QString());
        kcfg_CommandInactiveTitlebar1->addItem(QString());
        kcfg_CommandInactiveTitlebar1->addItem(QString());
        kcfg_CommandInactiveTitlebar1->addItem(QString());
        kcfg_CommandInactiveTitlebar1->addItem(QString());
        kcfg_CommandInactiveTitlebar1->addItem(QString());
        kcfg_CommandInactiveTitlebar1->setObjectName("kcfg_CommandInactiveTitlebar1");

        gridLayout_1->addWidget(kcfg_CommandInactiveTitlebar1, 1, 2, 1, 1);

        kcfg_CommandActiveTitlebar2 = new QComboBox(groupBox_2);
        kcfg_CommandActiveTitlebar2->addItem(QString());
        kcfg_CommandActiveTitlebar2->addItem(QString());
        kcfg_CommandActiveTitlebar2->addItem(QString());
        kcfg_CommandActiveTitlebar2->addItem(QString());
        kcfg_CommandActiveTitlebar2->addItem(QString());
        kcfg_CommandActiveTitlebar2->addItem(QString());
        kcfg_CommandActiveTitlebar2->addItem(QString());
        kcfg_CommandActiveTitlebar2->setObjectName("kcfg_CommandActiveTitlebar2");
        sizePolicy.setHeightForWidth(kcfg_CommandActiveTitlebar2->sizePolicy().hasHeightForWidth());
        kcfg_CommandActiveTitlebar2->setSizePolicy(sizePolicy);

        gridLayout_1->addWidget(kcfg_CommandActiveTitlebar2, 2, 1, 1, 1);

        kcfg_CommandInactiveTitlebar2 = new QComboBox(groupBox_2);
        kcfg_CommandInactiveTitlebar2->addItem(QString());
        kcfg_CommandInactiveTitlebar2->addItem(QString());
        kcfg_CommandInactiveTitlebar2->addItem(QString());
        kcfg_CommandInactiveTitlebar2->addItem(QString());
        kcfg_CommandInactiveTitlebar2->addItem(QString());
        kcfg_CommandInactiveTitlebar2->addItem(QString());
        kcfg_CommandInactiveTitlebar2->addItem(QString());
        kcfg_CommandInactiveTitlebar2->addItem(QString());
        kcfg_CommandInactiveTitlebar2->addItem(QString());
        kcfg_CommandInactiveTitlebar2->addItem(QString());
        kcfg_CommandInactiveTitlebar2->setObjectName("kcfg_CommandInactiveTitlebar2");

        gridLayout_1->addWidget(kcfg_CommandInactiveTitlebar2, 2, 2, 1, 1);

        kcfg_CommandActiveTitlebar3 = new QComboBox(groupBox_2);
        kcfg_CommandActiveTitlebar3->addItem(QString());
        kcfg_CommandActiveTitlebar3->addItem(QString());
        kcfg_CommandActiveTitlebar3->addItem(QString());
        kcfg_CommandActiveTitlebar3->addItem(QString());
        kcfg_CommandActiveTitlebar3->addItem(QString());
        kcfg_CommandActiveTitlebar3->addItem(QString());
        kcfg_CommandActiveTitlebar3->addItem(QString());
        kcfg_CommandActiveTitlebar3->setObjectName("kcfg_CommandActiveTitlebar3");
        sizePolicy.setHeightForWidth(kcfg_CommandActiveTitlebar3->sizePolicy().hasHeightForWidth());
        kcfg_CommandActiveTitlebar3->setSizePolicy(sizePolicy);

        gridLayout_1->addWidget(kcfg_CommandActiveTitlebar3, 3, 1, 1, 1);

        kcfg_CommandInactiveTitlebar3 = new QComboBox(groupBox_2);
        kcfg_CommandInactiveTitlebar3->addItem(QString());
        kcfg_CommandInactiveTitlebar3->addItem(QString());
        kcfg_CommandInactiveTitlebar3->addItem(QString());
        kcfg_CommandInactiveTitlebar3->addItem(QString());
        kcfg_CommandInactiveTitlebar3->addItem(QString());
        kcfg_CommandInactiveTitlebar3->addItem(QString());
        kcfg_CommandInactiveTitlebar3->addItem(QString());
        kcfg_CommandInactiveTitlebar3->addItem(QString());
        kcfg_CommandInactiveTitlebar3->addItem(QString());
        kcfg_CommandInactiveTitlebar3->addItem(QString());
        kcfg_CommandInactiveTitlebar3->setObjectName("kcfg_CommandInactiveTitlebar3");

        gridLayout_1->addWidget(kcfg_CommandInactiveTitlebar3, 3, 2, 1, 1);

        kcfg_DoubleClickBorderToMaximize = new QCheckBox(groupBox_2);
        kcfg_DoubleClickBorderToMaximize->setObjectName("kcfg_DoubleClickBorderToMaximize");

        gridLayout_1->addWidget(kcfg_DoubleClickBorderToMaximize, 4, 1, 1, 2);


        horizontalLayout_1->addLayout(gridLayout_1);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_1->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(KWinMouseConfigForm);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setFlat(true);
        formLayout_2 = new QFormLayout(groupBox_3);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName("label_8");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, label_8);

        kcfg_MaximizeButtonLeftClickCommand = new QComboBox(groupBox_3);
        kcfg_MaximizeButtonLeftClickCommand->addItem(QString());
        kcfg_MaximizeButtonLeftClickCommand->addItem(QString());
        kcfg_MaximizeButtonLeftClickCommand->addItem(QString());
        kcfg_MaximizeButtonLeftClickCommand->setObjectName("kcfg_MaximizeButtonLeftClickCommand");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, kcfg_MaximizeButtonLeftClickCommand);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName("label_9");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::LabelRole, label_9);

        kcfg_MaximizeButtonMiddleClickCommand = new QComboBox(groupBox_3);
        kcfg_MaximizeButtonMiddleClickCommand->addItem(QString());
        kcfg_MaximizeButtonMiddleClickCommand->addItem(QString());
        kcfg_MaximizeButtonMiddleClickCommand->addItem(QString());
        kcfg_MaximizeButtonMiddleClickCommand->setObjectName("kcfg_MaximizeButtonMiddleClickCommand");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::FieldRole, kcfg_MaximizeButtonMiddleClickCommand);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName("label_10");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::LabelRole, label_10);

        kcfg_MaximizeButtonRightClickCommand = new QComboBox(groupBox_3);
        kcfg_MaximizeButtonRightClickCommand->addItem(QString());
        kcfg_MaximizeButtonRightClickCommand->addItem(QString());
        kcfg_MaximizeButtonRightClickCommand->addItem(QString());
        kcfg_MaximizeButtonRightClickCommand->setObjectName("kcfg_MaximizeButtonRightClickCommand");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::FieldRole, kcfg_MaximizeButtonRightClickCommand);


        verticalLayout->addWidget(groupBox_3);

        verticalSpacer_1 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_1);

#if QT_CONFIG(shortcut)
        label_1->setBuddy(kcfg_TitlebarDoubleClickCommand);
        label_2->setBuddy(kcfg_CommandTitlebarWheel);
        label_5->setBuddy(kcfg_CommandActiveTitlebar1);
        label_6->setBuddy(kcfg_CommandActiveTitlebar2);
        label_7->setBuddy(kcfg_CommandActiveTitlebar3);
        label_8->setBuddy(kcfg_MaximizeButtonLeftClickCommand);
        label_9->setBuddy(kcfg_MaximizeButtonMiddleClickCommand);
        label_10->setBuddy(kcfg_MaximizeButtonRightClickCommand);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(kcfg_TitlebarDoubleClickCommand, kcfg_CommandTitlebarWheel);
        QWidget::setTabOrder(kcfg_CommandTitlebarWheel, kcfg_CommandActiveTitlebar1);
        QWidget::setTabOrder(kcfg_CommandActiveTitlebar1, kcfg_CommandInactiveTitlebar1);
        QWidget::setTabOrder(kcfg_CommandInactiveTitlebar1, kcfg_CommandActiveTitlebar2);
        QWidget::setTabOrder(kcfg_CommandActiveTitlebar2, kcfg_CommandInactiveTitlebar2);
        QWidget::setTabOrder(kcfg_CommandInactiveTitlebar2, kcfg_CommandActiveTitlebar3);
        QWidget::setTabOrder(kcfg_CommandActiveTitlebar3, kcfg_CommandInactiveTitlebar3);
        QWidget::setTabOrder(kcfg_CommandInactiveTitlebar3, kcfg_MaximizeButtonLeftClickCommand);
        QWidget::setTabOrder(kcfg_MaximizeButtonLeftClickCommand, kcfg_MaximizeButtonMiddleClickCommand);
        QWidget::setTabOrder(kcfg_MaximizeButtonMiddleClickCommand, kcfg_MaximizeButtonRightClickCommand);

        retranslateUi(KWinMouseConfigForm);

        QMetaObject::connectSlotsByName(KWinMouseConfigForm);
    } // setupUi

    void retranslateUi(QWidget *KWinMouseConfigForm)
    {
        groupBox_1->setTitle(tr2i18n("Titlebar Actions", nullptr));
        label_1->setText(tr2i18n("&Double-click:", nullptr));
        kcfg_TitlebarDoubleClickCommand->setItemText(0, tr2i18n("Maximize", nullptr));
        kcfg_TitlebarDoubleClickCommand->setItemText(1, tr2i18n("Vertically maximize", nullptr));
        kcfg_TitlebarDoubleClickCommand->setItemText(2, tr2i18n("Horizontally maximize", nullptr));
        kcfg_TitlebarDoubleClickCommand->setItemText(3, tr2i18n("Minimize", nullptr));
        kcfg_TitlebarDoubleClickCommand->setItemText(4, tr2i18n("Lower", nullptr));
        kcfg_TitlebarDoubleClickCommand->setItemText(5, tr2i18n("Close", nullptr));
        kcfg_TitlebarDoubleClickCommand->setItemText(6, tr2i18n("Show on all desktops", nullptr));
        kcfg_TitlebarDoubleClickCommand->setItemText(7, tr2i18n("Do nothing", nullptr));

#if QT_CONFIG(whatsthis)
        kcfg_TitlebarDoubleClickCommand->setWhatsThis(tr2i18n("Behavior on <em>double</em> click into the titlebar.", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_2->setText(tr2i18n("Mouse &wheel:", nullptr));
        kcfg_CommandTitlebarWheel->setItemText(0, tr2i18n("Raise/lower", nullptr));
        kcfg_CommandTitlebarWheel->setItemText(1, tr2i18n("Maximize/restore", nullptr));
        kcfg_CommandTitlebarWheel->setItemText(2, tr2i18n("Keep above/below", nullptr));
        kcfg_CommandTitlebarWheel->setItemText(3, tr2i18n("Move to previous/next desktop", nullptr));
        kcfg_CommandTitlebarWheel->setItemText(4, tr2i18n("Change opacity", nullptr));
        kcfg_CommandTitlebarWheel->setItemText(5, tr2i18n("Do nothing", nullptr));

#if QT_CONFIG(whatsthis)
        kcfg_CommandTitlebarWheel->setWhatsThis(tr2i18n("Behavior on <em>mouse wheel</em> scroll over the titlebar.", nullptr));
#endif // QT_CONFIG(whatsthis)
        groupBox_2->setTitle(tr2i18n("Titlebar and Frame Actions", nullptr));
        label_3->setText(tr2i18n("Active", nullptr));
        label_5->setText(tr2i18n("&Left click:", nullptr));
        label_4->setText(tr2i18n("Inactive", nullptr));
        label_6->setText(tr2i18n("&Middle click:", nullptr));
        label_7->setText(tr2i18n("&Right click:", nullptr));
        kcfg_CommandActiveTitlebar1->setItemText(0, tr2i18n("Raise", nullptr));
        kcfg_CommandActiveTitlebar1->setItemText(1, tr2i18n("Lower", nullptr));
        kcfg_CommandActiveTitlebar1->setItemText(2, tr2i18n("Toggle raise and lower", nullptr));
        kcfg_CommandActiveTitlebar1->setItemText(3, tr2i18n("Minimize", nullptr));
        kcfg_CommandActiveTitlebar1->setItemText(4, tr2i18n("Close", nullptr));
        kcfg_CommandActiveTitlebar1->setItemText(5, tr2i18n("Window menu", nullptr));
        kcfg_CommandActiveTitlebar1->setItemText(6, tr2i18n("Do nothing", nullptr));

#if QT_CONFIG(whatsthis)
        kcfg_CommandActiveTitlebar1->setWhatsThis(tr2i18n("Behavior on <em>left</em> click into the titlebar or frame of an <em>active</em> window.", nullptr));
#endif // QT_CONFIG(whatsthis)
        kcfg_CommandInactiveTitlebar1->setItemText(0, tr2i18n("Activate and raise", nullptr));
        kcfg_CommandInactiveTitlebar1->setItemText(1, tr2i18n("Activate and lower", nullptr));
        kcfg_CommandInactiveTitlebar1->setItemText(2, tr2i18n("Activate", nullptr));
        kcfg_CommandInactiveTitlebar1->setItemText(3, tr2i18n("Raise", nullptr));
        kcfg_CommandInactiveTitlebar1->setItemText(4, tr2i18n("Lower", nullptr));
        kcfg_CommandInactiveTitlebar1->setItemText(5, tr2i18n("Toggle raise and lower", nullptr));
        kcfg_CommandInactiveTitlebar1->setItemText(6, tr2i18n("Minimize", nullptr));
        kcfg_CommandInactiveTitlebar1->setItemText(7, tr2i18n("Close", nullptr));
        kcfg_CommandInactiveTitlebar1->setItemText(8, tr2i18n("Window menu", nullptr));
        kcfg_CommandInactiveTitlebar1->setItemText(9, tr2i18n("Do nothing", nullptr));

#if QT_CONFIG(whatsthis)
        kcfg_CommandInactiveTitlebar1->setWhatsThis(tr2i18n("Behavior on <em>left</em> click into the titlebar or frame of an <em>inactive</em> window.", nullptr));
#endif // QT_CONFIG(whatsthis)
        kcfg_CommandActiveTitlebar2->setItemText(0, tr2i18n("Raise", nullptr));
        kcfg_CommandActiveTitlebar2->setItemText(1, tr2i18n("Lower", nullptr));
        kcfg_CommandActiveTitlebar2->setItemText(2, tr2i18n("Toggle raise and lower", nullptr));
        kcfg_CommandActiveTitlebar2->setItemText(3, tr2i18n("Minimize", nullptr));
        kcfg_CommandActiveTitlebar2->setItemText(4, tr2i18n("Close", nullptr));
        kcfg_CommandActiveTitlebar2->setItemText(5, tr2i18n("Window menu", nullptr));
        kcfg_CommandActiveTitlebar2->setItemText(6, tr2i18n("Do nothing", nullptr));

#if QT_CONFIG(whatsthis)
        kcfg_CommandActiveTitlebar2->setWhatsThis(tr2i18n("Behavior on <em>left</em> click into the titlebar or frame of an <em>active</em> window.", nullptr));
#endif // QT_CONFIG(whatsthis)
        kcfg_CommandInactiveTitlebar2->setItemText(0, tr2i18n("Activate and raise", nullptr));
        kcfg_CommandInactiveTitlebar2->setItemText(1, tr2i18n("Activate and lower", nullptr));
        kcfg_CommandInactiveTitlebar2->setItemText(2, tr2i18n("Activate", nullptr));
        kcfg_CommandInactiveTitlebar2->setItemText(3, tr2i18n("Raise", nullptr));
        kcfg_CommandInactiveTitlebar2->setItemText(4, tr2i18n("Lower", nullptr));
        kcfg_CommandInactiveTitlebar2->setItemText(5, tr2i18n("Toggle raise and lower", nullptr));
        kcfg_CommandInactiveTitlebar2->setItemText(6, tr2i18n("Minimize", nullptr));
        kcfg_CommandInactiveTitlebar2->setItemText(7, tr2i18n("Close", nullptr));
        kcfg_CommandInactiveTitlebar2->setItemText(8, tr2i18n("Window menu", nullptr));
        kcfg_CommandInactiveTitlebar2->setItemText(9, tr2i18n("Do nothing", nullptr));

#if QT_CONFIG(whatsthis)
        kcfg_CommandInactiveTitlebar2->setWhatsThis(tr2i18n("Behavior on <em>left</em> click into the titlebar or frame of an <em>inactive</em> window.", nullptr));
#endif // QT_CONFIG(whatsthis)
        kcfg_CommandActiveTitlebar3->setItemText(0, tr2i18n("Raise", nullptr));
        kcfg_CommandActiveTitlebar3->setItemText(1, tr2i18n("Lower", nullptr));
        kcfg_CommandActiveTitlebar3->setItemText(2, tr2i18n("Toggle raise and lower", nullptr));
        kcfg_CommandActiveTitlebar3->setItemText(3, tr2i18n("Minimize", nullptr));
        kcfg_CommandActiveTitlebar3->setItemText(4, tr2i18n("Close", nullptr));
        kcfg_CommandActiveTitlebar3->setItemText(5, tr2i18n("Window menu", nullptr));
        kcfg_CommandActiveTitlebar3->setItemText(6, tr2i18n("Do nothing", nullptr));

#if QT_CONFIG(whatsthis)
        kcfg_CommandActiveTitlebar3->setWhatsThis(tr2i18n("Behavior on <em>left</em> click into the titlebar or frame of an <em>active</em> window.", nullptr));
#endif // QT_CONFIG(whatsthis)
        kcfg_CommandInactiveTitlebar3->setItemText(0, tr2i18n("Activate and raise", nullptr));
        kcfg_CommandInactiveTitlebar3->setItemText(1, tr2i18n("Activate and lower", nullptr));
        kcfg_CommandInactiveTitlebar3->setItemText(2, tr2i18n("Activate", nullptr));
        kcfg_CommandInactiveTitlebar3->setItemText(3, tr2i18n("Raise", nullptr));
        kcfg_CommandInactiveTitlebar3->setItemText(4, tr2i18n("Lower", nullptr));
        kcfg_CommandInactiveTitlebar3->setItemText(5, tr2i18n("Toggle raise and lower", nullptr));
        kcfg_CommandInactiveTitlebar3->setItemText(6, tr2i18n("Minimize", nullptr));
        kcfg_CommandInactiveTitlebar3->setItemText(7, tr2i18n("Close", nullptr));
        kcfg_CommandInactiveTitlebar3->setItemText(8, tr2i18n("Window menu", nullptr));
        kcfg_CommandInactiveTitlebar3->setItemText(9, tr2i18n("Do nothing", nullptr));

#if QT_CONFIG(whatsthis)
        kcfg_CommandInactiveTitlebar3->setWhatsThis(tr2i18n("Behavior on <em>left</em> click into the titlebar or frame of an <em>inactive</em> window.", nullptr));
#endif // QT_CONFIG(whatsthis)
        kcfg_DoubleClickBorderToMaximize->setText(tr2i18n("Maximize window by double clicking its frame", nullptr));
        groupBox_3->setTitle(tr2i18n("Maximize Button Actions", nullptr));
#if QT_CONFIG(whatsthis)
        label_8->setWhatsThis(tr2i18n("Behavior on <em>left</em> click onto the maximize button.", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_8->setText(tr2i18n("L&eft click:", nullptr));
        kcfg_MaximizeButtonLeftClickCommand->setItemText(0, tr2i18n("Maximize", nullptr));
        kcfg_MaximizeButtonLeftClickCommand->setItemText(1, tr2i18n("Vertically maximize", nullptr));
        kcfg_MaximizeButtonLeftClickCommand->setItemText(2, tr2i18n("Horizontally maximize", nullptr));

#if QT_CONFIG(whatsthis)
        kcfg_MaximizeButtonLeftClickCommand->setWhatsThis(tr2i18n("Behavior on <em>left</em> click onto the maximize button.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        label_9->setWhatsThis(tr2i18n("Behavior on <em>middle</em> click onto the maximize button.", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_9->setText(tr2i18n("Middle c&lick:", nullptr));
        kcfg_MaximizeButtonMiddleClickCommand->setItemText(0, tr2i18n("Maximize", nullptr));
        kcfg_MaximizeButtonMiddleClickCommand->setItemText(1, tr2i18n("Vertically maximize", nullptr));
        kcfg_MaximizeButtonMiddleClickCommand->setItemText(2, tr2i18n("Horizontally maximize", nullptr));

#if QT_CONFIG(whatsthis)
        kcfg_MaximizeButtonMiddleClickCommand->setWhatsThis(tr2i18n("Behavior on <em>middle</em> click onto the maximize button.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        label_10->setWhatsThis(tr2i18n("Behavior on <em>right</em> click onto the maximize button.", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_10->setText(tr2i18n("Right clic&k:", nullptr));
        kcfg_MaximizeButtonRightClickCommand->setItemText(0, tr2i18n("Maximize", nullptr));
        kcfg_MaximizeButtonRightClickCommand->setItemText(1, tr2i18n("Vertically maximize", nullptr));
        kcfg_MaximizeButtonRightClickCommand->setItemText(2, tr2i18n("Horizontally maximize", nullptr));

#if QT_CONFIG(whatsthis)
        kcfg_MaximizeButtonRightClickCommand->setWhatsThis(tr2i18n("Behavior on <em>right</em> click onto the maximize button.", nullptr));
#endif // QT_CONFIG(whatsthis)
        (void)KWinMouseConfigForm;
    } // retranslateUi

};

namespace Ui {
    class KWinMouseConfigForm: public Ui_KWinMouseConfigForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MOUSE_H

