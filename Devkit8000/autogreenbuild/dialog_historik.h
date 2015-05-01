#ifndef DIALOG_HISTORIK_H
#define DIALOG_HISTORIK_H

#include <QDialog>

namespace Ui {
class dialog_historik;
}

class dialog_historik : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_historik(QWidget *parent = 0);
    ~dialog_historik();

private slots:
    void on_btn_back_clicked();

    void on_btn_newData_clicked();

private:
    Ui::dialog_historik *ui;
};

#endif // DIALOG_HISTORIK_H
