#include "dialog_drivehusadministration.h"
#include "ui_dialog_drivehusadministration.h"
#include "ReferenceStruct.hpp"

Dialog_drivehusAdministration::Dialog_drivehusAdministration(ReferenceStruct refs ,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_drivehusAdministration)
{
    ui->setupUi(this);
    refs_ = refs;

    plant1 = refs_.indstillinger->Getplant(1);

    ui->lineEdit->setText( QString::number(plant1.temp));
}

Dialog_drivehusAdministration::~Dialog_drivehusAdministration()
{
    delete ui;
}

void Dialog_drivehusAdministration::on_btn_up_clicked()
{

    int inc = ui->lineEdit->text().toInt();
    inc++;
    ui->lineEdit->setText( QString::number(inc));
}

void Dialog_drivehusAdministration::on_btn_down_clicked()
{
    int dec = ui->lineEdit->text().toInt();
    dec--;
    ui->lineEdit->setText( QString::number(dec));
}

void Dialog_drivehusAdministration::on_btn_back_clicked()
{
    this->close();
}

void Dialog_drivehusAdministration::on_btn_ok_clicked()
{
    plant1.temp = ui->lineEdit->text().toInt();
    refs_.indstillinger->SetVirtualPlant(1,plant1);
    this->close();
}

void Dialog_drivehusAdministration::on_btn_up_2_clicked()
{

}

void Dialog_drivehusAdministration::on_btn_down_2_clicked()
{
}
