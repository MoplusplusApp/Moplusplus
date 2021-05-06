#ifndef MOPLUSPLUSMAIN_H
#define MOPLUSPLUSMAIN_H

#include <QWidget>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
class QLabel;
QT_END_NAMESPACE

class Window : public QWidget
{
    Q_OBJECT

public:
    Window();

private:
    QLabel *createLabel(const QString &text);
};

#endif // MOPLUSPLUSMAIN_H
