/********************************************************************************
** Form generated from reading UI file 'dialog_noteifictions.ui'
**
** Created: Wed May 6 14:13:11 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_NOTEIFICTIONS_H
#define UI_DIALOG_NOTEIFICTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dialog_noteifictions
{
public:
    QPushButton *btn_daglig;
    QPushButton *btn_back;
    QLabel *label_3;
    QPushButton *btn_ok;
    QPushButton *btn_advarsels;

    void setupUi(QDialog *dialog_noteifictions)
    {
        if (dialog_noteifictions->objectName().isEmpty())
            dialog_noteifictions->setObjectName(QString::fromUtf8("dialog_noteifictions"));
        dialog_noteifictions->resize(480, 257);
        dialog_noteifictions->setMaximumSize(QSize(480, 257));
        btn_daglig = new QPushButton(dialog_noteifictions);
        btn_daglig->setObjectName(QString::fromUtf8("btn_daglig"));
        btn_daglig->setGeometry(QRect(80, 60, 291, 61));
        btn_daglig->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        btn_back = new QPushButton(dialog_noteifictions);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(40, 220, 51, 31));
        label_3 = new QLabel(dialog_noteifictions);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 0, 231, 16));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        btn_ok = new QPushButton(dialog_noteifictions);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        btn_ok->setGeometry(QRect(369, 220, 51, 31));
        btn_advarsels = new QPushButton(dialog_noteifictions);
        btn_advarsels->setObjectName(QString::fromUtf8("btn_advarsels"));
        btn_advarsels->setGeometry(QRect(80, 150, 291, 61));
        btn_advarsels->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));

        retranslateUi(dialog_noteifictions);

        QMetaObject::connectSlotsByName(dialog_noteifictions);
    } // setupUi

    void retranslateUi(QDialog *dialog_noteifictions)
    {
        dialog_noteifictions->setWindowTitle(QApplication::translate("dialog_noteifictions", "Dialog", 0, QApplication::UnicodeUTF8));
        btn_daglig->setText(QApplication::translate("dialog_noteifictions", "Daglig", 0, QApplication::UnicodeUTF8));
        btn_back->setText(QApplication::translate("dialog_noteifictions", "Tilbage", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("dialog_noteifictions", "Notefiktions indstillinger", 0, QApplication::UnicodeUTF8));
        btn_ok->setText(QApplication::translate("dialog_noteifictions", "OK", 0, QApplication::UnicodeUTF8));
        btn_advarsels->setText(QApplication::translate("dialog_noteifictions", "Advarsels", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialog_noteifictions: public Ui_dialog_noteifictions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_NOTEIFICTIONS_H
