#ifndef DIALOG_ADMINISTERDRIVHUS_H
#define DIALOG_ADMINISTERDRIVHUS_H

#include <QDialog>

namespace Ui {
class Dialog_administerDrivhus;
}

class Dialog_administerDrivhus : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_administerDrivhus(QWidget *parent = 0);
    ~Dialog_administerDrivhus();

private:
    Ui::Dialog_administerDrivhus *ui;
};

#endif // DIALOG_ADMINISTERDRIVHUS_H
