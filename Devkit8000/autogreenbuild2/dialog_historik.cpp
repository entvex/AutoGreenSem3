#include "dialog_historik.h"
#include "ui_dialog_historik.h"
#include "mainwindow.h"

dialog_historik::dialog_historik(ReferenceStruct refs,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_historik)
{
    ref_ = refs;
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
    SensorData newData = ref_.dataLog->GetNewestData();
    QString text = "Temp: ";
    text.append( QString::number(newData.temp) );

    ui->textEdit->setText(text);
}
