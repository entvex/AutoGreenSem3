#include "dialog_historik.h"
#include "ui_dialog_historik.h"
#include "mainwindow.h"

dialog_historik::dialog_historik(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_historik)
{
    ui->setupUi(this);
}

dialog_historik::~dialog_historik()
{
    delete ui;
}

void dialog_historik::on_btn_back_clicked()
{
    this->close();
}

void dialog_historik::on_btn_newData_clicked()
{

    SensorData ost;
    ost.temp = 43;

    datalog.InsertSensorData(ost);

    SensorData newData = datalog.GetNewestData();

    ui->textEdit->setText("Tempratur: " + QString::number(newData.temp));


}
