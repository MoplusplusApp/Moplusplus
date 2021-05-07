#include "moplusplusmain.h"
#include "ui_moplusplusmain.h"

#include <QApplication>
#include <QStyleFactory>

// This file should stay unmodified

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MoPlusPlusMain win;
    // Set default style to Lightly
    // qApp->setStyle(QStyleFactory::create("Lightly"));
    // Show window
    win.show();
    // Enter into event loop
    return app.exec();
}
