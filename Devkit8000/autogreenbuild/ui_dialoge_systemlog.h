/********************************************************************************
** Form generated from reading UI file 'dialoge_systemlog.ui'
**
** Created: Wed Apr 29 13:48:35 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGE_SYSTEMLOG_H
#define UI_DIALOGE_SYSTEMLOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dialoge_systemlog
{
public:
    QPushButton *btn_back;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_3;

    void setupUi(QDialog *dialoge_systemlog)
    {
        if (dialoge_systemlog->objectName().isEmpty())
            dialoge_systemlog->setObjectName(QString::fromUtf8("dialoge_systemlog"));
        dialoge_systemlog->resize(480, 257);
        dialoge_systemlog->setMaximumSize(QSize(480, 257));
        btn_back = new QPushButton(dialoge_systemlog);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(10, 220, 81, 23));
        plainTextEdit = new QPlainTextEdit(dialoge_systemlog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(20, 40, 431, 171));
        label_3 = new QLabel(dialoge_systemlog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(180, 10, 111, 21));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        retranslateUi(dialoge_systemlog);

        QMetaObject::connectSlotsByName(dialoge_systemlog);
    } // setupUi

    void retranslateUi(QDialog *dialoge_systemlog)
    {
        dialoge_systemlog->setWindowTitle(QApplication::translate("dialoge_systemlog", "Dialog", 0, QApplication::UnicodeUTF8));
        btn_back->setText(QApplication::translate("dialoge_systemlog", "Back", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("dialoge_systemlog", "Systemlog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialoge_systemlog: public Ui_dialoge_systemlog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGE_SYSTEMLOG_H
