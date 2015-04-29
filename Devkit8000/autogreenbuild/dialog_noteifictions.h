#ifndef DIALOG_NOTEIFICTIONS_H
#define DIALOG_NOTEIFICTIONS_H

#include <QDialog>

namespace Ui {
class dialog_noteifictions;
}

class dialog_noteifictions : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_noteifictions(QWidget *parent = 0);
    ~dialog_noteifictions();

private:
    Ui::dialog_noteifictions *ui;
};

#endif // DIALOG_NOTEIFICTIONS_H
