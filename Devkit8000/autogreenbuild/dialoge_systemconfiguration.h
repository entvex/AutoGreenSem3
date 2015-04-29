#ifndef DIALOGE_SYSTEMCONFIGURATION_H
#define DIALOGE_SYSTEMCONFIGURATION_H

#include <QDialog>

namespace Ui {
class dialoge_systemconfiguration;
}

class dialoge_systemconfiguration : public QDialog
{
    Q_OBJECT

public:
    explicit dialoge_systemconfiguration(QWidget *parent = 0);
    ~dialoge_systemconfiguration();

private slots:
    void on_btn_Hardware_clicked();

    void on_btn_E_mail_clicked();

    void on_btn_Notefication_clicked();

    void on_btn_Time_clicked();

private:
    Ui::dialoge_systemconfiguration *ui;
};

#endif // DIALOGE_SYSTEMCONFIGURATION_H
