/********************************************************************************
** Form generated from reading UI file 'dialog_drivehusadministration.ui'
**
** Created: Thu May 14 12:11:39 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_DRIVEHUSADMINISTRATION_H
#define UI_DIALOG_DRIVEHUSADMINISTRATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_drivehusAdministration
{
public:
    QPushButton *btn_back;
    QPushButton *btn_ok;
    QPushButton *btn_up;
    QPushButton *btn_down;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btn_up_2;
    QPushButton *btn_down_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *Dialog_drivehusAdministration)
    {
        if (Dialog_drivehusAdministration->objectName().isEmpty())
            Dialog_drivehusAdministration->setObjectName(QString::fromUtf8("Dialog_drivehusAdministration"));
        Dialog_drivehusAdministration->resize(480, 256);
        Dialog_drivehusAdministration->setMaximumSize(QSize(480, 256));
        btn_back = new QPushButton(Dialog_drivehusAdministration);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(10, 210, 81, 23));
        btn_ok = new QPushButton(Dialog_drivehusAdministration);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        btn_ok->setGeometry(QRect(390, 210, 81, 23));
        btn_up = new QPushButton(Dialog_drivehusAdministration);
        btn_up->setObjectName(QString::fromUtf8("btn_up"));
        btn_up->setGeometry(QRect(10, 40, 41, 23));
        btn_down = new QPushButton(Dialog_drivehusAdministration);
        btn_down->setObjectName(QString::fromUtf8("btn_down"));
        btn_down->setGeometry(QRect(10, 70, 41, 23));
        lineEdit = new QLineEdit(Dialog_drivehusAdministration);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 50, 113, 23));
        label = new QLabel(Dialog_drivehusAdministration);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 30, 71, 16));
        label_2 = new QLabel(Dialog_drivehusAdministration);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 10, 57, 15));
        btn_up_2 = new QPushButton(Dialog_drivehusAdministration);
        btn_up_2->setObjectName(QString::fromUtf8("btn_up_2"));
        btn_up_2->setGeometry(QRect(190, 40, 41, 23));
        btn_down_2 = new QPushButton(Dialog_drivehusAdministration);
        btn_down_2->setObjectName(QString::fromUtf8("btn_down_2"));
        btn_down_2->setGeometry(QRect(190, 70, 41, 23));
        lineEdit_2 = new QLineEdit(Dialog_drivehusAdministration);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(240, 50, 113, 23));
        label_3 = new QLabel(Dialog_drivehusAdministration);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(260, 30, 71, 16));
        label_4 = new QLabel(Dialog_drivehusAdministration);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(220, 10, 57, 15));

        retranslateUi(Dialog_drivehusAdministration);

        QMetaObject::connectSlotsByName(Dialog_drivehusAdministration);
    } // setupUi

    void retranslateUi(QDialog *Dialog_drivehusAdministration)
    {
        Dialog_drivehusAdministration->setWindowTitle(QApplication::translate("Dialog_drivehusAdministration", "Dialog", 0, QApplication::UnicodeUTF8));
        btn_back->setText(QApplication::translate("Dialog_drivehusAdministration", "Back", 0, QApplication::UnicodeUTF8));
        btn_ok->setText(QApplication::translate("Dialog_drivehusAdministration", "Ok", 0, QApplication::UnicodeUTF8));
        btn_up->setText(QApplication::translate("Dialog_drivehusAdministration", "op", 0, QApplication::UnicodeUTF8));
        btn_down->setText(QApplication::translate("Dialog_drivehusAdministration", "ned", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog_drivehusAdministration", "Tempratur", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog_drivehusAdministration", "Plant 1", 0, QApplication::UnicodeUTF8));
        btn_up_2->setText(QApplication::translate("Dialog_drivehusAdministration", "op", 0, QApplication::UnicodeUTF8));
        btn_down_2->setText(QApplication::translate("Dialog_drivehusAdministration", "ned", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog_drivehusAdministration", "Tempratur", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialog_drivehusAdministration", "Plant 2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog_drivehusAdministration: public Ui_Dialog_drivehusAdministration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_DRIVEHUSADMINISTRATION_H
