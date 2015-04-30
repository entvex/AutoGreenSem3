#include "dialog_datetime.h"
#include "ui_dialog_datetime.h"
#include "mainwindow.h"
#include "QTime"
#include "QDate"

dialog_datetime::dialog_datetime(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_datetime)
{
    ui->setupUi(this);

    //Set boxes to show current time.
    Date timenow;
    timenow = MainWindow::indstillinger.getDate();

    QTime time(timenow.Hour,timenow.Min);
    ui->timeEdit->setTime(time);

    QDate date(timenow.Year,timenow.Month,timenow.Day);
    ui->dateEdit->setDate(date);
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

    timeset.Day = ui->dateEdit->dateTime().date().day();
    timeset.Month = ui->dateEdit->dateTime().date().month();
    timeset.Year = ui->dateEdit->dateTime().date().month();

    //hardcode
    timeset.Min = 15;

    MainWindow::indstillinger.setDate(timeset);
    this->close();

}
