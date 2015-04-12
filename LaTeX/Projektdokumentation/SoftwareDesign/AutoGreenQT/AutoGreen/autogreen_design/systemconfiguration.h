#ifndef SYSTEMCONFIGURATION_H
#define SYSTEMCONFIGURATION_H

#include <QDialog>

namespace Ui {
class SystemConfiguration;
}

class SystemConfiguration : public QDialog
{
    Q_OBJECT

public:
    explicit SystemConfiguration(QWidget *parent = 0);
    ~SystemConfiguration();

private:
    Ui::SystemConfiguration *ui;
};

#endif // SYSTEMCONFIGURATION_H
