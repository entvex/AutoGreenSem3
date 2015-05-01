#include "dialog_hardwaresettings.h"
#include "ui_dialog_hardwaresettings.h"
#include "mainwindow.h"

bool bloeserne = false;
bool varmelegeme = false;

dialog_hardwaresettings::dialog_hardwaresettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_hardwaresettings)
{
    ui->setupUi(this);

    indstillinger.GetHardware(varmelegeme,bloeserne);

    if( bloeserne  )
    {
        //Green
        ui->btn_bloeser->setStyleSheet("background-color: rgb(0, 255, 0)");
    } else
    {
        //Red
        ui->btn_bloeser->setStyleSheet("background-color: rgb(255, 0, 0)");
    }

    if( varmelegeme  )
    {
        //Green
        ui->btn_varme->setStyleSheet("background-color: rgb(0, 255, 0)");
    } else
    {
        //Red
        ui->btn_varme->setStyleSheet("background-color: rgb(255, 0, 0)");
    }

}

dialog_hardwaresettings::~dialog_hardwaresettings()
{
    delete ui;
}

void dialog_hardwaresettings::on_btn_back_clicked()
{
    this->close();
}

void dialog_hardwaresettings::on_btn_varme_clicked()
{
    if( varmelegeme  ) //Toggle
    {
        varmelegeme = false;
        //Red
        ui->btn_varme->setStyleSheet("background-color: rgb(255, 0, 0)");

    } else
    {
        varmelegeme = true;
        //Green
        ui->btn_varme->setStyleSheet("background-color: rgb(0, 255, 0)");
    }
}

void dialog_hardwaresettings::on_btn_bloeser_clicked()
{

    if( bloeserne  ) // Toggle
    {
        bloeserne = false;
        //Red
        ui->btn_bloeser->setStyleSheet("background-color: rgb(255, 0, 0)");

    } else
    {
        bloeserne = true;
        //Green
        ui->btn_bloeser->setStyleSheet("background-color: rgb(0, 255, 0)");
    }

}

void dialog_hardwaresettings::on_btn_ok_clicked()
{
    indstillinger.SetHardware(varmelegeme,bloeserne);
    this->close();
}
