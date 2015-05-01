#include "dialoge_systemconfiguration.h"
#include "ui_dialoge_systemconfiguration.h"
#include "dialog_hardwaresettings.h"
#include "dialoge_mailconfig.h"
#include "dialog_noteifictions.h"
#include "dialog_datetime.h"


dialoge_systemconfiguration::dialoge_systemconfiguration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialoge_systemconfiguration)
{
    ui->setupUi(this);
}

dialoge_systemconfiguration::~dialoge_systemconfiguration()
{
    delete ui;
}

void dialoge_systemconfiguration::on_btn_Hardware_clicked()
{
    dialog_hardwaresettings hardwaresettings;
    hardwaresettings.setModal(true);
    hardwaresettings.exec();
}

void dialoge_systemconfiguration::on_btn_E_mail_clicked()
{
    dialoge_mailconfig mailconfig;
    mailconfig.setModal(true);
    mailconfig.exec();
}

void dialoge_systemconfiguration::on_btn_Notefication_clicked()
{
    dialog_noteifictions noteifictions;
    noteifictions.setModal(true);
    noteifictions.exec();
}

void dialoge_systemconfiguration::on_btn_Time_clicked()
{
    dialog_datetime datetime;
    datetime.setModal(true);
    datetime.exec();
}

void dialoge_systemconfiguration::on_btn_Back_clicked()
{
    this->close();
}
