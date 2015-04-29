/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Apr 29 12:05:15 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_9;
    QPushButton *btn_history;
    QPushButton *btn_konfig;
    QPushButton *pushButton_10;
    QPushButton *btn_adminDrivhus;
    QPushButton *btn_adminPlanteDB;
    QPushButton *btn_reguler;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_13;
    QPlainTextEdit *pte_livestatus;
    QPushButton *pushButton_12;
    QPushButton *pushButton_11;
    QPushButton *btn_monitor;
    QPushButton *btn_systemlog;
    QPushButton *pushButton_8;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(480, 244);
        MainWindow->setMaximumSize(QSize(480, 272));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(410, 110, 61, 31));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        btn_history = new QPushButton(centralWidget);
        btn_history->setObjectName(QString::fromUtf8("btn_history"));
        btn_history->setGeometry(QRect(10, 60, 271, 21));
        btn_konfig = new QPushButton(centralWidget);
        btn_konfig->setObjectName(QString::fromUtf8("btn_konfig"));
        btn_konfig->setGeometry(QRect(10, 120, 271, 21));
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(320, 150, 61, 31));
        pushButton_10->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        btn_adminDrivhus = new QPushButton(centralWidget);
        btn_adminDrivhus->setObjectName(QString::fromUtf8("btn_adminDrivhus"));
        btn_adminDrivhus->setGeometry(QRect(10, 30, 271, 21));
        btn_adminPlanteDB = new QPushButton(centralWidget);
        btn_adminPlanteDB->setObjectName(QString::fromUtf8("btn_adminPlanteDB"));
        btn_adminPlanteDB->setGeometry(QRect(10, 90, 271, 21));
        btn_reguler = new QPushButton(centralWidget);
        btn_reguler->setObjectName(QString::fromUtf8("btn_reguler"));
        btn_reguler->setGeometry(QRect(150, 175, 131, 41));
        btn_reguler->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 231, 16));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 10, 161, 16));
        label_2->setFont(font);
        pushButton_13 = new QPushButton(centralWidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(410, 190, 61, 31));
        pushButton_13->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        pte_livestatus = new QPlainTextEdit(centralWidget);
        pte_livestatus->setObjectName(QString::fromUtf8("pte_livestatus"));
        pte_livestatus->setGeometry(QRect(320, 30, 151, 71));
        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(320, 190, 61, 31));
        pushButton_12->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(410, 150, 61, 31));
        pushButton_11->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        btn_monitor = new QPushButton(centralWidget);
        btn_monitor->setObjectName(QString::fromUtf8("btn_monitor"));
        btn_monitor->setGeometry(QRect(10, 175, 131, 41));
        btn_monitor->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        btn_systemlog = new QPushButton(centralWidget);
        btn_systemlog->setObjectName(QString::fromUtf8("btn_systemlog"));
        btn_systemlog->setGeometry(QRect(10, 150, 271, 21));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(320, 110, 61, 31));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 480, 20));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("MainWindow", "3/2", 0, QApplication::UnicodeUTF8));
        btn_history->setText(QApplication::translate("MainWindow", "Se histrorik", 0, QApplication::UnicodeUTF8));
        btn_konfig->setText(QApplication::translate("MainWindow", "Konfigurer system", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QApplication::translate("MainWindow", "3/2", 0, QApplication::UnicodeUTF8));
        btn_adminDrivhus->setText(QApplication::translate("MainWindow", "Administrer Drivhus", 0, QApplication::UnicodeUTF8));
        btn_adminPlanteDB->setText(QApplication::translate("MainWindow", "Adm. Plantedatabase", 0, QApplication::UnicodeUTF8));
        btn_reguler->setText(QApplication::translate("MainWindow", "Reguler", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "                HOVED MENU", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "        Live status", 0, QApplication::UnicodeUTF8));
        pushButton_13->setText(QApplication::translate("MainWindow", "3/2", 0, QApplication::UnicodeUTF8));
        pte_livestatus->setPlainText(QApplication::translate("MainWindow", "1\n"
"1\n"
"1\n"
"1", 0, QApplication::UnicodeUTF8));
        pushButton_12->setText(QApplication::translate("MainWindow", "3/2", 0, QApplication::UnicodeUTF8));
        pushButton_11->setText(QApplication::translate("MainWindow", "3/2", 0, QApplication::UnicodeUTF8));
        btn_monitor->setText(QApplication::translate("MainWindow", "Monitor", 0, QApplication::UnicodeUTF8));
        btn_systemlog->setText(QApplication::translate("MainWindow", "Se systemlog", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("MainWindow", "3/2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
