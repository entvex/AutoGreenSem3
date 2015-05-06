#include "mainwindow.h"
#include "Indstillinger.hpp"
#include "ReferenceStruct.hpp"
#include <pthread.h>

#include <QtGui/QApplication>



void* MonitorTrd(void *ptr)
{
    Monitor* monitor = static_cast<Monitor*>(ptr);
    monitor->compareData();
    return NULL;
}

int main(int argc, char *argv[])
{

    ReferenceStruct referenceStruct;

    MsgQueue mq(10);

    Indstillinger indstillinger;
    DataLog datalog;
    //SystemLog systemlog;
    UART uart;
    Monitor monitor(uart, datalog, indstillinger);

    referenceStruct.indstillinger = &indstillinger;
    referenceStruct.dataLog = &datalog;

    QApplication app(argc, argv);

        // Start af monitor
    pthread_t thread;
    pthread_create(&thread, NULL, &MonitorTrd, &monitor);

    MainWindow mainWindow(referenceStruct);
    mainWindow.setOrientation(MainWindow::ScreenOrientationAuto);
    mainWindow.showExpanded();
    return app.exec();
}
