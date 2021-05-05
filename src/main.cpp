#include "moplusplusmain.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MoPlusPlusMain w;
    w.show();
    return a.exec();
}
