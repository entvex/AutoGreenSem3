#include "dialoge_systemlog.h"
#include "ui_dialoge_systemlog.h"

dialoge_systemlog::dialoge_systemlog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialoge_systemlog)
{
    ui->setupUi(this);
}

dialoge_systemlog::~dialoge_systemlog()
{
    delete ui;
}
