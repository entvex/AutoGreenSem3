#include "dialoge_systemlog.h"
#include "ui_dialoge_systemlog.h"
#include "ReferenceStruct.hpp"

dialoge_systemlog::dialoge_systemlog(ReferenceStruct refs, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialoge_systemlog)
{
    ui->setupUi(this);
    refs_ = refs;

    QString text = QString::fromStdString(refs_.systemlog->printSystemLog());

    ui->textEdit->setText(text);
}

dialoge_systemlog::~dialoge_systemlog()
{
    delete ui;
}

void dialoge_systemlog::on_btn_back_clicked()
{
    this->close();
}
