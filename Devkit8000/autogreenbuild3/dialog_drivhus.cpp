#include "dialog_drivhus.h"
#include "ui_dialog_drivhus.h"
#include "ReferenceStruct.hpp"

Dialog_drivhus::Dialog_drivhus(ReferenceStruct refs,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_drivhus)
{
    ui->setupUi(this);
    refs_ = refs;
    Plant plant = refs_.indstillinger->Getplant(1);

    ui->textEdit->setText(QString::number(plant.temp));
}

Dialog_drivhus::~Dialog_drivhus()
{
    delete ui;
}

void Dialog_drivhus::on_btn_back_clicked()
{
    this->close();
}

void Dialog_drivhus::on_btn_up_clicked()
{
    int inc = ui->textEdit->toPlainText().toInt();
    inc++;
    ui->textEdit->setText(QString::number(inc));
}

void Dialog_drivhus::on_btn_ned_clicked()
{
    int dec = ui->textEdit->toPlainText().toInt();
    dec--;
    ui->textEdit->setText(QString::number(dec));
}

void Dialog_drivhus::on_btn_ok_clicked()
{
    Plant plant;
    plant.temp = ui->textEdit->toPlainText().toInt();
    refs_.indstillinger->SetVirtualPlant(1,plant);
    this->close();
}
