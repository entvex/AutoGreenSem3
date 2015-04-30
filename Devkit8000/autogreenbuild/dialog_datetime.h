#ifndef DIALOG_DATETIME_H
#define DIALOG_DATETIME_H

#include <QDialog>

namespace Ui {
class dialog_datetime;
}

class dialog_datetime : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_datetime(QWidget *parent = 0);
    ~dialog_datetime();

private slots:

    void on_btn_back_clicked();

    void on_btn_ok_clicked();

private:
    Ui::dialog_datetime *ui;
};

#endif // DIALOG_DATETIME_H
