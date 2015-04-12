#ifndef DIALOG_HARDWARESETTINGS_H
#define DIALOG_HARDWARESETTINGS_H

#include <QDialog>

namespace Ui {
class Dialog_HardwareSettings;
}

class Dialog_HardwareSettings : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_HardwareSettings(QWidget *parent = 0);
    ~Dialog_HardwareSettings();

private:
    Ui::Dialog_HardwareSettings *ui;
};

#endif // DIALOG_HARDWARESETTINGS_H
