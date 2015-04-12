#include "dialog_historik.h"
#include "ui_dialog_historik.h"

Dialog_Historik::Dialog_Historik(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_Historik)
{
    ui->setupUi(this);
}

Dialog_Historik::~Dialog_Historik()
{
    delete ui;
}
