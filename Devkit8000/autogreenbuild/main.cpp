#include "mainwindow.h"
#include "Indstillinger.hpp"
#include "lala.hpp"
#include <pthread.h>

#include <QtGui/QApplication>

static Indstillinger ind;
static Monitor mon;


void* MonitorTrd(void *ptr)
{
    mon.compareData();
    return NULL;
}

int main(int argc, char *argv[])
{

    dump d;

    Indstillinger in;

    d.ind_ = &in;

    QApplication app(argc, argv);

        // Start af monitor
    pthread_t thread;
    pthread_create(&thread, NULL, &MonitorTrd, NULL);

    MainWindow mainWindow(d);
    mainWindow.setOrientation(MainWindow::ScreenOrientationAuto);
    mainWindow.showExpanded();
    return app.exec();
}
