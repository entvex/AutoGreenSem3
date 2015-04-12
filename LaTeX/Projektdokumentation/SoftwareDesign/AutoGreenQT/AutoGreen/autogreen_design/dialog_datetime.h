#ifndef DIALOG_DATETIME_H
#define DIALOG_DATETIME_H

#include <QDialog>

namespace Ui {
class Dialog_DateTime;
}

class Dialog_DateTime : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_DateTime(QWidget *parent = 0);
    ~Dialog_DateTime();

private:
    Ui::Dialog_DateTime *ui;
};

#endif // DIALOG_DATETIME_H
