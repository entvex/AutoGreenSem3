/********************************************************************************
** Form generated from reading UI file 'dialoge_systemconfiguration.ui'
**
** Created: Wed Apr 29 12:42:07 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGE_SYSTEMCONFIGURATION_H
#define UI_DIALOGE_SYSTEMCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dialoge_systemconfiguration
{
public:
    QPushButton *btn_E_mail;
    QPushButton *btn_Hardware;
    QLabel *label_MenuName;
    QPushButton *btn_Back;
    QPushButton *btn_Notefication;
    QPushButton *btn_Time;
    QLabel *label_Time;

    void setupUi(QDialog *dialoge_systemconfiguration)
    {
        if (dialoge_systemconfiguration->objectName().isEmpty())
            dialoge_systemconfiguration->setObjectName(QString::fromUtf8("dialoge_systemconfiguration"));
        dialoge_systemconfiguration->resize(480, 257);
        dialoge_systemconfiguration->setMaximumSize(QSize(480, 257));
        btn_E_mail = new QPushButton(dialoge_systemconfiguration);
        btn_E_mail->setObjectName(QString::fromUtf8("btn_E_mail"));
        btn_E_mail->setGeometry(QRect(100, 90, 271, 31));
        btn_Hardware = new QPushButton(dialoge_systemconfiguration);
        btn_Hardware->setObjectName(QString::fromUtf8("btn_Hardware"));
        btn_Hardware->setGeometry(QRect(100, 40, 271, 31));
        label_MenuName = new QLabel(dialoge_systemconfiguration);
        label_MenuName->setObjectName(QString::fromUtf8("label_MenuName"));
        label_MenuName->setGeometry(QRect(60, 10, 231, 16));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_MenuName->setFont(font);
        btn_Back = new QPushButton(dialoge_systemconfiguration);
        btn_Back->setObjectName(QString::fromUtf8("btn_Back"));
        btn_Back->setGeometry(QRect(40, 200, 51, 31));
        btn_Notefication = new QPushButton(dialoge_systemconfiguration);
        btn_Notefication->setObjectName(QString::fromUtf8("btn_Notefication"));
        btn_Notefication->setGeometry(QRect(100, 140, 271, 31));
        btn_Time = new QPushButton(dialoge_systemconfiguration);
        btn_Time->setObjectName(QString::fromUtf8("btn_Time"));
        btn_Time->setGeometry(QRect(100, 190, 271, 31));
        label_Time = new QLabel(dialoge_systemconfiguration);
        label_Time->setObjectName(QString::fromUtf8("label_Time"));
        label_Time->setGeometry(QRect(320, 10, 91, 20));
        label_Time->setFont(font);

        retranslateUi(dialoge_systemconfiguration);

        QMetaObject::connectSlotsByName(dialoge_systemconfiguration);
    } // setupUi

    void retranslateUi(QDialog *dialoge_systemconfiguration)
    {
        dialoge_systemconfiguration->setWindowTitle(QApplication::translate("dialoge_systemconfiguration", "Dialog", 0, QApplication::UnicodeUTF8));
        btn_E_mail->setText(QApplication::translate("dialoge_systemconfiguration", "E-mail addresser", 0, QApplication::UnicodeUTF8));
        btn_Hardware->setText(QApplication::translate("dialoge_systemconfiguration", "Hardware indstillinger", 0, QApplication::UnicodeUTF8));
        label_MenuName->setText(QApplication::translate("dialoge_systemconfiguration", "                System Konfig", 0, QApplication::UnicodeUTF8));
        btn_Back->setText(QApplication::translate("dialoge_systemconfiguration", "Tilbage", 0, QApplication::UnicodeUTF8));
        btn_Notefication->setText(QApplication::translate("dialoge_systemconfiguration", "Notifikationer", 0, QApplication::UnicodeUTF8));
        btn_Time->setText(QApplication::translate("dialoge_systemconfiguration", "Indstil data/tid", 0, QApplication::UnicodeUTF8));
        label_Time->setText(QApplication::translate("dialoge_systemconfiguration", "Vis ur her", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialoge_systemconfiguration: public Ui_dialoge_systemconfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGE_SYSTEMCONFIGURATION_H
