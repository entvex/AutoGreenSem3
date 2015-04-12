#include "dialoge_mailconfig.h"
#include "ui_dialoge_mailconfig.h"

DialogE_mailConfig::DialogE_mailConfig(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogE_mailConfig)
{
    ui->setupUi(this);
}

DialogE_mailConfig::~DialogE_mailConfig()
{
    delete ui;
}
