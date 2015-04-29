#include "dialog_historik.h"
#include "ui_dialog_historik.h"

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
