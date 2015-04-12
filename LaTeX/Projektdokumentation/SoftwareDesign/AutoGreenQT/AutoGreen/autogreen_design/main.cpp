#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    //TODO make autogreen happen.

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
