#ifndef DIALOGE_MAILCONFIG_H
#define DIALOGE_MAILCONFIG_H

#include "ReferenceStruct.hpp"
#include <QDialog>

namespace Ui {
class dialoge_mailconfig;
}

class dialoge_mailconfig : public QDialog
{
    Q_OBJECT

public:
    explicit dialoge_mailconfig(ReferenceStruct refs,QWidget *parent = 0);
    ~dialoge_mailconfig();

private slots:
    void on_btn_ok_clicked();

    void on_btn_back_clicked();

private:
    Ui::dialoge_mailconfig *ui;

    ReferenceStruct refs_;
};

#endif // DIALOGE_MAILCONFIG_H
