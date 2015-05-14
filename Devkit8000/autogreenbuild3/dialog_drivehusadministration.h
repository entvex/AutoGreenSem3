#ifndef DIALOG_DRIVEHUSADMINISTRATION_H
#define DIALOG_DRIVEHUSADMINISTRATION_H


#include <QDialog>
#include "ReferenceStruct.hpp"

namespace Ui {
class Dialog_drivehusAdministration;
}

class Dialog_drivehusAdministration : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_drivehusAdministration(ReferenceStruct refs ,QWidget *parent = 0);
    ~Dialog_drivehusAdministration();

private slots:
    void on_btn_back_clicked();

    void on_btn_ok_clicked();

    void on_btn_up_clicked();

    void on_btn_down_clicked();

    void on_btn_up_2_clicked();

    void on_btn_down_2_clicked();

private:
    Ui::Dialog_drivehusAdministration *ui;

    ReferenceStruct refs_;
    Plant plant1;

};

#endif // DIALOG_DRIVEHUSADMINISTRATION_H
