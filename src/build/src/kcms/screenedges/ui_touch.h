/********************************************************************************
** Form generated from reading UI file 'touch.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOUCH_H
#define UI_TOUCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <klocalizedstring.h>
#include "monitor.h"

QT_BEGIN_NAMESPACE

class Ui_KWinTouchScreenConfigUi
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_1;
    QSpacerItem *verticalSpacer_1;
    KWin::Monitor *monitor;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *KWinTouchScreenConfigUi)
    {
        if (KWinTouchScreenConfigUi->objectName().isEmpty())
            KWinTouchScreenConfigUi->setObjectName("KWinTouchScreenConfigUi");
        KWinTouchScreenConfigUi->resize(500, 500);
        verticalLayout = new QVBoxLayout(KWinTouchScreenConfigUi);
        verticalLayout->setObjectName("verticalLayout");
        label_1 = new QLabel(KWinTouchScreenConfigUi);
        label_1->setObjectName("label_1");
        label_1->setWordWrap(true);

        verticalLayout->addWidget(label_1);

        verticalSpacer_1 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout->addItem(verticalSpacer_1);

        monitor = new KWin::Monitor(KWinTouchScreenConfigUi);
        monitor->setObjectName("monitor");
        monitor->setMinimumSize(QSize(200, 200));
        monitor->setFocusPolicy(Qt::StrongFocus);

        verticalLayout->addWidget(monitor);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(KWinTouchScreenConfigUi);

        QMetaObject::connectSlotsByName(KWinTouchScreenConfigUi);
    } // setupUi

    void retranslateUi(QWidget *KWinTouchScreenConfigUi)
    {
        label_1->setText(tr2i18n("You can trigger an action by swiping from the screen edge towards the center of the screen.", nullptr));
        (void)KWinTouchScreenConfigUi;
    } // retranslateUi

};

namespace Ui {
    class KWinTouchScreenConfigUi: public Ui_KWinTouchScreenConfigUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // TOUCH_H

