#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include "Indstillinger.hpp"
#include "Date.hpp"
#include "DataLog.hpp"

static Indstillinger indstillinger;
static DataLog datalog;

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    enum ScreenOrientation {
        ScreenOrientationLockPortrait,
        ScreenOrientationLockLandscape,
        ScreenOrientationAuto
    };

    explicit MainWindow(QWidget *parent = 0);
    virtual ~MainWindow();

    // Note that this will only have an effect on Symbian and Fremantle.
    void setOrientation(ScreenOrientation orientation);

    void showExpanded();

private slots:

    void on_btn_konfig_clicked();

    void on_btn_history_clicked();

    void on_btn_systemlog_clicked();

    void on_btn_monitor_clicked();

    void on_btn_reguler_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_
