#include "dialoge_systemconfiguration.h"
#include "ui_dialoge_systemconfiguration.h"
#include "dialog_hardwaresettings.h"
#include "dialoge_mailconfig.h"
#include "dialog_noteifictions.h"
#include "dialog_datetime.h"
#include "ReferenceStruct.hpp"

dialoge_systemconfiguration::dialoge_systemconfiguration(ReferenceStruct refs, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialoge_systemconfiguration)
{
    ui->setupUi(this);
    refs_ = refs;
}

dialoge_systemconfiguration::~dialoge_systemconfiguration()
{
    delete ui;
}

void dialoge_systemconfiguration::on_btn_Hardware_clicked()
{
    dialog_hardwaresettings hardwaresettings(refs_);
    hardwaresettings.setModal(true);
    hardwaresettings.exec();
}

void dialoge_systemconfiguration::on_btn_E_mail_clicked()
{
    dialoge_mailconfig mailconfig(refs_);
    mailconfig.setModal(true);
    mailconfig.exec();
}

void dialoge_systemconfiguration::on_btn_Notefication_clicked()
{
    dialog_noteifictions noteifictions(refs_);
    noteifictions.setModal(true);
    noteifictions.exec();
}

void dialoge_systemconfiguration::on_btn_Time_clicked()
{
    dialog_datetime datetime(refs_);
    datetime.setModal(true);
    datetime.exec();
}

void dialoge_systemconfiguration::on_btn_Back_clicked()
{
    this->close();
}
