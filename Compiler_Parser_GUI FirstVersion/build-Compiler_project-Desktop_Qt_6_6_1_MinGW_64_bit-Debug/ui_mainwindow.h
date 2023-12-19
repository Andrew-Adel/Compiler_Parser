/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QTabWidget *tabWidget;
    QWidget *FileUpload;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QTextEdit *textEdit;
    QPushButton *ScannerBtn;
    QWidget *ScannerOutput;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QTextEdit *scannerTxt;
    QPushButton *pushButton;
    QWidget *SyntaxTree;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QMenu *menuCompiler;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(952, 630);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName("formLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        FileUpload = new QWidget();
        FileUpload->setObjectName("FileUpload");
        gridLayout_2 = new QGridLayout(FileUpload);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(FileUpload);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        textEdit = new QTextEdit(FileUpload);
        textEdit->setObjectName("textEdit");

        gridLayout_2->addWidget(textEdit, 1, 0, 1, 1);

        ScannerBtn = new QPushButton(FileUpload);
        ScannerBtn->setObjectName("ScannerBtn");
        ScannerBtn->setAutoFillBackground(false);
        ScannerBtn->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(ScannerBtn, 2, 0, 1, 1);

        tabWidget->addTab(FileUpload, QString());
        ScannerOutput = new QWidget();
        ScannerOutput->setObjectName("ScannerOutput");
        gridLayout_3 = new QGridLayout(ScannerOutput);
        gridLayout_3->setObjectName("gridLayout_3");
        label_3 = new QLabel(ScannerOutput);
        label_3->setObjectName("label_3");

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        scannerTxt = new QTextEdit(ScannerOutput);
        scannerTxt->setObjectName("scannerTxt");
        scannerTxt->setReadOnly(true);

        gridLayout_3->addWidget(scannerTxt, 1, 0, 1, 1);

        pushButton = new QPushButton(ScannerOutput);
        pushButton->setObjectName("pushButton");

        gridLayout_3->addWidget(pushButton, 2, 0, 1, 1);

        tabWidget->addTab(ScannerOutput, QString());
        SyntaxTree = new QWidget();
        SyntaxTree->setObjectName("SyntaxTree");
        gridLayout = new QGridLayout(SyntaxTree);
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(SyntaxTree);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        graphicsView = new QGraphicsView(SyntaxTree);
        graphicsView->setObjectName("graphicsView");

        gridLayout->addWidget(graphicsView, 1, 0, 1, 1);

        tabWidget->addTab(SyntaxTree, QString());

        formLayout->setWidget(0, QFormLayout::SpanningRole, tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 952, 25));
        menuCompiler = new QMenu(menubar);
        menuCompiler->setObjectName("menuCompiler");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuCompiler->menuAction());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Enter your code", nullptr));
        ScannerBtn->setText(QCoreApplication::translate("MainWindow", "scan", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(FileUpload), QCoreApplication::translate("MainWindow", "Editor", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Scanner Output", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "parse", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ScannerOutput), QCoreApplication::translate("MainWindow", "Scanner Output", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Syntax Tree", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(SyntaxTree), QCoreApplication::translate("MainWindow", "Syntax Tree", nullptr));
        menuCompiler->setTitle(QCoreApplication::translate("MainWindow", "Compiler", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
