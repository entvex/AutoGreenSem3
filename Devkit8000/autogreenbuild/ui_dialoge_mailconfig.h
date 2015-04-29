/********************************************************************************
** Form generated from reading UI file 'dialoge_mailconfig.ui'
**
** Created: Wed Apr 29 12:16:38 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGE_MAILCONFIG_H
#define UI_DIALOGE_MAILCONFIG_H

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

class Ui_dialoge_mailconfig
{
public:
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLabel *label_2;
    QPushButton *btn_back;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QPushButton *btn_ok;
    QLabel *label_3;

    void setupUi(QDialog *dialoge_mailconfig)
    {
        if (dialoge_mailconfig->objectName().isEmpty())
            dialoge_mailconfig->setObjectName(QString::fromUtf8("dialoge_mailconfig"));
        dialoge_mailconfig->resize(480, 257);
        dialoge_mailconfig->setMaximumSize(QSize(480, 257));
        lineEdit_3 = new QLineEdit(dialoge_mailconfig);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(120, 170, 191, 23));
        label_4 = new QLabel(dialoge_mailconfig);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 20, 231, 16));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_2 = new QLabel(dialoge_mailconfig);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 100, 56, 15));
        btn_back = new QPushButton(dialoge_mailconfig);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(40, 230, 51, 23));
        lineEdit = new QLineEdit(dialoge_mailconfig);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 70, 191, 23));
        lineEdit_2 = new QLineEdit(dialoge_mailconfig);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 120, 191, 23));
        label = new QLabel(dialoge_mailconfig);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 50, 56, 15));
        btn_ok = new QPushButton(dialoge_mailconfig);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        btn_ok->setGeometry(QRect(350, 230, 61, 23));
        label_3 = new QLabel(dialoge_mailconfig);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 150, 56, 15));

        retranslateUi(dialoge_mailconfig);

        QMetaObject::connectSlotsByName(dialoge_mailconfig);
    } // setupUi

    void retranslateUi(QDialog *dialoge_mailconfig)
    {
        dialoge_mailconfig->setWindowTitle(QApplication::translate("dialoge_mailconfig", "Dialog", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("dialoge_mailconfig", "Email indstillinger", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("dialoge_mailconfig", "E-mail 2", 0, QApplication::UnicodeUTF8));
        btn_back->setText(QApplication::translate("dialoge_mailconfig", "Tilbage", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("dialoge_mailconfig", "E-mail 1", 0, QApplication::UnicodeUTF8));
        btn_ok->setText(QApplication::translate("dialoge_mailconfig", "OK", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("dialoge_mailconfig", "E-mail 3", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialoge_mailconfig: public Ui_dialoge_mailconfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGE_MAILCONFIG_H
