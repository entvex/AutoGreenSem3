/********************************************************************************
** Form generated from reading UI file 'systemconfiguration.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMCONFIGURATION_H
#define UI_SYSTEMCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SystemConfiguration
{
public:
    QPushButton *pushButton_Back;
    QPushButton *pushButton_Time;
    QPushButton *pushButton_Notefication;
    QPushButton *pushButton_E_mail;
    QPushButton *pushButton_Hardware;
    QLabel *label_MenuName;
    QLabel *label_Time;

    void setupUi(QDialog *SystemConfiguration)
    {
        if (SystemConfiguration->objectName().isEmpty())
            SystemConfiguration->setObjectName(QStringLiteral("SystemConfiguration"));
        SystemConfiguration->resize(480, 272);
        SystemConfiguration->setMinimumSize(QSize(480, 272));
        SystemConfiguration->setMaximumSize(QSize(480, 272));
        pushButton_Back = new QPushButton(SystemConfiguration);
        pushButton_Back->setObjectName(QStringLiteral("pushButton_Back"));
        pushButton_Back->setGeometry(QRect(10, 232, 51, 31));
        pushButton_Time = new QPushButton(SystemConfiguration);
        pushButton_Time->setObjectName(QStringLiteral("pushButton_Time"));
        pushButton_Time->setGeometry(QRect(70, 220, 271, 41));
        pushButton_Notefication = new QPushButton(SystemConfiguration);
        pushButton_Notefication->setObjectName(QStringLiteral("pushButton_Notefication"));
        pushButton_Notefication->setGeometry(QRect(70, 160, 271, 41));
        pushButton_E_mail = new QPushButton(SystemConfiguration);
        pushButton_E_mail->setObjectName(QStringLiteral("pushButton_E_mail"));
        pushButton_E_mail->setGeometry(QRect(70, 100, 271, 41));
        pushButton_Hardware = new QPushButton(SystemConfiguration);
        pushButton_Hardware->setObjectName(QStringLiteral("pushButton_Hardware"));
        pushButton_Hardware->setGeometry(QRect(70, 40, 271, 41));
        label_MenuName = new QLabel(SystemConfiguration);
        label_MenuName->setObjectName(QStringLiteral("label_MenuName"));
        label_MenuName->setGeometry(QRect(50, 10, 231, 16));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_MenuName->setFont(font);
        label_Time = new QLabel(SystemConfiguration);
        label_Time->setObjectName(QStringLiteral("label_Time"));
        label_Time->setGeometry(QRect(310, 10, 51, 20));
        label_Time->setFont(font);

        retranslateUi(SystemConfiguration);

        QMetaObject::connectSlotsByName(SystemConfiguration);
    } // setupUi

    void retranslateUi(QDialog *SystemConfiguration)
    {
        SystemConfiguration->setWindowTitle(QApplication::translate("SystemConfiguration", "Dialog", 0));
        pushButton_Back->setText(QApplication::translate("SystemConfiguration", "Tilbage", 0));
        pushButton_Time->setText(QApplication::translate("SystemConfiguration", "Indstil data/tid", 0));
        pushButton_Notefication->setText(QApplication::translate("SystemConfiguration", "Notifikationer", 0));
        pushButton_E_mail->setText(QApplication::translate("SystemConfiguration", "E-mail addresser", 0));
        pushButton_Hardware->setText(QApplication::translate("SystemConfiguration", "Hardware indstillinger", 0));
        label_MenuName->setText(QApplication::translate("SystemConfiguration", "                System Konfig", 0));
        label_Time->setText(QApplication::translate("SystemConfiguration", "Tid", 0));
    } // retranslateUi

};

namespace Ui {
    class SystemConfiguration: public Ui_SystemConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMCONFIGURATION_H
