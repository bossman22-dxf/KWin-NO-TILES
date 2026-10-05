/********************************************************************************
** Form generated from reading UI file 'tileseditoreffectkcm.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TILESEDITOREFFECTKCM_H
#define UI_TILESEDITOREFFECTKCM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QWidget>
#include <klocalizedstring.h>
#include "kshortcutseditor.h"

QT_BEGIN_NAMESPACE

class Ui_TilesEditorEffectConfig
{
public:
    QFormLayout *formLayout;
    KShortcutsEditor *shortcutsEditor;

    void setupUi(QWidget *TilesEditorEffectConfig)
    {
        if (TilesEditorEffectConfig->objectName().isEmpty())
            TilesEditorEffectConfig->setObjectName("TilesEditorEffectConfig");
        TilesEditorEffectConfig->resize(455, 177);
        formLayout = new QFormLayout(TilesEditorEffectConfig);
        formLayout->setObjectName("formLayout");
        shortcutsEditor = new KShortcutsEditor(TilesEditorEffectConfig);
        shortcutsEditor->setObjectName("shortcutsEditor");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(shortcutsEditor->sizePolicy().hasHeightForWidth());
        shortcutsEditor->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::ItemRole::SpanningRole, shortcutsEditor);


        retranslateUi(TilesEditorEffectConfig);

        QMetaObject::connectSlotsByName(TilesEditorEffectConfig);
    } // setupUi

    void retranslateUi(QWidget *TilesEditorEffectConfig)
    {
        (void)TilesEditorEffectConfig;
    } // retranslateUi

};

namespace Ui {
    class TilesEditorEffectConfig: public Ui_TilesEditorEffectConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // TILESEDITOREFFECTKCM_H

