/********************************************************************************
** Form generated from reading UI file 'advanced.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVANCED_H
#define UI_ADVANCED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include <klocalizedstring.h>

QT_BEGIN_NAMESPACE

class Ui_KWinAdvancedConfigForm
{
public:
    QFormLayout *formLayout;
    QLabel *windowPlacementLabel;
    QComboBox *kcfg_Placement;
    QCheckBox *kcfg_AllowKDEAppsToRememberWindowPositions;
    QCheckBox *kcfg_NativeTilingEnabled;
    QLabel *activationDesktopPolicyLabel;
    QLabel *activationDesktopPolicyDescriptionLabel;
    QComboBox *kcfg_ActivationDesktopPolicy;

    void setupUi(QWidget *KWinAdvancedConfigForm)
    {
        if (KWinAdvancedConfigForm->objectName().isEmpty())
            KWinAdvancedConfigForm->setObjectName("KWinAdvancedConfigForm");
        KWinAdvancedConfigForm->resize(1001, 297);
        formLayout = new QFormLayout(KWinAdvancedConfigForm);
        formLayout->setObjectName("formLayout");
        formLayout->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);
        windowPlacementLabel = new QLabel(KWinAdvancedConfigForm);
        windowPlacementLabel->setObjectName("windowPlacementLabel");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, windowPlacementLabel);

        kcfg_Placement = new QComboBox(KWinAdvancedConfigForm);
        kcfg_Placement->addItem(QString());
        kcfg_Placement->addItem(QString());
        kcfg_Placement->addItem(QString());
        kcfg_Placement->addItem(QString());
        kcfg_Placement->addItem(QString());
        kcfg_Placement->addItem(QString());
        kcfg_Placement->setObjectName("kcfg_Placement");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, kcfg_Placement);

        kcfg_AllowKDEAppsToRememberWindowPositions = new QCheckBox(KWinAdvancedConfigForm);
        kcfg_AllowKDEAppsToRememberWindowPositions->setObjectName("kcfg_AllowKDEAppsToRememberWindowPositions");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, kcfg_AllowKDEAppsToRememberWindowPositions);

        kcfg_NativeTilingEnabled = new QCheckBox(KWinAdvancedConfigForm);
        kcfg_NativeTilingEnabled->setObjectName("kcfg_NativeTilingEnabled");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, kcfg_NativeTilingEnabled);

        activationDesktopPolicyLabel = new QLabel(KWinAdvancedConfigForm);
        activationDesktopPolicyLabel->setObjectName("activationDesktopPolicyLabel");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, activationDesktopPolicyLabel);

        activationDesktopPolicyDescriptionLabel = new QLabel(KWinAdvancedConfigForm);
        activationDesktopPolicyDescriptionLabel->setObjectName("activationDesktopPolicyDescriptionLabel");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, activationDesktopPolicyDescriptionLabel);

        kcfg_ActivationDesktopPolicy = new QComboBox(KWinAdvancedConfigForm);
        kcfg_ActivationDesktopPolicy->addItem(QString());
        kcfg_ActivationDesktopPolicy->addItem(QString());
        kcfg_ActivationDesktopPolicy->addItem(QString());
        kcfg_ActivationDesktopPolicy->setObjectName("kcfg_ActivationDesktopPolicy");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, kcfg_ActivationDesktopPolicy);

#if QT_CONFIG(shortcut)
        windowPlacementLabel->setBuddy(kcfg_Placement);
        activationDesktopPolicyLabel->setBuddy(kcfg_ActivationDesktopPolicy);
#endif // QT_CONFIG(shortcut)

        retranslateUi(KWinAdvancedConfigForm);

        QMetaObject::connectSlotsByName(KWinAdvancedConfigForm);
    } // setupUi

    void retranslateUi(QWidget *KWinAdvancedConfigForm)
    {
        windowPlacementLabel->setText(tr2i18n("Window &placement:", nullptr));
        kcfg_Placement->setItemText(0, tr2i18n("Minimal Overlapping", nullptr));
        kcfg_Placement->setItemText(1, tr2i18n("Maximized", nullptr));
        kcfg_Placement->setItemText(2, tr2i18n("Random", nullptr));
        kcfg_Placement->setItemText(3, tr2i18n("Centered", nullptr));
        kcfg_Placement->setItemText(4, tr2i18n("In Top-Left Corner", nullptr));
        kcfg_Placement->setItemText(5, tr2i18n("Under mouse", nullptr));

#if QT_CONFIG(whatsthis)
        kcfg_Placement->setWhatsThis(tr2i18n("<html><head/><body><p>The placement policy determines where a new window will appear on the desktop.</p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">Smart</span> will try to achieve a minimum overlap of windows</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">Maximizing</span> will try to maximize every window to fill the whole screen. It might be useful to selectively affect placement of some windows using the window-specific settings.</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">Random</span> will use a random position</li><li style=\" margin-top:0px; margin-bottom"
                        ":0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">Centered</span> will place the window centered</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">Zero-cornered</span> will place the window in the top-left corner</li><li style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">Under mouse</span> will place the window under the pointer</li></ul></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        kcfg_AllowKDEAppsToRememberWindowPositions->setWhatsThis(tr2i18n("When turned on, apps which are able to remember the positions of their windows are allowed to do so. This will override the window placement mode defined above.", nullptr));
#endif // QT_CONFIG(whatsthis)
        kcfg_AllowKDEAppsToRememberWindowPositions->setText(tr2i18n("Allow apps to remember the positions of their own windows, if they support it", nullptr));
#if QT_CONFIG(whatsthis)
        kcfg_NativeTilingEnabled->setWhatsThis(tr2i18n("When turned off, KWin's built-in quick tiling and custom tiling are disabled. Window edge snapping remains controlled by the settings on the Movement page.", nullptr));
#endif // QT_CONFIG(whatsthis)
        kcfg_NativeTilingEnabled->setText(tr2i18n("Enable built-in window tiling", nullptr));
        activationDesktopPolicyLabel->setText(tr2i18n("Virtual Desktop behavior:", nullptr));
        activationDesktopPolicyDescriptionLabel->setText(tr2i18n("When activating a window on a different Virtual Desktop:", nullptr));
        kcfg_ActivationDesktopPolicy->setItemText(0, tr2i18n("Switch to that Virtual Desktop", nullptr));
        kcfg_ActivationDesktopPolicy->setItemText(1, tr2i18n("Bring window to current Virtual Desktop", nullptr));
        kcfg_ActivationDesktopPolicy->setItemText(2, tr2i18n("Do nothing", nullptr));

#if QT_CONFIG(whatsthis)
        kcfg_ActivationDesktopPolicy->setWhatsThis(tr2i18n("<html><head/><body><p>This setting controls what happens when an open window located on a Virtual Desktop other than the current one is activated. </p><p><span style=\" font-style:italic;\">Switch to that Virtual Desktop</span> will switch to the Virtual Desktop where the window is currently located. </p><p><span style=\" font-style:italic;\">Bring window to current Virtual Desktop</span> will cause the window to jump to the active Virtual Desktop. </p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        (void)KWinAdvancedConfigForm;
    } // retranslateUi

};

namespace Ui {
    class KWinAdvancedConfigForm: public Ui_KWinAdvancedConfigForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ADVANCED_H

