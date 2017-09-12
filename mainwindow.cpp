#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtGui>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Create button
    //connectButton = new QPushButton("Connect",this);
    //trainButton = new QPushButton("Training",this);
    //playButton = new QPushButton("Play",this);

    //Connect button
    //connect(connectButton, SIGNAL(released()),this, SLOT(handleButton()));

}



MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_playButton_clicked()
{
    ui->playButton->setText("Tes");
}

void MainWindow::on_trainButton_clicked()
{

}

void MainWindow::on_connectButton_clicked(bool checked)
{
    bool check1 = checked;
    if(check1)
       ui->connectButton->setText("Disconnect");
    else
        ui->connectButton->setText("Connect");

}
