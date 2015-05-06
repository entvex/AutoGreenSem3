/********************************************************************************
** Form generated from reading UI file 'dialog_historik.ui'
**
** Created: Wed May 6 14:13:11 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_HISTORIK_H
#define UI_DIALOG_HISTORIK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_dialog_historik
{
public:
    QTextEdit *textEdit;
    QLabel *label_3;
    QCheckBox *checkBox_5;
    QPushButton *btn_back;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_3;
    QPushButton *btn_newData;

    void setupUi(QDialog *dialog_historik)
    {
        if (dialog_historik->objectName().isEmpty())
            dialog_historik->setObjectName(QString::fromUtf8("dialog_historik"));
        dialog_historik->resize(480, 257);
        dialog_historik->setMaximumSize(QSize(480, 257));
        textEdit = new QTextEdit(dialog_historik);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(80, 40, 311, 151));
        label_3 = new QLabel(dialog_historik);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(180, 10, 81, 16));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        checkBox_5 = new QCheckBox(dialog_historik);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(180, 220, 81, 21));
        btn_back = new QPushButton(dialog_historik);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(30, 210, 51, 23));
        checkBox = new QCheckBox(dialog_historik);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(100, 190, 81, 21));
        checkBox_2 = new QCheckBox(dialog_historik);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(140, 190, 81, 21));
        checkBox_6 = new QCheckBox(dialog_historik);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setGeometry(QRect(140, 220, 81, 21));
        checkBox_9 = new QCheckBox(dialog_historik);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));
        checkBox_9->setGeometry(QRect(340, 200, 81, 21));
        checkBox_4 = new QCheckBox(dialog_historik);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(100, 220, 81, 21));
        checkBox_7 = new QCheckBox(dialog_historik);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setGeometry(QRect(230, 200, 81, 21));
        checkBox_8 = new QCheckBox(dialog_historik);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));
        checkBox_8->setGeometry(QRect(290, 200, 81, 21));
        checkBox_3 = new QCheckBox(dialog_historik);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(180, 190, 81, 21));
        btn_newData = new QPushButton(dialog_historik);
        btn_newData->setObjectName(QString::fromUtf8("btn_newData"));
        btn_newData->setGeometry(QRect(410, 120, 51, 23));

        retranslateUi(dialog_historik);

        QMetaObject::connectSlotsByName(dialog_historik);
    } // setupUi

    void retranslateUi(QDialog *dialog_historik)
    {
        dialog_historik->setWindowTitle(QApplication::translate("dialog_historik", "Dialog", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("dialog_historik", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">GRAF</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("dialog_historik", "Historik", 0, QApplication::UnicodeUTF8));
        checkBox_5->setText(QApplication::translate("dialog_historik", "p3", 0, QApplication::UnicodeUTF8));
        btn_back->setText(QApplication::translate("dialog_historik", "Tilbage", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("dialog_historik", "p1", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("dialog_historik", "p2", 0, QApplication::UnicodeUTF8));
        checkBox_6->setText(QApplication::translate("dialog_historik", "p2", 0, QApplication::UnicodeUTF8));
        checkBox_9->setText(QApplication::translate("dialog_historik", "Fugt", 0, QApplication::UnicodeUTF8));
        checkBox_4->setText(QApplication::translate("dialog_historik", "p1", 0, QApplication::UnicodeUTF8));
        checkBox_7->setText(QApplication::translate("dialog_historik", "Temp", 0, QApplication::UnicodeUTF8));
        checkBox_8->setText(QApplication::translate("dialog_historik", "Lys", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("dialog_historik", "p3", 0, QApplication::UnicodeUTF8));
        btn_newData->setText(QApplication::translate("dialog_historik", "Dump", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialog_historik: public Ui_dialog_historik {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_HISTORIK_H
