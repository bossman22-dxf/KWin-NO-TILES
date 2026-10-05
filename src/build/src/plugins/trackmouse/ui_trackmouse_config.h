/********************************************************************************
** Form generated from reading UI file 'trackmouse_config.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKMOUSE_CONFIG_H
#define UI_TRACKMOUSE_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include <klocalizedstring.h>
#include "kkeysequencewidget.h"

namespace KWin {

class Ui_TrackMouseEffectConfigForm
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_KeyboardShortcut;
    KKeySequenceWidget *shortcut;
    QLabel *label_ModifierKeys;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *kcfg_Alt;
    QCheckBox *kcfg_Control;
    QCheckBox *kcfg_Shift;
    QCheckBox *kcfg_Meta;

    void setupUi(QWidget *KWin__TrackMouseEffectConfigForm)
    {
        if (KWin__TrackMouseEffectConfigForm->objectName().isEmpty())
            KWin__TrackMouseEffectConfigForm->setObjectName("KWin__TrackMouseEffectConfigForm");
        KWin__TrackMouseEffectConfigForm->resize(345, 112);
        formLayout = new QFormLayout(KWin__TrackMouseEffectConfigForm);
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        label = new QLabel(KWin__TrackMouseEffectConfigForm);
        label->setObjectName("label");
        QFont font;
        font.setBold(true);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::ItemRole::SpanningRole, label);

        label_KeyboardShortcut = new QLabel(KWin__TrackMouseEffectConfigForm);
        label_KeyboardShortcut->setObjectName("label_KeyboardShortcut");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_KeyboardShortcut);

        shortcut = new KKeySequenceWidget(KWin__TrackMouseEffectConfigForm);
        shortcut->setObjectName("shortcut");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, shortcut);

        label_ModifierKeys = new QLabel(KWin__TrackMouseEffectConfigForm);
        label_ModifierKeys->setObjectName("label_ModifierKeys");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_ModifierKeys);

        widget = new QWidget(KWin__TrackMouseEffectConfigForm);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        kcfg_Alt = new QCheckBox(widget);
        kcfg_Alt->setObjectName("kcfg_Alt");

        horizontalLayout->addWidget(kcfg_Alt);

        kcfg_Control = new QCheckBox(widget);
        kcfg_Control->setObjectName("kcfg_Control");

        horizontalLayout->addWidget(kcfg_Control);

        kcfg_Shift = new QCheckBox(widget);
        kcfg_Shift->setObjectName("kcfg_Shift");

        horizontalLayout->addWidget(kcfg_Shift);

        kcfg_Meta = new QCheckBox(widget);
        kcfg_Meta->setObjectName("kcfg_Meta");

        horizontalLayout->addWidget(kcfg_Meta);


        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, widget);


        retranslateUi(KWin__TrackMouseEffectConfigForm);

        QMetaObject::connectSlotsByName(KWin__TrackMouseEffectConfigForm);
    } // setupUi

    void retranslateUi(QWidget *KWin__TrackMouseEffectConfigForm)
    {
        label->setText(tr2i18n("Trigger effect with:", nullptr));
        label_KeyboardShortcut->setText(tr2i18n("Keyboard shortcut:", nullptr));
        label_ModifierKeys->setText(tr2i18n("Modifier keys:", nullptr));
        kcfg_Alt->setText(tr2i18n("Alt", nullptr));
        kcfg_Control->setText(tr2i18n("Ctrl", nullptr));
        kcfg_Shift->setText(tr2i18n("Shift", nullptr));
        kcfg_Meta->setText(tr2i18n("Meta", nullptr));
        (void)KWin__TrackMouseEffectConfigForm;
    } // retranslateUi

};

} // namespace KWin

namespace KWin {
namespace Ui {
    class TrackMouseEffectConfigForm: public Ui_TrackMouseEffectConfigForm {};
} // namespace Ui
} // namespace KWin

#endif // TRACKMOUSE_CONFIG_H

