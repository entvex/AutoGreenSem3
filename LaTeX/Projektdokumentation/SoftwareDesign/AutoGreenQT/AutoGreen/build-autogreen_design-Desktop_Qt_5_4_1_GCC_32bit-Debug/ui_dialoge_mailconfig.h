/********************************************************************************
** Form generated from reading UI file 'dialoge_mailconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGE_MAILCONFIG_H
#define UI_DIALOGE_MAILCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogE_mailConfig
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *DialogE_mailConfig)
    {
        if (DialogE_mailConfig->objectName().isEmpty())
            DialogE_mailConfig->setObjectName(QStringLiteral("DialogE_mailConfig"));
        DialogE_mailConfig->resize(480, 272);
        DialogE_mailConfig->setMinimumSize(QSize(480, 272));
        DialogE_mailConfig->setMaximumSize(QSize(480, 272));
        pushButton = new QPushButton(DialogE_mailConfig);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 240, 51, 23));

        retranslateUi(DialogE_mailConfig);

        QMetaObject::connectSlotsByName(DialogE_mailConfig);
    } // setupUi

    void retranslateUi(QDialog *DialogE_mailConfig)
    {
        DialogE_mailConfig->setWindowTitle(QApplication::translate("DialogE_mailConfig", "Dialog", 0));
        pushButton->setText(QApplication::translate("DialogE_mailConfig", "Tilbage", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogE_mailConfig: public Ui_DialogE_mailConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGE_MAILCONFIG_H
