/********************************************************************************
** Form generated from reading UI file 'shortcutdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTCUTDIALOG_H
#define UI_SHORTCUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QKeySequenceEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <klocalizedstring.h>

QT_BEGIN_NAMESPACE

class Ui_ShortcutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QKeySequenceEdit *keySequenceEdit;
    QToolButton *clearButton;
    QLabel *warning;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ShortcutDialog)
    {
        if (ShortcutDialog->objectName().isEmpty())
            ShortcutDialog->setObjectName("ShortcutDialog");
        ShortcutDialog->resize(200, 100);
        verticalLayout = new QVBoxLayout(ShortcutDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        keySequenceEdit = new QKeySequenceEdit(ShortcutDialog);
        keySequenceEdit->setObjectName("keySequenceEdit");

        horizontalLayout->addWidget(keySequenceEdit);

        clearButton = new QToolButton(ShortcutDialog);
        clearButton->setObjectName("clearButton");
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("edit-clear-locationbar-rtl")));
        clearButton->setIcon(icon);

        horizontalLayout->addWidget(clearButton);


        verticalLayout->addLayout(horizontalLayout);

        warning = new QLabel(ShortcutDialog);
        warning->setObjectName("warning");

        verticalLayout->addWidget(warning);

        buttonBox = new QDialogButtonBox(ShortcutDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ShortcutDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ShortcutDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ShortcutDialog, qOverload<>(&QDialog::reject));
        QObject::connect(clearButton, &QToolButton::clicked, keySequenceEdit, qOverload<>(&QKeySequenceEdit::clear));

        QMetaObject::connectSlotsByName(ShortcutDialog);
    } // setupUi

    void retranslateUi(QDialog *ShortcutDialog)
    {
        ShortcutDialog->setWindowTitle(tr2i18n("Dialog", nullptr));
        clearButton->setText(tr2i18n("...", nullptr));
        warning->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ShortcutDialog: public Ui_ShortcutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SHORTCUTDIALOG_H

