/********************************************************************************
** Form generated from reading UI file 'mouseclick_config.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOUSECLICK_CONFIG_H
#define UI_MOUSECLICK_CONFIG_H

#include <KShortcutsEditor>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <klocalizedstring.h>
#include "kcolorcombo.h"
#include "kfontrequester.h"

namespace KWin {

class Ui_MouseClickEffectConfigForm
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabs;
    QWidget *basic_tab;
    QFormLayout *formLayout_3;
    KColorCombo *kcfg_Color1;
    QLabel *button1_label;
    QLabel *button2_label;
    KColorCombo *kcfg_Color2;
    QLabel *button3_label;
    KColorCombo *kcfg_Color3;
    QWidget *advanced_tab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *rings;
    QFormLayout *formLayout_2;
    QLabel *ring_line_width_label;
    QDoubleSpinBox *kcfg_LineWidth;
    QSpinBox *kcfg_RingLife;
    QLabel *ring_duration_label;
    QLabel *ring_radius_label;
    QSpinBox *kcfg_RingSize;
    QLabel *ring_count_label;
    QSpinBox *kcfg_RingCount;
    QGroupBox *font;
    QFormLayout *formLayout_4;
    QLabel *font_label;
    KFontRequester *kcfg_Font;
    QCheckBox *kcfg_ShowText;
    QLabel *showtext_label;
    KShortcutsEditor *editor;

    void setupUi(QWidget *KWin__MouseClickEffectConfigForm)
    {
        if (KWin__MouseClickEffectConfigForm->objectName().isEmpty())
            KWin__MouseClickEffectConfigForm->setObjectName("KWin__MouseClickEffectConfigForm");
        KWin__MouseClickEffectConfigForm->resize(335, 378);
        verticalLayout = new QVBoxLayout(KWin__MouseClickEffectConfigForm);
        verticalLayout->setObjectName("verticalLayout");
        tabs = new QTabWidget(KWin__MouseClickEffectConfigForm);
        tabs->setObjectName("tabs");
        basic_tab = new QWidget();
        basic_tab->setObjectName("basic_tab");
        formLayout_3 = new QFormLayout(basic_tab);
        formLayout_3->setObjectName("formLayout_3");
        kcfg_Color1 = new KColorCombo(basic_tab);
        kcfg_Color1->setObjectName("kcfg_Color1");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(kcfg_Color1->sizePolicy().hasHeightForWidth());
        kcfg_Color1->setSizePolicy(sizePolicy);

        formLayout_3->setWidget(1, QFormLayout::ItemRole::FieldRole, kcfg_Color1);

        button1_label = new QLabel(basic_tab);
        button1_label->setObjectName("button1_label");
        button1_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(1, QFormLayout::ItemRole::LabelRole, button1_label);

        button2_label = new QLabel(basic_tab);
        button2_label->setObjectName("button2_label");

        formLayout_3->setWidget(2, QFormLayout::ItemRole::LabelRole, button2_label);

        kcfg_Color2 = new KColorCombo(basic_tab);
        kcfg_Color2->setObjectName("kcfg_Color2");
        sizePolicy.setHeightForWidth(kcfg_Color2->sizePolicy().hasHeightForWidth());
        kcfg_Color2->setSizePolicy(sizePolicy);

        formLayout_3->setWidget(2, QFormLayout::ItemRole::FieldRole, kcfg_Color2);

        button3_label = new QLabel(basic_tab);
        button3_label->setObjectName("button3_label");

        formLayout_3->setWidget(3, QFormLayout::ItemRole::LabelRole, button3_label);

        kcfg_Color3 = new KColorCombo(basic_tab);
        kcfg_Color3->setObjectName("kcfg_Color3");
        sizePolicy.setHeightForWidth(kcfg_Color3->sizePolicy().hasHeightForWidth());
        kcfg_Color3->setSizePolicy(sizePolicy);

        formLayout_3->setWidget(3, QFormLayout::ItemRole::FieldRole, kcfg_Color3);

        tabs->addTab(basic_tab, QString());
        advanced_tab = new QWidget();
        advanced_tab->setObjectName("advanced_tab");
        verticalLayout_2 = new QVBoxLayout(advanced_tab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        rings = new QGroupBox(advanced_tab);
        rings->setObjectName("rings");
        formLayout_2 = new QFormLayout(rings);
        formLayout_2->setObjectName("formLayout_2");
        ring_line_width_label = new QLabel(rings);
        ring_line_width_label->setObjectName("ring_line_width_label");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, ring_line_width_label);

        kcfg_LineWidth = new QDoubleSpinBox(rings);
        kcfg_LineWidth->setObjectName("kcfg_LineWidth");
        sizePolicy.setHeightForWidth(kcfg_LineWidth->sizePolicy().hasHeightForWidth());
        kcfg_LineWidth->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, kcfg_LineWidth);

        kcfg_RingLife = new QSpinBox(rings);
        kcfg_RingLife->setObjectName("kcfg_RingLife");
        sizePolicy.setHeightForWidth(kcfg_RingLife->sizePolicy().hasHeightForWidth());
        kcfg_RingLife->setSizePolicy(sizePolicy);
        kcfg_RingLife->setMinimum(50);
        kcfg_RingLife->setMaximum(5000);

        formLayout_2->setWidget(1, QFormLayout::ItemRole::FieldRole, kcfg_RingLife);

        ring_duration_label = new QLabel(rings);
        ring_duration_label->setObjectName("ring_duration_label");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::LabelRole, ring_duration_label);

        ring_radius_label = new QLabel(rings);
        ring_radius_label->setObjectName("ring_radius_label");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::LabelRole, ring_radius_label);

        kcfg_RingSize = new QSpinBox(rings);
        kcfg_RingSize->setObjectName("kcfg_RingSize");
        sizePolicy.setHeightForWidth(kcfg_RingSize->sizePolicy().hasHeightForWidth());
        kcfg_RingSize->setSizePolicy(sizePolicy);
        kcfg_RingSize->setMinimum(1);
        kcfg_RingSize->setMaximum(1000);

        formLayout_2->setWidget(2, QFormLayout::ItemRole::FieldRole, kcfg_RingSize);

        ring_count_label = new QLabel(rings);
        ring_count_label->setObjectName("ring_count_label");

        formLayout_2->setWidget(3, QFormLayout::ItemRole::LabelRole, ring_count_label);

        kcfg_RingCount = new QSpinBox(rings);
        kcfg_RingCount->setObjectName("kcfg_RingCount");
        sizePolicy.setHeightForWidth(kcfg_RingCount->sizePolicy().hasHeightForWidth());
        kcfg_RingCount->setSizePolicy(sizePolicy);
        kcfg_RingCount->setMinimum(1);

        formLayout_2->setWidget(3, QFormLayout::ItemRole::FieldRole, kcfg_RingCount);


        verticalLayout_2->addWidget(rings);

        font = new QGroupBox(advanced_tab);
        font->setObjectName("font");
        formLayout_4 = new QFormLayout(font);
        formLayout_4->setObjectName("formLayout_4");
        font_label = new QLabel(font);
        font_label->setObjectName("font_label");

        formLayout_4->setWidget(3, QFormLayout::ItemRole::LabelRole, font_label);

        kcfg_Font = new KFontRequester(font);
        kcfg_Font->setObjectName("kcfg_Font");

        formLayout_4->setWidget(3, QFormLayout::ItemRole::FieldRole, kcfg_Font);

        kcfg_ShowText = new QCheckBox(font);
        kcfg_ShowText->setObjectName("kcfg_ShowText");

        formLayout_4->setWidget(2, QFormLayout::ItemRole::FieldRole, kcfg_ShowText);

        showtext_label = new QLabel(font);
        showtext_label->setObjectName("showtext_label");

        formLayout_4->setWidget(2, QFormLayout::ItemRole::LabelRole, showtext_label);


        verticalLayout_2->addWidget(font);

        tabs->addTab(advanced_tab, QString());

        verticalLayout->addWidget(tabs);

        editor = new KShortcutsEditor(KWin__MouseClickEffectConfigForm);
        editor->setObjectName("editor");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(editor->sizePolicy().hasHeightForWidth());
        editor->setSizePolicy(sizePolicy1);
        editor->setActionTypes(KShortcutsEditor::GlobalAction);

        verticalLayout->addWidget(editor);

#if QT_CONFIG(shortcut)
        button1_label->setBuddy(kcfg_Color1);
        button2_label->setBuddy(kcfg_Color2);
        button3_label->setBuddy(kcfg_Color3);
        ring_line_width_label->setBuddy(kcfg_LineWidth);
        ring_duration_label->setBuddy(kcfg_RingLife);
        ring_radius_label->setBuddy(kcfg_RingSize);
        ring_count_label->setBuddy(kcfg_RingCount);
        showtext_label->setBuddy(kcfg_ShowText);
#endif // QT_CONFIG(shortcut)

        retranslateUi(KWin__MouseClickEffectConfigForm);

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(KWin__MouseClickEffectConfigForm);
    } // setupUi

    void retranslateUi(QWidget *KWin__MouseClickEffectConfigForm)
    {
        button1_label->setText(tr2i18n("Left Mouse Button Color:", nullptr));
        button2_label->setText(tr2i18n("Middle Mouse Button Color:", nullptr));
        button3_label->setText(tr2i18n("Right Mouse Button Color:", nullptr));
        tabs->setTabText(tabs->indexOf(basic_tab), tr2i18n("Basic Settings", nullptr));
        rings->setTitle(tr2i18n("Rings", nullptr));
        ring_line_width_label->setText(tr2i18n("Line Width:", nullptr));
        kcfg_LineWidth->setSuffix(tr2i18n(" pixel", nullptr));
        kcfg_RingLife->setSuffix(tr2i18n(" msec", nullptr));
        ring_duration_label->setText(tr2i18n("Ring Duration:", nullptr));
        ring_radius_label->setText(tr2i18n("Ring Radius:", nullptr));
        kcfg_RingSize->setSuffix(tr2i18n(" pixel", nullptr));
        ring_count_label->setText(tr2i18n("Ring Count:", nullptr));
        font->setTitle(tr2i18n("Text", nullptr));
        font_label->setText(tr2i18n("Font:", nullptr));
        kcfg_ShowText->setText(QString());
        showtext_label->setText(tr2i18n("Show Text:", nullptr));
        tabs->setTabText(tabs->indexOf(advanced_tab), tr2i18n("Advanced Settings", nullptr));
        (void)KWin__MouseClickEffectConfigForm;
    } // retranslateUi

};

} // namespace KWin

namespace KWin {
namespace Ui {
    class MouseClickEffectConfigForm: public Ui_MouseClickEffectConfigForm {};
} // namespace Ui
} // namespace KWin

#endif // MOUSECLICK_CONFIG_H

