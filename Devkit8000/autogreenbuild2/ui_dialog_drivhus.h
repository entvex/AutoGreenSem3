/********************************************************************************
** Form generated from reading UI file 'dialog_drivhus.ui'
**
** Created: Wed May 13 09:53:09 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_DRIVHUS_H
#define UI_DIALOG_DRIVHUS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog_drivhus
{
public:
    QPushButton *btn_back;
    QPushButton *btn_up;
    QPushButton *btn_ned;
    QLabel *label;
    QTextEdit *textEdit;
    QPushButton *btn_ok;

    void setupUi(QDialog *Dialog_drivhus)
    {
        if (Dialog_drivhus->objectName().isEmpty())
            Dialog_drivhus->setObjectName(QString::fromUtf8("Dialog_drivhus"));
        Dialog_drivhus->resize(480, 256);
        Dialog_drivhus->setMaximumSize(QSize(480, 256));
        btn_back = new QPushButton(Dialog_drivhus);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(60, 200, 81, 23));
        btn_up = new QPushButton(Dialog_drivhus);
        btn_up->setObjectName(QString::fromUtf8("btn_up"));
        btn_up->setGeometry(QRect(140, 70, 81, 23));
        btn_ned = new QPushButton(Dialog_drivhus);
        btn_ned->setObjectName(QString::fromUtf8("btn_ned"));
        btn_ned->setGeometry(QRect(140, 100, 81, 23));
        label = new QLabel(Dialog_drivhus);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 60, 111, 20));
        textEdit = new QTextEdit(Dialog_drivhus);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(230, 80, 71, 31));
        btn_ok = new QPushButton(Dialog_drivhus);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        btn_ok->setGeometry(QRect(330, 200, 81, 23));

        retranslateUi(Dialog_drivhus);

        QMetaObject::connectSlotsByName(Dialog_drivhus);
    } // setupUi

    void retranslateUi(QDialog *Dialog_drivhus)
    {
        Dialog_drivhus->setWindowTitle(QApplication::translate("Dialog_drivhus", "Dialog", 0, QApplication::UnicodeUTF8));
        btn_back->setText(QApplication::translate("Dialog_drivhus", "Back", 0, QApplication::UnicodeUTF8));
        btn_up->setText(QApplication::translate("Dialog_drivhus", "Up", 0, QApplication::UnicodeUTF8));
        btn_ned->setText(QApplication::translate("Dialog_drivhus", "Ned", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog_drivhus", "Tempratur plant 1", 0, QApplication::UnicodeUTF8));
        btn_ok->setText(QApplication::translate("Dialog_drivhus", "Ok", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog_drivhus: public Ui_Dialog_drivhus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_DRIVHUS_H
