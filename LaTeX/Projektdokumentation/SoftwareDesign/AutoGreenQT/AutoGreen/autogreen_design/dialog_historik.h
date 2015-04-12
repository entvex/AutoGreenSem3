#ifndef DIALOG_HISTORIK_H
#define DIALOG_HISTORIK_H

#include <QDialog>

namespace Ui {
class Dialog_Historik;
}

class Dialog_Historik : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_Historik(QWidget *parent = 0);
    ~Dialog_Historik();

private:
    Ui::Dialog_Historik *ui;
};

#endif // DIALOG_HISTORIK_H
