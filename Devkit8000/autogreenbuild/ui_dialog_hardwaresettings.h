/********************************************************************************
** Form generated from reading UI file 'dialog_hardwaresettings.ui'
**
** Created: Wed Apr 29 12:05:15 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_HARDWARESETTINGS_H
#define UI_DIALOG_HARDWARESETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dialog_hardwaresettings
{
public:
    QLabel *label_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton;

    void setupUi(QDialog *dialog_hardwaresettings)
    {
        if (dialog_hardwaresettings->objectName().isEmpty())
            dialog_hardwaresettings->setObjectName(QString::fromUtf8("dialog_hardwaresettings"));
        dialog_hardwaresettings->resize(480, 257);
        dialog_hardwaresettings->setMaximumSize(QSize(480, 257));
        label_3 = new QLabel(dialog_hardwaresettings);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 8, 231, 16));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        pushButton_3 = new QPushButton(dialog_hardwaresettings);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(110, 48, 261, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        pushButton_2 = new QPushButton(dialog_hardwaresettings);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 218, 61, 31));
        pushButton_4 = new QPushButton(dialog_hardwaresettings);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(110, 128, 261, 61));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        pushButton = new QPushButton(dialog_hardwaresettings);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 220, 61, 31));

        retranslateUi(dialog_hardwaresettings);

        QMetaObject::connectSlotsByName(dialog_hardwaresettings);
    } // setupUi

    void retranslateUi(QDialog *dialog_hardwaresettings)
    {
        dialog_hardwaresettings->setWindowTitle(QApplication::translate("dialog_hardwaresettings", "Dialog", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("dialog_hardwaresettings", "Hardware indstillinger", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("dialog_hardwaresettings", "VarmeLegme", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("dialog_hardwaresettings", "OK", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("dialog_hardwaresettings", "Bl\303\246serne", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("dialog_hardwaresettings", "Tilbage", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialog_hardwaresettings: public Ui_dialog_hardwaresettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_HARDWARESETTINGS_H
