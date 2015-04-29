#ifndef DIALOG_HARDWARESETTINGS_H
#define DIALOG_HARDWARESETTINGS_H

#include <QDialog>

namespace Ui {
class dialog_hardwaresettings;
}

class dialog_hardwaresettings : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_hardwaresettings(QWidget *parent = 0);
    ~dialog_hardwaresettings();

private:
    Ui::dialog_hardwaresettings *ui;
};

#endif // DIALOG_HARDWARESETTINGS_H
