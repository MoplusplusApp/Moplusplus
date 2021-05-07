#ifndef MOPLUSPLUSMAIN_H
#define MOPLUSPLUSMAIN_H

#include <QMainWindow>
#include "ui_moplusplusmain.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MoPlusPlusMain; }
QT_END_NAMESPACE

class MoPlusPlusMain : public QMainWindow
{
    Q_OBJECT

public:
    MoPlusPlusMain(QWidget *parent = nullptr);
    ~MoPlusPlusMain();

private:
    Ui::MoPlusPlusMain *ui;
};

#endif // MOPLUSPLUSMAIN_H
