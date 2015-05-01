#include "dialog_noteifictions.h"
#include "ui_dialog_noteifictions.h"
#include "mainwindow.h"

    bool daliy = false;
    bool Warning = false;

dialog_noteifictions::dialog_noteifictions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_noteifictions)
{
    ui->setupUi(this);

    indstillinger.GetNotifications(daliy,Warning);

    if( daliy  )
    {
        //Green
        ui->btn_daglig->setStyleSheet("background-color: rgb(0, 255, 0)");
    } else
    {
        //Red
        ui->btn_daglig->setStyleSheet("background-color: rgb(255, 0, 0)");
    }

    if( Warning  )
    {
        //Green
        ui->btn_advarsels->setStyleSheet("background-color: rgb(0, 255, 0)");
    } else
    {
        //Red
        ui->btn_advarsels->setStyleSheet("background-color: rgb(255, 0, 0)");
    }

}

dialog_noteifictions::~dialog_noteifictions()
{
    delete ui;
}

void dialog_noteifictions::on_btn_back_clicked()
{
    this->close();
}

void dialog_noteifictions::on_btn_daglig_clicked()
{
    if( daliy  ) //Toggle
    {
        daliy = false;
        //Red
        ui->btn_daglig->setStyleSheet("background-color: rgb(255, 0, 0)");

    } else
    {
        daliy = true;
        //Green
        ui->btn_daglig->setStyleSheet("background-color: rgb(0, 255, 0)");
    }
}

void dialog_noteifictions::on_btn_advarsels_clicked()
{

    if( Warning  ) //Toggle
    {
        Warning = false;
        //Red
        ui->btn_advarsels->setStyleSheet("background-color: rgb(255, 0, 0)");

    } else
    {
        Warning = true;
        //Green
        ui->btn_advarsels->setStyleSheet("background-color: rgb(0, 255, 0)");
    }
}

void dialog_noteifictions::on_btn_ok_clicked()
{
    indstillinger.SetNotifications(daliy,Warning);
    this->close();
}
