/********************************************************************************
** Form generated from reading UI file 'dialog_datetime.ui'
**
** Created: Thu Apr 30 09:55:51 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_DATETIME_H
#define UI_DIALOG_DATETIME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_dialog_datetime
{
public:
    QLabel *label_3;
    QPushButton *btn_back;
    QLabel *label;
    QTimeEdit *timeEdit;
    QDateEdit *dateEdit;
    QPushButton *btn_ok;
    QLabel *label_2;

    void setupUi(QDialog *dialog_datetime)
    {
        if (dialog_datetime->objectName().isEmpty())
            dialog_datetime->setObjectName(QString::fromUtf8("dialog_datetime"));
        dialog_datetime->resize(480, 257);
        dialog_datetime->setMaximumSize(QSize(480, 257));
        label_3 = new QLabel(dialog_datetime);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 10, 271, 16));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        btn_back = new QPushButton(dialog_datetime);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(50, 200, 51, 23));
        label = new QLabel(dialog_datetime);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 50, 61, 20));
        timeEdit = new QTimeEdit(dialog_datetime);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(170, 90, 111, 24));
        dateEdit = new QDateEdit(dialog_datetime);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(170, 50, 110, 24));
        btn_ok = new QPushButton(dialog_datetime);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        btn_ok->setGeometry(QRect(380, 210, 51, 23));
        label_2 = new QLabel(dialog_datetime);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 90, 61, 20));

        retranslateUi(dialog_datetime);

        QMetaObject::connectSlotsByName(dialog_datetime);
    } // setupUi

    void retranslateUi(QDialog *dialog_datetime)
    {
        dialog_datetime->setWindowTitle(QApplication::translate("dialog_datetime", "Dialog", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("dialog_datetime", "                Tids indstillinger", 0, QApplication::UnicodeUTF8));
        btn_back->setText(QApplication::translate("dialog_datetime", "Tilbage", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("dialog_datetime", "Dato", 0, QApplication::UnicodeUTF8));
        dateEdit->setDisplayFormat(QApplication::translate("dialog_datetime", "M/d", 0, QApplication::UnicodeUTF8));
        btn_ok->setText(QApplication::translate("dialog_datetime", "OK", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("dialog_datetime", "Tid", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialog_datetime: public Ui_dialog_datetime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_DATETIME_H
