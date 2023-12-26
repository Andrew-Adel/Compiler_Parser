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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPushButton *clearBtn;
    QTabWidget *tabWidget;
    QWidget *Editor;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *uploadFile;
    QTextEdit *textEdit;
    QPushButton *scannerBtn;
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
        MainWindow->resize(721, 541);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        clearBtn = new QPushButton(centralwidget);
        clearBtn->setObjectName("clearBtn");
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        clearBtn->setFont(font);

        verticalLayout->addWidget(clearBtn);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        Editor = new QWidget();
        Editor->setObjectName("Editor");
        verticalLayout_2 = new QVBoxLayout(Editor);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(Editor);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(15);
        font1.setBold(true);
        label->setFont(font1);

        horizontalLayout_4->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        uploadFile = new QPushButton(Editor);
        uploadFile->setObjectName("uploadFile");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(uploadFile->sizePolicy().hasHeightForWidth());
        uploadFile->setSizePolicy(sizePolicy1);
        uploadFile->setSizeIncrement(QSize(0, 0));
        uploadFile->setFont(font);

        horizontalLayout_4->addWidget(uploadFile);


        verticalLayout_2->addLayout(horizontalLayout_4);

        textEdit = new QTextEdit(Editor);
        textEdit->setObjectName("textEdit");

        verticalLayout_2->addWidget(textEdit);

        scannerBtn = new QPushButton(Editor);
        scannerBtn->setObjectName("scannerBtn");
        scannerBtn->setSizeIncrement(QSize(10, 100));
        scannerBtn->setFont(font);

        verticalLayout_2->addWidget(scannerBtn);

        tabWidget->addTab(Editor, QString());
        ScannerOutput = new QWidget();
        ScannerOutput->setObjectName("ScannerOutput");
        gridLayout_3 = new QGridLayout(ScannerOutput);
        gridLayout_3->setObjectName("gridLayout_3");
        label_3 = new QLabel(ScannerOutput);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        scannerTxt = new QTextEdit(ScannerOutput);
        scannerTxt->setObjectName("scannerTxt");
        scannerTxt->setReadOnly(true);

        gridLayout_3->addWidget(scannerTxt, 1, 0, 1, 1);

        pushButton = new QPushButton(ScannerOutput);
        pushButton->setObjectName("pushButton");
        pushButton->setFont(font);

        gridLayout_3->addWidget(pushButton, 2, 0, 1, 1);

        tabWidget->addTab(ScannerOutput, QString());
        SyntaxTree = new QWidget();
        SyntaxTree->setObjectName("SyntaxTree");
        gridLayout = new QGridLayout(SyntaxTree);
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(SyntaxTree);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        graphicsView = new QGraphicsView(SyntaxTree);
        graphicsView->setObjectName("graphicsView");

        gridLayout->addWidget(graphicsView, 1, 0, 1, 1);

        tabWidget->addTab(SyntaxTree, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 721, 25));
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

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        clearBtn->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Enter you code", nullptr));
        uploadFile->setText(QCoreApplication::translate("MainWindow", "Upload File", nullptr));
        scannerBtn->setText(QCoreApplication::translate("MainWindow", "Scan", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Editor), QCoreApplication::translate("MainWindow", "Editor", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Scanner Output", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Parse", nullptr));
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
