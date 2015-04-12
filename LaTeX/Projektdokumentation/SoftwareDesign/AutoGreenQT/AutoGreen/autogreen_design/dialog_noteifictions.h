#ifndef DIALOG_NOTEIFICTIONS_H
#define DIALOG_NOTEIFICTIONS_H

#include <QDialog>

namespace Ui {
class Dialog_Noteifictions;
}

class Dialog_Noteifictions : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_Noteifictions(QWidget *parent = 0);
    ~Dialog_Noteifictions();

private:
    Ui::Dialog_Noteifictions *ui;
};

#endif // DIALOG_NOTEIFICTIONS_H
