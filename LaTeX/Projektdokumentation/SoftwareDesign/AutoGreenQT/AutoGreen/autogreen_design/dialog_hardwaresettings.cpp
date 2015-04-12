#include "dialog_hardwaresettings.h"
#include "ui_dialog_hardwaresettings.h"

Dialog_HardwareSettings::Dialog_HardwareSettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_HardwareSettings)
{
    ui->setupUi(this);
}

Dialog_HardwareSettings::~Dialog_HardwareSettings()
{
    delete ui;
}
