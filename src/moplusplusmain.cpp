#include "moplusplusmain.h"
#include "ui_moplusplusmain.h"

#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QFont>
#include <QTextBrowser>
#include <QLabel>


MoPlusPlusMain::MoPlusPlusMain(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MoPlusPlusMain)
{

    ui->setupUi(this);

    // Set the window title and description
    setWindowTitle("Mo++ Editor");

    // Set minimum window size
    setMinimumSize(900, 650);

    // Remaining lines are commented out as they were for a previous stage of UI prototyping

//    // Create menu bar
//    QMenuBar * menuBar = new QMenuBar(this);

//    // -- File menu items --
//    menuBar->addMenu("&File");
//    fileMenu->addAction(newAct);
//    fileMenu->addAction(openAct);
//    fileMenu->addAction(saveAct);

//    // -- Edit menu items --
//    menuBar->addMenu("&Edit");

//    // -- View menu items --
//    menuBar->addMenu("&View");

//    // -- Tools menu items --
//    menuBar->addMenu("&Tools");

//    // -- Help menu items --
//    menuBar->addMenu("&Help");

    // Set preferred size of 1280 x 720
    // resize(1280, 720);

    // Set global font
    // QFont font ("Inter Medium");
    // font.setPointSize(10);
    // font.setBold(false);
    // font.setItalic(false);
    // qApp -> setFont(font);

    // Set custom stylesheet (optional), located at ./theme/style.qss
    // QFile f(":style.qss");
    // f.open(QFile::ReadOnly | QFile::Text);
    // QTextStream ts(&f);
    // qApp -> setStyleSheet(ts.readAll());


    // Create main layout

    // Central Widget is a QTextbrowser for now, will change to a custom canvas based on VecFX later
    // QTextBrowser *centralWidget = new QTextBrowser;
    // centralWidget->setPlainText(tr("Canvas Area"));

    // BorderLayout *layout = new BorderLayout;
    // layout->addWidget(centralWidget, BorderLayout::Center);
    // layout->addWidget(createLabel("Menu Bar"), BorderLayout::North);
    // layout->addWidget(createLabel("Left Sidebar"), BorderLayout::West);
    // layout->addWidget(createLabel("Right Properties Panel"), BorderLayout::East);
    // setLayout(layout);
};

MoPlusPlusMain::~MoPlusPlusMain()
{
    delete ui;
}


