#ifndef DIALOG_NOTEIFICTIONS_H
#define DIALOG_NOTEIFICTIONS_H

#include "ReferenceStruct.hpp"
#include <QDialog>

namespace Ui {
class dialog_noteifictions;
}

class dialog_noteifictions : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_noteifictions(ReferenceStruct refs, QWidget *parent = 0);
    ~dialog_noteifictions();

private slots:
    void on_btn_back_clicked();

    void on_btn_daglig_clicked();

    void on_btn_advarsels_clicked();

    void on_btn_ok_clicked();

private:
    Ui::dialog_noteifictions *ui;

    ReferenceStruct refs_;
};

#endif // DIALOG_NOTEIFICTIONS_H
