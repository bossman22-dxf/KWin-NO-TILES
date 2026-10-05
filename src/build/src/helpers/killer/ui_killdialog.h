/********************************************************************************
** Form generated from reading UI file 'killdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KILLDIALOG_H
#define UI_KILLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <klocalizedstring.h>
#include "kbusyindicatorwidget.h"
#include "kcollapsiblegroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_KillDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *layout_message;
    QLabel *icon;
    QLabel *label_message;
    KCollapsibleGroupBox *kcollapsiblegroupbox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_pid;
    QLabel *label_hostname;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_status;
    QHBoxLayout *horizontalLayout;
    KBusyIndicatorWidget *busyIndicator;
    QLabel *label_status;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *KillDialog)
    {
        if (KillDialog->objectName().isEmpty())
            KillDialog->setObjectName("KillDialog");
        KillDialog->resize(436, 102);
        KillDialog->setModal(true);
        verticalLayout = new QVBoxLayout(KillDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        layout_message = new QHBoxLayout();
        layout_message->setObjectName("layout_message");
        icon = new QLabel(KillDialog);
        icon->setObjectName("icon");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(icon->sizePolicy().hasHeightForWidth());
        icon->setSizePolicy(sizePolicy);
        icon->setText(QString::fromUtf8("ICON"));

        layout_message->addWidget(icon);

        label_message = new QLabel(KillDialog);
        label_message->setObjectName("label_message");
        label_message->setText(QString::fromUtf8("MESSAGE"));
        label_message->setTextInteractionFlags(Qt::TextInteractionFlag::TextSelectableByKeyboard|Qt::TextInteractionFlag::TextSelectableByMouse);

        layout_message->addWidget(label_message);


        verticalLayout->addLayout(layout_message);

        kcollapsiblegroupbox = new KCollapsibleGroupBox(KillDialog);
        kcollapsiblegroupbox->setObjectName("kcollapsiblegroupbox");
        kcollapsiblegroupbox->setExpanded(false);
        verticalLayout_2 = new QVBoxLayout(kcollapsiblegroupbox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_pid = new QLabel(kcollapsiblegroupbox);
        label_pid->setObjectName("label_pid");
        label_pid->setText(QString::fromUtf8("PID"));
        label_pid->setTextFormat(Qt::TextFormat::PlainText);
        label_pid->setTextInteractionFlags(Qt::TextInteractionFlag::TextSelectableByKeyboard|Qt::TextInteractionFlag::TextSelectableByMouse);

        verticalLayout_2->addWidget(label_pid);

        label_hostname = new QLabel(kcollapsiblegroupbox);
        label_hostname->setObjectName("label_hostname");
        label_hostname->setText(QString::fromUtf8("HOSTNAME"));
        label_hostname->setTextFormat(Qt::TextFormat::PlainText);
        label_hostname->setTextInteractionFlags(Qt::TextInteractionFlag::TextSelectableByKeyboard|Qt::TextInteractionFlag::TextSelectableByMouse);

        verticalLayout_2->addWidget(label_hostname);


        verticalLayout->addWidget(kcollapsiblegroupbox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        widget_status = new QWidget(KillDialog);
        widget_status->setObjectName("widget_status");
        horizontalLayout = new QHBoxLayout(widget_status);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        busyIndicator = new KBusyIndicatorWidget(widget_status);
        busyIndicator->setObjectName("busyIndicator");
        sizePolicy.setHeightForWidth(busyIndicator->sizePolicy().hasHeightForWidth());
        busyIndicator->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(busyIndicator);

        label_status = new QLabel(widget_status);
        label_status->setObjectName("label_status");
        label_status->setText(QString::fromUtf8("TERMINATING"));
        label_status->setTextFormat(Qt::TextFormat::PlainText);

        horizontalLayout->addWidget(label_status);


        horizontalLayout_2->addWidget(widget_status);

        buttonBox = new QDialogButtonBox(KillDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::NoButton);

        horizontalLayout_2->addWidget(buttonBox, 0, Qt::AlignmentFlag::AlignRight);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(KillDialog);

        QMetaObject::connectSlotsByName(KillDialog);
    } // setupUi

    void retranslateUi(QDialog *KillDialog)
    {
        KillDialog->setWindowTitle(tr2i18n("Not Responding", "@title:window"));
        kcollapsiblegroupbox->setTitle(tr2i18n("&Details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KillDialog: public Ui_KillDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KILLDIALOG_H

