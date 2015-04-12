#include "systemconfiguration.h"
#include "ui_systemconfiguration.h"

SystemConfiguration::SystemConfiguration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SystemConfiguration)
{
    ui->setupUi(this);
}

SystemConfiguration::~SystemConfiguration()
{
    delete ui;
}
