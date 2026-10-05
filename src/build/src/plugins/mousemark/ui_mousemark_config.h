/********************************************************************************
** Form generated from reading UI file 'mousemark_config.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOUSEMARK_CONFIG_H
#define UI_MOUSEMARK_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <klocalizedstring.h>
#include "kcolorcombo.h"
#include "kshortcutseditor.h"

namespace KWin {

class Ui_MouseMarkEffectConfigForm
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    KColorCombo *kcfg_Color;
    QSpinBox *kcfg_LineWidth;
    KShortcutsEditor *editor;
    QGroupBox *groupBox2;
    QHBoxLayout *hlayout;
    QSpacerItem *horizontalSpacer;
    QFormLayout *formLayout;
    QLabel *label_FreedrawModifierKeys;
    QWidget *widgetf;
    QHBoxLayout *horizontalLayoutf;
    QCheckBox *kcfg_Freedrawalt;
    QCheckBox *kcfg_Freedrawcontrol;
    QCheckBox *kcfg_Freedrawshift;
    QCheckBox *kcfg_Freedrawmeta;
    QLabel *label_ArrowdrawModifierKeys;
    QWidget *widgeta;
    QHBoxLayout *horizontalLayouta;
    QCheckBox *kcfg_Arrowdrawalt;
    QCheckBox *kcfg_Arrowdrawcontrol;
    QCheckBox *kcfg_Arrowdrawshift;
    QCheckBox *kcfg_Arrowdrawmeta;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *KWin__MouseMarkEffectConfigForm)
    {
        if (KWin__MouseMarkEffectConfigForm->objectName().isEmpty())
            KWin__MouseMarkEffectConfigForm->setObjectName("KWin__MouseMarkEffectConfigForm");
        KWin__MouseMarkEffectConfigForm->resize(279, 178);
        vboxLayout = new QVBoxLayout(KWin__MouseMarkEffectConfigForm);
        vboxLayout->setObjectName("vboxLayout");
        groupBox = new QGroupBox(KWin__MouseMarkEffectConfigForm);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        kcfg_Color = new KColorCombo(groupBox);
        kcfg_Color->setObjectName("kcfg_Color");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(kcfg_Color->sizePolicy().hasHeightForWidth());
        kcfg_Color->setSizePolicy(sizePolicy);

        gridLayout->addWidget(kcfg_Color, 2, 1, 1, 1);

        kcfg_LineWidth = new QSpinBox(groupBox);
        kcfg_LineWidth->setObjectName("kcfg_LineWidth");
        kcfg_LineWidth->setMinimum(1);
        kcfg_LineWidth->setMaximum(10);
        kcfg_LineWidth->setValue(3);

        gridLayout->addWidget(kcfg_LineWidth, 1, 1, 1, 1);


        vboxLayout->addWidget(groupBox);

        editor = new KShortcutsEditor(KWin__MouseMarkEffectConfigForm);
        editor->setObjectName("editor");
        editor->setActionTypes(KShortcutsEditor::GlobalAction);

        vboxLayout->addWidget(editor);

        groupBox2 = new QGroupBox(KWin__MouseMarkEffectConfigForm);
        groupBox2->setObjectName("groupBox2");
        hlayout = new QHBoxLayout(groupBox2);
        hlayout->setObjectName("hlayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hlayout->addItem(horizontalSpacer);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_FreedrawModifierKeys = new QLabel(groupBox2);
        label_FreedrawModifierKeys->setObjectName("label_FreedrawModifierKeys");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_FreedrawModifierKeys);

        widgetf = new QWidget(groupBox2);
        widgetf->setObjectName("widgetf");
        horizontalLayoutf = new QHBoxLayout(widgetf);
        horizontalLayoutf->setObjectName("horizontalLayoutf");
        horizontalLayoutf->setContentsMargins(0, 0, 0, 0);
        kcfg_Freedrawalt = new QCheckBox(widgetf);
        kcfg_Freedrawalt->setObjectName("kcfg_Freedrawalt");

        horizontalLayoutf->addWidget(kcfg_Freedrawalt);

        kcfg_Freedrawcontrol = new QCheckBox(widgetf);
        kcfg_Freedrawcontrol->setObjectName("kcfg_Freedrawcontrol");

        horizontalLayoutf->addWidget(kcfg_Freedrawcontrol);

        kcfg_Freedrawshift = new QCheckBox(widgetf);
        kcfg_Freedrawshift->setObjectName("kcfg_Freedrawshift");

        horizontalLayoutf->addWidget(kcfg_Freedrawshift);

        kcfg_Freedrawmeta = new QCheckBox(widgetf);
        kcfg_Freedrawmeta->setObjectName("kcfg_Freedrawmeta");

        horizontalLayoutf->addWidget(kcfg_Freedrawmeta);


        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, widgetf);

        label_ArrowdrawModifierKeys = new QLabel(groupBox2);
        label_ArrowdrawModifierKeys->setObjectName("label_ArrowdrawModifierKeys");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_ArrowdrawModifierKeys);

        widgeta = new QWidget(groupBox2);
        widgeta->setObjectName("widgeta");
        horizontalLayouta = new QHBoxLayout(widgeta);
        horizontalLayouta->setObjectName("horizontalLayouta");
        horizontalLayouta->setContentsMargins(0, 0, 0, 0);
        kcfg_Arrowdrawalt = new QCheckBox(widgeta);
        kcfg_Arrowdrawalt->setObjectName("kcfg_Arrowdrawalt");

        horizontalLayouta->addWidget(kcfg_Arrowdrawalt);

        kcfg_Arrowdrawcontrol = new QCheckBox(widgeta);
        kcfg_Arrowdrawcontrol->setObjectName("kcfg_Arrowdrawcontrol");

        horizontalLayouta->addWidget(kcfg_Arrowdrawcontrol);

        kcfg_Arrowdrawshift = new QCheckBox(widgeta);
        kcfg_Arrowdrawshift->setObjectName("kcfg_Arrowdrawshift");

        horizontalLayouta->addWidget(kcfg_Arrowdrawshift);

        kcfg_Arrowdrawmeta = new QCheckBox(widgeta);
        kcfg_Arrowdrawmeta->setObjectName("kcfg_Arrowdrawmeta");

        horizontalLayouta->addWidget(kcfg_Arrowdrawmeta);


        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, widgeta);


        hlayout->addLayout(formLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hlayout->addItem(horizontalSpacer_2);


        vboxLayout->addWidget(groupBox2);

#if QT_CONFIG(shortcut)
        label->setBuddy(kcfg_LineWidth);
        label_2->setBuddy(kcfg_Color);
#endif // QT_CONFIG(shortcut)

        retranslateUi(KWin__MouseMarkEffectConfigForm);

        QMetaObject::connectSlotsByName(KWin__MouseMarkEffectConfigForm);
    } // setupUi

    void retranslateUi(QWidget *KWin__MouseMarkEffectConfigForm)
    {
        groupBox->setTitle(tr2i18n("Appearance", nullptr));
        label->setText(tr2i18n("Wid&th:", nullptr));
        label_2->setText(tr2i18n("&Color:", nullptr));
        groupBox2->setTitle(tr2i18n("Draw with the mouse by holding modifier keys and moving the mouse", nullptr));
        label_FreedrawModifierKeys->setText(tr2i18n("Free draw modifier keys:", nullptr));
        kcfg_Freedrawalt->setText(tr2i18n("Alt", nullptr));
        kcfg_Freedrawcontrol->setText(tr2i18n("Ctrl", nullptr));
        kcfg_Freedrawshift->setText(tr2i18n("Shift", nullptr));
        kcfg_Freedrawmeta->setText(tr2i18n("Meta", nullptr));
        label_ArrowdrawModifierKeys->setText(tr2i18n("Arrow draw modifier keys:", nullptr));
        kcfg_Arrowdrawalt->setText(tr2i18n("Alt", nullptr));
        kcfg_Arrowdrawcontrol->setText(tr2i18n("Ctrl", nullptr));
        kcfg_Arrowdrawshift->setText(tr2i18n("Shift", nullptr));
        kcfg_Arrowdrawmeta->setText(tr2i18n("Meta", nullptr));
        (void)KWin__MouseMarkEffectConfigForm;
    } // retranslateUi

};

} // namespace KWin

namespace KWin {
namespace Ui {
    class MouseMarkEffectConfigForm: public Ui_MouseMarkEffectConfigForm {};
} // namespace Ui
} // namespace KWin

#endif // MOUSEMARK_CONFIG_H

