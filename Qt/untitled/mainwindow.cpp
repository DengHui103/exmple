#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    while(1)
    {
        cout<<0;
    }
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
