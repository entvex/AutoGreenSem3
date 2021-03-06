#include "dialoge_mailconfig.h"
#include "ui_dialoge_mailconfig.h"
#include "mainwindow.h"

string mail1;
string mail2;
string mail3;

dialoge_mailconfig::dialoge_mailconfig(ReferenceStruct refs, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialoge_mailconfig)
{
    refs_ = refs;
    ui->setupUi(this);

    refs_.indstillinger->GetEmails(mail1,mail2,mail3);
}

dialoge_mailconfig::~dialoge_mailconfig()
{
    delete ui;
}

void dialoge_mailconfig::on_btn_ok_clicked()
{
    refs_.indstillinger->SetEmails(mail1,mail2,mail3);
    this->close();
}

void dialoge_mailconfig::on_btn_back_clicked()
{
    this->close();
}
