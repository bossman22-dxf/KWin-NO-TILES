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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <klocalizedstring.h>
#include "kkeysequencewidget.h"

QT_BEGIN_NAMESPACE

class Ui_KWinTabBoxConfigForm
{
public:
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QCheckBox *showDesktop;
    QComboBox *switchingModeCombo;
    QCheckBox *oneAppWindow;
    QCheckBox *orderMinimized;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *filterDesktops;
    QWidget *desktopFilter;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QRadioButton *currentDesktop;
    QRadioButton *otherDesktops;
    QCheckBox *filterActivities;
    QWidget *activityFilter;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QRadioButton *currentActivity;
    QRadioButton *otherActivities;
    QCheckBox *filterScreens;
    QWidget *screenFilter;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_8;
    QRadioButton *currentScreen;
    QRadioButton *otherScreens;
    QCheckBox *filterMinimization;
    QWidget *minimizationFilter;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_9;
    QRadioButton *visibleWindows;
    QRadioButton *hiddenWindows;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QFrame *line;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *scCurrentReverseContainer;
    QHBoxLayout *scCurrentReverseLayout;
    KKeySequenceWidget *scCurrentReverse;
    QLabel *scCurrentReverseOr;
    KKeySequenceWidget *scCurrentReverseAlternate;
    QSpacerItem *scCurrentReverseSpacer;
    QWidget *scCurrentContainer;
    QHBoxLayout *scCurrentLayout;
    KKeySequenceWidget *scCurrent;
    QLabel *scCurrentOr;
    KKeySequenceWidget *scCurrentAlternate;
    QSpacerItem *scCurrentSpacer;
    QLabel *label_2;
    QWidget *scAllReverseContainer;
    QHBoxLayout *scAllReverseLayout;
    KKeySequenceWidget *scAllReverse;
    QLabel *scAllReverseOr;
    KKeySequenceWidget *scAllReverseAlternate;
    QSpacerItem *scAllReverseSpacer;
    QWidget *scAllContainer;
    QHBoxLayout *scAllLayout;
    KKeySequenceWidget *scAll;
    QLabel *scAllOr;
    KKeySequenceWidget *scAllAlternate;
    QSpacerItem *scAllSpacer;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QCheckBox *kcfg_HighlightWindows;
    QLabel *label_HighlightWindows;
    QCheckBox *kcfg_ShowTabBox;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout;
    QComboBox *effectCombo;
    QPushButton *effectPreviewButton;
    QLabel *label_DelayTime;
    QSpinBox *kcfg_DelayTime;
    QLabel *label_showScreen;
    QComboBox *showScreenCombo;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *KWinTabBoxConfigForm)
    {
        if (KWinTabBoxConfigForm->objectName().isEmpty())
            KWinTabBoxConfigForm->setObjectName("KWinTabBoxConfigForm");
        KWinTabBoxConfigForm->resize(658, 418);
        horizontalLayout_2 = new QHBoxLayout(KWinTabBoxConfigForm);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        groupBox_3 = new QGroupBox(KWinTabBoxConfigForm);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setFlat(true);
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName("gridLayout_2");
        showDesktop = new QCheckBox(groupBox_3);
        showDesktop->setObjectName("showDesktop");

        gridLayout_2->addWidget(showDesktop, 1, 0, 2, 3);

        switchingModeCombo = new QComboBox(groupBox_3);
        switchingModeCombo->addItem(QString());
        switchingModeCombo->addItem(QString());
        switchingModeCombo->setObjectName("switchingModeCombo");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(switchingModeCombo->sizePolicy().hasHeightForWidth());
        switchingModeCombo->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(switchingModeCombo, 0, 1, 1, 1);

        oneAppWindow = new QCheckBox(groupBox_3);
        oneAppWindow->setObjectName("oneAppWindow");
        oneAppWindow->setChecked(false);

        gridLayout_2->addWidget(oneAppWindow, 3, 0, 1, 3);

        orderMinimized = new QCheckBox(groupBox_3);
        orderMinimized->setObjectName("orderMinimized");
        orderMinimized->setChecked(false);

        gridLayout_2->addWidget(orderMinimized, 4, 0, 1, 3);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 2, 1, 1);


        gridLayout_5->addWidget(groupBox_3, 0, 2, 1, 1);

        groupBox = new QGroupBox(KWinTabBoxConfigForm);
        groupBox->setObjectName("groupBox");
        groupBox->setFlat(true);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        filterDesktops = new QCheckBox(groupBox);
        filterDesktops->setObjectName("filterDesktops");
        filterDesktops->setChecked(false);

        verticalLayout->addWidget(filterDesktops);

        desktopFilter = new QWidget(groupBox);
        desktopFilter->setObjectName("desktopFilter");
        desktopFilter->setEnabled(false);
        horizontalLayout_3 = new QHBoxLayout(desktopFilter);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(24, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        currentDesktop = new QRadioButton(desktopFilter);
        currentDesktop->setObjectName("currentDesktop");

        horizontalLayout_3->addWidget(currentDesktop);

        otherDesktops = new QRadioButton(desktopFilter);
        otherDesktops->setObjectName("otherDesktops");

        horizontalLayout_3->addWidget(otherDesktops);


        verticalLayout->addWidget(desktopFilter);

        filterActivities = new QCheckBox(groupBox);
        filterActivities->setObjectName("filterActivities");
        filterActivities->setChecked(false);

        verticalLayout->addWidget(filterActivities);

        activityFilter = new QWidget(groupBox);
        activityFilter->setObjectName("activityFilter");
        activityFilter->setEnabled(false);
        horizontalLayout_4 = new QHBoxLayout(activityFilter);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(24, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        currentActivity = new QRadioButton(activityFilter);
        currentActivity->setObjectName("currentActivity");

        horizontalLayout_4->addWidget(currentActivity);

        otherActivities = new QRadioButton(activityFilter);
        otherActivities->setObjectName("otherActivities");

        horizontalLayout_4->addWidget(otherActivities);


        verticalLayout->addWidget(activityFilter);

        filterScreens = new QCheckBox(groupBox);
        filterScreens->setObjectName("filterScreens");
        filterScreens->setChecked(false);

        verticalLayout->addWidget(filterScreens);

        screenFilter = new QWidget(groupBox);
        screenFilter->setObjectName("screenFilter");
        screenFilter->setEnabled(false);
        horizontalLayout_7 = new QHBoxLayout(screenFilter);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_8 = new QSpacerItem(24, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        currentScreen = new QRadioButton(screenFilter);
        currentScreen->setObjectName("currentScreen");

        horizontalLayout_7->addWidget(currentScreen);

        otherScreens = new QRadioButton(screenFilter);
        otherScreens->setObjectName("otherScreens");

        horizontalLayout_7->addWidget(otherScreens);


        verticalLayout->addWidget(screenFilter);

        filterMinimization = new QCheckBox(groupBox);
        filterMinimization->setObjectName("filterMinimization");
        filterMinimization->setChecked(false);

        verticalLayout->addWidget(filterMinimization);

        minimizationFilter = new QWidget(groupBox);
        minimizationFilter->setObjectName("minimizationFilter");
        minimizationFilter->setEnabled(false);
        horizontalLayout_6 = new QHBoxLayout(minimizationFilter);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_9 = new QSpacerItem(24, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        visibleWindows = new QRadioButton(minimizationFilter);
        visibleWindows->setObjectName("visibleWindows");

        horizontalLayout_6->addWidget(visibleWindows);

        hiddenWindows = new QRadioButton(minimizationFilter);
        hiddenWindows->setObjectName("hiddenWindows");

        horizontalLayout_6->addWidget(hiddenWindows);


        verticalLayout->addWidget(minimizationFilter);


        gridLayout_5->addWidget(groupBox, 1, 2, 3, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 3, 0, 2, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 4, 2, 1, 1);

        groupBox_4 = new QGroupBox(KWinTabBoxConfigForm);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setFlat(true);
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName("gridLayout_4");
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_3, 1, 0, 1, 1);

        line = new QFrame(groupBox_4);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_4->addWidget(line, 3, 0, 1, 4);

        label = new QLabel(groupBox_4);
        label->setObjectName("label");
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label, 0, 0, 1, 4);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_4, 2, 0, 1, 1);

        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_5, 5, 0, 1, 1);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_6, 6, 0, 1, 1);

        scCurrentReverseContainer = new QWidget(groupBox_4);
        scCurrentReverseContainer->setObjectName("scCurrentReverseContainer");
        scCurrentReverseLayout = new QHBoxLayout(scCurrentReverseContainer);
        scCurrentReverseLayout->setObjectName("scCurrentReverseLayout");
        scCurrentReverseLayout->setContentsMargins(0, 0, 0, 0);
        scCurrentReverse = new KKeySequenceWidget(scCurrentReverseContainer);
        scCurrentReverse->setObjectName("scCurrentReverse");

        scCurrentReverseLayout->addWidget(scCurrentReverse);

        scCurrentReverseOr = new QLabel(scCurrentReverseContainer);
        scCurrentReverseOr->setObjectName("scCurrentReverseOr");

        scCurrentReverseLayout->addWidget(scCurrentReverseOr);

        scCurrentReverseAlternate = new KKeySequenceWidget(scCurrentReverseContainer);
        scCurrentReverseAlternate->setObjectName("scCurrentReverseAlternate");

        scCurrentReverseLayout->addWidget(scCurrentReverseAlternate);

        scCurrentReverseSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        scCurrentReverseLayout->addItem(scCurrentReverseSpacer);


        gridLayout_4->addWidget(scCurrentReverseContainer, 6, 1, 1, 3);

        scCurrentContainer = new QWidget(groupBox_4);
        scCurrentContainer->setObjectName("scCurrentContainer");
        scCurrentLayout = new QHBoxLayout(scCurrentContainer);
        scCurrentLayout->setObjectName("scCurrentLayout");
        scCurrentLayout->setContentsMargins(0, 0, 0, 0);
        scCurrent = new KKeySequenceWidget(scCurrentContainer);
        scCurrent->setObjectName("scCurrent");

        scCurrentLayout->addWidget(scCurrent);

        scCurrentOr = new QLabel(scCurrentContainer);
        scCurrentOr->setObjectName("scCurrentOr");

        scCurrentLayout->addWidget(scCurrentOr);

        scCurrentAlternate = new KKeySequenceWidget(scCurrentContainer);
        scCurrentAlternate->setObjectName("scCurrentAlternate");

        scCurrentLayout->addWidget(scCurrentAlternate);

        scCurrentSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        scCurrentLayout->addItem(scCurrentSpacer);


        gridLayout_4->addWidget(scCurrentContainer, 5, 1, 1, 3);

        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_2, 4, 0, 1, 4);

        scAllReverseContainer = new QWidget(groupBox_4);
        scAllReverseContainer->setObjectName("scAllReverseContainer");
        scAllReverseLayout = new QHBoxLayout(scAllReverseContainer);
        scAllReverseLayout->setObjectName("scAllReverseLayout");
        scAllReverseLayout->setContentsMargins(0, 0, 0, 0);
        scAllReverse = new KKeySequenceWidget(scAllReverseContainer);
        scAllReverse->setObjectName("scAllReverse");

        scAllReverseLayout->addWidget(scAllReverse);

        scAllReverseOr = new QLabel(scAllReverseContainer);
        scAllReverseOr->setObjectName("scAllReverseOr");

        scAllReverseLayout->addWidget(scAllReverseOr);

        scAllReverseAlternate = new KKeySequenceWidget(scAllReverseContainer);
        scAllReverseAlternate->setObjectName("scAllReverseAlternate");

        scAllReverseLayout->addWidget(scAllReverseAlternate);

        scAllReverseSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        scAllReverseLayout->addItem(scAllReverseSpacer);


        gridLayout_4->addWidget(scAllReverseContainer, 2, 1, 1, 3);

        scAllContainer = new QWidget(groupBox_4);
        scAllContainer->setObjectName("scAllContainer");
        scAllLayout = new QHBoxLayout(scAllContainer);
        scAllLayout->setObjectName("scAllLayout");
        scAllLayout->setContentsMargins(0, 0, 0, 0);
        scAll = new KKeySequenceWidget(scAllContainer);
        scAll->setObjectName("scAll");

        scAllLayout->addWidget(scAll);

        scAllOr = new QLabel(scAllContainer);
        scAllOr->setObjectName("scAllOr");

        scAllLayout->addWidget(scAllOr);

        scAllAlternate = new KKeySequenceWidget(scAllContainer);
        scAllAlternate->setObjectName("scAllAlternate");

        scAllLayout->addWidget(scAllAlternate);

        scAllSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        scAllLayout->addItem(scAllSpacer);


        gridLayout_4->addWidget(scAllContainer, 1, 1, 1, 3);


        gridLayout_5->addWidget(groupBox_4, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(KWinTabBoxConfigForm);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setFlat(true);
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName("gridLayout_3");
        kcfg_HighlightWindows = new QCheckBox(groupBox_2);
        kcfg_HighlightWindows->setObjectName("kcfg_HighlightWindows");

        gridLayout_3->addWidget(kcfg_HighlightWindows, 0, 0, 1, 1, Qt::AlignRight|Qt::AlignVCenter);

        label_HighlightWindows = new QLabel(groupBox_2);
        label_HighlightWindows->setObjectName("label_HighlightWindows");

        gridLayout_3->addWidget(label_HighlightWindows, 0, 1, 1, 1, Qt::AlignLeft|Qt::AlignVCenter);

        kcfg_ShowTabBox = new QCheckBox(groupBox_2);
        kcfg_ShowTabBox->setObjectName("kcfg_ShowTabBox");
        kcfg_ShowTabBox->setChecked(true);

        gridLayout_3->addWidget(kcfg_ShowTabBox, 1, 0, 1, 1, Qt::AlignRight|Qt::AlignVCenter);

        widget_6 = new QWidget(groupBox_2);
        widget_6->setObjectName("widget_6");
        horizontalLayout = new QHBoxLayout(widget_6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        effectCombo = new QComboBox(widget_6);
        effectCombo->setObjectName("effectCombo");
        sizePolicy.setHeightForWidth(effectCombo->sizePolicy().hasHeightForWidth());
        effectCombo->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(effectCombo);

        effectPreviewButton = new QPushButton(widget_6);
        effectPreviewButton->setObjectName("effectPreviewButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(effectPreviewButton->sizePolicy().hasHeightForWidth());
        effectPreviewButton->setSizePolicy(sizePolicy1);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("view-preview")));
        effectPreviewButton->setIcon(icon);

        horizontalLayout->addWidget(effectPreviewButton);


        gridLayout_3->addWidget(widget_6, 1, 1, 1, 1);

        label_DelayTime = new QLabel(groupBox_2);
        label_DelayTime->setObjectName("label_DelayTime");

        gridLayout_3->addWidget(label_DelayTime, 2, 0, 1, 1, Qt::AlignRight|Qt::AlignVCenter);

        kcfg_DelayTime = new QSpinBox(groupBox_2);
        kcfg_DelayTime->setObjectName("kcfg_DelayTime");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(kcfg_DelayTime->sizePolicy().hasHeightForWidth());
        kcfg_DelayTime->setSizePolicy(sizePolicy2);
        kcfg_DelayTime->setMinimum(0);
        kcfg_DelayTime->setMaximum(5000);
        kcfg_DelayTime->setSingleStep(50);
        kcfg_DelayTime->setValue(0);

        gridLayout_3->addWidget(kcfg_DelayTime, 2, 1, 1, 1, Qt::AlignLeft|Qt::AlignVCenter);

        label_showScreen = new QLabel(groupBox_2);
        label_showScreen->setObjectName("label_showScreen");

        gridLayout_3->addWidget(label_showScreen, 3, 0, 1, 1);

        showScreenCombo = new QComboBox(groupBox_2);
        showScreenCombo->addItem(QString());
        showScreenCombo->addItem(QString());
        showScreenCombo->setObjectName("showScreenCombo");
        sizePolicy.setHeightForWidth(showScreenCombo->sizePolicy().hasHeightForWidth());
        showScreenCombo->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(showScreenCombo, 3, 1, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 0, 0, 2, 1);

        line_2 = new QFrame(KWinTabBoxConfigForm);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_5->addWidget(line_2, 0, 1, 3, 1);


        horizontalLayout_2->addLayout(gridLayout_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 2);
#if QT_CONFIG(shortcut)
        label_8->setBuddy(switchingModeCombo);
        label_HighlightWindows->setBuddy(kcfg_HighlightWindows);
        label_DelayTime->setBuddy(kcfg_DelayTime);
        label_showScreen->setBuddy(showScreenCombo);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(kcfg_HighlightWindows, kcfg_ShowTabBox);
        QWidget::setTabOrder(kcfg_ShowTabBox, effectCombo);
        QWidget::setTabOrder(effectCombo, effectPreviewButton);
        QWidget::setTabOrder(effectPreviewButton, showScreenCombo);
        QWidget::setTabOrder(showScreenCombo, switchingModeCombo);
        QWidget::setTabOrder(switchingModeCombo, showDesktop);
        QWidget::setTabOrder(showDesktop, oneAppWindow);
        QWidget::setTabOrder(oneAppWindow, filterDesktops);
        QWidget::setTabOrder(filterDesktops, currentDesktop);
        QWidget::setTabOrder(currentDesktop, otherDesktops);
        QWidget::setTabOrder(otherDesktops, filterActivities);
        QWidget::setTabOrder(filterActivities, currentActivity);
        QWidget::setTabOrder(currentActivity, otherActivities);
        QWidget::setTabOrder(otherActivities, filterScreens);
        QWidget::setTabOrder(filterScreens, currentScreen);
        QWidget::setTabOrder(currentScreen, otherScreens);
        QWidget::setTabOrder(otherScreens, filterMinimization);
        QWidget::setTabOrder(filterMinimization, visibleWindows);
        QWidget::setTabOrder(visibleWindows, hiddenWindows);

        retranslateUi(KWinTabBoxConfigForm);
        QObject::connect(filterDesktops, &QCheckBox::toggled, desktopFilter, &QWidget::setEnabled);
        QObject::connect(filterActivities, &QCheckBox::toggled, activityFilter, &QWidget::setEnabled);
        QObject::connect(filterScreens, &QCheckBox::toggled, screenFilter, &QWidget::setEnabled);
        QObject::connect(filterMinimization, &QCheckBox::toggled, minimizationFilter, &QWidget::setEnabled);
        QObject::connect(kcfg_ShowTabBox, &QCheckBox::toggled, widget_6, &QWidget::setEnabled);

        QMetaObject::connectSlotsByName(KWinTabBoxConfigForm);
    } // setupUi

    void retranslateUi(QWidget *KWinTabBoxConfigForm)
    {
        groupBox_3->setTitle(tr2i18n("Content", nullptr));
        showDesktop->setText(tr2i18n("Include \"Peek at Desktop\" entry", nullptr));
        switchingModeCombo->setItemText(0, tr2i18n("Recently used", nullptr));
        switchingModeCombo->setItemText(1, tr2i18n("Stacking order", nullptr));

        oneAppWindow->setText(tr2i18n("Only one window per application", nullptr));
        orderMinimized->setText(tr2i18n("Order minimized windows after unminimized windows", nullptr));
        label_8->setText(tr2i18n("Sort order:", nullptr));
        groupBox->setTitle(tr2i18n("Filter windows by", nullptr));
        filterDesktops->setText(tr2i18n("Virtual desktops", nullptr));
        currentDesktop->setText(tr2i18n("Current desktop", nullptr));
        otherDesktops->setText(tr2i18n("All other desktops", nullptr));
        filterActivities->setText(tr2i18n("Activities", nullptr));
        currentActivity->setText(tr2i18n("Current activity", nullptr));
        otherActivities->setText(tr2i18n("All other activities", nullptr));
        filterScreens->setText(tr2i18n("Screens", nullptr));
        currentScreen->setText(tr2i18n("Current screen", nullptr));
        otherScreens->setText(tr2i18n("All other screens", nullptr));
        filterMinimization->setText(tr2i18n("Minimization", nullptr));
        visibleWindows->setText(tr2i18n("Visible windows", nullptr));
        hiddenWindows->setText(tr2i18n("Hidden windows", nullptr));
        groupBox_4->setTitle(tr2i18n("Shortcuts", nullptr));
        label_3->setText(tr2i18n("Forward", nullptr));
        label->setText(tr2i18n("All windows", nullptr));
        label_4->setText(tr2i18n("Reverse", nullptr));
        label_5->setText(tr2i18n("Forward", nullptr));
        label_6->setText(tr2i18n("Reverse", nullptr));
        scCurrentReverseOr->setText(tr2i18n("or", nullptr));
        scCurrentOr->setText(tr2i18n("or", nullptr));
        label_2->setText(tr2i18n("Current application", nullptr));
        scAllReverseOr->setText(tr2i18n("or", nullptr));
        scAllOr->setText(tr2i18n("or", nullptr));
        groupBox_2->setTitle(tr2i18n("Visualization", nullptr));
#if QT_CONFIG(tooltip)
        kcfg_HighlightWindows->setToolTip(tr2i18n("The currently selected window will be highlighted by fading out all other windows. This option requires desktop effects to be active.", nullptr));
#endif // QT_CONFIG(tooltip)
        kcfg_HighlightWindows->setText(QString());
        label_HighlightWindows->setText(tr2i18n("Show selected window", nullptr));
#if QT_CONFIG(tooltip)
        kcfg_ShowTabBox->setToolTip(tr2i18n("Enable the window list effect", nullptr));
#endif // QT_CONFIG(tooltip)
        kcfg_ShowTabBox->setText(QString());
#if QT_CONFIG(tooltip)
        effectCombo->setToolTip(tr2i18n("The effect to replace the list window when desktop effects are active.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        label_DelayTime->setWhatsThis(tr2i18n("The time in milliseconds to wait before showing the task switcher.", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_DelayTime->setText(tr2i18n("Delay:", nullptr));
        kcfg_DelayTime->setSuffix(tr2i18n(" ms", nullptr));
#if QT_CONFIG(tooltip)
        kcfg_DelayTime->setToolTip(tr2i18n("Delay before the window list appears", nullptr));
#endif // QT_CONFIG(tooltip)
        label_showScreen->setText(tr2i18n("Show on screen:", nullptr));
        showScreenCombo->setItemText(0, tr2i18n("Active screen", nullptr));
        showScreenCombo->setItemText(1, tr2i18n("Primary screen", nullptr));

#if QT_CONFIG(tooltip)
        showScreenCombo->setToolTip(tr2i18n("Select which screen the task switcher should be displayed on.", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)KWinTabBoxConfigForm;
    } // retranslateUi

};

namespace Ui {
    class KWinTabBoxConfigForm: public Ui_KWinTabBoxConfigForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAIN_H

