#include "moplusplusmain.h"

#include <QApplication>

// This file should stay unmodified

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Window w;
    // Show window
    w.show();
    // Enter into event loop
    return a.exec();
}
