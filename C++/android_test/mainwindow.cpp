#include "mainwindow.h"
#include <QLabel>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    new QLabel("hello wanyicheng",this);
}

MainWindow::~MainWindow()
{
}

