/********************************************************************************
** Form generated from reading UI file 'focus.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOCUS_H
#define UI_FOCUS_H

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

QT_BEGIN_NAMESPACE

class Ui_KWinFocusConfigForm
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_1;
    QLabel *windowFocusPolicyLabel;
    QComboBox *windowFocusPolicy;
    QLabel *delayFocusOnLabel;
    QSpinBox *kcfg_DelayFocusInterval;
    QLabel *focusStealingLabel;
    QComboBox *kcfg_FocusStealingPreventionLevel;
    QLabel *raisingWindowsLabel;
    QCheckBox *kcfg_ClickRaise;
    QHBoxLayout *horizontalLayout_1;
    QCheckBox *kcfg_AutoRaise;
    QSpinBox *kcfg_AutoRaiseInterval;
    QLabel *multiscreenBehaviorLabel;
    QCheckBox *kcfg_SeparateScreenFocus;
    QLabel *windowFocusPolicyDescriptionLabel;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *KWinFocusConfigForm)
    {
        if (KWinFocusConfigForm->objectName().isEmpty())
            KWinFocusConfigForm->setObjectName("KWinFocusConfigForm");
        KWinFocusConfigForm->resize(600, 500);
        verticalLayout = new QVBoxLayout(KWinFocusConfigForm);
        verticalLayout->setObjectName("verticalLayout");
        formLayout_1 = new QFormLayout();
        formLayout_1->setObjectName("formLayout_1");
        formLayout_1->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);
        windowFocusPolicyLabel = new QLabel(KWinFocusConfigForm);
        windowFocusPolicyLabel->setObjectName("windowFocusPolicyLabel");

        formLayout_1->setWidget(0, QFormLayout::ItemRole::LabelRole, windowFocusPolicyLabel);

        windowFocusPolicy = new QComboBox(KWinFocusConfigForm);
        windowFocusPolicy->addItem(QString());
        windowFocusPolicy->addItem(QString());
        windowFocusPolicy->addItem(QString());
        windowFocusPolicy->addItem(QString());
        windowFocusPolicy->addItem(QString());
        windowFocusPolicy->addItem(QString());
        windowFocusPolicy->setObjectName("windowFocusPolicy");

        formLayout_1->setWidget(0, QFormLayout::ItemRole::FieldRole, windowFocusPolicy);

        delayFocusOnLabel = new QLabel(KWinFocusConfigForm);
        delayFocusOnLabel->setObjectName("delayFocusOnLabel");
        delayFocusOnLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_1->setWidget(2, QFormLayout::ItemRole::LabelRole, delayFocusOnLabel);

        kcfg_DelayFocusInterval = new QSpinBox(KWinFocusConfigForm);
        kcfg_DelayFocusInterval->setObjectName("kcfg_DelayFocusInterval");
        kcfg_DelayFocusInterval->setMinimum(0);
        kcfg_DelayFocusInterval->setMaximum(3000);
        kcfg_DelayFocusInterval->setSingleStep(100);

        formLayout_1->setWidget(2, QFormLayout::ItemRole::FieldRole, kcfg_DelayFocusInterval);

        focusStealingLabel = new QLabel(KWinFocusConfigForm);
        focusStealingLabel->setObjectName("focusStealingLabel");
        focusStealingLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_1->setWidget(3, QFormLayout::ItemRole::LabelRole, focusStealingLabel);

        kcfg_FocusStealingPreventionLevel = new QComboBox(KWinFocusConfigForm);
        kcfg_FocusStealingPreventionLevel->addItem(QString());
        kcfg_FocusStealingPreventionLevel->addItem(QString());
        kcfg_FocusStealingPreventionLevel->addItem(QString());
        kcfg_FocusStealingPreventionLevel->addItem(QString());
        kcfg_FocusStealingPreventionLevel->addItem(QString());
        kcfg_FocusStealingPreventionLevel->setObjectName("kcfg_FocusStealingPreventionLevel");

        formLayout_1->setWidget(3, QFormLayout::ItemRole::FieldRole, kcfg_FocusStealingPreventionLevel);

        raisingWindowsLabel = new QLabel(KWinFocusConfigForm);
        raisingWindowsLabel->setObjectName("raisingWindowsLabel");

        formLayout_1->setWidget(4, QFormLayout::ItemRole::LabelRole, raisingWindowsLabel);

        kcfg_ClickRaise = new QCheckBox(KWinFocusConfigForm);
        kcfg_ClickRaise->setObjectName("kcfg_ClickRaise");

        formLayout_1->setWidget(4, QFormLayout::ItemRole::FieldRole, kcfg_ClickRaise);

        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setObjectName("horizontalLayout_1");
        kcfg_AutoRaise = new QCheckBox(KWinFocusConfigForm);
        kcfg_AutoRaise->setObjectName("kcfg_AutoRaise");

        horizontalLayout_1->addWidget(kcfg_AutoRaise);

        kcfg_AutoRaiseInterval = new QSpinBox(KWinFocusConfigForm);
        kcfg_AutoRaiseInterval->setObjectName("kcfg_AutoRaiseInterval");
        kcfg_AutoRaiseInterval->setEnabled(false);
        kcfg_AutoRaiseInterval->setMinimum(0);
        kcfg_AutoRaiseInterval->setMaximum(3000);
        kcfg_AutoRaiseInterval->setSingleStep(100);

        horizontalLayout_1->addWidget(kcfg_AutoRaiseInterval);


        formLayout_1->setLayout(5, QFormLayout::ItemRole::FieldRole, horizontalLayout_1);

        multiscreenBehaviorLabel = new QLabel(KWinFocusConfigForm);
        multiscreenBehaviorLabel->setObjectName("multiscreenBehaviorLabel");

        formLayout_1->setWidget(6, QFormLayout::ItemRole::LabelRole, multiscreenBehaviorLabel);

        kcfg_SeparateScreenFocus = new QCheckBox(KWinFocusConfigForm);
        kcfg_SeparateScreenFocus->setObjectName("kcfg_SeparateScreenFocus");

        formLayout_1->setWidget(6, QFormLayout::ItemRole::FieldRole, kcfg_SeparateScreenFocus);

        windowFocusPolicyDescriptionLabel = new QLabel(KWinFocusConfigForm);
        windowFocusPolicyDescriptionLabel->setObjectName("windowFocusPolicyDescriptionLabel");
        windowFocusPolicyDescriptionLabel->setMinimumSize(QSize(280, 0));
        windowFocusPolicyDescriptionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        windowFocusPolicyDescriptionLabel->setWordWrap(true);

        formLayout_1->setWidget(1, QFormLayout::ItemRole::FieldRole, windowFocusPolicyDescriptionLabel);


        verticalLayout->addLayout(formLayout_1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

#if QT_CONFIG(shortcut)
        windowFocusPolicyLabel->setBuddy(windowFocusPolicy);
        delayFocusOnLabel->setBuddy(kcfg_DelayFocusInterval);
        focusStealingLabel->setBuddy(kcfg_FocusStealingPreventionLevel);
#endif // QT_CONFIG(shortcut)

        retranslateUi(KWinFocusConfigForm);
        QObject::connect(kcfg_AutoRaise, &QCheckBox::toggled, kcfg_AutoRaiseInterval, &QSpinBox::setEnabled);
        QObject::connect(kcfg_AutoRaise, &QCheckBox::toggled, kcfg_ClickRaise, &QCheckBox::setDisabled);

        QMetaObject::connectSlotsByName(KWinFocusConfigForm);
    } // setupUi

    void retranslateUi(QWidget *KWinFocusConfigForm)
    {
        windowFocusPolicyLabel->setText(tr2i18n("Window &activation policy:", nullptr));
        windowFocusPolicy->setItemText(0, tr2i18n("Click to focus", "sassa asas"));
        windowFocusPolicy->setItemText(1, tr2i18n("Click to focus (mouse precedence)", nullptr));
        windowFocusPolicy->setItemText(2, tr2i18n("Focus follows mouse", nullptr));
        windowFocusPolicy->setItemText(3, tr2i18n("Focus follows mouse (mouse precedence)", nullptr));
        windowFocusPolicy->setItemText(4, tr2i18n("Focus under mouse", nullptr));
        windowFocusPolicy->setItemText(5, tr2i18n("Focus strictly under mouse", nullptr));

#if QT_CONFIG(whatsthis)
        windowFocusPolicy->setWhatsThis(tr2i18n("With this option you can specify how and when windows will be focused.", nullptr));
#endif // QT_CONFIG(whatsthis)
        delayFocusOnLabel->setText(tr2i18n("&Delay focus by:", nullptr));
#if QT_CONFIG(whatsthis)
        kcfg_DelayFocusInterval->setWhatsThis(tr2i18n("This is the delay after which the window the mouse pointer is over will automatically receive focus.", nullptr));
#endif // QT_CONFIG(whatsthis)
        kcfg_DelayFocusInterval->setSuffix(tr2i18n(" ms", nullptr));
        focusStealingLabel->setText(tr2i18n("Focus &stealing prevention:", nullptr));
        kcfg_FocusStealingPreventionLevel->setItemText(0, tr2i18n("None", nullptr));
        kcfg_FocusStealingPreventionLevel->setItemText(1, tr2i18n("Low", nullptr));
        kcfg_FocusStealingPreventionLevel->setItemText(2, tr2i18n("Medium", nullptr));
        kcfg_FocusStealingPreventionLevel->setItemText(3, tr2i18n("High", nullptr));
        kcfg_FocusStealingPreventionLevel->setItemText(4, tr2i18n("Extreme", nullptr));

#if QT_CONFIG(whatsthis)
        kcfg_FocusStealingPreventionLevel->setWhatsThis(tr2i18n("<html><head/><body><p>This option specifies how much KWin will try to prevent unwanted focus stealing caused by unexpected activation of new windows. (Note: This feature does not work with the <span style=\" font-style:italic;\">Focus under mouse</span> or <span style=\" font-style:italic;\">Focus strictly under mouse</span> focus policies.) </p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">None:</span> Prevention is turned off and new windows always become activated.</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">Low:</span> Prevention is enabled; when some window does not have support for the underlying mechanism and KWin cannot reliably decide whether to activate the window or "
                        "not, it will be activated. This setting may have both worse and better results than the medium level, depending on the applications.</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">Medium:</span> Prevention is enabled.</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">High:</span> New windows get activated only if no window is currently active or if they belong to the currently active application. This setting is probably not really usable when not using mouse focus policy.</li><li style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">Extreme:</span> All windows must be explicitly activated by the user.</li></ul><p>Windows that are prevented from stealing focus are marked as demanding atte"
                        "ntion, which by default means their taskbar entry will be highlighted. This can be changed in the Notifications control module.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        raisingWindowsLabel->setText(tr2i18n("Raising windows:", nullptr));
#if QT_CONFIG(whatsthis)
        kcfg_ClickRaise->setWhatsThis(tr2i18n("When this option is enabled, the active window will be brought to the front when you click somewhere into the window contents. To change it for inactive windows, you need to change the settings in the Actions tab.", nullptr));
#endif // QT_CONFIG(whatsthis)
        kcfg_ClickRaise->setText(tr2i18n("&Click raises active window", nullptr));
#if QT_CONFIG(whatsthis)
        kcfg_AutoRaise->setWhatsThis(tr2i18n("When this option is enabled, a window in the background will automatically come to the front when the mouse pointer has been over it for some time.", nullptr));
#endif // QT_CONFIG(whatsthis)
        kcfg_AutoRaise->setText(tr2i18n("&Raise on hover, delayed by:", nullptr));
#if QT_CONFIG(whatsthis)
        kcfg_AutoRaiseInterval->setWhatsThis(tr2i18n("This is the delay after which the window that the mouse pointer is over will automatically come to the front.", nullptr));
#endif // QT_CONFIG(whatsthis)
        kcfg_AutoRaiseInterval->setSuffix(tr2i18n(" ms", nullptr));
        multiscreenBehaviorLabel->setText(tr2i18n("Multiscreen behavior:", nullptr));
#if QT_CONFIG(whatsthis)
        kcfg_SeparateScreenFocus->setWhatsThis(tr2i18n("When this option is enabled, focus operations are limited only to the active screen", nullptr));
#endif // QT_CONFIG(whatsthis)
        kcfg_SeparateScreenFocus->setText(tr2i18n("&Separate screen focus", nullptr));
        windowFocusPolicyDescriptionLabel->setText(tr2i18n("Window activation policy description", nullptr));
        (void)KWinFocusConfigForm;
    } // retranslateUi

};

namespace Ui {
    class KWinFocusConfigForm: public Ui_KWinFocusConfigForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // FOCUS_H

