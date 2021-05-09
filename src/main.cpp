#include "moplusplusmain.h"
#include "ui_moplusplusmain.h"

#include <QApplication>
#include <QStyleFactory>

// This file should stay unmodified

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MoPlusPlusMain win;
    // Set default style to Fusion
    qApp->setStyle(QStyleFactory::create("Fusion"));
    // Show window
    win.show();
    // Enter into event loop
    return app.exec();
}
