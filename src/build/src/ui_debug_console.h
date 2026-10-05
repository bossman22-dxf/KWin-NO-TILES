/********************************************************************************
** Form generated from reading UI file 'debug_console.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUG_CONSOLE_H
#define UI_DEBUG_CONSOLE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <klocalizedstring.h>

QT_BEGIN_NAMESPACE

class Ui_DebugConsole
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *windows;
    QVBoxLayout *verticalLayout_2;
    QTreeView *windowsView;
    QWidget *input;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *inputTextEdit;
    QWidget *inputDevices;
    QVBoxLayout *verticalLayout_5;
    QTreeView *inputDevicesView;
    QWidget *tab;
    QVBoxLayout *verticalLayout_6;
    QLabel *noOpenGLLabel;
    QScrollArea *glInfoScrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *driverInfoBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *glVendorStringLabel;
    QLabel *glRendererStringLabel;
    QLabel *glVersionStringLabel;
    QLabel *glslVersionStringLabel;
    QLabel *glDriverLabel;
    QLabel *glGPULabel;
    QLabel *glVersionLabel;
    QLabel *glslLabel;
    QGroupBox *platformExtensionsBox;
    QVBoxLayout *verticalLayout_8;
    QLabel *platformExtensionsLabel;
    QGroupBox *glExtensionsBox;
    QVBoxLayout *verticalLayout_10;
    QLabel *openGLExtensionsLabel;
    QWidget *keyboard;
    QVBoxLayout *verticalLayout_11;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_13;
    QGroupBox *layoutBox;
    QVBoxLayout *verticalLayout_12;
    QLabel *layoutsLabel;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QLabel *currentLayoutLabel;
    QGroupBox *modifiersBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *modifiersLabel;
    QGroupBox *activeModifiersBox;
    QVBoxLayout *verticalLayout_16;
    QLabel *activeModifiersLabel;
    QGroupBox *ledsBox;
    QVBoxLayout *verticalLayout_14;
    QLabel *ledsLabel;
    QGroupBox *activeLedsBox;
    QVBoxLayout *verticalLayout_15;
    QLabel *activeLedsLabel;
    QWidget *clipboard;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QLabel *clipboardSource;
    QTableView *clipboardContent;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_11;
    QLabel *primarySource;
    QTableView *primaryContent;

    void setupUi(QWidget *DebugConsole)
    {
        if (DebugConsole->objectName().isEmpty())
            DebugConsole->setObjectName("DebugConsole");
        DebugConsole->resize(600, 600);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("kwin")));
        DebugConsole->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(DebugConsole);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(DebugConsole);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setUsesScrollButtons(false);
        windows = new QWidget();
        windows->setObjectName("windows");
        verticalLayout_2 = new QVBoxLayout(windows);
        verticalLayout_2->setObjectName("verticalLayout_2");
        windowsView = new QTreeView(windows);
        windowsView->setObjectName("windowsView");
        windowsView->header()->setDefaultSectionSize(250);

        verticalLayout_2->addWidget(windowsView);

        tabWidget->addTab(windows, QString());
        input = new QWidget();
        input->setObjectName("input");
        verticalLayout_4 = new QVBoxLayout(input);
        verticalLayout_4->setObjectName("verticalLayout_4");
        inputTextEdit = new QTextEdit(input);
        inputTextEdit->setObjectName("inputTextEdit");
        inputTextEdit->setEnabled(false);
        inputTextEdit->setReadOnly(true);

        verticalLayout_4->addWidget(inputTextEdit);

        tabWidget->addTab(input, QString());
        inputDevices = new QWidget();
        inputDevices->setObjectName("inputDevices");
        verticalLayout_5 = new QVBoxLayout(inputDevices);
        verticalLayout_5->setObjectName("verticalLayout_5");
        inputDevicesView = new QTreeView(inputDevices);
        inputDevicesView->setObjectName("inputDevicesView");

        verticalLayout_5->addWidget(inputDevicesView);

        tabWidget->addTab(inputDevices, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_6 = new QVBoxLayout(tab);
        verticalLayout_6->setObjectName("verticalLayout_6");
        noOpenGLLabel = new QLabel(tab);
        noOpenGLLabel->setObjectName("noOpenGLLabel");

        verticalLayout_6->addWidget(noOpenGLLabel);

        glInfoScrollArea = new QScrollArea(tab);
        glInfoScrollArea->setObjectName("glInfoScrollArea");
        glInfoScrollArea->setFrameShadow(QFrame::Plain);
        glInfoScrollArea->setLineWidth(0);
        glInfoScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 564, 471));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_7->setObjectName("verticalLayout_7");
        driverInfoBox = new QGroupBox(scrollAreaWidgetContents);
        driverInfoBox->setObjectName("driverInfoBox");
        formLayout = new QFormLayout(driverInfoBox);
        formLayout->setObjectName("formLayout");
        label = new QLabel(driverInfoBox);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        label_2 = new QLabel(driverInfoBox);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        label_3 = new QLabel(driverInfoBox);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        label_4 = new QLabel(driverInfoBox);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_4);

        label_5 = new QLabel(driverInfoBox);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_5);

        label_6 = new QLabel(driverInfoBox);
        label_6->setObjectName("label_6");

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, label_6);

        label_7 = new QLabel(driverInfoBox);
        label_7->setObjectName("label_7");

        formLayout->setWidget(6, QFormLayout::ItemRole::LabelRole, label_7);

        label_8 = new QLabel(driverInfoBox);
        label_8->setObjectName("label_8");

        formLayout->setWidget(7, QFormLayout::ItemRole::LabelRole, label_8);

        glVendorStringLabel = new QLabel(driverInfoBox);
        glVendorStringLabel->setObjectName("glVendorStringLabel");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, glVendorStringLabel);

        glRendererStringLabel = new QLabel(driverInfoBox);
        glRendererStringLabel->setObjectName("glRendererStringLabel");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, glRendererStringLabel);

        glVersionStringLabel = new QLabel(driverInfoBox);
        glVersionStringLabel->setObjectName("glVersionStringLabel");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, glVersionStringLabel);

        glslVersionStringLabel = new QLabel(driverInfoBox);
        glslVersionStringLabel->setObjectName("glslVersionStringLabel");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, glslVersionStringLabel);

        glDriverLabel = new QLabel(driverInfoBox);
        glDriverLabel->setObjectName("glDriverLabel");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, glDriverLabel);

        glGPULabel = new QLabel(driverInfoBox);
        glGPULabel->setObjectName("glGPULabel");

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, glGPULabel);

        glVersionLabel = new QLabel(driverInfoBox);
        glVersionLabel->setObjectName("glVersionLabel");

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, glVersionLabel);

        glslLabel = new QLabel(driverInfoBox);
        glslLabel->setObjectName("glslLabel");

        formLayout->setWidget(7, QFormLayout::ItemRole::FieldRole, glslLabel);


        verticalLayout_7->addWidget(driverInfoBox);

        platformExtensionsBox = new QGroupBox(scrollAreaWidgetContents);
        platformExtensionsBox->setObjectName("platformExtensionsBox");
        verticalLayout_8 = new QVBoxLayout(platformExtensionsBox);
        verticalLayout_8->setObjectName("verticalLayout_8");
        platformExtensionsLabel = new QLabel(platformExtensionsBox);
        platformExtensionsLabel->setObjectName("platformExtensionsLabel");

        verticalLayout_8->addWidget(platformExtensionsLabel);


        verticalLayout_7->addWidget(platformExtensionsBox);

        glExtensionsBox = new QGroupBox(scrollAreaWidgetContents);
        glExtensionsBox->setObjectName("glExtensionsBox");
        verticalLayout_10 = new QVBoxLayout(glExtensionsBox);
        verticalLayout_10->setObjectName("verticalLayout_10");
        openGLExtensionsLabel = new QLabel(glExtensionsBox);
        openGLExtensionsLabel->setObjectName("openGLExtensionsLabel");

        verticalLayout_10->addWidget(openGLExtensionsLabel);


        verticalLayout_7->addWidget(glExtensionsBox);

        glInfoScrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_6->addWidget(glInfoScrollArea);

        tabWidget->addTab(tab, QString());
        keyboard = new QWidget();
        keyboard->setObjectName("keyboard");
        verticalLayout_11 = new QVBoxLayout(keyboard);
        verticalLayout_11->setObjectName("verticalLayout_11");
        scrollArea = new QScrollArea(keyboard);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setLineWidth(0);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 564, 495));
        verticalLayout_13 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_13->setObjectName("verticalLayout_13");
        layoutBox = new QGroupBox(scrollAreaWidgetContents_2);
        layoutBox->setObjectName("layoutBox");
        verticalLayout_12 = new QVBoxLayout(layoutBox);
        verticalLayout_12->setObjectName("verticalLayout_12");
        layoutsLabel = new QLabel(layoutBox);
        layoutsLabel->setObjectName("layoutsLabel");

        verticalLayout_12->addWidget(layoutsLabel);

        line = new QFrame(layoutBox);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_12->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_9 = new QLabel(layoutBox);
        label_9->setObjectName("label_9");

        horizontalLayout_2->addWidget(label_9);

        currentLayoutLabel = new QLabel(layoutBox);
        currentLayoutLabel->setObjectName("currentLayoutLabel");

        horizontalLayout_2->addWidget(currentLayoutLabel);


        verticalLayout_12->addLayout(horizontalLayout_2);


        verticalLayout_13->addWidget(layoutBox);

        modifiersBox = new QGroupBox(scrollAreaWidgetContents_2);
        modifiersBox->setObjectName("modifiersBox");
        horizontalLayout_3 = new QHBoxLayout(modifiersBox);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        modifiersLabel = new QLabel(modifiersBox);
        modifiersLabel->setObjectName("modifiersLabel");

        horizontalLayout_3->addWidget(modifiersLabel);


        verticalLayout_13->addWidget(modifiersBox);

        activeModifiersBox = new QGroupBox(scrollAreaWidgetContents_2);
        activeModifiersBox->setObjectName("activeModifiersBox");
        verticalLayout_16 = new QVBoxLayout(activeModifiersBox);
        verticalLayout_16->setObjectName("verticalLayout_16");
        activeModifiersLabel = new QLabel(activeModifiersBox);
        activeModifiersLabel->setObjectName("activeModifiersLabel");

        verticalLayout_16->addWidget(activeModifiersLabel);


        verticalLayout_13->addWidget(activeModifiersBox);

        ledsBox = new QGroupBox(scrollAreaWidgetContents_2);
        ledsBox->setObjectName("ledsBox");
        verticalLayout_14 = new QVBoxLayout(ledsBox);
        verticalLayout_14->setObjectName("verticalLayout_14");
        ledsLabel = new QLabel(ledsBox);
        ledsLabel->setObjectName("ledsLabel");

        verticalLayout_14->addWidget(ledsLabel);


        verticalLayout_13->addWidget(ledsBox);

        activeLedsBox = new QGroupBox(scrollAreaWidgetContents_2);
        activeLedsBox->setObjectName("activeLedsBox");
        verticalLayout_15 = new QVBoxLayout(activeLedsBox);
        verticalLayout_15->setObjectName("verticalLayout_15");
        activeLedsLabel = new QLabel(activeLedsBox);
        activeLedsLabel->setObjectName("activeLedsLabel");

        verticalLayout_15->addWidget(activeLedsLabel);


        verticalLayout_13->addWidget(activeLedsBox);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_11->addWidget(scrollArea);

        tabWidget->addTab(keyboard, QString());
        clipboard = new QWidget();
        clipboard->setObjectName("clipboard");
        verticalLayout_9 = new QVBoxLayout(clipboard);
        verticalLayout_9->setObjectName("verticalLayout_9");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_10 = new QLabel(clipboard);
        label_10->setObjectName("label_10");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        label_10->setFont(font);

        horizontalLayout_5->addWidget(label_10, 0, Qt::AlignBottom);

        clipboardSource = new QLabel(clipboard);
        clipboardSource->setObjectName("clipboardSource");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(clipboardSource->sizePolicy().hasHeightForWidth());
        clipboardSource->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(clipboardSource, 0, Qt::AlignBottom);


        verticalLayout_9->addLayout(horizontalLayout_5);

        clipboardContent = new QTableView(clipboard);
        clipboardContent->setObjectName("clipboardContent");
        clipboardContent->horizontalHeader()->setStretchLastSection(true);
        clipboardContent->verticalHeader()->setVisible(false);

        verticalLayout_9->addWidget(clipboardContent);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_11 = new QLabel(clipboard);
        label_11->setObjectName("label_11");
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setFont(font);

        horizontalLayout_4->addWidget(label_11, 0, Qt::AlignBottom);

        primarySource = new QLabel(clipboard);
        primarySource->setObjectName("primarySource");

        horizontalLayout_4->addWidget(primarySource, 0, Qt::AlignBottom);


        verticalLayout_9->addLayout(horizontalLayout_4);

        primaryContent = new QTableView(clipboard);
        primaryContent->setObjectName("primaryContent");
        primaryContent->horizontalHeader()->setStretchLastSection(true);
        primaryContent->verticalHeader()->setVisible(false);

        verticalLayout_9->addWidget(primaryContent);

        tabWidget->addTab(clipboard, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(DebugConsole);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DebugConsole);
    } // setupUi

    void retranslateUi(QWidget *DebugConsole)
    {
        DebugConsole->setWindowTitle(tr2i18n("Debug Console", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(windows), tr2i18n("Windows", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(input), tr2i18n("Input Events", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(inputDevices), tr2i18n("Input Devices", nullptr));
        noOpenGLLabel->setText(tr2i18n("No OpenGL compositor running", nullptr));
        driverInfoBox->setTitle(tr2i18n("OpenGL (ES) driver information", nullptr));
        label->setText(tr2i18n("Vendor:", nullptr));
        label_2->setText(tr2i18n("Renderer:", nullptr));
        label_3->setText(tr2i18n("Version:", nullptr));
        label_4->setText(tr2i18n("Shading Language Version:", nullptr));
        label_5->setText(tr2i18n("Driver:", nullptr));
        label_6->setText(tr2i18n("GPU class:", nullptr));
        label_7->setText(tr2i18n("OpenGL Version:", nullptr));
        label_8->setText(tr2i18n("GLSL Version:", nullptr));
        glVendorStringLabel->setText(QString());
        glRendererStringLabel->setText(QString());
        glVersionStringLabel->setText(QString());
        glslVersionStringLabel->setText(QString());
        glDriverLabel->setText(QString());
        glGPULabel->setText(QString());
        glVersionLabel->setText(QString());
        glslLabel->setText(QString());
        platformExtensionsBox->setTitle(tr2i18n("Platform Extensions", nullptr));
        platformExtensionsLabel->setText(QString());
        glExtensionsBox->setTitle(tr2i18n("OpenGL (ES) Extensions", nullptr));
        openGLExtensionsLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), tr2i18n("OpenGL", nullptr));
        layoutBox->setTitle(tr2i18n("Keymap Layouts", nullptr));
        layoutsLabel->setText(QString());
        label_9->setText(tr2i18n("Current Layout:", nullptr));
        currentLayoutLabel->setText(QString());
        modifiersBox->setTitle(tr2i18n("Modifiers", nullptr));
        modifiersLabel->setText(QString());
        activeModifiersBox->setTitle(tr2i18n("Active Modifiers", nullptr));
        activeModifiersLabel->setText(QString());
        ledsBox->setTitle(tr2i18n("LEDs", nullptr));
        ledsLabel->setText(QString());
        activeLedsBox->setTitle(tr2i18n("Active LEDs", nullptr));
        activeLedsLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(keyboard), tr2i18n("Keyboard", nullptr));
        label_10->setText(tr2i18n("Clipboard", nullptr));
        clipboardSource->setText(QString());
        label_11->setText(tr2i18n("Primary Selection", nullptr));
        primarySource->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(clipboard), tr2i18n("Clipboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DebugConsole: public Ui_DebugConsole {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DEBUG_CONSOLE_H

