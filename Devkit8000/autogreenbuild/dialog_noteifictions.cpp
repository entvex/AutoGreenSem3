#include "dialog_noteifictions.h"
#include "ui_dialog_noteifictions.h"

dialog_noteifictions::dialog_noteifictions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_noteifictions)
{
    ui->setupUi(this);
}

dialog_noteifictions::~dialog_noteifictions()
{
    delete ui;
}
