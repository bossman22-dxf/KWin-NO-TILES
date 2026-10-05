/********************************************************************************
** Form generated from reading UI file 'thumbnailaside_config.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THUMBNAILASIDE_CONFIG_H
#define UI_THUMBNAILASIDE_CONFIG_H

#include <KShortcutsEditor>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <klocalizedstring.h>

namespace KWin {

class Ui_ThumbnailAsideEffectConfigForm
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *kcfg_Spacing;
    QLabel *label_3;
    QSpinBox *kcfg_Opacity;
    QSpinBox *kcfg_MaxWidth;
    KShortcutsEditor *editor;

    void setupUi(QWidget *KWin__ThumbnailAsideEffectConfigForm)
    {
        if (KWin__ThumbnailAsideEffectConfigForm->objectName().isEmpty())
            KWin__ThumbnailAsideEffectConfigForm->setObjectName("KWin__ThumbnailAsideEffectConfigForm");
        KWin__ThumbnailAsideEffectConfigForm->resize(400, 300);
        vboxLayout = new QVBoxLayout(KWin__ThumbnailAsideEffectConfigForm);
        vboxLayout->setObjectName("vboxLayout");
        groupBox = new QGroupBox(KWin__ThumbnailAsideEffectConfigForm);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        kcfg_Spacing = new QSpinBox(groupBox);
        kcfg_Spacing->setObjectName("kcfg_Spacing");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(kcfg_Spacing->sizePolicy().hasHeightForWidth());
        kcfg_Spacing->setSizePolicy(sizePolicy);
        kcfg_Spacing->setMaximum(30);
        kcfg_Spacing->setValue(10);

        gridLayout->addWidget(kcfg_Spacing, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        kcfg_Opacity = new QSpinBox(groupBox);
        kcfg_Opacity->setObjectName("kcfg_Opacity");
        sizePolicy.setHeightForWidth(kcfg_Opacity->sizePolicy().hasHeightForWidth());
        kcfg_Opacity->setSizePolicy(sizePolicy);
        kcfg_Opacity->setMaximum(100);
        kcfg_Opacity->setValue(50);

        gridLayout->addWidget(kcfg_Opacity, 2, 1, 1, 1);

        kcfg_MaxWidth = new QSpinBox(groupBox);
        kcfg_MaxWidth->setObjectName("kcfg_MaxWidth");
        sizePolicy.setHeightForWidth(kcfg_MaxWidth->sizePolicy().hasHeightForWidth());
        kcfg_MaxWidth->setSizePolicy(sizePolicy);
        kcfg_MaxWidth->setMaximum(9999);
        kcfg_MaxWidth->setValue(200);

        gridLayout->addWidget(kcfg_MaxWidth, 0, 1, 1, 1);


        vboxLayout->addWidget(groupBox);

        editor = new KShortcutsEditor(KWin__ThumbnailAsideEffectConfigForm);
        editor->setObjectName("editor");
        editor->setActionTypes(KShortcutsEditor::GlobalAction);

        vboxLayout->addWidget(editor);

#if QT_CONFIG(shortcut)
        label->setBuddy(kcfg_MaxWidth);
        label_2->setBuddy(kcfg_Spacing);
        label_3->setBuddy(kcfg_Opacity);
#endif // QT_CONFIG(shortcut)

        retranslateUi(KWin__ThumbnailAsideEffectConfigForm);

        QMetaObject::connectSlotsByName(KWin__ThumbnailAsideEffectConfigForm);
    } // setupUi

    void retranslateUi(QWidget *KWin__ThumbnailAsideEffectConfigForm)
    {
        groupBox->setTitle(tr2i18n("Appearance", nullptr));
        label->setText(tr2i18n("Maximum &width:", nullptr));
        label_2->setText(tr2i18n("&Spacing:", nullptr));
        kcfg_Spacing->setSuffix(tr2i18n(" pixels", nullptr));
        label_3->setText(tr2i18n("&Opacity:", nullptr));
        kcfg_Opacity->setSuffix(tr2i18n(" %", nullptr));
        kcfg_MaxWidth->setSuffix(tr2i18n(" pixels", nullptr));
        (void)KWin__ThumbnailAsideEffectConfigForm;
    } // retranslateUi

};

} // namespace KWin

namespace KWin {
namespace Ui {
    class ThumbnailAsideEffectConfigForm: public Ui_ThumbnailAsideEffectConfigForm {};
} // namespace Ui
} // namespace KWin

#endif // THUMBNAILASIDE_CONFIG_H

