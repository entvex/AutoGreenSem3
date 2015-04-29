#include "dialog_hardwaresettings.h"
#include "ui_dialog_hardwaresettings.h"

dialog_hardwaresettings::dialog_hardwaresettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_hardwaresettings)
{
    ui->setupUi(this);
}

dialog_hardwaresettings::~dialog_hardwaresettings()
{
    delete ui;
}
