#include "mainwindow.h"
#include "Indstillinger.hpp"
#include "ReferenceStruct.hpp"
#include <Regulator.h>
#include <pthread.h>

#include <QtGui/QApplication>



void* MonitorTrd(void *ptr)
{
    ReferenceStruct* ref = static_cast<ReferenceStruct*>(ptr);
    ref->monitor->compareData();
    return NULL;
}

void* SystemLogTrd(void *ptr)
{
    SystemLog* syslog = static_cast<SystemLog*>(ptr);
    syslog->checkMsg();
    return NULL;
}

void* RegulatorTrd(void *ptr)
{
    Regulator* regulator = static_cast<Regulator*>(ptr);
    regulator->run();
    return NULL;
}

int main(int argc, char *argv[])
{

    ReferenceStruct referenceStruct;

    MsgQueue mq(10);

    Indstillinger indstillinger;
    DataLog datalog;
    SystemLog systemlog(mq);
    UART uart(&mq);
    Monitor monitor(uart, datalog, indstillinger, mq);
    Regulator regulator(&uart,&indstillinger,&mq,&datalog);

    referenceStruct.indstillinger = &indstillinger;
    referenceStruct.dataLog = &datalog;
    referenceStruct.systemlog = &systemlog;
    referenceStruct.monitor = &monitor;

    QApplication app(argc, argv);

     // Start af monitor
    pthread_t montrd, systrd, regtrd;
    pthread_create(&montrd, NULL, &MonitorTrd, &referenceStruct);
    pthread_create(&systrd, NULL, &SystemLogTrd, &systemlog);
    pthread_create(&regtrd, NULL, &RegulatorTrd, &regulator);

    MainWindow mainWindow(referenceStruct);
    mainWindow.setOrientation(MainWindow::ScreenOrientationAuto);
    mainWindow.showExpanded();
    return app.exec();
}
