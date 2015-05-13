#ifndef DIALOGE_SYSTEMLOG_H
#define DIALOGE_SYSTEMLOG_H

#include <QDialog>
#include "ReferenceStruct.hpp"

namespace Ui {
class dialoge_systemlog;
}

class dialoge_systemlog : public QDialog
{
    Q_OBJECT

public:
    explicit dialoge_systemlog(ReferenceStruct refs , QWidget *parent = 0);
    ~dialoge_systemlog();

private slots:
    void on_btn_back_clicked();

private:
    Ui::dialoge_systemlog *ui;
    ReferenceStruct refs_;


};

#endif // DIALOGE_SYSTEMLOG_H
