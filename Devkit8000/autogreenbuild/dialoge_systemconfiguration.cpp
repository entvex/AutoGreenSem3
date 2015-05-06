#include "dialoge_systemconfiguration.h"
#include "ui_dialoge_systemconfiguration.h"
#include "dialog_hardwaresettings.h"
#include "dialoge_mailconfig.h"
#include "dialog_noteifictions.h"
#include "dialog_datetime.h"
#include "lala.hpp"

dialoge_systemconfiguration::dialoge_systemconfiguration(dump d,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialoge_systemconfiguration)
{
    ui->setupUi(this);
    d_ = d;
}

dialoge_systemconfiguration::~dialoge_systemconfiguration()
{
    delete ui;
}

void dialoge_systemconfiguration::on_btn_Hardware_clicked()
{
    dialog_hardwaresettings hardwaresettings(d_);
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
    dialog_datetime datetime(d_);
    datetime.setModal(true);
    datetime.exec();
}

void dialoge_systemconfiguration::on_btn_Back_clicked()
{
    this->close();
}
