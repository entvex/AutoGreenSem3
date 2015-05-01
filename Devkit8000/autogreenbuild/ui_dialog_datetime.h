/********************************************************************************
** Form generated from reading UI file 'dialog_datetime.ui'
**
** Created: Fri May 1 15:23:05 2015
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
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dialog_datetime
{
public:
    QLabel *label_3;
    QPushButton *btn_back;
    QPushButton *btn_ok;
    QLineEdit *lineEdit_year;
    QLineEdit *lineEdit_month;
    QLineEdit *lineEdit_day;
    QLineEdit *lineEdit_hour;
    QLineEdit *lineEdit_min;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

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
        btn_ok = new QPushButton(dialog_datetime);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        btn_ok->setGeometry(QRect(380, 200, 51, 23));
        lineEdit_year = new QLineEdit(dialog_datetime);
        lineEdit_year->setObjectName(QString::fromUtf8("lineEdit_year"));
        lineEdit_year->setGeometry(QRect(110, 120, 41, 23));
        lineEdit_month = new QLineEdit(dialog_datetime);
        lineEdit_month->setObjectName(QString::fromUtf8("lineEdit_month"));
        lineEdit_month->setGeometry(QRect(160, 120, 41, 23));
        lineEdit_day = new QLineEdit(dialog_datetime);
        lineEdit_day->setObjectName(QString::fromUtf8("lineEdit_day"));
        lineEdit_day->setGeometry(QRect(210, 120, 41, 23));
        lineEdit_hour = new QLineEdit(dialog_datetime);
        lineEdit_hour->setObjectName(QString::fromUtf8("lineEdit_hour"));
        lineEdit_hour->setGeometry(QRect(260, 120, 41, 23));
        lineEdit_min = new QLineEdit(dialog_datetime);
        lineEdit_min->setObjectName(QString::fromUtf8("lineEdit_min"));
        lineEdit_min->setGeometry(QRect(310, 120, 41, 23));
        label = new QLabel(dialog_datetime);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 100, 57, 15));
        label_2 = new QLabel(dialog_datetime);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 100, 57, 15));
        label_4 = new QLabel(dialog_datetime);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(220, 100, 57, 15));
        label_5 = new QLabel(dialog_datetime);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(260, 100, 57, 15));
        label_6 = new QLabel(dialog_datetime);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(310, 100, 57, 15));

        retranslateUi(dialog_datetime);

        QMetaObject::connectSlotsByName(dialog_datetime);
    } // setupUi

    void retranslateUi(QDialog *dialog_datetime)
    {
        dialog_datetime->setWindowTitle(QApplication::translate("dialog_datetime", "Dialog", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("dialog_datetime", "                Tids indstillinger", 0, QApplication::UnicodeUTF8));
        btn_back->setText(QApplication::translate("dialog_datetime", "Tilbage", 0, QApplication::UnicodeUTF8));
        btn_ok->setText(QApplication::translate("dialog_datetime", "OK", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("dialog_datetime", "\303\205r", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("dialog_datetime", "M\303\245ned", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("dialog_datetime", "Dag", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("dialog_datetime", "Timer", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("dialog_datetime", "Minutter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialog_datetime: public Ui_dialog_datetime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_DATETIME_H
