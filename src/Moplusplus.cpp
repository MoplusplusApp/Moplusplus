#include <iostream>
#include "Moppwindow.h"

#include <QApplication>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QFontDatabase>
#include <QStyleFactory>
#include <QColor>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Set stylesheet, located at ./theme/style.qss
    QFile f(":style.qss");

    if (!f.exists())   {
        printf("Unable to set stylesheet, style.qss not found\n");
    }
    else   {
        f.open(QFile::ReadOnly | QFile::Text);
        QTextStream ts(&f);
        qApp->setStyleSheet(ts.readAll());
    }

    // TODO: Allow user to pick and choose custom stylesheet

    MainWindow w;

    // Set to Fusion style by default
    // This helps deal with Kwantum conflicts on Linux distros with system Qt
    qApp->setStyle(QStyleFactory::create("Fusion"));

    // Add in Inter font via QFontDatabase
    QFontDatabase::addApplicationFont(":/resource/inter-font/Inter-Medium.otf");
    QFont interMedFont("Inter Medium", 11); // << this name is the family name of the font, not the file name
    qApp->setFont(interMedFont);


    QPalette onedarkPalette;
        // Main frame background color
        onedarkPalette.setColor(QPalette::Window, QColor(33,37,43));
        onedarkPalette.setColor(QPalette::Base, QColor(33,37,43));
        // Primary Text Color
        onedarkPalette.setColor(QPalette::WindowText, Qt::white);

        onedarkPalette.setColor(QPalette::AlternateBase, QColor(53,53,53));
        onedarkPalette.setColor(QPalette::ToolTipBase, Qt::white);
        onedarkPalette.setColor(QPalette::ToolTipText, Qt::white);
        onedarkPalette.setColor(QPalette::Text, Qt::white);
        onedarkPalette.setColor(QPalette::Button, QColor(53,53,53));
        onedarkPalette.setColor(QPalette::ButtonText, Qt::white);
        onedarkPalette.setColor(QPalette::BrightText, Qt::red);
        onedarkPalette.setColor(QPalette::Link, QColor(42, 130, 218));

        onedarkPalette.setColor(QPalette::Highlight, QColor(42, 130, 218));
        onedarkPalette.setColor(QPalette::HighlightedText, Qt::black);
     qApp->setPalette(onedarkPalette);



    // Set our custom colors to be used in the application

    // Set the Window title
    w.setWindowTitle(QString("Mo++ Editor"));
    // Render the window
    w.show();
    // Enter into event loop
    return a.exec();
}
