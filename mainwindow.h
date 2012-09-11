#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include "movingpushbutton.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    virtual void mouseDoubleClickEvent(QMouseEvent *);

public slots:
    void foo();

private:
    Ui::MainWindow *ui;
    QPushButton *myButton;
    MovingPushButton *myMovingButton;
};

#endif // MAINWINDOW_H
