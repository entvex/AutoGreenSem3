#include "dialog_administerdrivhus.h"
#include "ui_dialog_administerdrivhus.h"

Dialog_administerDrivhus::Dialog_administerDrivhus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_administerDrivhus)
{
    ui->setupUi(this);
}

Dialog_administerDrivhus::~Dialog_administerDrivhus()
{
    delete ui;
}
