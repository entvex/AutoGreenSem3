#include "dialog_noteifictions.h"
#include "ui_dialog_noteifictions.h"

Dialog_Noteifictions::Dialog_Noteifictions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_Noteifictions)
{
    ui->setupUi(this);
}

Dialog_Noteifictions::~Dialog_Noteifictions()
{
    delete ui;
}
