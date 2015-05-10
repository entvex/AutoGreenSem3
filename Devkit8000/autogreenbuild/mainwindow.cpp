#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialoge_systemconfiguration.h"
#include "dialog_historik.h"
#include "dialoge_systemlog.h"
#include "ReferenceStruct.hpp"
#include <QtCore/QCoreApplication>


MainWindow::MainWindow(ReferenceStruct refs, QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    refs_ = refs;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setOrientation(ScreenOrientation orientation)
{
#if defined(Q_OS_SYMBIAN)
    // If the version of Qt on the device is < 4.7.2, that attribute won't work
    if (orientation != ScreenOrientationAuto) {
        const QStringList v = QString::fromAscii(qVersion()).split(QLatin1Char('.'));
        if (v.count() == 3 && (v.at(0).toInt() << 16 | v.at(1).toInt() << 8 | v.at(2).toInt()) < 0x040702) {
            qWarning("Screen orientation locking only supported with Qt 4.7.2 and above");
            return;
        }
    }
#endif // Q_OS_SYMBIAN

    Qt::WidgetAttribute attribute;
    switch (orientation) {
#if QT_VERSION < 0x040702
    // Qt < 4.7.2 does not yet have the Qt::WA_*Orientation attributes
    case ScreenOrientationLockPortrait:
        attribute = static_cast<Qt::WidgetAttribute>(128);
        break;
    case ScreenOrientationLockLandscape:
        attribute = static_cast<Qt::WidgetAttribute>(129);
        break;
    default:
    case ScreenOrientationAuto:
        attribute = static_cast<Qt::WidgetAttribute>(130);
        break;
#else // QT_VERSION < 0x040702
    case ScreenOrientationLockPortrait:
        attribute = Qt::WA_LockPortraitOrientation;
        break;
    case ScreenOrientationLockLandscape:
        attribute = Qt::WA_LockLandscapeOrientation;
        break;
    default:
    case ScreenOrientationAuto:
        attribute = Qt::WA_AutoOrientation;
        break;
#endif // QT_VERSION < 0x040702
    };
    setAttribute(attribute, true);
}

void MainWindow::showExpanded()
{
#ifdef Q_OS_SYMBIAN
    showFullScreen();
#elif defined(Q_WS_MAEMO_5)
    showMaximized();
#else
    show();
#endif
}

void MainWindow::on_btn_konfig_clicked()
{
    dialoge_systemconfiguration systemconfiguration(refs_);
    systemconfiguration.setModal(true);
    systemconfiguration.exec();

}

void MainWindow::on_btn_history_clicked()
{
    dialog_historik historik(refs_);
    historik.setModal(true);
    historik.exec();
}

void MainWindow::on_btn_systemlog_clicked()
{
    dialoge_systemlog systemlog(refs_);
    systemlog.setModal(true);
    systemlog.exec();
}

void MainWindow::on_btn_monitor_clicked()
{

    if( !refs_.indstillinger->getRegulering() )
    {
        if( refs_.indstillinger->getMonitorering()  ) //Toggle
        {
            //red
            ui->btn_monitor->setStyleSheet("background-color: rgb(255, 0, 0)");
            refs_.indstillinger->SetMonitorering(false);

        } else
        {
            //green
            ui->btn_monitor->setStyleSheet("background-color: rgb(0, 255, 0)");
            refs_.indstillinger->SetMonitorering(true);
        }
    }
    else
    {
        if( refs_.indstillinger->getMonitorering()  ) //Toggle
        {
            //red
            ui->btn_monitor->setStyleSheet("background-color: rgb(255, 0, 0)");
            ui->btn_reguler->setStyleSheet("background-color: rgb(255, 0, 0)");
            refs_.indstillinger->SetMonitorering(false);
            refs_.indstillinger->SetRegulering(false);

        }
    }
}

void MainWindow::on_btn_reguler_clicked()
{
    if( refs_.indstillinger->getMonitorering() )
    {
        if( refs_.indstillinger->getRegulering()  ) //Toggle
        {
            //red
            ui->btn_reguler->setStyleSheet("background-color: rgb(255, 0, 0)");
            refs_.indstillinger->SetRegulering(false);

        } else
        {
            //green
            ui->btn_reguler->setStyleSheet("background-color: rgb(0, 255, 0)");
            refs_.indstillinger->SetRegulering(true);
        }
    }
}
