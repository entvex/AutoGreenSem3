#include "mainwindow.h"
#include "Indstillinger.hpp"
#include "ReferenceStruct.hpp"
#include <Regulator.h>
#include <pthread.h>

#include <QtGui/QApplication>



//----------MonitorAndRegTrd0----------
void* MonitorAndRegTrd(void *ptr)
{
    while(1)
    {

    ReferenceStruct* ref = static_cast<ReferenceStruct*>(ptr);
    ref->monitor->compareData();
    ref->regulator->run();
    }
    return NULL;
}
//----------MonitorAndRegTrd1----------


void* SystemLogTrd(void *ptr)
{
    SystemLog* syslog = static_cast<SystemLog*>(ptr);
    syslog->checkMsg();
    return NULL;
}

//void* RegulatorTrd(void *ptr)
//{
//    Regulator* regulator = static_cast<Regulator*>(ptr);
//    regulator->run();
//    return NULL;
//}

int main(int argc, char *argv[])
{

    ReferenceStruct referenceStruct;

    MsgQueue mq(10);

    Plant standardPlante;
    standardPlante.hum = 5;
    standardPlante.light = 5;
    standardPlante.name = "Tomat";
    standardPlante.temp = 25;
    standardPlante.water = 5;

    Indstillinger indstillinger;
    //Setup af virtualle planter
    indstillinger.SetVirtualPlant(1,standardPlante);
    indstillinger.SetVirtualPlant(2,standardPlante);
    indstillinger.SetVirtualPlant(3,standardPlante);
    indstillinger.SetVirtualPlant(4,standardPlante);
    indstillinger.SetVirtualPlant(5,standardPlante);
    indstillinger.SetVirtualPlant(6,standardPlante);

    DataLog datalog;
    SystemLog systemlog(mq);
    UART uart(&mq);
    Monitor monitor(uart, datalog, indstillinger, mq);
    Regulator regulator(&uart,&indstillinger,&mq,&datalog);

    referenceStruct.indstillinger = &indstillinger;
    referenceStruct.dataLog = &datalog;
    referenceStruct.systemlog = &systemlog;
    referenceStruct.monitor = &monitor;
    referenceStruct.regulator = &regulator;

    QApplication app(argc, argv);

//----------pthread_create0----------

     // Start af tråede
    pthread_t monAndRegtrd, systrd;
    pthread_create(&monAndRegtrd, NULL, &MonitorAndRegTrd, &referenceStruct);
    pthread_create(&systrd, NULL, &SystemLogTrd, &systemlog);

//----------pthread_create1----------

    MainWindow mainWindow(referenceStruct);
    mainWindow.setOrientation(MainWindow::ScreenOrientationAuto);
    mainWindow.showExpanded();
    return app.exec();
}
