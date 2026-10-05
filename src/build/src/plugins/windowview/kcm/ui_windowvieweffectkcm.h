/********************************************************************************
** Form generated from reading UI file 'windowvieweffectkcm.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWVIEWEFFECTKCM_H
#define UI_WINDOWVIEWEFFECTKCM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QWidget>
#include <klocalizedstring.h>
#include "kshortcutseditor.h"

QT_BEGIN_NAMESPACE

class Ui_WindowViewEffectConfig
{
public:
    QFormLayout *formLayout;
    QCheckBox *kcfg_IgnoreMinimized;
    KShortcutsEditor *shortcutsEditor;

    void setupUi(QWidget *WindowViewEffectConfig)
    {
        if (WindowViewEffectConfig->objectName().isEmpty())
            WindowViewEffectConfig->setObjectName("WindowViewEffectConfig");
        WindowViewEffectConfig->resize(455, 177);
        formLayout = new QFormLayout(WindowViewEffectConfig);
        formLayout->setObjectName("formLayout");
        kcfg_IgnoreMinimized = new QCheckBox(WindowViewEffectConfig);
        kcfg_IgnoreMinimized->setObjectName("kcfg_IgnoreMinimized");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, kcfg_IgnoreMinimized);

        shortcutsEditor = new KShortcutsEditor(WindowViewEffectConfig);
        shortcutsEditor->setObjectName("shortcutsEditor");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(shortcutsEditor->sizePolicy().hasHeightForWidth());
        shortcutsEditor->setSizePolicy(sizePolicy);
        shortcutsEditor->setActionTypes(KShortcutsEditor::GlobalAction);

        formLayout->setWidget(1, QFormLayout::ItemRole::SpanningRole, shortcutsEditor);


        retranslateUi(WindowViewEffectConfig);

        QMetaObject::connectSlotsByName(WindowViewEffectConfig);
    } // setupUi

    void retranslateUi(QWidget *WindowViewEffectConfig)
    {
        kcfg_IgnoreMinimized->setText(tr2i18n("Ignore &minimized windows", nullptr));
        (void)WindowViewEffectConfig;
    } // retranslateUi

};

namespace Ui {
    class WindowViewEffectConfig: public Ui_WindowViewEffectConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // WINDOWVIEWEFFECTKCM_H

