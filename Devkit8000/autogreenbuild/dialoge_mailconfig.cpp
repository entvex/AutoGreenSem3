#include "dialoge_mailconfig.h"
#include "ui_dialoge_mailconfig.h"

dialoge_mailconfig::dialoge_mailconfig(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialoge_mailconfig)
{
    ui->setupUi(this);
}

dialoge_mailconfig::~dialoge_mailconfig()
{
    delete ui;
}
