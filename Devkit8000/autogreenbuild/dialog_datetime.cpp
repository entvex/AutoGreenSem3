#include "dialog_datetime.h"
#include "ui_dialog_datetime.h"

dialog_datetime::dialog_datetime(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_datetime)
{
    ui->setupUi(this);
}

dialog_datetime::~dialog_datetime()
{
    delete ui;
}
