#ifndef DIALOGE_MAILCONFIG_H
#define DIALOGE_MAILCONFIG_H

#include <QDialog>

namespace Ui {
class DialogE_mailConfig;
}

class DialogE_mailConfig : public QDialog
{
    Q_OBJECT

public:
    explicit DialogE_mailConfig(QWidget *parent = 0);
    ~DialogE_mailConfig();

private:
    Ui::DialogE_mailConfig *ui;
};

#endif // DIALOGE_MAILCONFIG_H
