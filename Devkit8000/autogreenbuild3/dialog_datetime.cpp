#include "dialog_datetime.h"
#include "ui_dialog_datetime.h"
#include "mainwindow.h"
#include "QTime"
#include "QDate"

dialog_datetime::dialog_datetime(ReferenceStruct refs,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_datetime)
{
    ui->setupUi(this);

    refs_ = refs;

    //Set boxes to show current time.
    Date timenow;
    timenow = refs_.indstillinger->getDate();
    ui->lineEdit_year->setText(QString::number(timenow.Year));
    ui->lineEdit_month->setText(QString::number(timenow.Month));
    ui->lineEdit_day->setText(QString::number(timenow.Day));
    ui->lineEdit_hour->setText(QString::number(timenow.Hour));
    ui->lineEdit_min->setText(QString::number(timenow.Min));
}

dialog_datetime::~dialog_datetime()
{
    delete ui;
}

void dialog_datetime::on_btn_back_clicked()
{
    this->close();
}

void dialog_datetime::on_btn_ok_clicked()
{
    Date timeset;

    timeset.Year = ui->lineEdit_year->text().toInt();
    timeset.Month = ui->lineEdit_month->text().toInt();
    timeset.Day = ui->lineEdit_day->text().toInt();
    timeset.Hour = ui->lineEdit_hour->text().toInt();
    timeset.Min = ui->lineEdit_min->text().toInt();

    refs_.indstillinger->setDate(timeset);
    this->close();
}
