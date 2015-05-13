#ifndef DIALOG_DRIVHUS_H
#define DIALOG_DRIVHUS_H

#include "ReferenceStruct.hpp"
#include <QDialog>

namespace Ui {
class Dialog_drivhus;
}

class Dialog_drivhus : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_drivhus(ReferenceStruct refs, QWidget *parent = 0);
    ~Dialog_drivhus();

private slots:
    void on_btn_back_clicked();

    void on_btn_up_clicked();

    void on_btn_ned_clicked();

    void on_btn_ok_clicked();

private:
    Ui::Dialog_drivhus *ui;
    ReferenceStruct refs_;
};

#endif // DIALOG_DRIVHUS_H
