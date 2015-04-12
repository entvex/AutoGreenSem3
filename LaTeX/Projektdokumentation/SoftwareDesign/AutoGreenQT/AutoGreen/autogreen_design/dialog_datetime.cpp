#include "dialog_datetime.h"
#include "ui_dialog_datetime.h"

Dialog_DateTime::Dialog_DateTime(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_DateTime)
{
    ui->setupUi(this);
}

Dialog_DateTime::~Dialog_DateTime()
{
    delete ui;
}
