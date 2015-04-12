/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLabel *label;
    QLabel *label_2;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(480, 272);
        MainWindow->setMinimumSize(QSize(480, 272));
        MainWindow->setMaximumSize(QSize(480, 272));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 20, 271, 21));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 50, 271, 21));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 80, 271, 21));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 110, 271, 21));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 140, 271, 21));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 165, 131, 41));
        pushButton_6->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 0);"));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(150, 165, 131, 41));
        pushButton_7->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 0, 231, 16));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(310, 0, 161, 16));
        label_2->setFont(font);
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(320, 20, 151, 71));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(320, 100, 61, 31));
        pushButton_8->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 0);"));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(410, 100, 61, 31));
        pushButton_9->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 0);"));
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(320, 140, 61, 31));
        pushButton_10->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 0);"));
        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(410, 140, 61, 31));
        pushButton_11->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 0);"));
        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(320, 180, 61, 31));
        pushButton_12->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 0);"));
        pushButton_13 = new QPushButton(centralWidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(410, 180, 61, 31));
        pushButton_13->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 0);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 480, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_7, SIGNAL(clicked()), label_2, SLOT(clear()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Administrer Drivhus", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Se histrorik", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Adm. Plantedatabase", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "Konfigurer system", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "Konfigurer system", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "Monitor", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "Reguler", 0));
        label->setText(QApplication::translate("MainWindow", "                HOVED MENU", 0));
        label_2->setText(QApplication::translate("MainWindow", "        Live status", 0));
        plainTextEdit->setPlainText(QApplication::translate("MainWindow", "1\n"
"1\n"
"1\n"
"1", 0));
        pushButton_8->setText(QApplication::translate("MainWindow", "3/2", 0));
        pushButton_9->setText(QApplication::translate("MainWindow", "3/2", 0));
        pushButton_10->setText(QApplication::translate("MainWindow", "3/2", 0));
        pushButton_11->setText(QApplication::translate("MainWindow", "3/2", 0));
        pushButton_12->setText(QApplication::translate("MainWindow", "3/2", 0));
        pushButton_13->setText(QApplication::translate("MainWindow", "3/2", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
