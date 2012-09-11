#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMouseEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->myButton = new QPushButton("toca", this);
    this->myButton->move(this->width()/2,this->height()/2);
    QObject::connect(myButton,SIGNAL(clicked()),this,SLOT(foo()));

    this->myMovingButton = new MovingPushButton("me muevo", this );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mouseDoubleClickEvent(QMouseEvent *event) {
    qDebug() << "dinosaurio";
    qDebug() << event->button();
}

void MainWindow::foo() {
    qDebug() << "foo!!!";
}
