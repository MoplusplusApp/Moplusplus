#include <iostream>
#include "Moppwindow.h"

#include <QApplication>
#include <QString>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle(QString("Mo++ Editor"));
    w.show();
    return a.exec();
}
