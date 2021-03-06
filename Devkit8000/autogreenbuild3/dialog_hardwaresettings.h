#ifndef DIALOG_HARDWARESETTINGS_H
#define DIALOG_HARDWARESETTINGS_H

#include <QDialog>
#include "ReferenceStruct.hpp"

namespace Ui {
class dialog_hardwaresettings;
}

class dialog_hardwaresettings : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_hardwaresettings(ReferenceStruct refs, QWidget *parent = 0);
    ~dialog_hardwaresettings();

private slots:
    void on_btn_back_clicked();

    void on_btn_varme_clicked();

    void on_btn_ok_clicked();

    void on_btn_bloeser_clicked();

private:
    Ui::dialog_hardwaresettings *ui;

    ReferenceStruct refs_;
};

#endif // DIALOG_HARDWARESETTINGS_H
