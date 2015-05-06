#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Indstillinger.hpp"
#include "Date.hpp"
#include "DataLog.hpp"
#include "SystemLog.hpp"
#include "MsgQueue.hpp"
#include "Message.hpp"
#include "UART.h"
#include "Monitor.hpp"
#include "ReferenceStruct.hpp"
#include <QtGui/QMainWindow>

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

    explicit MainWindow(ReferenceStruct refs, QWidget *parent = 0);
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
    ReferenceStruct refs_;

};

#endif // MAINWINDOW_
